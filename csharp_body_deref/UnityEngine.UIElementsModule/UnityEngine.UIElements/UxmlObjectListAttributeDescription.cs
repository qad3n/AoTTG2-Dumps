using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000435")]
internal class UxmlObjectListAttributeDescription<T> : UxmlObjectAttributeDescription<List<T>> where T : new()
{
	[Token(Token = "0x6001ADB")]
	public override List<T> GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x6001ADC")]
	public UxmlObjectListAttributeDescription()
	{
	}
}
