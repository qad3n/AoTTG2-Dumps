// ==================== AoTTG2 cross-reference ====================
// Type: UI.KeybindPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000799")]
internal class KeybindPopup : PromptPopup
{
	[Token(Token = "0x200079A")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUpdateSetting_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400266A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400266B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400266C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public KeybindPopup _003C_003E4__this;

		[Token(Token = "0x17000CA8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004979")]
			[Address(RVA = "0x5BC1870", Offset = "0x5BC0870", VA = "0x5BC1870", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CA9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600497B")]
			[Address(RVA = "0x5BC18C0", Offset = "0x5BC08C0", VA = "0x5BC18C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004976")]
		[Address(RVA = "0x5BC1560", Offset = "0x5BC0560", VA = "0x5BC1560")]
		[DebuggerHidden]
		public _003CWaitAndUpdateSetting_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004977")]
		[Address(RVA = "0x5BC17D0", Offset = "0x5BC07D0", VA = "0x5BC17D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004978")]
		[Address(RVA = "0x5BC17E0", Offset = "0x5BC07E0", VA = "0x5BC17E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600497A")]
		[Address(RVA = "0x5BC1880", Offset = "0x5BC0880", VA = "0x5BC1880", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002665")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private InputKey _setting;

	[Token(Token = "0x4002666")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _settingLabel;

	[Token(Token = "0x4002667")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _displayLabel;

	[Token(Token = "0x4002668")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private InputKey _buffer;

	[Token(Token = "0x4002669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _isDone;

	[Token(Token = "0x17000CA1")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004966")]
		[Address(RVA = "0x5BC0EA0", Offset = "0x5BBFEA0", VA = "0x5BC0EA0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000CA2")]
	protected override string Title
	{
		[Token(Token = "0x6004967")]
		[Address(RVA = "0x5BC0EB0", Offset = "0x5BBFEB0", VA = "0x5BC0EB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CA3")]
	protected override float Width
	{
		[Token(Token = "0x6004968")]
		[Address(RVA = "0x5BC0F50", Offset = "0x5BBFF50", VA = "0x5BC0F50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA4")]
	protected override float Height
	{
		[Token(Token = "0x6004969")]
		[Address(RVA = "0x5BC0F60", Offset = "0x5BBFF60", VA = "0x5BC0F60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600496A")]
		[Address(RVA = "0x5BC0F70", Offset = "0x5BBFF70", VA = "0x5BC0F70", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600496B")]
		[Address(RVA = "0x5BC0F80", Offset = "0x5BBFF80", VA = "0x5BC0F80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CA7")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600496C")]
		[Address(RVA = "0x5BC0F90", Offset = "0x5BBFF90", VA = "0x5BC0F90", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600496D")]
	[Address(RVA = "0x5BC0FA0", Offset = "0x5BBFFA0", VA = "0x5BC0FA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600496E")]
	[Address(RVA = "0x5BC1320", Offset = "0x5BC0320", VA = "0x5BC1320")]
	private new void Update()
	{
	}

	[Token(Token = "0x600496F")]
	[Address(RVA = "0x5BC1440", Offset = "0x5BC0440", VA = "0x5BC1440")]
	[IteratorStateMachine(typeof(_003CWaitAndUpdateSetting_003Ed__21))]
	private IEnumerator WaitAndUpdateSetting()
	{
		return null;
	}

	[Token(Token = "0x6004970")]
	[Address(RVA = "0x5BC14B0", Offset = "0x5BC04B0", VA = "0x5BC14B0")]
	private void UpdateSetting()
	{
	}

	[Token(Token = "0x6004971")]
	[Address(RVA = "0x5BC1580", Offset = "0x5BC0580", VA = "0x5BC1580")]
	public void Show(InputKey setting, Text label)
	{
	}

	[Token(Token = "0x6004972")]
	[Address(RVA = "0x5BC1630", Offset = "0x5BC0630", VA = "0x5BC1630")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004973")]
	[Address(RVA = "0x5BC1740", Offset = "0x5BC0740", VA = "0x5BC1740")]
	public KeybindPopup()
	{
	}
}
