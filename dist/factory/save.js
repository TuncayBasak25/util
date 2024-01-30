"use strict";
class Factory {
    constructor(Target) {
        this.instanceList = [];
        this.count = 0;
        this.Target = Target;
    }
    create() {
        const instance = new this.Target();
        this.instanceList.push(instance);
        instance.id = this.count++;
        return instance;
    }
    ;
    destroy(instance) {
        this.instanceList.splice(this.instanceList.indexOf(instance), 1);
    }
}
