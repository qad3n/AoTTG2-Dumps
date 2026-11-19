// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExportPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExportPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000792")]
internal class ExportPopup : PromptPopup
{
	[Token(Token = "0x4002645")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _element;

	[Token(Token = "0x4002646")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _versionElement;

	[Token(Token = "0x4002647")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _mapExportSource;

	[Token(Token = "0x4002648")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private StringSetting _version;

	[Token(Token = "0x4002649")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ExportSetting;

	[Token(Token = "0x17000C7D")]
	protected override string Title
	{
		[Token(Token = "0x6004919")]
		[Address(RVA = "0x5BBCCF0", Offset = "0x5BBBCF0", VA = "0x5BBCCF0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Export");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000C7E")]
	protected override float Width
	{
		[Token(Token = "0x600491A")]
		[Address(RVA = "0x5BBCD50", Offset = "0x5BBBD50", VA = "0x5BBCD50", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000C7F")]
	protected override float Height
	{
		[Token(Token = "0x600491B")]
		[Address(RVA = "0x5BBCD60", Offset = "0x5BBBD60", VA = "0x5BBCD60", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$get_Height): clean
			return 585.0;
		}
	}

	[Token(Token = "0x17000C80")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600491C")]
		[Address(RVA = "0x5BBCD70", Offset = "0x5BBBD70", VA = "0x5BBCD70", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C81")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600491D")]
		[Address(RVA = "0x5BBCD80", Offset = "0x5BBBD80", VA = "0x5BBCD80", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x600491E")]
	[Address(RVA = "0x5BBCD90", Offset = "0x5BBBD90", VA = "0x5BBCD90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		int fontSize;
		String pSVar1;
		ElementStyle __this_00;
		UnityAction __this_01;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar1);
		parent_00 = this.BottomBar;
		pSVar1 = UIManager.GetLocaleCommon("Done");
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ExportPopup_Setup_b__15_0);
		ElementFactory.CreateTextButton(parent_00, __this_00, pSVar1, 0.0, __this_01);
		return;
	}

	[Token(Token = "0x600491F")]
	[Address(RVA = "0x5BBCED0", Offset = "0x5BBBED0", VA = "0x5BBCED0")]
	public void Show(string value)
	{
		// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$Show): 2 lines keep C-only constructs
		GameObject* targetAddress;
		Object pUVar1;
		StringSetting __this_00;
		bool bVar2;
		int fontSize;
		GameObject pUVar3;
		String themePanel;
		ElementStyle __this_01;

		pUVar3 = this.gameObject;
		if (pUVar3 != null) {
			bVar2 = pUVar3.activeSelf;
			if (bVar2) {
				return;
			}
			pUVar1 = (Object)this._element;
			targetAddress = &this._element;
			bVar2 = (pUVar1 != null);
			if (bVar2) {
				pUVar1 = (Object)*targetAddress;
				Object.Destroy(pUVar1);
			}
			pUVar1 = (Object)this._versionElement;
			bVar2 = (pUVar1 != null);
			if (bVar2) {
				pUVar1 = (Object)this._versionElement;
				Object.Destroy(pUVar1);
			}
			this.Show();
			fontSize = this.get_ButtonFontSize();
			themePanel = this.get_ThemePanel();
			__this_01 = new ElementStyle(fontSize, 120.0, 20.0, themePanel);
			__this_00 = this.ExportSetting;
			if (__this_00 != null) {
				__this_00.Value = (object)value;
				pUVar3 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_01, (BaseSetting)this.ExportSetting, (String)**(ulong*)(g_data_07556758 + 0xb8), "", 460.0, 435.0, true, null, null, null, null);
				this._element = pUVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004920")]
	[Address(RVA = "0x5BBD110", Offset = "0x5BBC110", VA = "0x5BBD110")]
	public void Show(MapScript mapScript)
	{
		// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$Show): 5 lines keep C-only constructs
		GameObject* targetAddress;
		GameObject* targetAddress_00;
		Object pUVar1;
		StringSetting pSVar2;
		Transform parent;
		bool bVar3;
		int fontSize;
		GameObject pUVar4;
		String pSVar5;
		ElementStyle __this_00;
		String[] options;
		UnityAction __this_01;
		DropdownSettingElement __this_02;
		MethodInfo pMVar6;

		pUVar4 = this.gameObject;
		if (pUVar4 != null) {
			bVar3 = pUVar4.activeSelf;
			if (bVar3) {
				return;
			}
			pUVar1 = (Object)this._element;
			targetAddress = &this._element;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar1 = (Object)*targetAddress;
				Object.Destroy(pUVar1);
			}
			pUVar1 = (Object)this._versionElement;
			targetAddress_00 = &this._versionElement;
			pMVar6 = null;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar1 = (Object)*targetAddress_00;
				pMVar6 = null;
				Object.Destroy(pUVar1);
			}
			this.Show();
			fontSize = this.get_ButtonFontSize();
			pSVar5 = this.get_ThemePanel();
			__this_00 = new ElementStyle(fontSize, 80.0, 20.0, pSVar5);
			if (mapScript != null) {
				pSVar5 = mapScript.Serialize();
				this._mapExportSource = pSVar5;
				pSVar2 = this._version;
				if (pSVar2 != null) {
					pSVar2.Value = (Il2CppObject *)"1.1";
					parent = this.SinglePanel;
					pSVar2 = this._version;
					pSVar5 = UIManager.GetLocale("MapEditor", "Export", "Version", "", "");
					options = MapVersionConverter.SupportedVersions;
					__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ExportPopup_UpdateMapExport);
					pUVar4 = ElementFactory.CreateDropdownSetting(parent, __this_00, (BaseSetting)pSVar2, pSVar5, options, "", 140.0, 40.0, 300.0, (Nullable<float>)0x0, __this_01, null, null);
					this._versionElement = pUVar4;
					pUVar4 = this._versionElement;
					if (pUVar4 != null) {
						__this_02 = pUVar4.GetComponent<DropdownSettingElement>() ;
						if (__this_02 != null) {
							__this_02.FixScale();
							pMVar6 = (MethodInfo)ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this.ExportSetting, (String)**(ulong*)(g_data_07556758 + 0xb8), "", 460.0, 375.0, true, null, null, null, null);
							this._element = (GameObject)pMVar6;
							this.UpdateMapExport();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004921")]
	[Address(RVA = "0x5BBD550", Offset = "0x5BBC550", VA = "0x5BBD550")]
	private void UpdateMapExport()
	{
		// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$UpdateMapExport): clean
		StringSetting pSVar1;
		GameObject __this_00;
		bool bVar2;
		MapScript __this_01;
		String pSVar3;
		InputSettingElement pUVar4;

		__this_01 = new MapScript();
		if (__this_01 != null) {
			__this_01.Deserialize(this._mapExportSource, false);
			pSVar1 = this._version;
			if (pSVar1 != null) {
				bVar2 = (pSVar1._value != "1.1");
				if (bVar2) {
					pSVar1 = this._version;
					if (pSVar1 == null) goto label_05cbd6c2;
					pSVar3 = pSVar1._value;
					MapVersionConverter.Downgrade(__this_01, pSVar3);
				}
				pSVar1 = this.ExportSetting;
				pSVar3 = __this_01.Serialize();
				if (pSVar1 != null) {
					pSVar1.Value = (object)pSVar3;
					__this_00 = this._element;
					if (__this_00 != null) {
						pUVar4 = __this_00.GetComponent<InputSettingElement>();
						if (pUVar4 != null) {
							pUVar4.SyncElement();
							return;
						}
					}
				}
			}
		}
	label_05cbd6c2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004922")]
	[Address(RVA = "0x5BBD6D0", Offset = "0x5BBC6D0", VA = "0x5BBD6D0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$OnButtonClick): clean
		bool bVar1;

		bVar1 = (name == "Done");
		if (bVar1) {
			this.Hide();
			return;
		}
		return;
	}

	[Token(Token = "0x6004923")]
	[Address(RVA = "0x5BBD740", Offset = "0x5BBC740", VA = "0x5BBD740")]
	public ExportPopup()
	{
		// Lifted from source/cpp/UI/ExportPopup.c (UI.ExportPopup$$.ctor): clean
		String defaultValue;
		StringSetting __this_00;
		MethodInfo method_00;

		__this_00 = new StringSetting("1.1", 0x7fffffff);
		this._version = __this_00;
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.ExportSetting = (StringSetting)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ExportPopup.c.

	// UI.ExportPopup$$<Setup>b__15_0: clean
	private void Setup_b__15_0()
	{
		String a;
		bool bVar1;

		a = "Done";
		bVar1 = (a == "Done");
		if (bVar1) {
			this.Hide();
			return;
		}
		return;
	}
}
