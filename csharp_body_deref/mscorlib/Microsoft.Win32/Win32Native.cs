using Il2CppDummyDll;

namespace Microsoft.Win32;

[Token(Token = "0x2000058")]
internal static class Win32Native
{
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4E0D310", Offset = "0x4E0D310", VA = "0x4E0D310")]
	public static string GetMessage(int hr)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4E0D360", Offset = "0x4E0D360", VA = "0x4E0D360")]
	public static int MakeHRFromErrorCode(int errorCode)
	{
		return default(int);
	}
}
