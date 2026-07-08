using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000137")]
public class ReflectionAttributeProvider : IAttributeProvider
{
	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _attributeProvider;

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x3AFF5B0", Offset = "0x3AFF5B0", VA = "0x3AFF5B0")]
	public ReflectionAttributeProvider(object attributeProvider)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x3AFF610", Offset = "0x3AFF610", VA = "0x3AFF610", Slot = "4")]
	public IList<Attribute> GetAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x3AFF670", Offset = "0x3AFF670", VA = "0x3AFF670", Slot = "5")]
	public IList<Attribute> GetAttributes(Type attributeType, bool inherit)
	{
		return null;
	}
}
