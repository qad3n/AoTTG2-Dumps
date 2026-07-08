using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000132")]
internal class FtpWebRequestCreator : IWebRequestCreate
{
	[Token(Token = "0x600078A")]
	[Address(RVA = "0x4638140", Offset = "0x4638140", VA = "0x4638140")]
	internal FtpWebRequestCreator()
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x4638150", Offset = "0x4638150", VA = "0x4638150", Slot = "4")]
	public WebRequest Create(Uri uri)
	{
		return null;
	}
}
