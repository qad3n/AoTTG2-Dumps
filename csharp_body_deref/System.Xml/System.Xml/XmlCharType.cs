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
		[Address(RVA = "0x47F3720", Offset = "0x47F3720", VA = "0x47F3720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F2")]
	public static XmlCharType Instance
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x47F2E90", Offset = "0x47F2E90", VA = "0x47F2E90")]
		get
		{
			return default(XmlCharType);
		}
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x47F37C0", Offset = "0x47F37C0", VA = "0x47F37C0")]
	private static void InitInstance()
	{
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x47F3AE0", Offset = "0x47F3AE0", VA = "0x47F3AE0")]
	private static void SetProperties(byte[] chProps, string ranges, byte value)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x47F3BC0", Offset = "0x47F3BC0", VA = "0x47F3BC0")]
	private XmlCharType(byte[] charProperties)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x47F3BD0", Offset = "0x47F3BD0", VA = "0x47F3BD0")]
	public bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x47F2E60", Offset = "0x47F2E60", VA = "0x47F2E60")]
	public bool IsNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x47F2F10", Offset = "0x47F2F10", VA = "0x47F2F10")]
	public bool IsStartNCNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x47F3C00", Offset = "0x47F3C00", VA = "0x47F3C00")]
	public bool IsNameSingleChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x47F3C30", Offset = "0x47F3C30", VA = "0x47F3C30")]
	public bool IsCharData(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x47F3C60", Offset = "0x47F3C60", VA = "0x47F3C60")]
	public bool IsPubidChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x47F3CC0", Offset = "0x47F3CC0", VA = "0x47F3CC0")]
	internal bool IsTextChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x47F3CF0", Offset = "0x47F3CF0", VA = "0x47F3CF0")]
	public bool IsLetter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x47F3D20", Offset = "0x47F3D20", VA = "0x47F3D20")]
	public bool IsNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x47F3D50", Offset = "0x47F3D50", VA = "0x47F3D50")]
	public bool IsStartNCNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x47F3D80", Offset = "0x47F3D80", VA = "0x47F3D80")]
	public bool IsNameCharXml4e(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x47F3DB0", Offset = "0x47F3DB0", VA = "0x47F3DB0")]
	public static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x47F3DD0", Offset = "0x47F3DD0", VA = "0x47F3DD0")]
	internal static bool IsHighSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x47F3DE0", Offset = "0x47F3DE0", VA = "0x47F3DE0")]
	internal static bool IsLowSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x47F3DF0", Offset = "0x47F3DF0", VA = "0x47F3DF0")]
	internal static bool IsSurrogate(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x47F3E00", Offset = "0x47F3E00", VA = "0x47F3E00")]
	internal static int CombineSurrogateChar(int lowChar, int highChar)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x47F3E20", Offset = "0x47F3E20", VA = "0x47F3E20")]
	internal static void SplitSurrogateChar(int combinedChar, out char lowChar, out char highChar)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x47F3E60", Offset = "0x47F3E60", VA = "0x47F3E60")]
	internal bool IsOnlyWhitespace(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x47F3EE0", Offset = "0x47F3EE0", VA = "0x47F3EE0")]
	internal int IsOnlyWhitespaceWithPos(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x47F3F60", Offset = "0x47F3F60", VA = "0x47F3F60")]
	internal int IsOnlyCharData(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x47F4010", Offset = "0x47F4010", VA = "0x47F4010")]
	internal static bool IsOnlyDigits(string str, int startPos, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x47F4070", Offset = "0x47F4070", VA = "0x47F4070")]
	internal int IsPublicId(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x47F3DC0", Offset = "0x47F3DC0", VA = "0x47F3DC0")]
	private static bool InRange(int value, int start, int end)
	{
		return default(bool);
	}
}
