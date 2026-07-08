using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001A")]
public interface IPropertyBag
{
	[Token(Token = "0x6000052")]
	void Accept(ITypeVisitor visitor);
}
[Token(Token = "0x200001B")]
public interface IPropertyBag<TContainer> : IPropertyBag
{
}
