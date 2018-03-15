#ifndef XBEE_HP
#define XBEE_HP

#include <cstdint>
#include <string>
#include <array>
/*
#include <typeinfo>
#include <type_traits>
*/

namespace XBEE {
  const uint8_t kMaxChecksum = 0xFF;

  enum class HexFormat {
    NO_SPACING,
    DATA_SPACING,
    BYTE_SPACING
  };

  enum class BroadcastType_64 : uint64_t {
      RESERVE_COORDINATOR = 0x0000000000000000,
      ALL_ROUTERS = 0x000000000000FFFF,
      UNKNOWN = 0xFFFFFFFFFFFFFFFF
  };

  enum class BroadcastType_16 : uint16_t {
      ALL_ROUTERS = 0xFFFC,
      NON_SLEEPY = 0xFFFD,
      DEFAULT = 0xFFFE,
      ALL_SLEEPY = 0xFFFF
  };

  enum class FrameType : uint16_t {
    TX_TRANSMIT_REQUEST_64 = 0x00,
    TX_TRANSMIT_REQUEST_16 = 0x01,
    REMOTE_AT_COMMAND_WIFI = 0x07,
    AT_COMMAND = 0x08,
    AT_COMMAND_QUEUE = 0x09,
    TRANSMIT_REQUEST = 0x10,
    EXPLICIT_ADDR_COMMAND_FRAME = 0x11,
    TX_METAFRAME = 0x16,
    REMOTE_AT_COMMAND = 0x17,
    TX_IPV4 = 0x20,
    CREATE_SRC_ROUTE = 0x21,
    REGISTER_JOINING_DEVICE = 0x24,
    PUT_REQUEST = 0x28,
    DEVICE_RESPONSE = 0x2A,
    RX_PACKET_64 = 0x80,
    RX_PACKET_16 = 0x81,
    RX_PACKET_64_IO = 0x82,
    RX_PACKET_16_IO = 0x83,
    REMOTE_AT_COMMAND_RESPONSE_WIFI = 0x87,
    AT_COMMAND_RESPONSE = 0x88,
    TX_TRANSMIT_STATUS = 0x89,
    MODEM_STATUS = 0x8A,
    TRANSMIT_STATUS = 0x8B,
    ROUTE_INFORMATION_PACKET = 0x8D,
    AGGREGATE_ADDR_UPDATE = 0x8F,
    RECEIVE_PACKET = 0x90,
    RX_EXPLICIT = 0x91,
    RX_DATA_SAMPLE_IO = 0x92,
    XBEE_SENSOR_READ = 0x94,
    NODE_IDENTIFICATION = 0x95,
    REMOTE_AT_COMMAND_RESPONSE = 0x97,
    EXTENDED_MODEM_STATUS = 0x98,
    OTA_FIRMWARE_UPDATE_STATUS = 0xA0,
    ROUTE_RECORD = 0xA1,
    DEVICE_AUTHENTICATED = 0xA2,
    MANY_TO_ONE_ROUTE_REQUEST = 0xA3,
    REGISTER_JOINING_DEVICE_STATUS = 0xA4,
    JOIN_NOTIFICATION_STATUS = 0xA5,
    RX_METAFRAME = 0xA6,
    RX_IPV4 = 0xB0,
    PUT_RESPONSE = 0xB8,
    DEVICE_REQUEST = 0xB9,
    DEVICE_RESPONSE_REQUEST = 0xBA,
    FRAME_ERROR = 0xFE,
    GENERIC = 0xFF
  };
}
#endif