// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IUxmlObjectFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200043C")]
internal interface IUxmlObjectFactory<out T> : IBaseUxmlObjectFactory, IBaseUxmlFactory where T : new()
{
	[Token(Token = "0x6001AE7")]
	T CreateObject(IUxmlAttributes bag, CreationContext cc);
}
