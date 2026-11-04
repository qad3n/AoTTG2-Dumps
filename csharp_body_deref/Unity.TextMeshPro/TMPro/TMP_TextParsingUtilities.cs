// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextParsingUtilities
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000095")]
public class TMP_TextParsingUtilities
{
	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_TextParsingUtilities s_Instance;

	[Token(Token = "0x4000557")]
	private const string k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";

	[Token(Token = "0x4000558")]
	private const string k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x8")]
	private static readonly HashSet<uint> k_EmojiLookup;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<uint> k_EmojiPresentationFormLookup;

	[Token(Token = "0x17000173")]
	public static TMP_TextParsingUtilities instance
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x2D479B0", Offset = "0x2D45FB0", VA = "0x182D479B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x2D26800", Offset = "0x2D24E00", VA = "0x182D26800")]
	static TMP_TextParsingUtilities()
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x2D47330", Offset = "0x2D45930", VA = "0x182D47330")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x2D472D0", Offset = "0x2D458D0", VA = "0x182D472D0")]
	public static int GetHashCodeCaseSensitive(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x2D47830", Offset = "0x2D45E30", VA = "0x182D47830")]
	public static char ToLowerASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x2D47950", Offset = "0x2D45F50", VA = "0x182D47950")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x2D478F0", Offset = "0x2D45EF0", VA = "0x182D478F0")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x2D47890", Offset = "0x2D45E90", VA = "0x182D47890")]
	public static uint ToLowerASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x2D477C0", Offset = "0x2D45DC0", VA = "0x182D477C0")]
	public static bool IsHighSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x2D47810", Offset = "0x2D45E10", VA = "0x182D47810")]
	public static bool IsLowSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x2D472C0", Offset = "0x2D458C0", VA = "0x182D472C0")]
	internal static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x2D47610", Offset = "0x2D45C10", VA = "0x182D47610")]
	internal static bool IsDiacriticalMark(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x2D47410", Offset = "0x2D45A10", VA = "0x182D47410")]
	internal static bool IsBaseGlyph(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x2D477E0", Offset = "0x2D45DE0", VA = "0x182D477E0")]
	internal static bool IsIgnorableForLigature(uint cp)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x2D476E0", Offset = "0x2D45CE0", VA = "0x182D476E0")]
	internal static bool IsEmoji(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x2D47660", Offset = "0x2D45C60", VA = "0x182D47660")]
	internal static bool IsEmojiPresentationForm(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x2D47760", Offset = "0x2D45D60", VA = "0x182D47760")]
	internal static bool IsHangul(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x2D47530", Offset = "0x2D45B30", VA = "0x182D47530")]
	internal static bool IsCJK(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TMP_TextParsingUtilities()
	{
	}
}
