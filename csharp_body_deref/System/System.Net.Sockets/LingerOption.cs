// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.LingerOption
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001F9")]
public class LingerOption
{
	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x10")]
	private bool enabled;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x14")]
	private int lingerTime;

	[Token(Token = "0x170002EA")]
	public bool Enabled
	{
		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x49B77F0", Offset = "0x49B77F0", VA = "0x49B77F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002EB")]
	public int LingerTime
	{
		[Token(Token = "0x6000CCC")]
		[Address(RVA = "0x49B7800", Offset = "0x49B7800", VA = "0x49B7800")]
		set
		{
		}
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x49B77D0", Offset = "0x49B77D0", VA = "0x49B77D0")]
	public LingerOption(bool enable, int seconds)
	{
	}
}
