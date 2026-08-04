// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.MailAddressParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x200023F")]
internal static class MailAddressParser
{
	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x49CE310", Offset = "0x49CE310", VA = "0x49CE310")]
	internal static MailAddress ParseAddress(string data)
	{
		return null;
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x49CE340", Offset = "0x49CE340", VA = "0x49CE340")]
	private static MailAddress ParseAddress(string data, bool expectMultipleAddresses, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x49CE710", Offset = "0x49CE710", VA = "0x49CE710")]
	private static int ReadCfwsAndThrowIfIncomplete(string data, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x49CE770", Offset = "0x49CE770", VA = "0x49CE770")]
	private static string ParseDomain(string data, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x49CE8B0", Offset = "0x49CE8B0", VA = "0x49CE8B0")]
	private static string ParseLocalPart(string data, ref int index, bool expectAngleBracket, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x49CEBC0", Offset = "0x49CEBC0", VA = "0x49CEBC0")]
	private static string ParseDisplayName(string data, ref int index, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x49CF150", Offset = "0x49CF150", VA = "0x49CF150")]
	internal static string NormalizeOrThrow(string input)
	{
		return null;
	}
}
