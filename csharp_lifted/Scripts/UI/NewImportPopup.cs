// ==================== AoTTG2 cross-reference ====================
// Type: UI.NewImportPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/NewImportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/NewImportPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200079C")]
internal class NewImportPopup : PromptPopup
{
	[Token(Token = "0x400266F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4002670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _nameElement;

	[Token(Token = "0x4002671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private InputSettingElement _importElement;

	[Token(Token = "0x4002672")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _errorText;

	[Token(Token = "0x4002673")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4002674")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public StringSetting FileName;

	[Token(Token = "0x4002675")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _manualHide;

	[Token(Token = "0x17000CB1")]
	protected override string Title
	{
		[Token(Token = "0x6004988")]
		[Address(RVA = "0x5BC1D00", Offset = "0x5BC0D00", VA = "0x5BC1D00", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("New");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000CB2")]
	protected override float Width
	{
		[Token(Token = "0x6004989")]
		[Address(RVA = "0x5BC1D60", Offset = "0x5BC0D60", VA = "0x5BC1D60", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000CB3")]
	protected override float Height
	{
		[Token(Token = "0x600498A")]
		[Address(RVA = "0x5BC1D70", Offset = "0x5BC0D70", VA = "0x5BC1D70", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_Height): clean
			return 615.0;
		}
	}

	[Token(Token = "0x17000CB4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600498B")]
		[Address(RVA = "0x5BC1D80", Offset = "0x5BC0D80", VA = "0x5BC1D80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000CB5")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600498C")]
		[Address(RVA = "0x5BC1D90", Offset = "0x5BC0D90", VA = "0x5BC1D90", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000CB6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600498D")]
		[Address(RVA = "0x5BC1DA0", Offset = "0x5BC0DA0", VA = "0x5BC1DA0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000CB7")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x600498E")]
		[Address(RVA = "0x5BC1DB0", Offset = "0x5BC0DB0", VA = "0x5BC1DB0")]
		get
		{
			// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$get_DefaultInputHeight): clean
			return 380.0;
		}
	}

	[Token(Token = "0x600498F")]
	[Address(RVA = "0x5BC1DC0", Offset = "0x5BC0DC0", VA = "0x5BC1DC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		StringSetting setting;
		int fontSize;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;
		GameObject pUVar4;
		InputSettingElement pUVar5;
		Text pUVar6;
		Color UVar7;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 100.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Save");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_NewImportPopup_Setup_b__21_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Cancel");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_NewImportPopup_Setup_b__21_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.SinglePanel;
		setting = this.FileName;
		pSVar2 = UIManager.GetLocaleCommon("Name");
		pUVar4 = ElementFactory.CreateInputSetting(pUVar1, __this_00, (BaseSetting)setting, pSVar2, "", 460.0, 40.0, false, null, null, null, null);
		if (pUVar4 != null) {
			pUVar5 = pUVar4.GetComponent<InputSettingElement>();
			this._nameElement = pUVar5;
			pUVar4 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this.ImportSetting, (String)**(ulong*)(g_data_07556758 + 0xb8), "", 460.0, 380.0, true, null, null, null, null);
			if (pUVar4 != null) {
				pUVar5 = pUVar4.GetComponent<InputSettingElement>();
				this._importElement = pUVar5;
				pUVar4 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, "", 0, 4);
				if (pUVar4 != null) {
					pUVar6 = pUVar4.GetComponent<Text>();
					this._errorText = pUVar6;
					pUVar6 = this._errorText;
					if (pUVar6 != null) {
						UVar7.b = 0.0;
						UVar7.a = 1.0;
						UVar7.r = 1.0;
						UVar7.g = 0.0;
						pUVar6.set_color(UVar7);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004990")]
	[Address(RVA = "0x5BC2140", Offset = "0x5BC1140", VA = "0x5BC2140")]
	public void Show(UnityAction onSave, bool manualHide = true)
	{
		// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$Show): clean
		StringSetting pSVar1;
		Text __this_00;
		bool bVar2;
		GameObject pUVar3;

		pUVar3 = this.gameObject;
		if (pUVar3 != null) {
			bVar2 = pUVar3.activeSelf;
			if (bVar2) {
				return;
			}
			this.Show();
			this._onSave = onSave;
			this._manualHide = manualHide;
			pSVar1 = this.ImportSetting;
			if (pSVar1 != null) {
				pSVar1.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
				pSVar1 = this.FileName;
				if (pSVar1 != null) {
					pSVar1.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
					__this_00 = this._errorText;
					if (__this_00 != null) {
						pUVar3 = __this_00.gameObject;
						if (pUVar3 != null) {
							pUVar3.SetActive(false);
							this.SyncSettingElements();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004991")]
	[Address(RVA = "0x5BC2260", Offset = "0x5BC1260", VA = "0x5BC2260")]
	public void ShowError(string error)
	{
		// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$ShowError): clean
		Text pUVar1;
		GameObject __this_00;

		pUVar1 = this._errorText;
		if (pUVar1 != null) {
			pUVar1.set_text(error);
			pUVar1 = this._errorText;
			if (pUVar1 != null) {
				__this_00 = pUVar1.gameObject;
				if (__this_00 != null) {
					__this_00.SetActive(true);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004992")]
	[Address(RVA = "0x5BC22B0", Offset = "0x5BC12B0", VA = "0x5BC22B0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$OnButtonClick): clean
		UnityAction pUVar1;
		bool bVar2;

		bVar2 = (name == "Cancel");
		if (bVar2) {
	label_05cc22fa: ;
			this.Hide();
			return;
		}
		bVar2 = (name == "Save");
		if (bVar2) {
			pUVar1 = this._onSave;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
			if (this._manualHide == false) goto label_05cc22fa;
		}
		return;
	}

	[Token(Token = "0x6004993")]
	[Address(RVA = "0x5BC2360", Offset = "0x5BC1360", VA = "0x5BC2360")]
	public NewImportPopup()
	{
		// Lifted from source/cpp/UI/NewImportPopup.c (UI.NewImportPopup$$.ctor): clean
		String pSVar1;
		StringSetting __this_00;
		MethodInfo method_00;

		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(pSVar1, 0x7fffffff);
		this.ImportSetting = __this_00;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(pSVar1, 0x7fffffff);
		this.FileName = (StringSetting)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/NewImportPopup.c.

	// UI.NewImportPopup$$<Setup>b__21_0: clean
	private void Setup_b__21_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.NewImportPopup$$<Setup>b__21_1: clean
	private void Setup_b__21_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
