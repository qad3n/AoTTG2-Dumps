// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.IReferenceService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x200032C")]
public interface IReferenceService
{
	[Token(Token = "0x6001519")]
	object GetReference(string name);

	[Token(Token = "0x600151A")]
	string GetName(object reference);

	[Token(Token = "0x600151B")]
	object[] GetReferences(Type baseType);
}
