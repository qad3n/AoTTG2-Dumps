// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontStyleStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200009B")]
public struct TMP_FontStyleStack
{
	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x0")]
	public byte bold;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x1")]
	public byte italic;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x2")]
	public byte underline;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x3")]
	public byte strikethrough;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x4")]
	public byte highlight;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x5")]
	public byte superscript;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x6")]
	public byte subscript;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x7")]
	public byte uppercase;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x8")]
	public byte lowercase;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x9")]
	public byte smallcaps;

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x67589F0", Offset = "0x67579F0", VA = "0x67589F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x6758A00", Offset = "0x6757A00", VA = "0x6758A00")]
	public byte Add(FontStyles style)
	{
		return default(byte);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x6758AA0", Offset = "0x6757AA0", VA = "0x6758AA0")]
	public byte Remove(FontStyles style)
	{
		return default(byte);
	}
}
