// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IGroupManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000218")]
internal interface IGroupManager
{
	[Token(Token = "0x6000DC6")]
	void Init(IGroupBox groupBox);

	[Token(Token = "0x6000DC7")]
	void OnOptionSelectionChanged(IGroupBoxOption selectedOption);

	[Token(Token = "0x6000DC8")]
	void RegisterOption(IGroupBoxOption option);

	[Token(Token = "0x6000DC9")]
	void UnregisterOption(IGroupBoxOption option);
}
