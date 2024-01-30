export function Factory<T>() {
    return class Constructable {
        static instanceList: T[] = [];
        static createCount: number = 0;

        static create(): T {
            const instance =  new this();
            (instance as any).id = this.createCount++;
            
            //@ts-ignore
            this.instanceList.push(instance);
            
            //@ts-ignore
            return instance;
        }

        public readonly id = 0;

        public destroy(): void {
            (this.constructor as any).instanceList.splice((this.constructor as any).instanceList.indexOf(this), 1);
        }
    }
}
