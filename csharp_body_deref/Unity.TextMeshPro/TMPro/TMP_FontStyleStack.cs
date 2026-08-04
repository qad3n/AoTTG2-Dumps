// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontStyleStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200009F")]
public struct TMP_FontStyleStack
{
	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x0")]
	public byte bold;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x1")]
	public byte italic;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x2")]
	public byte underline;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x3")]
	public byte strikethrough;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x4")]
	public byte highlight;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x5")]
	public byte superscript;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x6")]
	public byte subscript;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x7")]
	public byte uppercase;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x8")]
	public byte lowercase;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x9")]
	public byte smallcaps;

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4C955A0", Offset = "0x4C955A0", VA = "0x4C955A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4C955B0", Offset = "0x4C955B0", VA = "0x4C955B0")]
	public byte Add(FontStyles style)
	{
		return default(byte);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4C95650", Offset = "0x4C95650", VA = "0x4C95650")]
	public byte Remove(FontStyles style)
	{
		return default(byte);
	}
}
