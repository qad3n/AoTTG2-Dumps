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
		[Address(RVA = "0x60F61B0", Offset = "0x60F51B0", VA = "0x60F61B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F2")]
	public static XmlCharType Instance
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x60F5910", Offset = "0x60F4910", VA = "0x60F5910")]
		get
		{
			return default(XmlCharType);
		}
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x60F6250", Offset = "0x60F5250", VA = "0x60F6250")]
	private static void InitInstance()
	{
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x60F6510", Offset = "0x60F5510", VA = "0x60F6510")]
	private static void SetProperties(byte[] chProps, string ranges, byte value)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x60F6690", Offset = "0x60F5690", VA = "0x60F6690")]
	private XmlCharType(byte[] charProperties)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x60F66A0", Offset = "0x60F56A0", VA = "0x60F66A0")]
	public bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x60F58E0", Offset = "0x60F48E0", VA = "0x60F58E0")]
	public bool IsNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x60F5990", Offset = "0x60F4990", VA = "0x60F5990")]
	public bool IsStartNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x60F66D0", Offset = "0x60F56D0", VA = "0x60F66D0")]
	public bool IsNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x60F6710", Offset = "0x60F5710", VA = "0x60F6710")]
	public bool IsCharData(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x60F6740", Offset = "0x60F5740", VA = "0x60F6740")]
	public bool IsPubidChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x60F67A0", Offset = "0x60F57A0", VA = "0x60F67A0")]
	internal bool IsTextChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x60F67D0", Offset = "0x60F57D0", VA = "0x60F67D0")]
	public bool IsLetter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x60F6800", Offset = "0x60F5800", VA = "0x60F6800")]
	public bool IsNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x60F6830", Offset = "0x60F5830", VA = "0x60F6830")]
	public bool IsStartNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x60F6860", Offset = "0x60F5860", VA = "0x60F6860")]
	public bool IsNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x60F68A0", Offset = "0x60F58A0", VA = "0x60F68A0")]
	public static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x60F68C0", Offset = "0x60F58C0", VA = "0x60F68C0")]
	internal static bool IsHighSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x60F68D0", Offset = "0x60F58D0", VA = "0x60F68D0")]
	internal static bool IsLowSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x60F68E0", Offset = "0x60F58E0", VA = "0x60F68E0")]
	internal static bool IsSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x60F68F0", Offset = "0x60F58F0", VA = "0x60F68F0")]
	internal static int CombineSurrogateChar(int lowChar, int highChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x60F6910", Offset = "0x60F5910", VA = "0x60F6910")]
	internal static void SplitSurrogateChar(int combinedChar, out char lowChar, out char highChar)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x60F6950", Offset = "0x60F5950", VA = "0x60F6950")]
	internal bool IsOnlyWhitespace(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x60F69D0", Offset = "0x60F59D0", VA = "0x60F69D0")]
	internal int IsOnlyWhitespaceWithPos(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x60F6A50", Offset = "0x60F5A50", VA = "0x60F6A50")]
	internal int IsOnlyCharData(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x60F6B00", Offset = "0x60F5B00", VA = "0x60F6B00")]
	internal static bool IsOnlyDigits(string str, int startPos, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x60F6BA0", Offset = "0x60F5BA0", VA = "0x60F6BA0")]
	internal int IsPublicId(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x60F68B0", Offset = "0x60F58B0", VA = "0x60F68B0")]
	private static bool InRange(int value, int start, int end)
	{
		return default(bool);
	}
}
