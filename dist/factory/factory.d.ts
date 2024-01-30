export declare function Factory<T>(): {
    new (): {
        readonly id: 0;
        destroy(): void;
    };
    instanceList: T[];
    createCount: number;
    create(): T;
};
//# sourceMappingURL=factory.d.ts.map