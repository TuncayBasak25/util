interface Factorable {
    readonly id: number;
}

class Factory<T extends Factorable> {
    readonly instanceList: T[] = [];
    private count: number = 0;

    Target: { new(): T };

    constructor(Target: { new(): T }) {
        this.Target = Target;
    }

    create(): T {
        const instance = new this.Target();

        this.instanceList.push(instance);
        (instance as any).id = this.count++;

        return instance;
    };

    destroy(instance: T): void {
        this.instanceList.splice(this.instanceList.indexOf(instance), 1);
    }
}