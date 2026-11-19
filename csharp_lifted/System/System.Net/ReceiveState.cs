// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ReceiveState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200026E")]
internal class ReceiveState
{
	[Token(Token = "0x40008EF")]
	[FieldOffset(Offset = "0x10")]
	internal ResponseDescription Resp;

	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x18")]
	internal int ValidThrough;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0x20")]
	internal byte[] Buffer;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x28")]
	internal CommandStream Connection;

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x6297380", Offset = "0x6296380", VA = "0x6297380")]
	internal ReceiveState(CommandStream connection)
	{
	}
}
