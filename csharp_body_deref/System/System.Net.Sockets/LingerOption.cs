// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.LingerOption
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000386")]
public class LingerOption
{
	[Token(Token = "0x4000EC9")]
	[FieldOffset(Offset = "0x10")]
	private bool enabled;

	[Token(Token = "0x4000ECA")]
	[FieldOffset(Offset = "0x14")]
	private int lingerTime;

	[Token(Token = "0x1700053E")]
	public bool Enabled
	{
		[Token(Token = "0x6001887")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700053F")]
	public int LingerTime
	{
		[Token(Token = "0x6001888")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x6001886")]
	[Address(RVA = "0x2812650", Offset = "0x2810C50", VA = "0x182812650")]
	public LingerOption(bool enable, int seconds)
	{
	}
}
