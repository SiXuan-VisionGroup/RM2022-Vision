#ifndef _OPTIONS_H_
#define _OPTIONS_H_

// #ifdef PATH
//     #define PROJECT_DIR PATH
// #else
//     #define PROJECT_DIR ""
// #endif

extern bool show_armor_box;
extern bool show_origin;
extern bool run_with_camera;
extern bool debug_camera;
extern bool wait_uart;
extern bool show_info;
extern bool run_by_frame;
extern bool recv_close;      // 无下位机控制，默认关闭
extern bool armor_predictor; // 预测器
extern bool enemy_color_red; // 识别特定颜色，默认识别蓝色（false）
extern bool cemera_test;     // 外部相机测试，默认开启
extern bool sentry_mode;     // 哨兵自瞄模式，默认关闭

void processOptions(int argc, char **argv);

#endif /* _OPTIONS_H_ */
