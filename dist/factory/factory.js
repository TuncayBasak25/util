"use strict";
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
Object.defineProperty(exports, "__esModule", { value: true });
function Factory() {
    class Factory {
        constructor() {
            this.id = 0;
        }
        static create() {
            const instance = new this();
            instance.id = this.createCount++;
            instance.init();
            //@ts-ignore
            this.instanceList.push(instance);
            //@ts-ignore
            return instance;
        }
        static createList(amount = 0) {
            const instanceList = [];
            for (let i = 0; i < amount; i++)
                instanceList.push(this.create());
            return instanceList;
        }
        /**
         * Retrive the reference of this instance from static class array instanceList.
         */
        destroy() {
            this.constructor.instanceList.splice(this.constructor.instanceList.indexOf(this), 1);
        }
    }
    Factory.instanceList = [];
    Factory.createCount = 0;
    return Factory;
}
exports.default = Factory;
