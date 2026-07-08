using System;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000007")]
public interface IProperty
{
	[Token(Token = "0x600000B")]
	Type DeclaredValueType();
}
[Token(Token = "0x2000008")]
public interface IProperty<TContainer> : IProperty
{
}
