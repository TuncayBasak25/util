"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Factory = void 0;
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
            destroy() {
                this.constructor.instanceList.splice(this.constructor.instanceList.indexOf(this), 1);
            }
        },
        _a.instanceList = [],
        _a.createCount = 0,
        _a;
}
exports.Factory = Factory;
