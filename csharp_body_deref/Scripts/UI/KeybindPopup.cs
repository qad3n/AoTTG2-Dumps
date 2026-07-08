using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000539")]
internal class KeybindPopup : PromptPopup
{
	[Token(Token = "0x200053A")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUpdateSetting_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public KeybindPopup _003C_003E4__this;

		[Token(Token = "0x17000A63")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600371B")]
			[Address(RVA = "0x3F26020", Offset = "0x3F26020", VA = "0x3F26020", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A64")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600371D")]
			[Address(RVA = "0x3F26070", Offset = "0x3F26070", VA = "0x3F26070", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003718")]
		[Address(RVA = "0x3F25D00", Offset = "0x3F25D00", VA = "0x3F25D00")]
		[DebuggerHidden]
		public _003CWaitAndUpdateSetting_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003719")]
		[Address(RVA = "0x3F25F70", Offset = "0x3F25F70", VA = "0x3F25F70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600371A")]
		[Address(RVA = "0x3F25F80", Offset = "0x3F25F80", VA = "0x3F25F80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600371C")]
		[Address(RVA = "0x3F26030", Offset = "0x3F26030", VA = "0x3F26030", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private InputKey _setting;

	[Token(Token = "0x4001A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _settingLabel;

	[Token(Token = "0x4001A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _displayLabel;

	[Token(Token = "0x4001A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private InputKey _buffer;

	[Token(Token = "0x4001A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _isDone;

	[Token(Token = "0x17000A5D")]
	protected override string Title
	{
		[Token(Token = "0x6003709")]
		[Address(RVA = "0x3F25680", Offset = "0x3F25680", VA = "0x3F25680", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A5E")]
	protected override float Width
	{
		[Token(Token = "0x600370A")]
		[Address(RVA = "0x3F25720", Offset = "0x3F25720", VA = "0x3F25720", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A5F")]
	protected override float Height
	{
		[Token(Token = "0x600370B")]
		[Address(RVA = "0x3F25730", Offset = "0x3F25730", VA = "0x3F25730", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A60")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600370C")]
		[Address(RVA = "0x3F25740", Offset = "0x3F25740", VA = "0x3F25740", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A61")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600370D")]
		[Address(RVA = "0x3F25750", Offset = "0x3F25750", VA = "0x3F25750", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A62")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600370E")]
		[Address(RVA = "0x3F25760", Offset = "0x3F25760", VA = "0x3F25760", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600370F")]
	[Address(RVA = "0x3F25770", Offset = "0x3F25770", VA = "0x3F25770", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003710")]
	[Address(RVA = "0x3F25AB0", Offset = "0x3F25AB0", VA = "0x3F25AB0")]
	private new void Update()
	{
	}

	[Token(Token = "0x6003711")]
	[Address(RVA = "0x3F25BE0", Offset = "0x3F25BE0", VA = "0x3F25BE0")]
	[IteratorStateMachine(typeof(_003CWaitAndUpdateSetting_003Ed__19))]
	private IEnumerator WaitAndUpdateSetting()
	{
		return null;
	}

	[Token(Token = "0x6003712")]
	[Address(RVA = "0x3F25C50", Offset = "0x3F25C50", VA = "0x3F25C50")]
	private void UpdateSetting()
	{
	}

	[Token(Token = "0x6003713")]
	[Address(RVA = "0x3F25D20", Offset = "0x3F25D20", VA = "0x3F25D20")]
	public void Show(InputKey setting, Text label)
	{
	}

	[Token(Token = "0x6003714")]
	[Address(RVA = "0x3F25DD0", Offset = "0x3F25DD0", VA = "0x3F25DD0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003715")]
	[Address(RVA = "0x3F25EE0", Offset = "0x3F25EE0", VA = "0x3F25EE0")]
	public KeybindPopup()
	{
	}
}
