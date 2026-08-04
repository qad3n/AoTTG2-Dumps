// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ContextualMenuManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003D")]
public class ContextualMenuManipulator : MouseManipulator
{
	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x30")]
	private Action<ContextualMenuPopulateEvent> m_MenuBuilder;

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4F1F7B0", Offset = "0x4F1F7B0", VA = "0x4F1F7B0")]
	public ContextualMenuManipulator(Action<ContextualMenuPopulateEvent> menuBuilder)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4F1F950", Offset = "0x4F1F950", VA = "0x4F1F950", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4F1FC10", Offset = "0x4F1FC10", VA = "0x4F1FC10", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4F1FED0", Offset = "0x4F1FED0", VA = "0x4F1FED0")]
	private void OnMouseUpDownEvent(IMouseEvent evt)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4F20000", Offset = "0x4F20000", VA = "0x4F20000")]
	private void OnMouseDownEventOSX(MouseDownEvent evt)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4F20100", Offset = "0x4F20100", VA = "0x4F20100")]
	private void OnMouseUpEventOSX(MouseUpEvent evt)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4F201F0", Offset = "0x4F201F0", VA = "0x4F201F0")]
	private void OnKeyUpEvent(KeyUpEvent evt)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4F1FF60", Offset = "0x4F1FF60", VA = "0x4F1FF60")]
	private void DoDisplayMenu(EventBase evt)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4F20250", Offset = "0x4F20250", VA = "0x4F20250")]
	private void OnContextualMenuEvent(ContextualMenuPopulateEvent evt)
	{
	}
}
