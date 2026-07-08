using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x2000039")]
internal class NormalizationTableUtil
{
	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Mono.Globalization.Unicode.CodePointIndexer Prop;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Mono.Globalization.Unicode.CodePointIndexer Map;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Mono.Globalization.Unicode.CodePointIndexer Combining;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Mono.Globalization.Unicode.CodePointIndexer Composite;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x20")]
	public static readonly Mono.Globalization.Unicode.CodePointIndexer Helper;

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4DEE4D0", Offset = "0x4DEE4D0", VA = "0x4DEE4D0")]
	static NormalizationTableUtil()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4DEE860", Offset = "0x4DEE860", VA = "0x4DEE860")]
	public static int PropIdx(int cp)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4DEE930", Offset = "0x4DEE930", VA = "0x4DEE930")]
	public static int MapIdx(int cp)
	{
		return default(int);
	}
}
