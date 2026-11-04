// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.IAttributes
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties.Internal;

[Token(Token = "0x200006F")]
internal interface IAttributes
{
	[Token(Token = "0x17000043")]
	List<Attribute> Attributes
	{
		[Token(Token = "0x60001AC")]
		get;
		[Token(Token = "0x60001AD")]
		set;
	}

	[Token(Token = "0x60001AE")]
	void AddAttribute(Attribute attribute);

	[Token(Token = "0x60001AF")]
	void AddAttributes(IEnumerable<Attribute> attributes);

	[Token(Token = "0x60001B0")]
	AttributesScope CreateAttributesScope(IAttributes attributes);
}
