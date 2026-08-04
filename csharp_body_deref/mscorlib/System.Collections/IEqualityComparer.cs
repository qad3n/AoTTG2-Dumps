// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FE")]
public interface IEqualityComparer
{
	[Token(Token = "0x6002EC9")]
	new bool Equals(object x, object y);

	[Token(Token = "0x6002ECA")]
	int GetHashCode(object obj);
}
