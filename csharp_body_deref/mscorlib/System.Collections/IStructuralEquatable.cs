// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IStructuralEquatable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005D5")]
public interface IStructuralEquatable
{
	[Token(Token = "0x6002BE6")]
	bool Equals(object other, IEqualityComparer comparer);

	[Token(Token = "0x6002BE7")]
	int GetHashCode(IEqualityComparer comparer);
}
