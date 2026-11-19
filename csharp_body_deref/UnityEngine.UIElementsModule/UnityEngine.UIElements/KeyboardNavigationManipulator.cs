// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.KeyboardNavigationManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200029A")]
public class KeyboardNavigationManipulator : Manipulator
{
	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x18")]
	private readonly Action<KeyboardNavigationOperation, EventBase> m_Action;

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x6CB1730", Offset = "0x6CB0730", VA = "0x6CB1730")]
	public KeyboardNavigationManipulator(Action<KeyboardNavigationOperation, EventBase> action)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x6CB1770", Offset = "0x6CB0770", VA = "0x6CB1770", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x6CB1970", Offset = "0x6CB0970", VA = "0x6CB1970", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x6CB1B60", Offset = "0x6CB0B60", VA = "0x6CB1B60")]
	internal void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x6CB1C70", Offset = "0x6CB0C70", VA = "0x6CB1C70")]
	private void OnNavigationCancel(NavigationCancelEvent evt)
	{
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x6CB1CA0", Offset = "0x6CB0CA0", VA = "0x6CB1CA0")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x6CB1CD0", Offset = "0x6CB0CD0", VA = "0x6CB1CD0")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x6CB1C50", Offset = "0x6CB0C50", VA = "0x6CB1C50")]
	private void Invoke(KeyboardNavigationOperation operation, EventBase evt)
	{
	}
}
