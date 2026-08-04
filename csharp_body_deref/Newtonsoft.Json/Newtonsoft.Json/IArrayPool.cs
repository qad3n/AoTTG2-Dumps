// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.IArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000015")]
public interface IArrayPool<T> where T : notnull
{
	[Token(Token = "0x6000015")]
	T[] Rent(int minimumLength);

	[Token(Token = "0x6000016")]
	void Return(T[]? array);
}
