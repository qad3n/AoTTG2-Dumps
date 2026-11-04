// ==================== AoTTG2 cross-reference ====================
// Type: UI.KeybindPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/KeybindPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/KeybindPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20006F0")]
internal class KeybindPopup : PromptPopup
{
	[Token(Token = "0x20006F1")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUpdateSetting_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40022F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40022F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40022F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public KeybindPopup _003C_003E4__this;

		[Token(Token = "0x17000C24")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004454")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C25")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004456")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004451")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndUpdateSetting_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004452")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004453")]
		[Address(RVA = "0x21D14E0", Offset = "0x21CFAE0", VA = "0x1821D14E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004455")]
		[Address(RVA = "0x21D1580", Offset = "0x21CFB80", VA = "0x1821D1580", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40022EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private InputKey _setting;

	[Token(Token = "0x40022EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _settingLabel;

	[Token(Token = "0x40022ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _displayLabel;

	[Token(Token = "0x40022EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private InputKey _buffer;

	[Token(Token = "0x40022EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _isDone;

	[Token(Token = "0x17000C1D")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004441")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000C1E")]
	protected override string Title
	{
		[Token(Token = "0x6004442")]
		[Address(RVA = "0x21C57B0", Offset = "0x21C3DB0", VA = "0x1821C57B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C1F")]
	protected override float Width
	{
		[Token(Token = "0x6004443")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C20")]
	protected override float Height
	{
		[Token(Token = "0x6004444")]
		[Address(RVA = "0x2182BD0", Offset = "0x21811D0", VA = "0x182182BD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C21")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004445")]
		[Address(RVA = "0x2182AB0", Offset = "0x21810B0", VA = "0x182182AB0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C22")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004446")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C23")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004447")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004448")]
	[Address(RVA = "0x21C50E0", Offset = "0x21C36E0", VA = "0x1821C50E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004449")]
	[Address(RVA = "0x21C5620", Offset = "0x21C3C20", VA = "0x1821C5620")]
	private new void Update()
	{
	}

	[Token(Token = "0x600444A")]
	[Address(RVA = "0x21C5740", Offset = "0x21C3D40", VA = "0x1821C5740")]
	[IteratorStateMachine(typeof(_003CWaitAndUpdateSetting_003Ed__21))]
	private IEnumerator WaitAndUpdateSetting()
	{
		return null;
	}

	[Token(Token = "0x600444B")]
	[Address(RVA = "0x21C5560", Offset = "0x21C3B60", VA = "0x1821C5560")]
	private void UpdateSetting()
	{
	}

	[Token(Token = "0x600444C")]
	[Address(RVA = "0x21C5410", Offset = "0x21C3A10", VA = "0x1821C5410")]
	public void Show(InputKey setting, Text label)
	{
	}

	[Token(Token = "0x600444D")]
	[Address(RVA = "0x21C4FD0", Offset = "0x21C35D0", VA = "0x1821C4FD0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600444E")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public KeybindPopup()
	{
	}
}
