// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.MailAddressParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x2000357")]
internal static class MailAddressParser
{
	[Token(Token = "0x6001719")]
	[Address(RVA = "0x61BC5D0", Offset = "0x61BB5D0", VA = "0x61BC5D0")]
	internal static MailAddress ParseAddress(string data)
	{
		return null;
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x61BC600", Offset = "0x61BB600", VA = "0x61BC600")]
	private static MailAddress ParseAddress(string data, bool expectMultipleAddresses, ref int index)
	{
		return null;
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x61BC9A0", Offset = "0x61BB9A0", VA = "0x61BC9A0")]
	private static int ReadCfwsAndThrowIfIncomplete(string data, int index)
	{
		return default(int);
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x61BCA00", Offset = "0x61BBA00", VA = "0x61BCA00")]
	private static string ParseDomain(string data, ref int index)
	{
		return null;
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x61BCB40", Offset = "0x61BBB40", VA = "0x61BCB40")]
	private static string ParseLocalPart(string data, ref int index, bool expectAngleBracket, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x61BCE40", Offset = "0x61BBE40", VA = "0x61BCE40")]
	private static string ParseDisplayName(string data, ref int index, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x600171F")]
	[Address(RVA = "0x61BD3E0", Offset = "0x61BC3E0", VA = "0x61BD3E0")]
	internal static string NormalizeOrThrow(string input)
	{
		return null;
	}
}
