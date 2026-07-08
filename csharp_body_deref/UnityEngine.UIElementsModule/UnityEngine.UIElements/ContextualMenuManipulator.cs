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
	[Address(RVA = "0x4BF7E80", Offset = "0x4BF7E80", VA = "0x4BF7E80")]
	public ContextualMenuManipulator(Action<ContextualMenuPopulateEvent> menuBuilder)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4BF8020", Offset = "0x4BF8020", VA = "0x4BF8020", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4BF82E0", Offset = "0x4BF82E0", VA = "0x4BF82E0", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4BF85A0", Offset = "0x4BF85A0", VA = "0x4BF85A0")]
	private void OnMouseUpDownEvent(IMouseEvent evt)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4BF86D0", Offset = "0x4BF86D0", VA = "0x4BF86D0")]
	private void OnMouseDownEventOSX(MouseDownEvent evt)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4BF87D0", Offset = "0x4BF87D0", VA = "0x4BF87D0")]
	private void OnMouseUpEventOSX(MouseUpEvent evt)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4BF88C0", Offset = "0x4BF88C0", VA = "0x4BF88C0")]
	private void OnKeyUpEvent(KeyUpEvent evt)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4BF8630", Offset = "0x4BF8630", VA = "0x4BF8630")]
	private void DoDisplayMenu(EventBase evt)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4BF8920", Offset = "0x4BF8920", VA = "0x4BF8920")]
	private void OnContextualMenuEvent(ContextualMenuPopulateEvent evt)
	{
	}
}
