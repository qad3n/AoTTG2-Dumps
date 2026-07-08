using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000125")]
internal class ReceiveState
{
	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x10")]
	internal ResponseDescription Resp;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x18")]
	internal int ValidThrough;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x20")]
	internal byte[] Buffer;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x28")]
	internal CommandStream Connection;

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x4629490", Offset = "0x4629490", VA = "0x4629490")]
	internal ReceiveState(CommandStream connection)
	{
	}
}
