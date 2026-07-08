using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000034")]
internal interface IConstructorWithCount<out T> : IConstructor
{
	[Token(Token = "0x6000163")]
	T InstantiateWithCount(int count);
}
