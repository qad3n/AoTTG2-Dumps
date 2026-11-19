// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.LingerOption
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000342")]
public class LingerOption
{
	[Token(Token = "0x4000DE1")]
	[FieldOffset(Offset = "0x10")]
	private bool enabled;

	[Token(Token = "0x4000DE2")]
	[FieldOffset(Offset = "0x14")]
	private int lingerTime;

	[Token(Token = "0x17000511")]
	public bool Enabled
	{
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x61B7A30", Offset = "0x61B6A30", VA = "0x61B7A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000512")]
	public int LingerTime
	{
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x61B7A40", Offset = "0x61B6A40", VA = "0x61B7A40")]
		set
		{
		}
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x61B7A10", Offset = "0x61B6A10", VA = "0x61B7A10")]
	public LingerOption(bool enable, int seconds)
	{
	}
}
