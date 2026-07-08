using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000146")]
internal class WebRequestPrefixElement
{
	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x10")]
	public string Prefix;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x18")]
	internal IWebRequestCreate creator;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x20")]
	internal Type creatorType;

	[Token(Token = "0x170001BA")]
	public IWebRequestCreate Creator
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x4639920", Offset = "0x4639920", VA = "0x4639920")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x4639B40", Offset = "0x4639B40", VA = "0x4639B40")]
		set
		{
		}
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x4639B50", Offset = "0x4639B50", VA = "0x4639B50")]
	public WebRequestPrefixElement(string P, IWebRequestCreate C)
	{
	}
}
