using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000160")]
internal class NetRes
{
	[Token(Token = "0x6000885")]
	[Address(RVA = "0x4643830", Offset = "0x4643830", VA = "0x4643830")]
	public static string GetWebStatusString(string Res, WebExceptionStatus Status)
	{
		return null;
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x46438D0", Offset = "0x46438D0", VA = "0x46438D0")]
	public static string GetWebStatusString(WebExceptionStatus Status)
	{
		return null;
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x4643920", Offset = "0x4643920", VA = "0x4643920")]
	public static string GetWebStatusCodeString(FtpStatusCode statusCode, string statusDescription)
	{
		return null;
	}
}
