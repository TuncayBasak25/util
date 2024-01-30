/**
 * Returns an abstract class that will add methods to manage instantiation and access to your class instances.
 * Your instance will inherit the destroy method that will retrive the reference from the instance array so
 * it would be deleted by the garbage collector as you make sure that there is no other refence to it.
 *
 * Your class has to implement init for what you wish to do at instantiation time as you will not use the constructor.
 * @example
 * class Foo extends Factory<Foo>() {
 *      async init() {}
 * }
 *
 *
 *
 * The returned class:
 * @example
 * abstract class Factory<T> {
    static instanceList: T[] = [];
    static createCount: number = 0;

    static create(): T {
        const instance = new T();

        instance.id = this.createCount++;
        instance.init();
        this.instanceList.push(instance);

        return instance;
    }

    static createList(amount = 0): T[] {
        const instanceList: T[] = [];

        for (let i = 0; i < amount; i++) instanceList.push(this.create());

        return instanceList;
    }

    readonly id = 0;

    abstract init(): void | Promise<void>;

    destroy(): void {
        this.constructor.instanceList.splice(this.constructor.instanceList.indexOf(this), 1);
    }

}
 */
export default function Factory<T>(): (abstract new () => {
    readonly id: 0;
    /**
     * Will be called automatically with the static create method of the class after the attribution of the instance ID.
     */
    init(): void | Promise<void>;
    /**
     * Retrive the reference of this instance from static class array instanceList.
     */
    destroy(): void;
}) & {
    instanceList: T[];
    createCount: number;
    create(): T;
    createList(amount?: number): T[];
};
//# sourceMappingURL=factory.d.ts.map