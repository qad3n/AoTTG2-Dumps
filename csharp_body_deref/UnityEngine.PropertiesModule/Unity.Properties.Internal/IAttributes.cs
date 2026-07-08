using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties.Internal;

[Token(Token = "0x200003D")]
internal interface IAttributes
{
	[Token(Token = "0x6000190")]
	void AddAttribute(Attribute attribute);

	[Token(Token = "0x6000191")]
	void AddAttributes(IEnumerable<Attribute> attributes);
}
