using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200042F")]
public class UxmlTypeAttributeDescription<TBase> : TypedUxmlAttributeDescription<Type>
{
	[Token(Token = "0x6001AC5")]
	public UxmlTypeAttributeDescription()
	{
	}

	[Token(Token = "0x6001AC6")]
	public override Type GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x6001AC7")]
	private Type ConvertValueToType(string v, Type defaultValue)
	{
		return null;
	}
}
