using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200017A")]
internal class FileWebRequestCreator : IWebRequestCreate
{
	[Token(Token = "0x6000936")]
	[Address(RVA = "0x463ECB0", Offset = "0x463ECB0", VA = "0x463ECB0")]
	internal FileWebRequestCreator()
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x46539F0", Offset = "0x46539F0", VA = "0x46539F0", Slot = "4")]
	public WebRequest Create(Uri uri)
	{
		return null;
	}
}
