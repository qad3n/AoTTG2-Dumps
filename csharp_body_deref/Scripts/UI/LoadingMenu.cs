// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingMenu
// Update status: CHANGED in this game update
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

[Token(Token = "0x200087B")]
internal class LoadingMenu : BaseMenu
{
	[Token(Token = "0x200087C")]
	[CompilerGenerated]
	private sealed class _003CWaitAndHide_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B02")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B03")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B04")]
		[FieldOffset(Offset = "0x20")]
		public LoadingMenu _003C_003E4__this;

		[Token(Token = "0x17000E1A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60050E5")]
			[Address(RVA = "0x5C56510", Offset = "0x5C55510", VA = "0x5C56510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E1B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60050E7")]
			[Address(RVA = "0x5C56560", Offset = "0x5C55560", VA = "0x5C56560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60050E2")]
		[Address(RVA = "0x5C563B0", Offset = "0x5C553B0", VA = "0x5C563B0")]
		[DebuggerHidden]
		public _003CWaitAndHide_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60050E3")]
		[Address(RVA = "0x5C563E0", Offset = "0x5C553E0", VA = "0x5C563E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60050E4")]
		[Address(RVA = "0x5C563F0", Offset = "0x5C553F0", VA = "0x5C563F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60050E6")]
		[Address(RVA = "0x5C56520", Offset = "0x5C55520", VA = "0x5C56520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002AFF")]
	[FieldOffset(Offset = "0x98")]
	private LoadingBackgroundPanel _backgroundPanel;

	[Token(Token = "0x4002B00")]
	[FieldOffset(Offset = "0xA0")]
	private LoadingProgressPanel _progessPanel;

	[Token(Token = "0x4002B01")]
	[FieldOffset(Offset = "0xA8")]
	private TipPanel _tipPanel;

	[Token(Token = "0x60050DB")]
	[Address(RVA = "0x5C55D60", Offset = "0x5C54D60", VA = "0x5C55D60", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60050DC")]
	[Address(RVA = "0x5C55E60", Offset = "0x5C54E60", VA = "0x5C55E60", Slot = "6")]
	public override void RebuildPopups()
	{
	}

	[Token(Token = "0x60050DD")]
	[Address(RVA = "0x5C55FB0", Offset = "0x5C54FB0", VA = "0x5C55FB0")]
	public void Show(bool immediate = false)
	{
	}

	[Token(Token = "0x60050DE")]
	[Address(RVA = "0x5C56290", Offset = "0x5C55290", VA = "0x5C56290")]
	public void Hide()
	{
	}

	[Token(Token = "0x60050DF")]
	[Address(RVA = "0x5C56100", Offset = "0x5C55100", VA = "0x5C56100")]
	public void UpdateLoading(float percentage, bool finished = false, bool immediate = false)
	{
	}

	[Token(Token = "0x60050E0")]
	[Address(RVA = "0x5C56340", Offset = "0x5C55340", VA = "0x5C56340")]
	[IteratorStateMachine(typeof(_003CWaitAndHide_003Ed__8))]
	private IEnumerator WaitAndHide()
	{
		return null;
	}

	[Token(Token = "0x60050E1")]
	[Address(RVA = "0x5C563D0", Offset = "0x5C553D0", VA = "0x5C563D0")]
	public LoadingMenu()
	{
	}
}
