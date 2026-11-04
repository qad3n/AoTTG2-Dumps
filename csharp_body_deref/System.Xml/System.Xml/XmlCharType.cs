// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlCharType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000CF")]
internal struct XmlCharType
{
	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x0")]
	private static object s_Lock;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] s_CharProperties;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x0")]
	internal byte[] charProperties;

	[Token(Token = "0x170002F1")]
	private static object StaticLock
	{
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x274C6A0", Offset = "0x274ACA0", VA = "0x18274C6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F2")]
	public static XmlCharType Instance
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x274C620", Offset = "0x274AC20", VA = "0x18274C620")]
		get
		{
			return default(XmlCharType);
		}
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x274B9A0", Offset = "0x2749FA0", VA = "0x18274B9A0")]
	private static void InitInstance()
	{
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x274C550", Offset = "0x274AB50", VA = "0x18274C550")]
	private static void SetProperties(byte[] chProps, string ranges, byte value)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	private XmlCharType(byte[] charProperties)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x274C510", Offset = "0x274AB10", VA = "0x18274C510")]
	public bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x274C040", Offset = "0x274A640", VA = "0x18274C040")]
	public bool IsNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x274C480", Offset = "0x274AA80", VA = "0x18274C480")]
	public bool IsStartNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x274C0C0", Offset = "0x274A6C0", VA = "0x18274C0C0")]
	public bool IsNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x274BF60", Offset = "0x274A560", VA = "0x18274BF60")]
	public bool IsCharData(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x274C340", Offset = "0x274A940", VA = "0x18274C340")]
	public bool IsPubidChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x274C4D0", Offset = "0x274AAD0", VA = "0x18274C4D0")]
	internal bool IsTextChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x274BFB0", Offset = "0x274A5B0", VA = "0x18274BFB0")]
	public bool IsLetter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x274C000", Offset = "0x274A600", VA = "0x18274C000")]
	public bool IsNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x274C440", Offset = "0x274AA40", VA = "0x18274C440")]
	public bool IsStartNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x274C080", Offset = "0x274A680", VA = "0x18274C080")]
	public bool IsNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x1B14530", Offset = "0x1B12B30", VA = "0x181B14530")]
	public static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x274BFA0", Offset = "0x274A5A0", VA = "0x18274BFA0")]
	internal static bool IsHighSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x274BFF0", Offset = "0x274A5F0", VA = "0x18274BFF0")]
	internal static bool IsLowSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x274C4C0", Offset = "0x274AAC0", VA = "0x18274C4C0")]
	internal static bool IsSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x274B980", Offset = "0x2749F80", VA = "0x18274B980")]
	internal static int CombineSurrogateChar(int lowChar, int highChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x274C5E0", Offset = "0x274ABE0", VA = "0x18274C5E0")]
	internal static void SplitSurrogateChar(int combinedChar, out char lowChar, out char highChar)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x274C2C0", Offset = "0x274A8C0", VA = "0x18274C2C0")]
	internal bool IsOnlyWhitespace(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x274C240", Offset = "0x274A840", VA = "0x18274C240")]
	internal int IsOnlyWhitespaceWithPos(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x274C100", Offset = "0x274A700", VA = "0x18274C100")]
	internal int IsOnlyCharData(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x274C1C0", Offset = "0x274A7C0", VA = "0x18274C1C0")]
	internal static bool IsOnlyDigits(string str, int startPos, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x274C3C0", Offset = "0x274A9C0", VA = "0x18274C3C0")]
	internal int IsPublicId(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x198A320", Offset = "0x1988920", VA = "0x18198A320")]
	private static bool InRange(int value, int start, int end)
	{
		return default(bool);
	}
}
