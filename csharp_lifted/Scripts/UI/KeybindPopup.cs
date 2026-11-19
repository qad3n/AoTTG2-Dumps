// ==================== AoTTG2 cross-reference ====================
// Type: UI.KeybindPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KeybindPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/KeybindPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004976")]
		[Address(RVA = "0x5BC1560", Offset = "0x5BC0560", VA = "0x5BC1560")]
		[DebuggerHidden]
		public _003CWaitAndUpdateSetting_003Ed__21(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004977")]
		[Address(RVA = "0x5BC17D0", Offset = "0x5BC07D0", VA = "0x5BC17D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004978")]
		[Address(RVA = "0x5BC17E0", Offset = "0x5BC07E0", VA = "0x5BC17E0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$MoveNext): clean
			int iVar1;
			KeybindPopup __this_00;
			object __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_01 = new WaitForEndOfFrame();
				this.__2__current = __this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.UpdateSetting();
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x600497A")]
		[Address(RVA = "0x5BC1880", Offset = "0x5BC0880", VA = "0x5BC1880", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_KeybindPopup_WaitAndUpdateSetting_d__21_System_Collections_IEnumerator_Reset) ;
			throw (object)__this_00;
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
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_EscapeBehavior): clean
			return 1;
		}
	}

	[Token(Token = "0x17000CA2")]
	protected override string Title
	{
		[Token(Token = "0x6004967")]
		[Address(RVA = "0x5BC0EB0", Offset = "0x5BBFEB0", VA = "0x5BC0EB0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("SettingsPopup", "KeybindPopup", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000CA3")]
	protected override float Width
	{
		[Token(Token = "0x6004968")]
		[Address(RVA = "0x5BC0F50", Offset = "0x5BBFF50", VA = "0x5BC0F50", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_Width): clean
			return 300.0;
		}
	}

	[Token(Token = "0x17000CA4")]
	protected override float Height
	{
		[Token(Token = "0x6004969")]
		[Address(RVA = "0x5BC0F60", Offset = "0x5BBFF60", VA = "0x5BC0F60", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_Height): clean
			return 250.0;
		}
	}

	[Token(Token = "0x17000CA5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600496A")]
		[Address(RVA = "0x5BC0F70", Offset = "0x5BBFF70", VA = "0x5BC0F70", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_VerticalSpacing): clean
			return 15.0;
		}
	}

	[Token(Token = "0x17000CA6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600496B")]
		[Address(RVA = "0x5BC0F80", Offset = "0x5BBFF80", VA = "0x5BC0F80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000CA7")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600496C")]
		[Address(RVA = "0x5BC0F90", Offset = "0x5BBFF90", VA = "0x5BC0F90", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x600496D")]
	[Address(RVA = "0x5BC0FA0", Offset = "0x5BBFFA0", VA = "0x5BC0FA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		int fontSize;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;
		String first;
		GameObject pUVar4;
		Text pUVar5;
		InputKey __this_01;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocale("SettingsPopup", "KeybindPopup", "Unbind", "", "");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_KeybindPopup_Setup_b__19_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Cancel");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_KeybindPopup_Setup_b__19_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.SinglePanel;
		first = UIManager.GetLocale("SettingsPopup", "KeybindPopup", "CurrentKey", "", "");
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = GisketchArabicText.Join(first, ":", pSVar2);
		pUVar4 = ElementFactory.CreateDefaultLabel(pUVar1, __this_00, pSVar2, 0, 4);
		if (pUVar4 != null) {
			pUVar4.GetComponent<Text>();
			pUVar4 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
			if (pUVar4 != null) {
				pUVar5 = pUVar4.GetComponent<Text>();
				this._displayLabel = pUVar5;
				__this_01 = new InputKey();
				this._buffer = __this_01;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600496E")]
	[Address(RVA = "0x5BC1320", Offset = "0x5BC0320", VA = "0x5BC1320")]
	private new void Update()
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$Update): clean
		InputKey pSVar1;
		bool bVar2;
		String a;
		KeybindPopup.d__21<WaitAndUpdateSetting> __this_00;
		MethodInfo method_00;

		if ((this._setting == null) || (this._isDone != false)) {
			return;
		}
		pSVar1 = this._buffer;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ReadNextInput();
			if (!bVar2) {
				return;
			}
			this._isDone = true;
			pSVar1 = this._buffer;
			if (pSVar1 != null) {
				a = pSVar1.ToString();
				method_00 = (MethodInfo *)"Mouse0";
				bVar2 = (a == "Mouse0");
				if (!bVar2) {
					this.UpdateSetting();
					return;
				}
				__this_00 = new KeybindPopup.d__21<WaitAndUpdateSetting>();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				this.StartCoroutine((IEnumerator)__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600496F")]
	[Address(RVA = "0x5BC1440", Offset = "0x5BC0440", VA = "0x5BC1440")]
	[IteratorStateMachine(typeof(_003CWaitAndUpdateSetting_003Ed__21))]
	private IEnumerator WaitAndUpdateSetting()
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$WaitAndUpdateSetting): clean
		KeybindPopup.d__21<WaitAndUpdateSetting> __this_00;

		__this_00 = new KeybindPopup.d__21<WaitAndUpdateSetting>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004970")]
	[Address(RVA = "0x5BC14B0", Offset = "0x5BC04B0", VA = "0x5BC14B0")]
	private void UpdateSetting()
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$UpdateSetting): clean
		InputKey pSVar1;
		InputKey __this_00;
		Text pUVar2;
		String pSVar3;
		GameObject __this_01;

		pSVar1 = this._buffer;
		if (pSVar1 != null) {
			__this_00 = this._setting;
			pSVar3 = pSVar1.ToString();
			if (__this_00 != null) {
				__this_00.LoadFromString(pSVar3);
				pSVar1 = this._setting;
				if (pSVar1 != null) {
					pUVar2 = this._settingLabel;
					pSVar3 = pSVar1.ToString();
					if (pUVar2 != null) {
						pUVar2.set_text(pSVar3);
						__this_01 = this.gameObject;
						if (__this_01 != null) {
							__this_01.SetActive(false);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004971")]
	[Address(RVA = "0x5BC1580", Offset = "0x5BC0580", VA = "0x5BC1580")]
	public void Show(InputKey setting, Text label)
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$Show): clean
		InputKey pSVar1;
		Text pUVar2;
		bool bVar3;
		GameObject __this_00;
		String pSVar4;

		__this_00 = this.gameObject;
		if (__this_00 != null) {
			bVar3 = __this_00.activeSelf;
			if (bVar3) {
				return;
			}
			this.Show();
			this._setting = setting;
			this._settingLabel = label;
			pSVar1 = this._setting;
			if (pSVar1 != null) {
				pUVar2 = this._displayLabel;
				pSVar4 = pSVar1.ToString();
				if (pUVar2 != null) {
					pUVar2.set_text(pSVar4);
					this._isDone = false;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004972")]
	[Address(RVA = "0x5BC1630", Offset = "0x5BC0630", VA = "0x5BC1630")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$OnButtonClick): 2 lines keep C-only constructs
		InputKey __this_00;
		Text pUVar1;
		bool bVar2;
		String pSVar3;
		Enum local_50;
		Enum local_38;

		bVar2 = (name == "Unbind");
		if (bVar2) {
			__this_00 = this._setting;
			local_38.klass = (Enum)typeof(SpecialKey);
			local_38.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_38.ToString();
			if (__this_00 != null) {
				__this_00.LoadFromString(pSVar3);
				pUVar1 = this._settingLabel;
				local_50.klass = (Enum)typeof(SpecialKey);
				local_50.monitor = (IntPtr)0xffffffffffffffff;
				pSVar3 = local_50.ToString();
				if (pUVar1 != null) {
					pUVar1.set_text(pSVar3);
					goto label_05cc1713;
				}
			}
			throw new NullReferenceException();
		}
	label_05cc1713: ;
		this._isDone = true;
		this.Hide();
		return;
	}

	[Token(Token = "0x6004973")]
	[Address(RVA = "0x5BC1740", Offset = "0x5BC0740", VA = "0x5BC1740")]
	public KeybindPopup()
	{
		// Lifted from source/cpp/UI/KeybindPopup.c (UI.KeybindPopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/KeybindPopup.c.

	// UI.KeybindPopup$$<Setup>b__19_0: clean
	private void Setup_b__19_0()
	{


		this.OnButtonClick("Unbind");
		return;
	}

	// UI.KeybindPopup$$<Setup>b__19_1: clean
	private void Setup_b__19_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
