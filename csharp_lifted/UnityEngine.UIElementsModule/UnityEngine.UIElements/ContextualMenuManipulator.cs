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

[Token(Token = "0x2000070")]
public class ContextualMenuManipulator : PointerManipulator
{
	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x28")]
	private Action<ContextualMenuPopulateEvent> m_MenuBuilder;

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x6A9E330", Offset = "0x6A9D330", VA = "0x6A9E330")]
	public ContextualMenuManipulator(Action<ContextualMenuPopulateEvent> menuBuilder)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x6A9E510", Offset = "0x6A9D510", VA = "0x6A9E510", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x6A9E8A0", Offset = "0x6A9D8A0", VA = "0x6A9E8A0", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x6A9E4B0", Offset = "0x6A9D4B0", VA = "0x6A9E4B0")]
	protected bool IsOSXContextualMenuPlatform()
	{
		return default(bool);
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x6A9EC30", Offset = "0x6A9DC30", VA = "0x6A9EC30")]
	private void OnPointerUpEvent(IPointerEvent evt)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x6A9ED50", Offset = "0x6A9DD50", VA = "0x6A9ED50")]
	private void OnPointerDownEventOSX(IPointerEvent evt)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x6A9EDE0", Offset = "0x6A9DDE0", VA = "0x6A9EDE0")]
	private void OnPointerUpEventOSX(IPointerEvent evt)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x6A9EEA0", Offset = "0x6A9DEA0", VA = "0x6A9EEA0")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x6A9EF40", Offset = "0x6A9DF40", VA = "0x6A9EF40")]
	private void OnPointerMoveEventOSX(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x6A9ECC0", Offset = "0x6A9DCC0", VA = "0x6A9ECC0")]
	private void ProcessPointerEvent(IPointerEvent evt)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x6A9F0F0", Offset = "0x6A9E0F0", VA = "0x6A9F0F0")]
	private void OnKeyUpEvent(KeyUpEvent evt)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x6A9F000", Offset = "0x6A9E000", VA = "0x6A9F000")]
	private void DoDisplayMenu(EventBase evt)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x6A9F150", Offset = "0x6A9E150", VA = "0x6A9F150")]
	private void OnContextualMenuEvent(ContextualMenuPopulateEvent evt)
	{
	}
}
