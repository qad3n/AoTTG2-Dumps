// ==================== AoTTG2 cross-reference ====================
// Type: UI.CutsceneDialoguePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CutsceneDialoguePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000838")]
internal class CutsceneDialoguePanel : BasePopup
{
	[Token(Token = "0x40028F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _contentLabel;

	[Token(Token = "0x40028F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _titleLabel;

	[Token(Token = "0x40028F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _image;

	[Token(Token = "0x40028F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _labelRight;

	[Token(Token = "0x17000D95")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E58")]
		[Address(RVA = "0x5C1D5F0", Offset = "0x5C1C5F0", VA = "0x5C1D5F0", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000D96")]
	protected override string Title
	{
		[Token(Token = "0x6004E59")]
		[Address(RVA = "0x5C1D600", Offset = "0x5C1C600", VA = "0x5C1D600", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000D97")]
	protected override float Width
	{
		[Token(Token = "0x6004E5A")]
		[Address(RVA = "0x5C1D620", Offset = "0x5C1C620", VA = "0x5C1D620", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_Width): clean
			return 600.0;
		}
	}

	[Token(Token = "0x17000D98")]
	protected override float Height
	{
		[Token(Token = "0x6004E5B")]
		[Address(RVA = "0x5C1D630", Offset = "0x5C1C630", VA = "0x5C1D630", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_Height): clean
			return 224.0;
		}
	}

	[Token(Token = "0x17000D99")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004E5C")]
		[Address(RVA = "0x5C1D640", Offset = "0x5C1C640", VA = "0x5C1D640", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000D9A")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004E5D")]
		[Address(RVA = "0x5C1D650", Offset = "0x5C1C650", VA = "0x5C1D650", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000D9B")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E5E")]
		[Address(RVA = "0x5C1D660", Offset = "0x5C1C660", VA = "0x5C1D660", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_VerticalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x17000D9C")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E5F")]
		[Address(RVA = "0x5C1D670", Offset = "0x5C1C670", VA = "0x5C1D670", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000D9D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E60")]
		[Address(RVA = "0x5C1D680", Offset = "0x5C1C680", VA = "0x5C1D680", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000D9E")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E61")]
		[Address(RVA = "0x5C1D690", Offset = "0x5C1C690", VA = "0x5C1D690", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x17000D9F")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004E62")]
		[Address(RVA = "0x5C1D6A0", Offset = "0x5C1C6A0", VA = "0x5C1D6A0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000DA0")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004E63")]
		[Address(RVA = "0x5C1D6B0", Offset = "0x5C1C6B0", VA = "0x5C1D6B0", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_AnimationTime): clean
			return 0.5;
		}
	}

	[Token(Token = "0x17000DA1")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E64")]
		[Address(RVA = "0x5C1D6C0", Offset = "0x5C1C6C0", VA = "0x5C1D6C0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$get_ThemePanel): clean
			return "CutsceneDialoguePanel";
		}
	}

	[Token(Token = "0x6004E65")]
	[Address(RVA = "0x5C1D6F0", Offset = "0x5C1C6F0", VA = "0x5C1D6F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$Setup): 3 lines keep C-only constructs
		Text* targetAddress;
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		KeybindSetting pSVar3;
		int iVar4;
		String pSVar5;
		ElementStyle __this_00;
		GameObject pUVar6;
		Transform pUVar7;
		String arg0;
		GameObject __this_01;
		LayoutElement pUVar8;
		Text pUVar9;
		Transform parent_00;
		RawImage pUVar10;
		float fVar11;

		this.Setup(parent);
		pSVar5 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar5);
		pUVar6 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 20.0, 3);
		if (pUVar6 != null) {
			pUVar7 = pUVar6.transform;
			ElementFactory.CreateHorizontalGroup(pUVar7, 0.0, 0);
			pUVar6 = ElementFactory.CreateDefaultLabel(pUVar7, __this_00, "", 0, 3);
			pSVar5 = UIManager.GetLocale("InGame", "Cutscene", "SkipHint", "", "");
			pSVar1 = SettingsManager.InputSettings;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(pSVar3 = pSVar2.SkipCutscene, pSVar3 != null)) {
				arg0 = pSVar3.ToString();
				pSVar5 = String.Format(pSVar5, (object)arg0);
				__this_01 = ElementFactory.CreateDefaultLabel(pUVar7, __this_00, pSVar5, 0, 5);
				ElementFactory.CreateHorizontalGroup(pUVar7, 0.0, 0);
				if (pUVar6 != null) {
					pUVar8 = pUVar6.GetComponent<LayoutElement>();
					fVar11 = this.GetPanelWidth();
					if (pUVar8 != null) {
						pUVar8.set_preferredWidth(fVar11 * 0.5 + -30.0);
						if (__this_01 != null) {
							pUVar8 = __this_01.GetComponent<LayoutElement>();
							fVar11 = this.GetPanelWidth();
							if (pUVar8 != null) {
								pUVar8.set_preferredWidth(fVar11 * 0.5 + -30.0);
								this._labelRight = __this_01;
								pUVar9 = pUVar6.GetComponent<Text>();
								this._titleLabel = pUVar9;
								this.CreateHorizontalDivider(this.SinglePanel, 1.0);
								ElementFactory.CreateHorizontalGroup(this.SinglePanel, 0.0, 0);
								pUVar6 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 10.0, 3);
								if (pUVar6 != null) {
									pUVar7 = pUVar6.transform;
									if (pUVar7 != null) {
										parent_00 = pUVar7.transform;
										pUVar6 = ElementFactory.CreateRawImage(parent_00, __this_00, "Icons/Profile/Levi1Icon", 128.0, 128.0) ;
										if (pUVar6 != null) {
											pUVar10 = pUVar6.GetComponent<RawImage>();
											this._image = pUVar10;
											pUVar7 = pUVar7.transform;
											pUVar6 = ElementFactory.CreateDefaultLabel(pUVar7, __this_00, "", 0, 3);
											if (pUVar6 != null) {
												pUVar9 = pUVar6.GetComponent<Text>();
												targetAddress = &this._contentLabel;
												this._contentLabel = pUVar9;
												pUVar9 = this._contentLabel;
												if (pUVar9 != null) {
													pUVar8 = pUVar9.GetComponent<LayoutElement>();
													if (pUVar8 != null) {
														pUVar8.set_preferredHeight(128.0);
														pUVar9 = *targetAddress;
														if (pUVar9 != null) {
															pUVar8 = pUVar9.GetComponent<LayoutElement>();
															fVar11 = this.GetPanelWidth();
															iVar4 = this.get_HorizontalPadding();
															if (pUVar8 != null) {
																pUVar8.set_preferredWidth((fVar11 - ((float)iVar4 + (float)iVar4)) + -128.0 + -10.0);
																return;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E66")]
	[Address(RVA = "0x5C1DC10", Offset = "0x5C1CC10", VA = "0x5C1DC10")]
	public void Show(string icon, string title, string content, bool full)
	{
		// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$Show): 1 lines keep C-only constructs
		RawImage __this_00;
		String path;
		Text text;
		GameObject __this_01;
		String pSVar1;
		Texture value;

		this.SetTitle(title);
		pSVar1 = UIManager.GetProfileIcon(icon);
		__this_00 = this._image;
		path = ResourcePaths.UI;
		pSVar1 = String.Concat("Icons/Profile/", pSVar1);
		value = (Texture)ResourceManager.LoadAsset(path, pSVar1, true, false);
		if (__this_00 != null) {
			if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
				throw new InvalidCastException();
			}
			__this_00.texture = value;
			text = this._titleLabel;
			LanguageFonts.SetText(text, title);
			LanguageFonts.SetText(this._contentLabel, content);
			this.Show();
			__this_01 = this._labelRight;
			if (__this_01 != null) {
				__this_01.SetActive(full);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E67")]
	[Address(RVA = "0x5C1DDE0", Offset = "0x5C1CDE0", VA = "0x5C1DDE0")]
	public CutsceneDialoguePanel()
	{
		// Lifted from source/cpp/UI/CutsceneDialoguePanel.c (UI.CutsceneDialoguePanel$$.ctor): clean
		base();
		return;
	}
}
