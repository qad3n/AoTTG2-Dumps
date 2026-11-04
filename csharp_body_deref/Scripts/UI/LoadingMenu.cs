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

[Token(Token = "0x20007CD")]
internal class LoadingMenu : BaseMenu
{
	[Token(Token = "0x20007CE")]
	[CompilerGenerated]
	private sealed class _003CWaitAndHide_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002779")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400277A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400277B")]
		[FieldOffset(Offset = "0x20")]
		public LoadingMenu _003C_003E4__this;

		[Token(Token = "0x17000DA8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004BB8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DA9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004BBA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004BB5")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndHide_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004BB6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004BB7")]
		[Address(RVA = "0x22839C0", Offset = "0x2281FC0", VA = "0x1822839C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004BB9")]
		[Address(RVA = "0x2283B70", Offset = "0x2282170", VA = "0x182283B70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002776")]
	[FieldOffset(Offset = "0x98")]
	private LoadingBackgroundPanel _backgroundPanel;

	[Token(Token = "0x4002777")]
	[FieldOffset(Offset = "0xA0")]
	private LoadingProgressPanel _progessPanel;

	[Token(Token = "0x4002778")]
	[FieldOffset(Offset = "0xA8")]
	private TipPanel _tipPanel;

	[Token(Token = "0x6004BAF")]
	[Address(RVA = "0x227A8A0", Offset = "0x2278EA0", VA = "0x18227A8A0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004BB0")]
	[Address(RVA = "0x227A9D0", Offset = "0x2278FD0", VA = "0x18227A9D0")]
	public void Show(bool immediate = false)
	{
	}

	[Token(Token = "0x6004BB1")]
	[Address(RVA = "0x227A820", Offset = "0x2278E20", VA = "0x18227A820")]
	public void Hide()
	{
	}

	[Token(Token = "0x6004BB2")]
	[Address(RVA = "0x227ABD0", Offset = "0x22791D0", VA = "0x18227ABD0")]
	public void UpdateLoading(float percentage, bool finished = false, bool immediate = false)
	{
	}

	[Token(Token = "0x6004BB3")]
	[Address(RVA = "0x227AD50", Offset = "0x2279350", VA = "0x18227AD50")]
	[IteratorStateMachine(typeof(_003CWaitAndHide_003Ed__7))]
	private IEnumerator WaitAndHide()
	{
		return null;
	}

	[Token(Token = "0x6004BB4")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public LoadingMenu()
	{
	}
}
