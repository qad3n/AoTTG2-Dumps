using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000032")]
internal interface IConstructor
{
	[Token(Token = "0x1700002B")]
	InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000161")]
		get;
	}
}
[Token(Token = "0x2000033")]
internal interface IConstructor<out T> : IConstructor
{
	[Token(Token = "0x6000162")]
	T Instantiate();
}
