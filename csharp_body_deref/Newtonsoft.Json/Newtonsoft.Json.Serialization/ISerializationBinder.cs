// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.ISerializationBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010F")]
public interface ISerializationBinder
{
	[Token(Token = "0x60007C6")]
	Type BindToType(string? assemblyName, string typeName);

	[Token(Token = "0x60007C7")]
	void BindToName(Type serializedType, out string? assemblyName, out string? typeName);
}
