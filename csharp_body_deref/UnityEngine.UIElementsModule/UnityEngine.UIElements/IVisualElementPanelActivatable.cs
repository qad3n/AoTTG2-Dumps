// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IVisualElementPanelActivatable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000476")]
internal interface IVisualElementPanelActivatable
{
	[Token(Token = "0x1700074C")]
	VisualElement element
	{
		[Token(Token = "0x6001BB5")]
		get;
	}

	[Token(Token = "0x6001BB6")]
	bool CanBeActivated();

	[Token(Token = "0x6001BB7")]
	void OnPanelActivate();

	[Token(Token = "0x6001BB8")]
	void OnPanelDeactivate();
}
