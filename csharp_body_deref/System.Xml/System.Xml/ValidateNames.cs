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
	[Address(RVA = "0x2747000", Offset = "0x2745600", VA = "0x182747000")]
	internal static int ParseNmtoken(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x2746F30", Offset = "0x2745530", VA = "0x182746F30")]
	internal static int ParseNmtokenNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x2746DE0", Offset = "0x27453E0", VA = "0x182746DE0")]
	internal static int ParseNameNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x2746C00", Offset = "0x2745200", VA = "0x182746C00")]
	internal static bool IsNameNoNamespaces(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x2746CC0", Offset = "0x27452C0", VA = "0x182746CC0")]
	internal static int ParseNCName(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x2746C70", Offset = "0x2745270", VA = "0x182746C70")]
	internal static int ParseNCName(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x2747250", Offset = "0x2745850", VA = "0x182747250")]
	internal static int ParseQName(string s, int offset, out int colonOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x27470C0", Offset = "0x27456C0", VA = "0x1827470C0")]
	internal static void ParseQNameThrow(string s, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x2747460", Offset = "0x2745A60", VA = "0x182747460")]
	internal static void ThrowInvalidName(string s, int offsetStartChar, int offsetBadChar)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x2746990", Offset = "0x2744F90", VA = "0x182746990")]
	internal static Exception GetInvalidNameException(string s, int offsetStartChar, int offsetBadChar)
	{
		return null;
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x2747310", Offset = "0x2745910", VA = "0x182747310")]
	internal static void SplitQName(string name, out string prefix, out string lname)
	{
	}
}
