using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000010")]
public enum EncryptionMode
{
	[Token(Token = "0x4000086")]
	PayloadEncryption = 0,
	[Token(Token = "0x4000087")]
	DatagramEncryption = 10,
	[Token(Token = "0x4000088")]
	DatagramEncryptionRandomSequence = 11,
	[Token(Token = "0x4000089")]
	DatagramEncryptionGCM = 13
}
