// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_TextParsingUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200009E")]
public class TMP_TextParsingUtilities
{
	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_TextParsingUtilities s_Instance;

	[Token(Token = "0x40005DC")]
	private const string k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";

	[Token(Token = "0x40005DD")]
	private const string k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";

	[Token(Token = "0x1700016D")]
	public static TMP_TextParsingUtilities instance
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x4C953A0", Offset = "0x4C953A0", VA = "0x4C953A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4C95320", Offset = "0x4C95320", VA = "0x4C95320")]
	static TMP_TextParsingUtilities()
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4C90BB0", Offset = "0x4C90BB0", VA = "0x4C90BB0")]
	public static int GetHashCode(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4C906D0", Offset = "0x4C906D0", VA = "0x4C906D0")]
	public static int GetHashCodeCaseSensitive(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4C95460", Offset = "0x4C95460", VA = "0x4C95460")]
	public static char ToLowerASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4C95410", Offset = "0x4C95410", VA = "0x4C95410")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4C954B0", Offset = "0x4C954B0", VA = "0x4C954B0")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x4C95510", Offset = "0x4C95510", VA = "0x4C95510")]
	public static uint ToLowerASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x4C95570", Offset = "0x4C95570", VA = "0x4C95570")]
	public static bool IsHighSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4C95580", Offset = "0x4C95580", VA = "0x4C95580")]
	public static bool IsLowSurrogate(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4C95590", Offset = "0x4C95590", VA = "0x4C95590")]
	internal static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x4C95390", Offset = "0x4C95390", VA = "0x4C95390")]
	public TMP_TextParsingUtilities()
	{
	}
}
