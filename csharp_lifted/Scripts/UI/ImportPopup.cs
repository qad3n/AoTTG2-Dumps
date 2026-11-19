// ==================== AoTTG2 cross-reference ====================
// Type: UI.ImportPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ImportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ImportPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000798")]
internal class ImportPopup : PromptPopup
{
	[Token(Token = "0x400265F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private UnityAction _onSave;

	[Token(Token = "0x4002660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _element;

	[Token(Token = "0x4002661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _errorText;

	[Token(Token = "0x4002662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _topText;

	[Token(Token = "0x4002663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ImportSetting;

	[Token(Token = "0x4002664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _manualHide;

	[Token(Token = "0x17000C99")]
	protected override string Title
	{
		[Token(Token = "0x6004957")]
		[Address(RVA = "0x5BC0570", Offset = "0x5BBF570", VA = "0x5BC0570", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Import");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000C9A")]
	protected override float Width
	{
		[Token(Token = "0x6004958")]
		[Address(RVA = "0x5BC05D0", Offset = "0x5BBF5D0", VA = "0x5BC05D0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000C9B")]
	protected override float Height
	{
		[Token(Token = "0x6004959")]
		[Address(RVA = "0x5BC05E0", Offset = "0x5BBF5E0", VA = "0x5BC05E0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_Height): clean
			return 585.0;
		}
	}

	[Token(Token = "0x17000C9C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600495A")]
		[Address(RVA = "0x5BC05F0", Offset = "0x5BBF5F0", VA = "0x5BC05F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C9D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600495B")]
		[Address(RVA = "0x5BC0600", Offset = "0x5BBF600", VA = "0x5BC0600", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C9E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600495C")]
		[Address(RVA = "0x5BC0610", Offset = "0x5BBF610", VA = "0x5BC0610", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000C9F")]
	protected float DefaultInputHeight
	{
		[Token(Token = "0x600495D")]
		[Address(RVA = "0x5BC0620", Offset = "0x5BBF620", VA = "0x5BC0620")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_DefaultInputHeight): clean
			return 430.0;
		}
	}

	[Token(Token = "0x17000CA0")]
	protected float TextHeight
	{
		[Token(Token = "0x600495E")]
		[Address(RVA = "0x5BC0630", Offset = "0x5BBF630", VA = "0x5BC0630")]
		get
		{
			// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$get_TextHeight): clean
			return 32.0;
		}
	}

	[Token(Token = "0x600495F")]
	[Address(RVA = "0x5BC0640", Offset = "0x5BBF640", VA = "0x5BC0640", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		int fontSize;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;
		GameObject pUVar4;
		Text pUVar5;
		InputSettingElement pUVar6;
		Color UVar7;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Save");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ImportPopup_Setup_b__22_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Cancel");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ImportPopup_Setup_b__22_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar4 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, "", 0, 4);
		if (pUVar4 != null) {
			pUVar5 = pUVar4.GetComponent<Text>();
			this._topText = pUVar5;
			pUVar4 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_00, (BaseSetting)this.ImportSetting, (String)**(ulong*)(g_data_07556758 + 0xb8), "", 460.0, 430.0, true, null, null, null, null);
			if (pUVar4 != null) {
				pUVar6 = pUVar4.GetComponent<InputSettingElement>();
				this._element = pUVar6;
				pUVar4 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, "", 0, 4);
				if (pUVar4 != null) {
					pUVar5 = pUVar4.GetComponent<Text>();
					this._errorText = pUVar5;
					pUVar5 = this._errorText;
					if (pUVar5 != null) {
						UVar7.b = 0.0;
						UVar7.a = 1.0;
						UVar7.r = 1.0;
						UVar7.g = 0.0;
						pUVar5.set_color(UVar7);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004960")]
	[Address(RVA = "0x5BC0970", Offset = "0x5BBF970", VA = "0x5BC0970")]
	public void Show(UnityAction onSave, bool manualHide = true, string topText = "", string initialText = "")
	{
		// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$Show): clean
		StringSetting __this_00;
		Text pUVar1;
		InputSettingElement pUVar2;
		bool bVar3;
		GameObject pUVar4;
		LayoutElement pUVar5;
		float fVar8;

		pUVar4 = this.gameObject;
		if (pUVar4 != null) {
			bVar3 = pUVar4.activeSelf;
			if (bVar3) {
				return;
			}
			this.Show();
			this._onSave = onSave;
			this._manualHide = manualHide;
			__this_00 = this.ImportSetting;
			if (initialText == null) {
				initialText = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (__this_00 != null) {
				__this_00.Value = (object)initialText;
				pUVar1 = this._errorText;
				if (pUVar1 != null) {
					pUVar4 = pUVar1.gameObject;
					if (pUVar4 != null) {
						pUVar4.SetActive(false);
						bVar3 = (topText == "");
						pUVar1 = this._topText;
						if (bVar3) {
							if (pUVar1 == null) goto label_05cc0b9e;
							pUVar4 = pUVar1.gameObject;
							if (pUVar4 == null) goto label_05cc0b9e;
							pUVar4.SetActive(false);
							pUVar2 = this._element;
							if (pUVar2 == null) goto label_05cc0b9e;
							pUVar5 = pUVar2.GetComponent<LayoutElement>();
							if (pUVar5 == null) goto label_05cc0b9e;
							fVar8 = 430.0;
						}
						else {
							if (pUVar1 == null) goto label_05cc0b9e;
							pUVar4 = pUVar1.gameObject;
							if (pUVar4 == null) goto label_05cc0b9e;
							pUVar4.SetActive(true);
							pUVar1 = this._topText;
							if (pUVar1 == null) goto label_05cc0b9e;
							pUVar1.set_text(topText);
							pUVar2 = this._element;
							if (pUVar2 == null) goto label_05cc0b9e;
							pUVar5 = pUVar2.GetComponent<LayoutElement>();
							if (pUVar5 == null) goto label_05cc0b9e;
							fVar8 = 398.0;
						}
						pUVar5.set_preferredHeight(fVar8);
						pUVar2 = this._element;
						if (pUVar2 != null) {
							pUVar2.SyncElement();
							return;
						}
					}
				}
			}
		}
	label_05cc0b9e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004961")]
	[Address(RVA = "0x5BC0BB0", Offset = "0x5BBFBB0", VA = "0x5BC0BB0")]
	public void ShowError(string error)
	{
		// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$ShowError): 5 lines keep C-only constructs
		Text pUVar1;
		InputSettingElement __this_00;
		bool bVar2;
		GameObject pUVar3;
		LayoutElement pUVar4;
		_func_26 vtableDispatch;
		MethodInfo pMVar5;
		float fVar6;

		pUVar1 = this._errorText;
		if (pUVar1 != null) {
			pUVar1.set_text(error);
			pUVar1 = this._errorText;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.gameObject;
				if (pUVar3 != null) {
					pUVar3.SetActive(true);
					pUVar1 = this._topText;
					if (pUVar1 != null) {
						pUVar3 = pUVar1.gameObject;
						if (pUVar3 != null) {
							bVar2 = pUVar3.activeSelf;
							__this_00 = this._element;
							if (bVar2) {
								if (__this_00 != null) {
									pUVar4 = __this_00.GetComponent<LayoutElement>();
									if (pUVar4 != null) {
										vtableDispatch = (pUVar4.klass.vtable)._38_set_preferredHeight.methodPtr;
										pMVar5 = (pUVar4.klass.vtable)._38_set_preferredHeight.method;
										fVar6 = 366.0;
	label_05cc0cc3: ;
										(*vtableDispatch)(pUVar4,fVar6,pMVar5);
										return;
									}
								}
							}
							else if (__this_00 != null) {
								pUVar4 = __this_00.GetComponent<LayoutElement>();
								if (pUVar4 != null) {
									vtableDispatch = (pUVar4.klass.vtable)._38_set_preferredHeight.methodPtr;
									pMVar5 = (pUVar4.klass.vtable)._38_set_preferredHeight.method;
									fVar6 = 398.0;
									goto label_05cc0cc3;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004962")]
	[Address(RVA = "0x5BC0CE0", Offset = "0x5BBFCE0", VA = "0x5BC0CE0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$OnButtonClick): clean
		UnityAction pUVar1;
		bool bVar2;

		bVar2 = (name == "Cancel");
		if (bVar2) {
	label_05cc0d2a: ;
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
			if (this._manualHide == false) goto label_05cc0d2a;
		}
		return;
	}

	[Token(Token = "0x6004963")]
	[Address(RVA = "0x5BC0D90", Offset = "0x5BBFD90", VA = "0x5BC0D90")]
	public ImportPopup()
	{
		// Lifted from source/cpp/UI/ImportPopup.c (UI.ImportPopup$$.ctor): clean
		String defaultValue;
		MethodInfo method_00;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.ImportSetting = (StringSetting)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ImportPopup.c.

	// UI.ImportPopup$$<Setup>b__22_0: clean
	private void Setup_b__22_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.ImportPopup$$<Setup>b__22_1: clean
	private void Setup_b__22_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
