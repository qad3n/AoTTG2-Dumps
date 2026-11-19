// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.IReferenceResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010E")]
public interface IReferenceResolver
{
	[Token(Token = "0x60007C2")]
	object ResolveReference(object context, string reference);

	[Token(Token = "0x60007C3")]
	string GetReference(object context, object value);

	[Token(Token = "0x60007C4")]
	bool IsReferenced(object context, object value);

	[Token(Token = "0x60007C5")]
	void AddReference(object context, string reference, object value);
}
