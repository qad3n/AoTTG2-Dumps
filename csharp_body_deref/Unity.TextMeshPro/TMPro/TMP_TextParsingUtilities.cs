using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000088")]
public class TMP_TextParsingUtilities
{
	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_TextParsingUtilities s_Instance;

	[Token(Token = "0x40004E8")]
	private const string k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";

	[Token(Token = "0x40004E9")]
	private const string k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";

	[Token(Token = "0x1700014C")]
	public static TMP_TextParsingUtilities instance
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x4947E20", Offset = "0x4947E20", VA = "0x4947E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4947DA0", Offset = "0x4947DA0", VA = "0x4947DA0")]
	static TMP_TextParsingUtilities()
	{
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x4943630", Offset = "0x4943630", VA = "0x4943630")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4943150", Offset = "0x4943150", VA = "0x4943150")]
	public static int GetHashCodeCaseSensitive(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4947EE0", Offset = "0x4947EE0", VA = "0x4947EE0")]
	public static char ToLowerASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4947E90", Offset = "0x4947E90", VA = "0x4947E90")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4947F30", Offset = "0x4947F30", VA = "0x4947F30")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4947F90", Offset = "0x4947F90", VA = "0x4947F90")]
	public static uint ToLowerASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4947FF0", Offset = "0x4947FF0", VA = "0x4947FF0")]
	public static bool IsHighSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4948000", Offset = "0x4948000", VA = "0x4948000")]
	public static bool IsLowSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4948010", Offset = "0x4948010", VA = "0x4948010")]
	internal static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4947E10", Offset = "0x4947E10", VA = "0x4947E10")]
	public TMP_TextParsingUtilities()
	{
	}
}
