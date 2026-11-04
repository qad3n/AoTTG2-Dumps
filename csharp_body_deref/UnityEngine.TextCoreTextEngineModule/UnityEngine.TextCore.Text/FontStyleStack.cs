// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontStyleStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200006B")]
internal struct FontStyleStack
{
	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x0")]
	public byte bold;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x1")]
	public byte italic;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x2")]
	public byte underline;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x3")]
	public byte strikethrough;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x4")]
	public byte highlight;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x5")]
	public byte superscript;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x6")]
	public byte subscript;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x7")]
	public byte uppercase;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x8")]
	public byte lowercase;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x9")]
	public byte smallcaps;

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2D61710", Offset = "0x2D5FD10", VA = "0x182D61710")]
	public void Clear()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2D61660", Offset = "0x2D5FC60", VA = "0x182D61660")]
	public byte Add(FontStyles style)
	{
		return default(byte);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x2D61720", Offset = "0x2D5FD20", VA = "0x182D61720")]
	public byte Remove(FontStyles style)
	{
		return default(byte);
	}
}
