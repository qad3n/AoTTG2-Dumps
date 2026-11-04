// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CharUnicodeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000568")]
public static class CharUnicodeInfo
{
	[Token(Token = "0x170005CC")]
	private static ReadOnlySpan<byte> CategoryLevel1Index
	{
		[Token(Token = "0x6002874")]
		[Address(RVA = "0x1A59A60", Offset = "0x1A58060", VA = "0x181A59A60")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x170005CD")]
	private static ReadOnlySpan<byte> CategoryLevel2Index
	{
		[Token(Token = "0x6002875")]
		[Address(RVA = "0x1A59AB0", Offset = "0x1A580B0", VA = "0x181A59AB0")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x170005CE")]
	private static ReadOnlySpan<byte> CategoryLevel3Index
	{
		[Token(Token = "0x6002876")]
		[Address(RVA = "0x1A59B00", Offset = "0x1A58100", VA = "0x181A59B00")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x170005CF")]
	private static ReadOnlySpan<byte> CategoriesValue
	{
		[Token(Token = "0x6002877")]
		[Address(RVA = "0x1A59A10", Offset = "0x1A58010", VA = "0x181A59A10")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x6002869")]
	[Address(RVA = "0x1A59480", Offset = "0x1A57A80", VA = "0x181A59480")]
	internal static int InternalConvertToUtf32(string s, int index)
	{
		return default(int);
	}

	[Token(Token = "0x600286A")]
	[Address(RVA = "0x1A59520", Offset = "0x1A57B20", VA = "0x181A59520")]
	internal static int InternalConvertToUtf32(string s, int index, out int charLength)
	{
		return default(int);
	}

	[Token(Token = "0x600286B")]
	[Address(RVA = "0x1A59470", Offset = "0x1A57A70", VA = "0x181A59470")]
	public static UnicodeCategory GetUnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600286C")]
	[Address(RVA = "0x1A59340", Offset = "0x1A57940", VA = "0x181A59340")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600286D")]
	[Address(RVA = "0x1A591E0", Offset = "0x1A577E0", VA = "0x181A591E0")]
	public static UnicodeCategory GetUnicodeCategory(int codePoint)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600286E")]
	[Address(RVA = "0x1A595D0", Offset = "0x1A57BD0", VA = "0x181A595D0")]
	internal static byte InternalGetCategoryValue(int ch, int offset)
	{
		return default(byte);
	}

	[Token(Token = "0x600286F")]
	[Address(RVA = "0x1A59740", Offset = "0x1A57D40", VA = "0x181A59740")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string value, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002870")]
	[Address(RVA = "0x1A597E0", Offset = "0x1A57DE0", VA = "0x181A597E0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string str, int index, out int charLength)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002871")]
	[Address(RVA = "0x1A59890", Offset = "0x1A57E90", VA = "0x181A59890")]
	internal static bool IsCombiningCategory(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002872")]
	[Address(RVA = "0x1A598D0", Offset = "0x1A57ED0", VA = "0x181A598D0")]
	internal static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002873")]
	[Address(RVA = "0x1A598B0", Offset = "0x1A57EB0", VA = "0x181A598B0")]
	internal static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}
}
