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

[Token(Token = "0x200057E")]
internal class KeybindPopup : PromptPopup
{
	[Token(Token = "0x200057F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUpdateSetting_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public KeybindPopup _003C_003E4__this;

		[Token(Token = "0x17000ACD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003929")]
			[Address(RVA = "0x424F7D0", Offset = "0x424F7D0", VA = "0x424F7D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ACE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600392B")]
			[Address(RVA = "0x424F820", Offset = "0x424F820", VA = "0x424F820", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003926")]
		[Address(RVA = "0x424F4B0", Offset = "0x424F4B0", VA = "0x424F4B0")]
		[DebuggerHidden]
		public _003CWaitAndUpdateSetting_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003927")]
		[Address(RVA = "0x424F720", Offset = "0x424F720", VA = "0x424F720", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003928")]
		[Address(RVA = "0x424F730", Offset = "0x424F730", VA = "0x424F730", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600392A")]
		[Address(RVA = "0x424F7E0", Offset = "0x424F7E0", VA = "0x424F7E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private InputKey _setting;

	[Token(Token = "0x4001B34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _settingLabel;

	[Token(Token = "0x4001B35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _displayLabel;

	[Token(Token = "0x4001B36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private InputKey _buffer;

	[Token(Token = "0x4001B37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _isDone;

	[Token(Token = "0x17000AC7")]
	protected override string Title
	{
		[Token(Token = "0x6003917")]
		[Address(RVA = "0x424EE30", Offset = "0x424EE30", VA = "0x424EE30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AC8")]
	protected override float Width
	{
		[Token(Token = "0x6003918")]
		[Address(RVA = "0x424EED0", Offset = "0x424EED0", VA = "0x424EED0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC9")]
	protected override float Height
	{
		[Token(Token = "0x6003919")]
		[Address(RVA = "0x424EEE0", Offset = "0x424EEE0", VA = "0x424EEE0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ACA")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600391A")]
		[Address(RVA = "0x424EEF0", Offset = "0x424EEF0", VA = "0x424EEF0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ACB")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600391B")]
		[Address(RVA = "0x424EF00", Offset = "0x424EF00", VA = "0x424EF00", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000ACC")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600391C")]
		[Address(RVA = "0x424EF10", Offset = "0x424EF10", VA = "0x424EF10", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600391D")]
	[Address(RVA = "0x424EF20", Offset = "0x424EF20", VA = "0x424EF20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600391E")]
	[Address(RVA = "0x424F260", Offset = "0x424F260", VA = "0x424F260")]
	private new void Update()
	{
	}

	[Token(Token = "0x600391F")]
	[Address(RVA = "0x424F390", Offset = "0x424F390", VA = "0x424F390")]
	[IteratorStateMachine(typeof(_003CWaitAndUpdateSetting_003Ed__19))]
	private IEnumerator WaitAndUpdateSetting()
	{
		return null;
	}

	[Token(Token = "0x6003920")]
	[Address(RVA = "0x424F400", Offset = "0x424F400", VA = "0x424F400")]
	private void UpdateSetting()
	{
	}

	[Token(Token = "0x6003921")]
	[Address(RVA = "0x424F4D0", Offset = "0x424F4D0", VA = "0x424F4D0")]
	public void Show(InputKey setting, Text label)
	{
	}

	[Token(Token = "0x6003922")]
	[Address(RVA = "0x424F580", Offset = "0x424F580", VA = "0x424F580")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003923")]
	[Address(RVA = "0x424F690", Offset = "0x424F690", VA = "0x424F690")]
	public KeybindPopup()
	{
	}
}
