from controller import Robot, Motor  # 從 controller 模組導入 Robot 和 Motor 類別
 
TIME_STEP = 64  # 設置時間步長為 64 毫秒
 
# 創建 Robot 實例
robot = Robot()
 
# 擷取電機設備
leftMotor = robot.getDevice('left wheel motor')  # 獲取左側輪子電機設備
rightMotor = robot.getDevice('right wheel motor')  # 獲取右側輪子電機設備
 
# 設置電機的目標位置
leftMotor.setPosition(10.0)  # 設置左側輪子電機的目標位置為 10.0
rightMotor.setPosition(10.0)  # 設置右側輪子電機的目標位置為 10.0
 
while robot.step(TIME_STEP) != -1:  # 當機器人步進時間步長不等於 -1 時（模擬仍在運行）
    pass  # 什麼也不做，保持循環運行