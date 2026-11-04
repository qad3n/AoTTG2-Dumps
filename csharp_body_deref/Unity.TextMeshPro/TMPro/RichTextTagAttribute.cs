// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.RichTextTagAttribute
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x20000B2")]
internal struct RichTextTagAttribute
{
	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x0")]
	public int nameHashCode;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x4")]
	public int valueHashCode;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x8")]
	public TagValueType valueType;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0xC")]
	public int valueStartIndex;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x10")]
	public int valueLength;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x14")]
	public TagUnitType unitType;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RichTextTagAttribute k_Default;

	[Token(Token = "0x17000189")]
	public static RichTextTagAttribute Default
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x2D615F0", Offset = "0x2D5FBF0", VA = "0x182D615F0")]
		get
		{
			return default(RichTextTagAttribute);
		}
	}
}
