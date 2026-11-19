// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.ValidateNames
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000CE")]
internal static class ValidateNames
{
	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x0")]
	private static XmlCharType xmlCharType;

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x60F4F70", Offset = "0x60F3F70", VA = "0x60F4F70")]
	internal static int ParseNmtoken(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x60F5020", Offset = "0x60F4020", VA = "0x60F5020")]
	internal static int ParseNmtokenNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x60F50F0", Offset = "0x60F40F0", VA = "0x60F50F0")]
	internal static int ParseNameNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x60F5220", Offset = "0x60F4220", VA = "0x60F5220")]
	internal static bool IsNameNoNamespaces(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x60F5290", Offset = "0x60F4290", VA = "0x60F5290")]
	internal static int ParseNCName(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x60F53A0", Offset = "0x60F43A0", VA = "0x60F53A0")]
	internal static int ParseNCName(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x60F5410", Offset = "0x60F4410", VA = "0x60F5410")]
	internal static int ParseQName(string s, int offset, out int colonOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x60F54D0", Offset = "0x60F44D0", VA = "0x60F54D0")]
	internal static void ParseQNameThrow(string s, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x60F55F0", Offset = "0x60F45F0", VA = "0x60F55F0")]
	internal static void ThrowInvalidName(string s, int offsetStartChar, int offsetBadChar)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x60F5AA0", Offset = "0x60F4AA0", VA = "0x60F5AA0")]
	internal static Exception GetInvalidNameException(string s, int offsetStartChar, int offsetBadChar)
	{
		return null;
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x60F5D30", Offset = "0x60F4D30", VA = "0x60F5D30")]
	internal static void SplitQName(string name, out string prefix, out string lname)
	{
	}
}
