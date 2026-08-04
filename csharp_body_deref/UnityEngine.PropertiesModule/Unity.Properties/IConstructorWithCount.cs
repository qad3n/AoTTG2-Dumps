// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IConstructorWithCount
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000034")]
internal interface IConstructorWithCount<out T> : IConstructor
{
	[Token(Token = "0x6000163")]
	T InstantiateWithCount(int count);
}
