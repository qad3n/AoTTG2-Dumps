// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IGroupBox
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200028C")]
internal interface IGroupBox
{
	[Token(Token = "0x600115F")]
	void OnOptionAdded(IGroupBoxOption option);

	[Token(Token = "0x6001160")]
	void OnOptionRemoved(IGroupBoxOption option);
}
[Token(Token = "0x200028D")]
internal interface IGroupBox<T> : IGroupBox where T : IGroupManager
{
}
