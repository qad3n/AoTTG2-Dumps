using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000EB")]
public interface IAttributeProvider
{
	[Token(Token = "0x600059E")]
	Attribute[] GetCustomAttributes(bool inherit);
}
