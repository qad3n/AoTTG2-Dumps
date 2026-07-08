using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003AC")]
internal interface IInternalMessage
{
	[Token(Token = "0x170003BC")]
	System.Runtime.Remoting.Identity TargetIdentity
	{
		[Token(Token = "0x6001E6A")]
		get;
		[Token(Token = "0x6001E6B")]
		set;
	}

	[Token(Token = "0x170003BD")]
	string Uri
	{
		[Token(Token = "0x6001E6C")]
		get;
		[Token(Token = "0x6001E6D")]
		set;
	}
}
