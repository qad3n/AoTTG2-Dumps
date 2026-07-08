using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000627")]
internal class LoadingMenu : BaseMenu
{
	[Token(Token = "0x2000628")]
	[CompilerGenerated]
	private sealed class _003CWaitAndHide_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E58")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E59")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E5A")]
		[FieldOffset(Offset = "0x20")]
		public LoadingMenu _003C_003E4__this;

		[Token(Token = "0x17000BE4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003E6F")]
			[Address(RVA = "0x3FDD1F0", Offset = "0x3FDD1F0", VA = "0x3FDD1F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003E71")]
			[Address(RVA = "0x3FDD240", Offset = "0x3FDD240", VA = "0x3FDD240", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003E6C")]
		[Address(RVA = "0x3FDD080", Offset = "0x3FDD080", VA = "0x3FDD080")]
		[DebuggerHidden]
		public _003CWaitAndHide_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003E6D")]
		[Address(RVA = "0x3FDD0B0", Offset = "0x3FDD0B0", VA = "0x3FDD0B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003E6E")]
		[Address(RVA = "0x3FDD0C0", Offset = "0x3FDD0C0", VA = "0x3FDD0C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003E70")]
		[Address(RVA = "0x3FDD200", Offset = "0x3FDD200", VA = "0x3FDD200", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001E55")]
	[FieldOffset(Offset = "0x98")]
	private LoadingBackgroundPanel _backgroundPanel;

	[Token(Token = "0x4001E56")]
	[FieldOffset(Offset = "0xA0")]
	private LoadingProgressPanel _progessPanel;

	[Token(Token = "0x4001E57")]
	[FieldOffset(Offset = "0xA8")]
	private TipPanel _tipPanel;

	[Token(Token = "0x6003E66")]
	[Address(RVA = "0x3FDCA20", Offset = "0x3FDCA20", VA = "0x3FDCA20", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003E67")]
	[Address(RVA = "0x3FDCB20", Offset = "0x3FDCB20", VA = "0x3FDCB20")]
	public void Show(bool immediate = false)
	{
	}

	[Token(Token = "0x6003E68")]
	[Address(RVA = "0x3FDCDC0", Offset = "0x3FDCDC0", VA = "0x3FDCDC0")]
	public void Hide()
	{
	}

	[Token(Token = "0x6003E69")]
	[Address(RVA = "0x3FDCC50", Offset = "0x3FDCC50", VA = "0x3FDCC50")]
	public void UpdateLoading(float percentage, bool finished = false, bool immediate = false)
	{
	}

	[Token(Token = "0x6003E6A")]
	[Address(RVA = "0x3FDD010", Offset = "0x3FDD010", VA = "0x3FDD010")]
	[IteratorStateMachine(typeof(_003CWaitAndHide_003Ed__7))]
	private IEnumerator WaitAndHide()
	{
		return null;
	}

	[Token(Token = "0x6003E6B")]
	[Address(RVA = "0x3FDD0A0", Offset = "0x3FDD0A0", VA = "0x3FDD0A0")]
	public LoadingMenu()
	{
	}
}
