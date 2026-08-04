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
	[Address(RVA = "0x47F24D0", Offset = "0x47F24D0", VA = "0x47F24D0")]
	internal static int ParseNmtoken(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x47F2580", Offset = "0x47F2580", VA = "0x47F2580")]
	internal static int ParseNmtokenNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x47F2660", Offset = "0x47F2660", VA = "0x47F2660")]
	internal static int ParseNameNoNamespaces(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x47F27A0", Offset = "0x47F27A0", VA = "0x47F27A0")]
	internal static bool IsNameNoNamespaces(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x47F2810", Offset = "0x47F2810", VA = "0x47F2810")]
	internal static int ParseNCName(string s, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x47F2920", Offset = "0x47F2920", VA = "0x47F2920")]
	internal static int ParseNCName(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x47F2990", Offset = "0x47F2990", VA = "0x47F2990")]
	internal static int ParseQName(string s, int offset, out int colonOffset)
	{
		return default(int);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x47F2A60", Offset = "0x47F2A60", VA = "0x47F2A60")]
	internal static void ParseQNameThrow(string s, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x47F2B70", Offset = "0x47F2B70", VA = "0x47F2B70")]
	internal static void ThrowInvalidName(string s, int offsetStartChar, int offsetBadChar)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x47F3020", Offset = "0x47F3020", VA = "0x47F3020")]
	internal static Exception GetInvalidNameException(string s, int offsetStartChar, int offsetBadChar)
	{
		return null;
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x47F32B0", Offset = "0x47F32B0", VA = "0x47F32B0")]
	internal static void SplitQName(string name, out string prefix, out string lname)
	{
	}
}
