using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000CE")]
internal static class ValidateNames
{
	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x0")]
	private static XmlCharType xmlCharType;

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x44B4D70", Offset = "0x44B4D70", VA = "0x44B4D70")]
	internal static int ParseNmtoken(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x44B4E20", Offset = "0x44B4E20", VA = "0x44B4E20")]
	internal static int ParseNmtokenNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x44B4F00", Offset = "0x44B4F00", VA = "0x44B4F00")]
	internal static int ParseNameNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x44B5040", Offset = "0x44B5040", VA = "0x44B5040")]
	internal static bool IsNameNoNamespaces(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x44B50B0", Offset = "0x44B50B0", VA = "0x44B50B0")]
	internal static int ParseNCName(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x44B51C0", Offset = "0x44B51C0", VA = "0x44B51C0")]
	internal static int ParseNCName(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x44B5230", Offset = "0x44B5230", VA = "0x44B5230")]
	internal static int ParseQName(string s, int offset, out int colonOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x44B5300", Offset = "0x44B5300", VA = "0x44B5300")]
	internal static void ParseQNameThrow(string s, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x44B5410", Offset = "0x44B5410", VA = "0x44B5410")]
	internal static void ThrowInvalidName(string s, int offsetStartChar, int offsetBadChar)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x44B58C0", Offset = "0x44B58C0", VA = "0x44B58C0")]
	internal static Exception GetInvalidNameException(string s, int offsetStartChar, int offsetBadChar)
	{
		return null;
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x44B5B50", Offset = "0x44B5B50", VA = "0x44B5B50")]
	internal static void SplitQName(string name, out string prefix, out string lname)
	{
	}
}
