interface Factorable {
    readonly id: number;
}
declare class Factory<T extends Factorable> {
    readonly instanceList: T[];
    private count;
    Target: {
        new (): T;
    };
    constructor(Target: {
        new (): T;
    });
    create(): T;
    destroy(instance: T): void;
}
//# sourceMappingURL=save.d.ts.map