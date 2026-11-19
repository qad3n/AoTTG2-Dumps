// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextEditorEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000EC")]
internal class TextEditorEventHandler
{
	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x10")]
	protected TextElement textElement;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x18")]
	protected UnityEngine.TextEditingUtilities editingUtilities;

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x6BE9120", Offset = "0x6BE8120", VA = "0x6BE9120")]
	protected TextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x6BEA530", Offset = "0x6BE9530", VA = "0x6BEA530", Slot = "4")]
	public virtual void RegisterCallbacksOnTarget(VisualElement target)
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x6BEA540", Offset = "0x6BE9540", VA = "0x6BEA540", Slot = "5")]
	public virtual void UnregisterCallbacksFromTarget(VisualElement target)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x6BE9420", Offset = "0x6BE8420", VA = "0x6BE9420", Slot = "6")]
	public virtual void HandleEventBubbleUp(EventBase evt)
	{
	}
}
