// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextParsingUtilities
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6741880", Offset = "0x6740880", VA = "0x6741880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x6722AE0", Offset = "0x6721AE0", VA = "0x6722AE0")]
	static TMP_TextParsingUtilities()
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x673D120", Offset = "0x673C120", VA = "0x673D120")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x6741940", Offset = "0x6740940", VA = "0x6741940")]
	public static int GetHashCodeCaseSensitive(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x6741990", Offset = "0x6740990", VA = "0x6741990")]
	public static char ToLowerASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x67418F0", Offset = "0x67408F0", VA = "0x67418F0")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x67419E0", Offset = "0x67409E0", VA = "0x67419E0")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x6741A40", Offset = "0x6740A40", VA = "0x6741A40")]
	public static uint ToLowerASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x6741AA0", Offset = "0x6740AA0", VA = "0x6741AA0")]
	public static bool IsHighSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x6741AB0", Offset = "0x6740AB0", VA = "0x6741AB0")]
	public static bool IsLowSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x6741AC0", Offset = "0x6740AC0", VA = "0x6741AC0")]
	internal static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x6741AD0", Offset = "0x6740AD0", VA = "0x6741AD0")]
	internal static bool IsDiacriticalMark(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x6741B10", Offset = "0x6740B10", VA = "0x6741B10")]
	internal static bool IsBaseGlyph(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x6741C10", Offset = "0x6740C10", VA = "0x6741C10")]
	internal static bool IsIgnorableForLigature(uint cp)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x6741C40", Offset = "0x6740C40", VA = "0x6741C40")]
	internal static bool IsEmoji(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x6741CE0", Offset = "0x6740CE0", VA = "0x6741CE0")]
	internal static bool IsEmojiPresentationForm(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x6741D80", Offset = "0x6740D80", VA = "0x6741D80")]
	internal static bool IsHangul(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x6741DD0", Offset = "0x6740DD0", VA = "0x6741DD0")]
	internal static bool IsCJK(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x6741EE0", Offset = "0x6740EE0", VA = "0x6741EE0")]
	public TMP_TextParsingUtilities()
	{
	}
}
