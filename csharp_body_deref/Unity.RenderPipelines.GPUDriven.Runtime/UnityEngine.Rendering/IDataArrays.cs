// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IDataArrays
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200007D")]
internal interface IDataArrays
{
	[Token(Token = "0x6000288")]
	void Initialize(int initCapacity);

	[Token(Token = "0x6000289")]
	void Dispose();

	[Token(Token = "0x600028A")]
	void Grow(int newCapacity);

	[Token(Token = "0x600028B")]
	void Remove(int index, int lastIndex);

	[Token(Token = "0x600028C")]
	void SetDefault(int index);
}
