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
	[Address(RVA = "0x19FFAE0", Offset = "0x19FE0E0", VA = "0x1819FFAE0")]
	public KeyboardNavigationManipulator(Action<KeyboardNavigationOperation, EventBase> action)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x32AE540", Offset = "0x32ACB40", VA = "0x1832AE540", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x32AE820", Offset = "0x32ACE20", VA = "0x1832AE820", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x32AE330", Offset = "0x32AC930", VA = "0x1832AE330")]
	internal void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x32AE440", Offset = "0x32ACA40", VA = "0x1832AE440")]
	private void OnNavigationCancel(NavigationCancelEvent evt)
	{
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x32AE520", Offset = "0x32ACB20", VA = "0x1832AE520")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x32AE460", Offset = "0x32ACA60", VA = "0x1832AE460")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x321D0B0", Offset = "0x321B6B0", VA = "0x18321D0B0")]
	private void Invoke(KeyboardNavigationOperation operation, EventBase evt)
	{
	}
}
