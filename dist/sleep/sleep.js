"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class sleep {
    static ms(time) {
        return this.sleep(time);
    }
    static second(time) {
        return this.sleep(time * 1000);
    }
    static minute(time) {
        return this.sleep(time * 60000);
    }
    static hour(time) {
        return this.sleep(time * 60000 * 60);
    }
    static day(time) {
        return this.sleep(time * 60000 * 60 * 24);
    }
    static sleep(time) {
        return new Promise((res, rej) => setTimeout(() => res(), time));
    }
}
exports.default = sleep;
