#include <gtest/gtest.h>
#include <vanetza/security/v3/secured_message.hpp>

using namespace vanetza;
using namespace vanetza::security;

TEST(SecuredMessageV3, deserialize)
{
    const ByteBuffer encoded_secured_msg = {
        0x03, 0x81, 0x00, 0x40, 0x03, 0x80, 0x56, 0x20, 0x50, 0x02, 0x80, 0x00,
        0x32, 0x01, 0x00, 0x14, 0x00, 0xd2, 0xfb, 0x6a, 0x0c, 0x62, 0xd2, 0xbf,
        0x6c, 0x54, 0x53, 0x1f, 0x44, 0xef, 0xf5, 0x06, 0x66, 0x36, 0x09, 0x84,
        0x6a, 0x06, 0xc8, 0x00, 0x00, 0xa0, 0x00, 0x07, 0xd1, 0x00, 0x00, 0x02,
        0x02, 0x6a, 0x0c, 0x62, 0xd2, 0x57, 0x41, 0x00, 0x5a, 0x9d, 0x3a, 0xbf,
        0x6e, 0x36, 0x01, 0x20, 0x22, 0x34, 0x23, 0x00, 0xfc, 0x35, 0x96, 0xd4,
        0x58, 0x69, 0x40, 0xe2, 0x4e, 0x03, 0x02, 0x96, 0x8a, 0x9b, 0x34, 0x3d,
        0x82, 0x09, 0x9e, 0x10, 0x41, 0xc0, 0x14, 0xb9, 0x80, 0x40, 0x01, 0x24,
        0x00, 0x01, 0xc8, 0x0b, 0xbf, 0x35, 0x4b, 0x4f, 0x80, 0x0b, 0xa2, 0xd2,
        0xfb, 0x6a, 0x0c, 0x62, 0xd2, 0x80, 0x82, 0xea, 0x71, 0xef, 0xf9, 0xc6,
        0xbb, 0x15, 0x7b, 0x8e, 0x16, 0x66, 0x44, 0x12, 0x0d, 0x7f, 0x98, 0xf2,
        0x52, 0x5e, 0x73, 0x8f, 0x6f, 0x41, 0xd7, 0xfd, 0xfa, 0xc7, 0xd0, 0xd8,
        0x8a, 0xa3, 0x9b, 0x10, 0x96, 0xfa, 0xb3, 0xfb, 0x2a, 0x0a, 0x92, 0x2a,
        0x3b, 0x5f, 0xeb, 0x91, 0xf9, 0xf5, 0x22, 0xd0, 0x06, 0x1f, 0x3b, 0x9c,
        0xa7, 0xa4, 0x6f, 0x7c, 0x7b, 0xd3, 0xef, 0x9d, 0x3a, 0x84, 0xbc
    };

    v3::SecuredMessage msg;
    EXPECT_TRUE(msg.decode(encoded_secured_msg));
    EXPECT_EQ(3, msg.protocol_version());
}
