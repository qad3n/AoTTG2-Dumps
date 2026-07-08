using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x200023F")]
internal static class MailAddressParser
{
	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x46A9210", Offset = "0x46A9210", VA = "0x46A9210")]
	internal static MailAddress ParseAddress(string data)
	{
		return null;
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x46A9240", Offset = "0x46A9240", VA = "0x46A9240")]
	private static MailAddress ParseAddress(string data, bool expectMultipleAddresses, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x46A9610", Offset = "0x46A9610", VA = "0x46A9610")]
	private static int ReadCfwsAndThrowIfIncomplete(string data, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x46A9670", Offset = "0x46A9670", VA = "0x46A9670")]
	private static string ParseDomain(string data, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x46A97B0", Offset = "0x46A97B0", VA = "0x46A97B0")]
	private static string ParseLocalPart(string data, ref int index, bool expectAngleBracket, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x46A9AC0", Offset = "0x46A9AC0", VA = "0x46A9AC0")]
	private static string ParseDisplayName(string data, ref int index, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x46AA050", Offset = "0x46AA050", VA = "0x46AA050")]
	internal static string NormalizeOrThrow(string input)
	{
		return null;
	}
}
