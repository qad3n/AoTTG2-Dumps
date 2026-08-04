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

[Token(Token = "0x2000223")]
public class KeyboardNavigationManipulator : Manipulator
{
	[Token(Token = "0x40007B6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Action<KeyboardNavigationOperation, EventBase> m_Action;

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x504BD10", Offset = "0x504BD10", VA = "0x504BD10")]
	public KeyboardNavigationManipulator(Action<KeyboardNavigationOperation, EventBase> action)
	{
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x504BD50", Offset = "0x504BD50", VA = "0x504BD50", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x504BF50", Offset = "0x504BF50", VA = "0x504BF50", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x504C140", Offset = "0x504C140", VA = "0x504C140")]
	internal void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x504C250", Offset = "0x504C250", VA = "0x504C250")]
	private void OnNavigationCancel(NavigationCancelEvent evt)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x504C280", Offset = "0x504C280", VA = "0x504C280")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x504C2B0", Offset = "0x504C2B0", VA = "0x504C2B0")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x504C230", Offset = "0x504C230", VA = "0x504C230")]
	private void Invoke(KeyboardNavigationOperation operation, EventBase evt)
	{
	}
}
