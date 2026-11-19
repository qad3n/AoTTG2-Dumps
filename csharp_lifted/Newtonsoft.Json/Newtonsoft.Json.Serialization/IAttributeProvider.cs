// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.IAttributeProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
