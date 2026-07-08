using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000197")]
internal class HttpRequestCreator : IWebRequestCreate
{
	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x465CD20", Offset = "0x465CD20", VA = "0x465CD20")]
	internal HttpRequestCreator()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x465CD30", Offset = "0x465CD30", VA = "0x465CD30", Slot = "4")]
	public WebRequest Create(Uri uri)
	{
		return null;
	}
}
