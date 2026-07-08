using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010C")]
public interface IAttributeProvider
{
	[Token(Token = "0x60007BF")]
	IList<Attribute> GetAttributes(bool inherit);

	[Token(Token = "0x60007C0")]
	IList<Attribute> GetAttributes(Type attributeType, bool inherit);
}
