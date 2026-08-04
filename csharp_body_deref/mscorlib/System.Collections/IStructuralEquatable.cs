// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IStructuralEquatable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x2000601")]
public interface IStructuralEquatable
{
	[Token(Token = "0x6002ED7")]
	bool Equals(object other, IEqualityComparer comparer);

	[Token(Token = "0x6002ED8")]
	int GetHashCode(IEqualityComparer comparer);
}
