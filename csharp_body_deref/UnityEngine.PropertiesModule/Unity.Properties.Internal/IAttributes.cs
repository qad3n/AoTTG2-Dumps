// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.IAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
