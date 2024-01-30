"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function Factory() {
    var _a;
    return _a = class Constructable {
            constructor() {
                this.id = 0;
            }
            static create() {
                const instance = new this();
                instance.id = this.createCount++;
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
            destroy() {
                this.constructor.instanceList.splice(this.constructor.instanceList.indexOf(this), 1);
            }
        },
        _a.instanceList = [],
        _a.createCount = 0,
        _a;
}
exports.default = Factory;
