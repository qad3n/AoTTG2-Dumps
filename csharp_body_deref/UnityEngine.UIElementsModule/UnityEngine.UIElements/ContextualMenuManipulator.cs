// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ContextualMenuManipulator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000070")]
public class ContextualMenuManipulator : PointerManipulator
{
	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x28")]
	private Action<ContextualMenuPopulateEvent> m_MenuBuilder;

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x30AE590", Offset = "0x30ACB90", VA = "0x1830AE590")]
	public ContextualMenuManipulator(Action<ContextualMenuPopulateEvent> menuBuilder)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x30ADF10", Offset = "0x30AC510", VA = "0x1830ADF10", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x30AE250", Offset = "0x30AC850", VA = "0x1830AE250", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x30ADB50", Offset = "0x30AC150", VA = "0x1830ADB50")]
	protected bool IsOSXContextualMenuPlatform()
	{
		return default(bool);
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x30ADBF0", Offset = "0x30AC1F0", VA = "0x1830ADBF0")]
	private void OnPointerUpEvent(IPointerEvent evt)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x30ADBF0", Offset = "0x30AC1F0", VA = "0x1830ADBF0")]
	private void OnPointerDownEventOSX(IPointerEvent evt)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x30ADE40", Offset = "0x30AC440", VA = "0x1830ADE40")]
	private void OnPointerUpEventOSX(IPointerEvent evt)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x30ADD90", Offset = "0x30AC390", VA = "0x1830ADD90")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x30ADC90", Offset = "0x30AC290", VA = "0x1830ADC90")]
	private void OnPointerMoveEventOSX(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x30ADBF0", Offset = "0x30AC1F0", VA = "0x1830ADBF0")]
	private void ProcessPointerEvent(IPointerEvent evt)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x30ADB90", Offset = "0x30AC190", VA = "0x1830ADB90")]
	private void OnKeyUpEvent(KeyUpEvent evt)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x30ADA60", Offset = "0x30AC060", VA = "0x1830ADA60")]
	private void DoDisplayMenu(EventBase evt)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x2F48EE0", Offset = "0x2F474E0", VA = "0x182F48EE0")]
	private void OnContextualMenuEvent(ContextualMenuPopulateEvent evt)
	{
	}
}
