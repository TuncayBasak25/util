export default function Factory<T>() {
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

        static createList(amount = 0): T[] {
            const instanceList: T[] = [];

            for (let i=0; i<amount; i++) instanceList.push(this.create());

            return instanceList;
        }

        public readonly id = 0;

        public destroy(): void {
            (this.constructor as any).instanceList.splice((this.constructor as any).instanceList.indexOf(this), 1);
        }
    }
}
