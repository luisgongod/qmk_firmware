#Corne
MOUSEKEY_ENABLE = yes    # Mouse keys
RGBLIGHT_ENABLE = yes    # Enable WS2812 RGB underlight.
OLED_ENABLE     = no
OLED_DRIVER     = SSD1306
LTO_ENABLE      = yes

VPATH  +=  keyboards/gboards/
COMBO_ENABLE=yes
SEND_STRING_ENABLE = yes

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c