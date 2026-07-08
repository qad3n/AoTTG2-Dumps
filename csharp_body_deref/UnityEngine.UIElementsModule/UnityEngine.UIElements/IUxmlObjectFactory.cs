using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200043C")]
internal interface IUxmlObjectFactory<out T> : IBaseUxmlObjectFactory, IBaseUxmlFactory where T : new()
{
	[Token(Token = "0x6001AE7")]
	T CreateObject(IUxmlAttributes bag, CreationContext cc);
}
