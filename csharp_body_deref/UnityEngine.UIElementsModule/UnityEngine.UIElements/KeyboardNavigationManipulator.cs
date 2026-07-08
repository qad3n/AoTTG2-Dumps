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
	[Address(RVA = "0x4D243E0", Offset = "0x4D243E0", VA = "0x4D243E0")]
	public KeyboardNavigationManipulator(Action<KeyboardNavigationOperation, EventBase> action)
	{
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x4D24420", Offset = "0x4D24420", VA = "0x4D24420", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x4D24620", Offset = "0x4D24620", VA = "0x4D24620", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x4D24810", Offset = "0x4D24810", VA = "0x4D24810")]
	internal void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x4D24920", Offset = "0x4D24920", VA = "0x4D24920")]
	private void OnNavigationCancel(NavigationCancelEvent evt)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x4D24950", Offset = "0x4D24950", VA = "0x4D24950")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x4D24980", Offset = "0x4D24980", VA = "0x4D24980")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x4D24900", Offset = "0x4D24900", VA = "0x4D24900")]
	private void Invoke(KeyboardNavigationOperation operation, EventBase evt)
	{
	}
}
