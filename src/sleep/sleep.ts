
export default class sleep {
    static ms(time: number) {
        return this.sleep(time);
    }

    static second(time: number) {
        return this.sleep(time * 1000);
    }

    static minute(time: number) {
        return this.sleep(time * 60000);
    }

    static hour(time: number) {
        return this.sleep(time * 60000 * 60);
    }

    static day(time: number) {
        return this.sleep(time * 60000 * 60 * 24);
    }

    private static sleep(time: number) {
        return new Promise<void>((res, rej) => setTimeout(() => res(), time));
    }
}

