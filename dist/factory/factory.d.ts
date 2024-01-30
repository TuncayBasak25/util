export default function Factory<T>(): {
    new (): {
        readonly id: 0;
        destroy(): void;
    };
    instanceList: T[];
    createCount: number;
    create(): T;
    createList(amount?: number): T[];
};
//# sourceMappingURL=factory.d.ts.map