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
		[Address(RVA = "0x44B5FC0", Offset = "0x44B5FC0", VA = "0x44B5FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F2")]
	public static XmlCharType Instance
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x44B5730", Offset = "0x44B5730", VA = "0x44B5730")]
		get
		{
			return default(XmlCharType);
		}
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x44B6060", Offset = "0x44B6060", VA = "0x44B6060")]
	private static void InitInstance()
	{
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x44B6380", Offset = "0x44B6380", VA = "0x44B6380")]
	private static void SetProperties(byte[] chProps, string ranges, byte value)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x44B6460", Offset = "0x44B6460", VA = "0x44B6460")]
	private XmlCharType(byte[] charProperties)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x44B6470", Offset = "0x44B6470", VA = "0x44B6470")]
	public bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x44B5700", Offset = "0x44B5700", VA = "0x44B5700")]
	public bool IsNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x44B57B0", Offset = "0x44B57B0", VA = "0x44B57B0")]
	public bool IsStartNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x44B64A0", Offset = "0x44B64A0", VA = "0x44B64A0")]
	public bool IsNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x44B64D0", Offset = "0x44B64D0", VA = "0x44B64D0")]
	public bool IsCharData(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x44B6500", Offset = "0x44B6500", VA = "0x44B6500")]
	public bool IsPubidChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x44B6560", Offset = "0x44B6560", VA = "0x44B6560")]
	internal bool IsTextChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x44B6590", Offset = "0x44B6590", VA = "0x44B6590")]
	public bool IsLetter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x44B65C0", Offset = "0x44B65C0", VA = "0x44B65C0")]
	public bool IsNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x44B65F0", Offset = "0x44B65F0", VA = "0x44B65F0")]
	public bool IsStartNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x44B6620", Offset = "0x44B6620", VA = "0x44B6620")]
	public bool IsNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x44B6650", Offset = "0x44B6650", VA = "0x44B6650")]
	public static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x44B6670", Offset = "0x44B6670", VA = "0x44B6670")]
	internal static bool IsHighSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x44B6680", Offset = "0x44B6680", VA = "0x44B6680")]
	internal static bool IsLowSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x44B6690", Offset = "0x44B6690", VA = "0x44B6690")]
	internal static bool IsSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x44B66A0", Offset = "0x44B66A0", VA = "0x44B66A0")]
	internal static int CombineSurrogateChar(int lowChar, int highChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x44B66C0", Offset = "0x44B66C0", VA = "0x44B66C0")]
	internal static void SplitSurrogateChar(int combinedChar, out char lowChar, out char highChar)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x44B6700", Offset = "0x44B6700", VA = "0x44B6700")]
	internal bool IsOnlyWhitespace(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x44B6780", Offset = "0x44B6780", VA = "0x44B6780")]
	internal int IsOnlyWhitespaceWithPos(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x44B6800", Offset = "0x44B6800", VA = "0x44B6800")]
	internal int IsOnlyCharData(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x44B68B0", Offset = "0x44B68B0", VA = "0x44B68B0")]
	internal static bool IsOnlyDigits(string str, int startPos, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x44B6910", Offset = "0x44B6910", VA = "0x44B6910")]
	internal int IsPublicId(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x44B6660", Offset = "0x44B6660", VA = "0x44B6660")]
	private static bool InRange(int value, int start, int end)
	{
		return default(bool);
	}
}
