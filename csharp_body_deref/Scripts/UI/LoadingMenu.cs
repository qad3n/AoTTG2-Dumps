// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LoadingMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000672")]
internal class LoadingMenu : BaseMenu
{
	[Token(Token = "0x2000673")]
	[CompilerGenerated]
	private sealed class _003CWaitAndHide_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001F9F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001FA0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001FA1")]
		[FieldOffset(Offset = "0x20")]
		public LoadingMenu _003C_003E4__this;

		[Token(Token = "0x17000C5C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60040BC")]
			[Address(RVA = "0x42EFC10", Offset = "0x42EFC10", VA = "0x42EFC10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C5D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60040BE")]
			[Address(RVA = "0x42EFC60", Offset = "0x42EFC60", VA = "0x42EFC60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60040B9")]
		[Address(RVA = "0x42EFAA0", Offset = "0x42EFAA0", VA = "0x42EFAA0")]
		[DebuggerHidden]
		public _003CWaitAndHide_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60040BA")]
		[Address(RVA = "0x42EFAD0", Offset = "0x42EFAD0", VA = "0x42EFAD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60040BB")]
		[Address(RVA = "0x42EFAE0", Offset = "0x42EFAE0", VA = "0x42EFAE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60040BD")]
		[Address(RVA = "0x42EFC20", Offset = "0x42EFC20", VA = "0x42EFC20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001F9C")]
	[FieldOffset(Offset = "0x98")]
	private LoadingBackgroundPanel _backgroundPanel;

	[Token(Token = "0x4001F9D")]
	[FieldOffset(Offset = "0xA0")]
	private LoadingProgressPanel _progessPanel;

	[Token(Token = "0x4001F9E")]
	[FieldOffset(Offset = "0xA8")]
	private TipPanel _tipPanel;

	[Token(Token = "0x60040B3")]
	[Address(RVA = "0x42EF440", Offset = "0x42EF440", VA = "0x42EF440", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60040B4")]
	[Address(RVA = "0x42EF540", Offset = "0x42EF540", VA = "0x42EF540")]
	public void Show(bool immediate = false)
	{
	}

	[Token(Token = "0x60040B5")]
	[Address(RVA = "0x42EF7E0", Offset = "0x42EF7E0", VA = "0x42EF7E0")]
	public void Hide()
	{
	}

	[Token(Token = "0x60040B6")]
	[Address(RVA = "0x42EF670", Offset = "0x42EF670", VA = "0x42EF670")]
	public void UpdateLoading(float percentage, bool finished = false, bool immediate = false)
	{
	}

	[Token(Token = "0x60040B7")]
	[Address(RVA = "0x42EFA30", Offset = "0x42EFA30", VA = "0x42EFA30")]
	[IteratorStateMachine(typeof(_003CWaitAndHide_003Ed__7))]
	private IEnumerator WaitAndHide()
	{
		return null;
	}

	[Token(Token = "0x60040B8")]
	[Address(RVA = "0x42EFAC0", Offset = "0x42EFAC0", VA = "0x42EFAC0")]
	public LoadingMenu()
	{
	}
}
