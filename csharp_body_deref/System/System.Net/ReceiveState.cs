// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ReceiveState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x494E590", Offset = "0x494E590", VA = "0x494E590")]
	internal ReceiveState(CommandStream connection)
	{
	}
}
