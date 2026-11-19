// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorPickPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ColorPickPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ColorPickPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Utility;

namespace UI;

[Token(Token = "0x200078E")]
internal class ColorPickPopup : PromptPopup
{
	[Token(Token = "0x4002612")]
	private const int SVTextureSize = 192;

	[Token(Token = "0x4002613")]
	private const int AlphaTextureWidth = 192;

	[Token(Token = "0x4002614")]
	private const int HueTextureHeight = 256;

	[Token(Token = "0x4002615")]
	private const float PreviewWidth = 96f;

	[Token(Token = "0x4002616")]
	private const float PreviewHeight = 56f;

	[Token(Token = "0x4002617")]
	private const float PickerPadding = 3f;

	[Token(Token = "0x4002618")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Image _image;

	[Token(Token = "0x4002619")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ColorSetting _setting;

	[Token(Token = "0x400261A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Image _preview;

	[Token(Token = "0x400261B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RectTransform _svRect;

	[Token(Token = "0x400261C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _hueRect;

	[Token(Token = "0x400261D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _alphaRect;

	[Token(Token = "0x400261E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RectTransform _svHandle;

	[Token(Token = "0x400261F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private RectTransform _hueHandle;

	[Token(Token = "0x4002620")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private RectTransform _alphaHandle;

	[Token(Token = "0x4002621")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private RawImage _svImage;

	[Token(Token = "0x4002622")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private RawImage _hueImage;

	[Token(Token = "0x4002623")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private RawImage _alphaImage;

	[Token(Token = "0x4002624")]
	private const float PickerContainerSize = 260f;

	[Token(Token = "0x4002625")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Texture2D _svTexture;

	[Token(Token = "0x4002626")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Texture2D _alphaTexture;

	[Token(Token = "0x4002627")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Color32[] _svPixels;

	[Token(Token = "0x4002628")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color32[] _alphaPixels;

	[Token(Token = "0x4002629")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private Texture2D _hueTexture;

	[Token(Token = "0x400262A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private float _hue;

	[Token(Token = "0x400262B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private float _saturation;

	[Token(Token = "0x400262C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private float _value;

	[Token(Token = "0x400262D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	private float _alphaValue;

	[Token(Token = "0x400262E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private IntSetting _red;

	[Token(Token = "0x400262F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private IntSetting _green;

	[Token(Token = "0x4002630")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private IntSetting _blue;

	[Token(Token = "0x4002631")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private IntSetting _alpha;

	[Token(Token = "0x4002632")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private StringSetting _hex;

	[Token(Token = "0x4002633")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private InputSettingElement _redInput;

	[Token(Token = "0x4002634")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private InputSettingElement _greenInput;

	[Token(Token = "0x4002635")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private InputSettingElement _blueInput;

	[Token(Token = "0x4002636")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private InputSettingElement _alphaInput;

	[Token(Token = "0x4002637")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private InputSettingElement _hexInput;

	[Token(Token = "0x4002638")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x4002639")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private bool _suppressInputCallbacks;

	[Token(Token = "0x400263A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x199")]
	private bool _svTextureDirty;

	[Token(Token = "0x400263B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19A")]
	private bool _alphaTextureDirty;

	[Token(Token = "0x400263C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19B")]
	private bool _hexInputActive;

	[Token(Token = "0x17000C71")]
	protected override string Title
	{
		[Token(Token = "0x60048E1")]
		[Address(RVA = "0x5BB8370", Offset = "0x5BB7370", VA = "0x5BB8370", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("SettingsPopup", "ColorPickPopup", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000C72")]
	protected override float Width
	{
		[Token(Token = "0x60048E2")]
		[Address(RVA = "0x5BB8410", Offset = "0x5BB7410", VA = "0x5BB8410", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$get_Width): clean
			return 520.0;
		}
	}

	[Token(Token = "0x17000C73")]
	protected override float Height
	{
		[Token(Token = "0x60048E3")]
		[Address(RVA = "0x5BB8420", Offset = "0x5BB7420", VA = "0x5BB8420", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$get_Height): clean
			return 520.0;
		}
	}

	[Token(Token = "0x17000C74")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60048E4")]
		[Address(RVA = "0x5BB8430", Offset = "0x5BB7430", VA = "0x5BB8430", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$get_VerticalSpacing): clean
			return 12.0;
		}
	}

	[Token(Token = "0x17000C75")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60048E5")]
		[Address(RVA = "0x5BB8440", Offset = "0x5BB7440", VA = "0x5BB8440", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$get_PanelAlignment): clean
			return 1;
		}
	}

	[Token(Token = "0x60048E6")]
	[Address(RVA = "0x5BB8450", Offset = "0x5BB7450", VA = "0x5BB8450", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		int fontSize;
		String pSVar2;
		MethodInfo method_00;
		UnityAction pUVar3;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		method_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Save");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_Setup_b__53_0);
		ElementFactory.CreateTextButton(pUVar1, (ElementStyle)method_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Cancel");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_Setup_b__53_1);
		ElementFactory.CreateTextButton(pUVar1, (ElementStyle)method_00, pSVar2, 0.0, pUVar3);
		this.SetupPickerUI();
		this.EnsureTextures();
		return;
	}

	[Token(Token = "0x60048E7")]
	[Address(RVA = "0x5BB96B0", Offset = "0x5BB86B0", VA = "0x5BB96B0")]
	public void Show(ColorSetting setting, Image image, UnityAction onChangeColor)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$Show): 1 lines keep C-only constructs
		IntSetting pSVar1;
		Color255 __this_00;
		bool bVar2;
		GameObject __this_01;
		float fVar4;
		float fVar5;
		Color UVar6;
		Color rgbColor;
		float fStack_34;

		__this_01 = this.gameObject;
		if (__this_01 != null) {
			bVar2 = __this_01.activeSelf;
			if (bVar2) {
				return;
			}
			this.Show();
			this._setting = setting;
			this._image = image;
			if ((setting != null) &&(pSVar1 = this._alpha, pSVar1 != null)) {
				pSVar1.MinValue = setting.MinAlpha;
				this._onChangeColor = onChangeColor;
				__this_00 = setting._value;
				if (__this_00 != null) {
					UVar6 = __this_00.ToColor();
					rgbColor.b = UVar6.b;
					rgbColor._0_8_ = UVar6._0_8_;
					rgbColor.a = 1.0;
					Color.RGBToHSV(rgbColor, ref this._hue, ref this._saturation, ref this._value);
					fStack_34 = UVar6.a;
					fVar4 = (float)setting.MinAlpha / 255.0;
					if (fVar4 <= fStack_34) {
						fVar4 = fStack_34;
					}
					fVar5 = 1.0;
					if (fVar4 <= 1.0) {
						fVar5 = fVar4;
					}
					this._alphaValue = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
					this._hexInputActive = false;
					this._svTextureDirty = true;
					this._alphaTextureDirty = true;
					this.ApplyCurrentColorToUI(true);
					if (this._svTextureDirty != false) {
						this.UpdateSVTexture();
						this._svTextureDirty = false;
					}
					if (this._alphaTextureDirty == false) {
						return;
					}
					this.UpdateAlphaTexture();
					this._alphaTextureDirty = false;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048E8")]
	[Address(RVA = "0x5BB8730", Offset = "0x5BB7730", VA = "0x5BB8730")]
	private void SetupPickerUI()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$SetupPickerUI): 23 lines keep C-only constructs
		IntSetting pSVar1;
		StringSetting setting;
		String pSVar2;
		ElementStyle __this_00;
		ElementStyle __this_01;
		GameObject pUVar3;
		Transform pUVar4;
		ColorPickPopup pUVar5;
		ColorPickPopup pUVar6;
		ColorPickPopup pUVar7;
		RawImage pUVar8;
		ColorPickDragArea pUVar9;
		Action<float, float> pSVar10;
		RectTransform pUVar11;
		GameObject pUVar12;
		LayoutElement pUVar13;
		Image pUVar14;
		UnityAction pUVar15;
		InputSettingElement pUVar16;
		UnityAction __this_02;
		Func<string, bool> __this_03;
		Func<string, string> __this_04;
		RectTransform local_50;
		RectTransform local_48;
		RectTransform local_40;
		ElementStyle local_38;

		local_40 = null;
		local_48 = null;
		local_50 = null;
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x12, 24.0, 8.0, pSVar2);
		pSVar2 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x12, 52.0, 10.0, pSVar2);
		pUVar3 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 12.0, 1);
		if (pUVar3 != null) {
			pUVar4 = pUVar3.transform;
			pUVar5 = (ColorPickPopup)ElementFactory.CreateVerticalGroup(pUVar4, 10.0, 1);
			if (pUVar5 != null) {
				pUVar4 = pUVar5.transform;
				pUVar6 = (ColorPickPopup)ElementFactory.CreateHorizontalGroup(pUVar4, 10.0, 1);
				if (pUVar6 != null) {
					pUVar7 = pUVar6;
					pUVar4 = pUVar6.transform;
					pUVar7 = (ColorPickPopup)pUVar7.CreateTextureContainer(pUVar4, "SVContainer", 260.0, 260.0, ref this._svRect);
					if (pUVar7 != null) {
						local_38 = __this_01;
						pUVar4 = pUVar7.transform ;
						pUVar8 = pUVar7.CreateTextureSurface(pUVar4, "SVImage", ref local_40);
						this._svImage = pUVar8;
						pUVar8 = this._svImage;
						if (pUVar8 != null) {
							pUVar9 = pUVar8.GetComponent<ColorPickDragArea>();
							pSVar10 = new Action<float, float>((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_OnSVDragged);
							if (pUVar9 != null) {
								pUVar9._mode = 0;
								pUVar7 = (ColorPickPopup)&pUVar9._onChanged;
								pUVar9._onChanged = pSVar10;
								pUVar11 = pUVar7.CreateHandle(local_40, (Vector2)0x4160000041600000);
								this._svHandle = pUVar11;
								pUVar4 = pUVar6.transform;
								pUVar6 = (ColorPickPopup)pUVar6.CreateTextureContainer(pUVar4, "HueContainer", 28.0, 260.0, ref this._hueRect);
								if (pUVar6 != null) {
									pUVar4 = pUVar6.transform;
									pUVar8 = pUVar6.CreateTextureSurface(pUVar4, "HueImage", ref local_48);
									this._hueImage = pUVar8;
									pUVar8 = this._hueImage;
									if (pUVar8 != null) {
										pUVar9 = pUVar8.GetComponent<ColorPickDragArea>();
										pSVar10 = new Action<float, float>((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_OnHueDragged);
										if (pUVar9 != null) {
											pUVar9._mode = 2;
											pUVar6 = (ColorPickPopup)&pUVar9._onChanged;
											pUVar9._onChanged = pSVar10;
											pUVar11 = pUVar6.CreateHandle(local_48, (Vector2)0x4040000041c00000);
											this._hueHandle = pUVar11;
											pUVar4 = pUVar5.transform;
											pUVar5 = (ColorPickPopup)pUVar5.CreateTextureContainer(pUVar4, "AlphaContainer", 260.0, 24.0, ref this._alphaRect);
											if (pUVar5 != null) {
												pUVar4 = pUVar5.transform;
												pUVar8 = pUVar5.CreateTextureSurface(pUVar4, "AlphaImage", ref local_50);
												this._alphaImage = pUVar8;
												pUVar8 = this._alphaImage;
												if (pUVar8 != null) {
													pUVar9 = pUVar8.GetComponent<ColorPickDragArea>();
													pSVar10 = il2cpp_codegen_object_new(typeof(Action<float, float>)) ;
													pSVar10 = new Action<float, float>((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_OnAlphaDragged);
													if (pUVar9 != null) {
														pUVar9._mode = 1;
														pUVar5 = (ColorPickPopup)&pUVar9._onChanged;
														pUVar9._onChanged = pSVar10;
														pUVar11 = pUVar5.CreateHandle(local_50, (Vector2)0x41a0000040c00000);
														this._alphaHandle = pUVar11;
														pUVar4 = pUVar3.transform;
														pUVar3 = ElementFactory.CreateVerticalGroup(pUVar4, 10.0, 0);
														if (pUVar3 != null) {
															pUVar4 = pUVar3.transform;
															pUVar12 = ElementFactory.InstantiateAndBind(pUVar4, "Prefabs/Elements/ColorPreview");
															if (pUVar12 != null) {
																pUVar13 = pUVar12.GetComponent<LayoutElement>();
																if (pUVar13 != null) {
																	pUVar13.set_preferredWidth(96.0);
																	pUVar13 = pUVar12.GetComponent<LayoutElement>();
																	if (pUVar13 != null) {
																		pUVar13.set_preferredHeight(56.0);
																		pUVar4 = pUVar12.transform;
																		if (pUVar4 != null) {
																			pUVar4 = pUVar4.Find("Image");
																			if (pUVar4 != null) {
																				pUVar14 = pUVar4.GetComponent<Image>();
																				this._preview = pUVar14;
																				pUVar4 = pUVar3.transform ;
																				pSVar1 = this._red;
																				pUVar15 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																				pUVar15 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged);
																				pUVar12 = ElementFactory.CreateInputSetting(pUVar4, __this_00, (BaseSetting)pSVar1, "R", "", 62.0, 34.0, false, pUVar15, null, null, null);
																				if (pUVar12 != null) {
																					pUVar16 = pUVar12.GetComponent<InputSettingElement>();
																					this._redInput = pUVar16;
																					pUVar4 = pUVar3.transform;
																					pSVar1 = this._green;
																					pUVar15 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																					pUVar15 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged);
																					pUVar12 = ElementFactory.CreateInputSetting(pUVar4, __this_00, (BaseSetting)pSVar1, "G", "", 62.0, 34.0, false, pUVar15, null, null, null);
																					if (pUVar12 != null) {
																						pUVar16 = pUVar12.GetComponent<InputSettingElement>();
																						this._greenInput = pUVar16;
																						pUVar4 = pUVar3.transform;
																						pSVar1 = this._blue;
																						pUVar15 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																						pUVar15 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged);
																						pUVar12 = ElementFactory.CreateInputSetting(pUVar4, __this_00, (BaseSetting)pSVar1, "B", "", 62.0, 34.0, false, pUVar15, null, null, null);
																						if (pUVar12 != null) {
																							pUVar16 = pUVar12.GetComponent<InputSettingElement>();
																							this._blueInput = pUVar16;
																							pUVar4 = pUVar3.transform;
																							pSVar1 = this._alpha;
																							pUVar15 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																							pUVar15 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged);
																							pUVar12 = ElementFactory.CreateInputSetting(pUVar4, __this_00, (BaseSetting)pSVar1, "A", "", 62.0, 34.0, false, pUVar15, null, null, null);
																							if (pUVar12 != null) {
																								pUVar16 = pUVar12.GetComponent<InputSettingElement>();
																								this._alphaInput = pUVar16;
																								pUVar4 = pUVar3.transform;
																								setting = this._hex;
																								pUVar15 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																								pUVar15 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_ColorPickPopup_OnHexInputChanged);
																								__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																								__this_02 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_ColorPickPopup_OnHexInputEndEdit);
																								__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<string, bool>));
																								__this_03 = new Func<object, bool>((object)this, (intptr_t) MethodInfo_UI_ColorPickPopup_IsHexInputValid);
																								__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<string, string>));
																								__this_04 = new Func<object, object>((object)this, (intptr_t) MethodInfo_UI_ColorPickPopup_CleanupHexInput);
																								pUVar3 = ElementFactory.CreateInputSetting(pUVar4, local_38, (BaseSetting)setting, "Hex", "", 116.0, 34.0, false, pUVar15, __this_02, __this_03, __this_04);
																								if (pUVar3 != null) {
																									pUVar16 = pUVar3.GetComponent<InputSettingElement>();
																									this._hexInput = pUVar16;
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

	[Token(Token = "0x60048E9")]
	[Address(RVA = "0x5BBA320", Offset = "0x5BB9320", VA = "0x5BBA320")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnButtonClick): clean
		ColorSetting pSVar1;
		Image pUVar2;
		UnityAction pUVar3;
		bool bVar4;
		Color255 pUVar5;
		MethodInfo method_00;
		Color UVar6;

		bVar4 = (name == "Cancel");
		if (bVar4) {
	label_05cba421: ;
			this.Hide();
			return;
		}
		method_00 = (MethodInfo *)"Save";
		bVar4 = (name == "Save");
		if (!bVar4) {
			return;
		}
		pSVar1 = this._setting;
		pUVar5 = this.GetCurrentColor255();
		if (pSVar1 != null) {
			pSVar1.Value = (object)pUVar5;
			pSVar1 = this._setting;
			if ((pSVar1 != null) &&(pUVar5 = pSVar1._value, pUVar5 != null)) {
				pUVar2 = this._image;
				UVar6 = pUVar5.ToColor();
				if (pUVar2 != null) {
					pUVar2.set_color(UVar6);
					pUVar3 = this._onChangeColor;
					if (pUVar3 != null) {
						(*(code)pUVar3.invoke_impl)(pUVar3.method_code,pUVar3.method);
					}
					goto label_05cba421;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048EA")]
	[Address(RVA = "0x5BBA9D0", Offset = "0x5BB99D0", VA = "0x5BBA9D0")]
	private void OnSVDragged(float normalizedX, float normalizedY)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnSVDragged): clean


		this._saturation = normalizedX;
		this._value = normalizedY;
		this._alphaTextureDirty = true;
		this.ApplyCurrentColorToUI(true);
		return;
	}

	[Token(Token = "0x60048EB")]
	[Address(RVA = "0x5BBAA00", Offset = "0x5BB9A00", VA = "0x5BBAA00")]
	private void OnHueDragged(float normalizedX, float normalizedY)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnHueDragged): clean


		this._hue = 1.0 - normalizedY;
		this._svTextureDirty = true;
		this._alphaTextureDirty = true;
		this.ApplyCurrentColorToUI(true);
		return;
	}

	[Token(Token = "0x60048EC")]
	[Address(RVA = "0x5BBAA30", Offset = "0x5BB9A30", VA = "0x5BBAA30")]
	private void OnAlphaDragged(float normalizedX, float normalizedY)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnAlphaDragged): 2 lines keep C-only constructs
		ColorSetting pSVar1;
		IntSetting pSVar2;
		int piVar3;
		float fVar4;

		pSVar1 = this._setting;
		if (pSVar1 == null) {
			pSVar2 = this._alpha;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			piVar3 = &pSVar2.MinValue;
		}
		else {
			piVar3 = &pSVar1.MinAlpha;
		}
		fVar4 = 1.0;
		if (normalizedX <= 1.0) {
			fVar4 = normalizedX;
		}
		this._alphaValue =(1.0 - (float)*piVar3 / 255.0) * (float)(-(uint)(0.0 <= normalizedX) & (uint)fVar4) +(float)*piVar3 / 255.0;
		this._alphaTextureDirty = true;
		this.ApplyCurrentColorToUI(true);
		return;
	}

	[Token(Token = "0x60048ED")]
	[Address(RVA = "0x5BBAB00", Offset = "0x5BB9B00", VA = "0x5BBAB00")]
	private void OnRGBAInputChanged()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnRGBAInputChanged): 17 lines keep C-only constructs
		IntSetting pSVar1;
		IntSetting pSVar2;
		ColorSetting pSVar3;
		int piVar4;
		IntSetting pSVar5;
		float fVar6;
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		float fVar10;
		Color rgbColor;

		if (this._suppressInputCallbacks != false) {
			return;
		}
		pSVar5 = this._red;
		if (((pSVar5 == null) ||(pSVar1 = this._green, pSVar1 == null)) ||(pSVar2 = this._blue, pSVar2 == null)) {
	label_05cbac2b: ;
			throw new NullReferenceException();
		}
		auVar7._0_4_ = (float)pSVar5._value;
		auVar7._4_4_ = (float)pSVar1._value;
		auVar7._8_8_ = 0;
		auVar7 = divps(auVar7, _DAT_01009880);
		rgbColor.a = 1.0;
		rgbColor.b = (float)pSVar2._value / 255.0;
		rgbColor._0_8_ = auVar7._0_8_;
		Color.RGBToHSV(rgbColor, ref this._hue, ref this._saturation, ref this._value);
		pSVar3 = this._setting;
		if (pSVar3 == null) {
			pSVar5 = this._alpha;
			if (pSVar5 == null) goto label_05cbac2b;
			piVar4 = &pSVar5.MinValue;
		}
		else {
			pSVar5 = this._alpha;
			if (pSVar5 == null) goto label_05cbac2b;
			piVar4 = &pSVar3.MinAlpha;
		}
		auVar8._0_4_ = (float)*piVar4;
		auVar8._4_4_ = (float)pSVar5._value;
		auVar8._8_8_ = 0;
		auVar9 = divps(auVar8, _DAT_01009880);
		if (auVar9._0_4_ <= auVar9._4_4_) {
			auVar9._0_4_ = auVar9._4_4_;
		}
		fVar6 = auVar9._0_4_;
		fVar10 = 1.0;
		if (fVar6 <= 1.0) {
			fVar10 = fVar6;
		}
		this._alphaValue = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar10);
		this._svTextureDirty = true;
		this._alphaTextureDirty = true;
		this.ApplyCurrentColorToUI(true);
		return;
	}

	[Token(Token = "0x60048EE")]
	[Address(RVA = "0x5BBAC30", Offset = "0x5BB9C30", VA = "0x5BBAC30")]
	private void OnHexInputChanged()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnHexInputChanged): clean
		if (this._suppressInputCallbacks == false) {
			this._hexInputActive = true;
			return;
		}
		return;
	}

	[Token(Token = "0x60048EF")]
	[Address(RVA = "0x5BBAC50", Offset = "0x5BB9C50", VA = "0x5BBAC50")]
	private void OnHexInputEndEdit()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnHexInputEndEdit): 9 lines keep C-only constructs
		int iVar1;
		StringSetting pSVar2;
		ColorSetting pSVar3;
		IntSetting pSVar4;
		bool bVar5;
		String htmlString;
		int piVar6;
		MethodInfo pMVar7;
		MethodInfo pMVar8;
		MethodInfo* __this_00;
		float fVar9;
		float fVar10;
		Color rgbColor;
		byte[] auStack_38 = new byte[8];
		ulong uStack_30;
		ulong uStack_28;

		__this_00 = (MethodInfo*)this;
		if (g_data_07547adf == false) {
			__this_00 = &MethodInfo_Settings_TypedSetting_string_get_Value;
			g_data_07547adf = true;
		}
		if (this._suppressInputCallbacks != false) {
			return;
		}
		this._hexInputActive = false;
		pSVar2 = this._hex;
		if (pSVar2 != null) {
			pMVar8 = (MethodInfo)pSVar2._value;
			auStack_38 = (byte[])0x0;
			uStack_30 = (InvokerMethod)0x0;
			htmlString = __this_00.CleanupHexInput((String)pMVar8);
			pMVar7 = (MethodInfo)auStack_38;
			if (htmlString != null) {
				iVar1 = htmlString._stringLength;
				if (((iVar1 != 9) && (iVar1 != 7)) ||(bVar5 = ColorUtility.TryParseHtmlString(htmlString, (Color)auStack_38), pMVar8 = pMVar7, !bVar5)) {
					this.SyncInputValuesFromCurrentColor();
					return;
				}
				if (htmlString._stringLength == 7) {
					uStack_30 = (InvokerMethod)CONCAT44(this._alphaValue, (float)uStack_30);
				}
				uStack_28 = uStack_30;
				rgbColor.a = 1.0;
				rgbColor.b = (float)(int)uStack_30;
				rgbColor.r = (float)auStack_38._0_4_;
				rgbColor.g = (float)auStack_38._4_4_;
				Color.RGBToHSV(rgbColor, ref this._hue, ref this._saturation, ref this._value);
				pSVar3 = this._setting;
				if (pSVar3 == null) {
					pSVar4 = this._alpha;
					if (pSVar4 == null) goto label_05cbadef;
					piVar6 = &pSVar4.MinValue;
				}
				else {
					piVar6 = &pSVar3.MinAlpha;
				}
				fVar9 = (float)*piVar6 / 255.0;
				if ((float)*piVar6 / 255.0 <= uStack_28._4_4_) {
					fVar9 = uStack_28._4_4_;
				}
				fVar10 = 1.0;
				if (fVar9 <= 1.0) {
					fVar10 = fVar9;
				}
				this._alphaValue = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar10);
				this._svTextureDirty = true;
				this._alphaTextureDirty = true;
				pMVar8 = (MethodInfo)0x1;
				this.ApplyCurrentColorToUI(true);
				if (this._svTextureDirty != false) {
					this.UpdateSVTexture();
					this._svTextureDirty = false;
				}
				if (this._alphaTextureDirty == false) {
					return;
				}
				this.UpdateAlphaTexture();
				this._alphaTextureDirty = false;
				return;
			}
		}
	label_05cbadef: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048F0")]
	[Address(RVA = "0x5BBB6B0", Offset = "0x5BBA6B0", VA = "0x5BBB6B0")]
	private bool IsHexInputValid(string value)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$IsHexInputValid): clean
		bool bVar1;
		ushort character;
		String __this_00;
		int iVar2;

		if (value == null) {
			bVar1 = false;
		}
		else {
			__this_00 = value.Trim();
			if ((__this_00 == null) ||((bVar1 = __this_00.StartsWith("#"), bVar1 &&(__this_00 = __this_00.Substring(1), __this_00 == null)))) {
				throw new NullReferenceException();
			}
			iVar2 = __this_00._stringLength;
			bVar1 = false;
			if ((iVar2 != 0) && (iVar2 < 9)) {
				if (iVar2 < 1) {
					bVar1 = true;
				}
				else {
					iVar2 = 0;
					do {
						character = __this_00.get_Chars(iVar2);
						bVar1 = Uri.IsHexDigit(character);
					} while ((bVar1) && (iVar2 = iVar2 + 1, iVar2 < __this_00._stringLength));
				}
			}
		}
		return bVar1;
	}

	[Token(Token = "0x60048F1")]
	[Address(RVA = "0x5BBB7A0", Offset = "0x5BBA7A0", VA = "0x5BBB7A0")]
	private string CleanupHexInput(string value)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$CleanupHexInput): clean
		bool bVar1;
		String pSVar2;

		if (value == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = value.Trim();
			if (pSVar2 == null) {
	label_05cbb89b: ;
				throw new NullReferenceException();
			}
			pSVar2 = pSVar2.ToUpperInvariant();
			bVar1 = (pSVar2 == (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar1) {
				pSVar2 = "#FFFFFF";
			}
			else {
				if (pSVar2 == null) goto label_05cbb89b;
				bVar1 = pSVar2.StartsWith("#");
				if (!bVar1) {
					pSVar2 = String.Concat("#", pSVar2);
					if (pSVar2 == null) goto label_05cbb89b;
				}
				if (9 < pSVar2._stringLength) {
					pSVar2 = pSVar2.Substring(0, 9);
					return pSVar2;
				}
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x60048F2")]
	[Address(RVA = "0x5BBAE00", Offset = "0x5BB9E00", VA = "0x5BBAE00")]
	private bool TryParseCompleteHexColor(string input, out Color color)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$TryParseCompleteHexColor): clean
		int iVar1;
		bool bVar2;
		String htmlString;
		bool bVar3;
		Color local_38;

		local_38.r = 0.0;
		local_38.g = 0.0;
		local_38.b = 0.0;
		local_38.a = 0.0;
		color.r = 1.0;
		color.g = 1.0;
		color.b = 1.0;
		color.a = 1.0;
		htmlString = this.CleanupHexInput(input);
		if (htmlString == null) {
			throw new NullReferenceException();
		}
		iVar1 = htmlString._stringLength;
		if ((iVar1 == 9) || (iVar1 == 7)) {
			bVar2 = ColorUtility.TryParseHtmlString(htmlString, ref local_38);
			if (bVar2) {
				if (htmlString._stringLength == 7) {
					local_38.a = this._alphaValue;
				}
				color.r = local_38.r;
				color.g = local_38.g;
				color.b = local_38.b;
				color.a = local_38.a;
			}
		}
		else {
		}
		return bVar3;
	}

	[Token(Token = "0x60048F3")]
	[Address(RVA = "0x5BB9860", Offset = "0x5BB8860", VA = "0x5BB9860")]
	private void ApplyCurrentColorToUI(bool syncInputs)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$ApplyCurrentColorToUI): 4 lines keep C-only constructs
		ColorSetting pSVar1;
		IntSetting pSVar2;
		Image pUVar3;
		bool bVar4;
		int piVar5;
		undefined7 in_register_00000031;
		MethodInfo pMVar6;
		float fVar7;
		float fVar8;
		Color UVar9;
		Color UVar10;
		float local_38;

		pMVar6 = (MethodInfo)CONCAT71(in_register_00000031, syncInputs);
		this.UpdatePickerHandles();
		UVar9 = Color.HSVToRGB(this._hue, this._saturation, this._value, true);
		pSVar1 = this._setting;
		if (pSVar1 == null) {
			pSVar2 = this._alpha;
			if (pSVar2 == null) goto label_05cb9996;
			piVar5 = &pSVar2.MinValue;
		}
		else {
			piVar5 = &pSVar1.MinAlpha;
		}
		fVar8 = this._alphaValue;
		fVar7 = (float)*piVar5 / 255.0;
		if ((float)*piVar5 / 255.0 <= fVar8) {
			fVar7 = fVar8;
		}
		pUVar3 = this._preview;
		bVar4 = ((Object)pUVar3 != null);
		if (bVar4) {
			pUVar3 = this._preview;
			if (pUVar3 == null) {
	label_05cb9996: ;
				throw new NullReferenceException();
			}
			fVar8 = 1.0;
			if (fVar7 <= 1.0) {
				fVar8 = fVar7;
			}
			local_38 = UVar9.b;
			UVar10.a = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
			UVar10.b = local_38;
			UVar10.r = UVar9.r;
			UVar10.g = UVar9.g;
			pUVar3.set_color(UVar10);
		}
		if (syncInputs) {
			this.SyncInputValuesFromCurrentColor();
			return;
		}
		return;
	}

	[Token(Token = "0x60048F4")]
	[Address(RVA = "0x5BBAE90", Offset = "0x5BB9E90", VA = "0x5BBAE90")]
	private void SyncInputValuesFromCurrentColor()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$SyncInputValuesFromCurrentColor): 40 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		ColorSetting pSVar3;
		IntSetting pSVar4;
		InputSettingElement pUVar5;
		InputField pUVar6;
		StringSetting __this_00;
		double dVar7;
		double dVar8;
		bool bVar9;
		int piVar10;
		String pSVar11;
		MethodInfo pMVar12;
		MethodInfo pMVar13;
		float fVar14;
		float fVar15;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar16;
		uint uVar17;
		Color UVar18;
		Color local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[24];

		this._suppressInputCallbacks = true;
		uVar16 = 0;
		uVar17 = 0;
		pMVar12 = null;
		UVar18 = Color.HSVToRGB(this._hue, this._saturation, this._value, true);
		local_48._8_4_ = extraout_XMM0_Dc;
		local_48._0_8_ = UVar18._0_8_;
		local_48._12_4_ = extraout_XMM0_Dd;
		local_38._8_4_ = uVar16;
		local_38._0_8_ = UVar18._8_8_;
		local_38._12_4_ = uVar17;
		pSVar3 = this._setting;
		if (pSVar3 == null) {
			pSVar4 = this._alpha;
			if (pSVar4 == null) goto label_05cbb6ab;
			piVar10 = &pSVar4.MinValue;
		}
		else {
			piVar10 = &pSVar3.MinAlpha;
		}
		fVar15 = this._alphaValue;
		fVar14 = (float)*piVar10 / 255.0;
		if ((float)*piVar10 / 255.0 <= fVar15) {
			fVar14 = fVar15;
		}
		local_58 = ZEXT416((uint)fVar14);
		pSVar4 = this._red;
		fVar15 = (float)local_48._0_4_ * 255.0;
		dVar7 = (double)fVar15;
		pMVar13 = (MethodInfo)&local_68;
		dVar8 = modf(dVar7, (double)pMVar13, pMVar12);
		if (0.0 <= fVar15) {
			if ((dVar8 != 0.5) || (NAN(dVar8))) {
				dVar7 = floor(dVar7 + 0.5, pMVar13);
			}
			else {
				dVar7 = (double)CONCAT44(local_68.g, local_68.r);
				if (((long)dVar7 & 1U) != 0) {
					dVar7 = dVar7 + 1.0;
				}
			}
		}
		else if ((dVar8 != -0.5) || (NAN(dVar8))) {
			dVar7 = ceil(dVar7 + -0.5, pMVar13);
		}
		else {
			dVar7 = (double)CONCAT44(local_68.g, local_68.r);
			if (((long)dVar7 & 1U) != 0) {
				dVar7 = dVar7 + -1.0;
			}
		}
		if (pSVar4 == null) goto label_05cbb6ab;
		pMVar12 = (MethodInfo)(ulong)(uint)(int)dVar7;
		pSVar4.Value = (int)dVar7;
		pSVar4 = this._green;
		uVar16 = local_48._4_4_;
		dVar7 = (double)((float)uVar16 * 255.0);
		pMVar13 = (MethodInfo)&local_68;
		dVar8 = modf(dVar7, (double)pMVar13, pMVar12);
		if (0.0 <= (float)uVar16 * 255.0) {
			if ((dVar8 != 0.5) || (NAN(dVar8))) {
				dVar7 = floor(dVar7 + 0.5, pMVar13);
			}
			else {
				dVar7 = (double)CONCAT44(local_68.g, local_68.r);
				if (((long)dVar7 & 1U) != 0) {
					dVar7 = dVar7 + 1.0;
				}
			}
		}
		else if ((dVar8 != -0.5) || (NAN(dVar8))) {
			dVar7 = ceil(dVar7 + -0.5, pMVar13);
		}
		else {
			dVar7 = (double)CONCAT44(local_68.g, local_68.r);
			if (((long)dVar7 & 1U) != 0) {
				dVar7 = dVar7 + -1.0;
			}
		}
		if (pSVar4 == null) goto label_05cbb6ab;
		pMVar12 = (MethodInfo)(ulong)(uint)(int)dVar7;
		pSVar4.Value = (int)dVar7;
		pSVar4 = this._blue;
		fVar15 = (float)local_38._0_4_ * 255.0;
		dVar7 = (double)fVar15;
		pMVar13 = (MethodInfo)&local_68;
		dVar8 = modf(dVar7, (double)pMVar13, pMVar12);
		if (0.0 <= fVar15) {
			if ((dVar8 != 0.5) || (NAN(dVar8))) {
				dVar7 = floor(dVar7 + 0.5, pMVar13);
			}
			else {
				dVar7 = (double)CONCAT44(local_68.g, local_68.r);
				if (((long)dVar7 & 1U) != 0) {
					dVar7 = dVar7 + 1.0;
				}
			}
		}
		else if ((dVar8 != -0.5) || (NAN(dVar8))) {
			dVar7 = ceil(dVar7 + -0.5, pMVar13);
		}
		else {
			dVar7 = (double)CONCAT44(local_68.g, local_68.r);
			if (((long)dVar7 & 1U) != 0) {
				dVar7 = dVar7 + -1.0;
			}
		}
		if (pSVar4 == null) goto label_05cbb6ab;
		pMVar12 = (MethodInfo)(ulong)(uint)(int)dVar7;
		pSVar4.Value = (int)dVar7;
		pSVar3 = this._setting;
		pSVar4 = this._alpha;
		if (pSVar3 == null) {
			if (pSVar4 == null) goto label_05cbb6ab;
			piVar10 = &pSVar4.MinValue;
		}
		else {
			piVar10 = &pSVar3.MinAlpha;
		}
		fVar15 = 1.0;
		if ((float)local_58._0_4_ <= 1.0) {
			fVar15 = (float)local_58._0_4_;
		}
		fVar15 = (float)(-(uint)(0.0 <= (float)local_58._0_4_) & (uint)fVar15);
		local_58 = ZEXT416((uint)fVar15);
		if (fVar15 <= (float)*piVar10 / 255.0) {
			fVar15 = (float)*piVar10 / 255.0;
		}
		dVar7 = (double)(fVar15 * 255.0);
		pMVar13 = (MethodInfo)&local_68;
		dVar8 = modf(dVar7, (double)pMVar13, pMVar12);
		if (0.0 <= fVar15 * 255.0) {
			if ((dVar8 != 0.5) || (NAN(dVar8))) {
				dVar7 = floor(dVar7 + 0.5, pMVar13);
			}
			else {
				dVar7 = (double)CONCAT44(local_68.g, local_68.r);
				if (((long)dVar7 & 1U) != 0) {
					dVar7 = dVar7 + 1.0;
				}
			}
		}
		else if ((dVar8 != -0.5) || (NAN(dVar8))) {
			dVar7 = ceil(dVar7 + -0.5, pMVar13);
		}
		else {
			dVar7 = (double)CONCAT44(local_68.g, local_68.r);
			if (((long)dVar7 & 1U) != 0) {
				dVar7 = dVar7 + -1.0;
			}
		}
		if (pSVar4 == null) goto label_05cbb6ab;
		pSVar4.Value = (int)dVar7;
		pUVar5 = this._redInput;
		bVar9 = ((Object)pUVar5 != null);
		if (bVar9) {
			pUVar5 = this._redInput;
			if ((pUVar5 == null) ||(pUVar6 = pUVar5._inputField, pUVar6 == null)) goto label_05cbb6ab;
			if (pUVar6.m_AllowInput != false) goto label_05cbb410;
			pUVar5.SyncElement();
			pUVar5 = this._greenInput;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05cbb410: ;
			pUVar5 = this._greenInput;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar9 = ((Object)pUVar5 != null);
		if (bVar9) {
			pUVar5 = this._greenInput;
			if ((pUVar5 == null) ||(pUVar6 = pUVar5._inputField, pUVar6 == null)) goto label_05cbb6ab;
			if (pUVar6.m_AllowInput != false) goto label_05cbb463;
			pUVar5.SyncElement();
			pUVar5 = this._blueInput;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05cbb463: ;
			pUVar5 = this._blueInput;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar9 = ((Object)pUVar5 != null);
		if (bVar9) {
			pUVar5 = this._blueInput;
			if ((pUVar5 == null) ||(pUVar6 = pUVar5._inputField, pUVar6 == null)) goto label_05cbb6ab;
			if (pUVar6.m_AllowInput != false) goto label_05cbb4b6;
			pUVar5.SyncElement();
			pUVar5 = this._alphaInput;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05cbb4b6: ;
			pUVar5 = this._alphaInput;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar9 = ((Object)pUVar5 != null);
		if (bVar9) {
			pUVar5 = this._alphaInput;
			if ((pUVar5 == null) ||(pUVar6 = pUVar5._inputField, pUVar6 == null)) goto label_05cbb6ab;
			if (pUVar6.m_AllowInput != false) goto label_05cbb509;
			pUVar5.SyncElement();
			cVar1 = this._hexInputActive;
		}
		else {
	label_05cbb509: ;
			cVar1 = this._hexInputActive;
		}
		if (cVar1 == false) {
			local_58._4_4_ = local_58._0_4_;
			local_58._0_4_ = local_38._0_4_;
			local_58._8_4_ = local_38._8_4_;
			local_58._12_4_ = local_38._12_4_;
			__this_00 = this._hex;
			local_68.b = local_58._0_4_;
			local_68.a = local_58._4_4_;
			local_68.r = (float)local_48._0_4_;
			local_68.g = (float)local_48._4_4_;
			pSVar11 = ColorUtility.ToHtmlStringRGBA(ref local_68);
			pSVar11 = String.Concat("#", pSVar11);
			if (__this_00 == null) {
	label_05cbb6ab: ;
				throw new NullReferenceException();
			}
			__this_00.Value = (object)pSVar11;
			pUVar5 = this._hexInput;
			bVar9 = ((Object)pUVar5 != null);
			if (bVar9) {
				pUVar5 = this._hexInput;
				if (pUVar5 == null) goto label_05cbb6ab;
				pUVar5.SyncElement();
			}
		}
		this._suppressInputCallbacks = false;
		return;
	}

	[Token(Token = "0x60048F5")]
	[Address(RVA = "0x5BBBCF0", Offset = "0x5BBACF0", VA = "0x5BBBCF0")]
	private new void Update()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$Update): clean
		if (this._svTextureDirty != false) {
			this.UpdateSVTexture();
			this._svTextureDirty = false;
		}
		if (this._alphaTextureDirty != false) {
			this.UpdateAlphaTexture();
			this._alphaTextureDirty = false;
		}
		return;
	}

	[Token(Token = "0x60048F6")]
	[Address(RVA = "0x5BB9850", Offset = "0x5BB8850", VA = "0x5BB9850")]
	private void MarkTextureDirty(bool svDirty, bool alphaDirty)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$MarkTextureDirty): 4 lines keep C-only constructs
		bool pbVar1;

		pbVar1 = &this._svTextureDirty;
		*pbVar1 = (bool)(*pbVar1 | svDirty);
		pbVar1 = &this._alphaTextureDirty;
		*pbVar1 = (bool)(*pbVar1 | alphaDirty);
		return;
	}

	[Token(Token = "0x60048F7")]
	[Address(RVA = "0x5BB99A0", Offset = "0x5BB89A0", VA = "0x5BB99A0")]
	private void RefreshTextures()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$RefreshTextures): clean
		if (this._svTextureDirty != false) {
			this.UpdateSVTexture();
			this._svTextureDirty = false;
		}
		if (this._alphaTextureDirty != false) {
			this.UpdateAlphaTexture();
			this._alphaTextureDirty = false;
		}
		return;
	}

	[Token(Token = "0x60048F8")]
	[Address(RVA = "0x5BB9270", Offset = "0x5BB8270", VA = "0x5BB9270")]
	private void EnsureTextures()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$EnsureTextures): 18 lines keep C-only constructs
		Texture2D* targetAddress;
		Texture2D* targetAddress_00;
		Texture2D* targetAddress_01;
		RawImage pUVar1;
		bool bVar2;
		int iVar3;
		Texture2D pUVar4;
		Color32[] pUVar5;
		ulong uVar6;
		Color UVar7;

		pUVar4 = this._hueTexture;
		targetAddress = &this._hueTexture;
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			pUVar4 = new Texture2D(1, 0x100, 4, false);
			*targetAddress = pUVar4;
			if ((Texture)*targetAddress == null) goto label_05cb967d;
			(*targetAddress).wrapMode = 1;
			if ((Texture)*targetAddress == null) goto label_05cb967d;
			(*targetAddress).filterMode = 1;
			pUVar5 = (Color32[])new Color32[0x100];
			if (pUVar5 == null) {
				UVar7 = Color.HSVToRGB(1.0, 1.0, 1.0, true);
				il2cpp_runtime_helper_05334d00(UVar7._0_8_, UVar7._8_8_, 0);
				throw new NullReferenceException();
			}
			uVar6 = 0;
			do {
				UVar7 = Color.HSVToRGB((float)(int)uVar6 / -255.0 + 1.0, 1.0, 1.0, true);
				iVar3 = il2cpp_runtime_helper_05334d00(UVar7._0_8_, UVar7._8_8_, 0);
				if ((uint)pUVar5.Length <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				pUVar5[uVar6]._overlap_0._at_rgba.rgba = iVar3;
				uVar6 = uVar6 + 1;
			} while (uVar6 != 0x100);
			if (*targetAddress == null) goto label_05cb967d;
			(*targetAddress).SetPixels32(pUVar5);
			if (*targetAddress == null) goto label_05cb967d;
			(*targetAddress).Apply(false, true);
		}
		pUVar4 = this._svTexture;
		targetAddress_00 = &this._svTexture;
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			pUVar4 = new Texture2D(0xc0, 0xc0, 4, false);
			*targetAddress_00 = pUVar4;
			if ((Texture)*targetAddress_00 == null) goto label_05cb967d;
			(*targetAddress_00).wrapMode = 1;
			if ((Texture)*targetAddress_00 == null) goto label_05cb967d;
			(*targetAddress_00).filterMode = 1;
			pUVar5 = (Color32[])new Color32[0x9000];
			this._svPixels = pUVar5;
		}
		pUVar4 = this._alphaTexture;
		targetAddress_01 = &this._alphaTexture;
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			pUVar4 = new Texture2D(0xc0, 1, 4, false);
			*targetAddress_01 = pUVar4;
			if ((Texture)*targetAddress_01 == null) goto label_05cb967d;
			(*targetAddress_01).wrapMode = 1;
			if ((Texture)*targetAddress_01 == null) goto label_05cb967d;
			(*targetAddress_01).filterMode = 1;
			pUVar5 = (Color32[])new Color32[0xc0];
			this._alphaPixels = pUVar5;
		}
		pUVar1 = this._hueImage;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._hueImage;
			if (pUVar1 == null) goto label_05cb967d;
			pUVar1.texture = (Texture)*targetAddress;
		}
		pUVar1 = this._svImage;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._svImage;
			if (pUVar1 == null) goto label_05cb967d;
			pUVar1.texture = (Texture)*targetAddress_00;
		}
		pUVar1 = this._alphaImage;
		bVar2 = ((Object)pUVar1 != null);
		if (!bVar2) {
			return;
		}
		pUVar1 = this._alphaImage;
		if (pUVar1 != null) {
			pUVar1.texture = (Texture)*targetAddress_01;
			return;
		}
	label_05cb967d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048F9")]
	[Address(RVA = "0x5BBBD30", Offset = "0x5BBAD30", VA = "0x5BBBD30")]
	private void UpdateSVTexture()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$UpdateSVTexture): 1 lines keep C-only constructs
		Texture2D pUVar1;
		Color32[] pUVar2;
		bool bVar3;
		int iVar4;
		int iVar5;
		int iVar6;
		int iVar7;
		Color UVar8;

		pUVar1 = this._svTexture;
		iVar7 = 0;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		iVar6 = 0;
		do {
			iVar5 = 0;
			do {
				pUVar2 = this._svPixels;
				UVar8 = Color.HSVToRGB(this._hue, (float)iVar5 / 191.0, (float)iVar6 / 191.0, true);
				iVar4 = il2cpp_runtime_helper_05334d00(UVar8._0_8_, UVar8._8_8_, 0);
				if (pUVar2 == null) goto label_05cbbe71;
				if ((uint)pUVar2.Length <= (uint)(iVar7 + iVar5)) {
					throw new IndexOutOfRangeException();
				}
				pUVar2[iVar7 + iVar5]._overlap_0._at_rgba.rgba = iVar4;
				iVar5 = iVar5 + 1;
			} while (iVar5 != 0xc0);
			iVar6 = iVar6 + 1;
			iVar7 = iVar7 + 0xc0;
		} while (iVar6 != 0xc0);
		pUVar1 = this._svTexture;
		if (pUVar1 != null) {
			pUVar1.SetPixels32(this._svPixels);
			pUVar1 = this._svTexture;
			if (pUVar1 != null) {
				pUVar1.Apply(false, false);
				return;
			}
		}
	label_05cbbe71: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048FA")]
	[Address(RVA = "0x5BBBE80", Offset = "0x5BBAE80", VA = "0x5BBBE80")]
	private void UpdateAlphaTexture()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$UpdateAlphaTexture): 1 lines keep C-only constructs
		Texture2D pUVar1;
		Color32[] pUVar2;
		bool bVar3;
		int iVar4;
		ulong uVar5;
		Color UVar6;
		float local_38;
		float local_28;

		pUVar1 = this._alphaTexture;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		UVar6 = Color.HSVToRGB(this._hue, this._saturation, this._value, true);
		if ((this._setting != null) ||(this._alpha != null)) {
			uVar5 = 0;
			do {
				pUVar2 = this._alphaPixels;
				local_38 = UVar6.b;
				local_28 = UVar6.r;
				iVar4 = il2cpp_runtime_helper_05334d00(local_28, local_38, 0);
				if (pUVar2 == null) goto label_05cbc020;
				if ((uint)pUVar2.Length <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				pUVar2[uVar5]._overlap_0._at_rgba.rgba = iVar4;
				uVar5 = uVar5 + 1;
			} while (uVar5 != 0xc0);
			pUVar1 = this._alphaTexture;
			if (pUVar1 != null) {
				pUVar1.SetPixels32(this._alphaPixels);
				pUVar1 = this._alphaTexture;
				if (pUVar1 != null) {
					pUVar1.Apply(false, false);
					return;
				}
			}
		}
	label_05cbc020: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048FB")]
	[Address(RVA = "0x5BBB8A0", Offset = "0x5BBA8A0", VA = "0x5BBB8A0")]
	private void UpdatePickerHandles()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$UpdatePickerHandles): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		RectTransform pUVar3;
		IntSetting pSVar4;
		bool bVar5;
		ColorSetting pSVar6;
		int piVar7;
		float fVar8;
		Vector2 value;
		Vector2 value_00;
		float fVar9;
		Rect UVar10;
		Rect UVar11;
		float local_28;

		pUVar3 = this._svRect;
		bVar5 = ((Object)pUVar3 != null);
		if (bVar5) {
			pUVar3 = this._svHandle;
			bVar5 = ((Object)pUVar3 != null);
			if (bVar5) {
				pUVar3 = this._svRect;
				if (pUVar3 == null) goto label_05cbbbf9;
				UVar10 = pUVar3.rect;
				pUVar3 = this._svRect;
				if (pUVar3 == null) goto label_05cbbbf9;
				UVar11 = pUVar3.rect;
				pUVar3 = this._svHandle;
				if (pUVar3 == null) goto label_05cbbbf9;
				local_28 = UVar10.m_Width;
				fVar9 = UVar11.m_Height + -6.0;
				uVar1 = this._saturation;
				uVar2 = this._value;
				value.x = (float)uVar1 * (local_28 + -6.0) + (local_28 + -6.0) * -0.5;
				value.y = (float)uVar2 * fVar9 + fVar9 * -0.5;
				pUVar3.anchoredPosition = value;
			}
		}
		pUVar3 = this._hueRect;
		bVar5 = ((Object)pUVar3 != null);
		if (bVar5) {
			pUVar3 = this._hueHandle;
			bVar5 = ((Object)pUVar3 != null);
			if (bVar5) {
				pUVar3 = this._hueRect;
				if (pUVar3 == null) goto label_05cbbbf9;
				UVar10 = pUVar3.rect;
				pUVar3 = this._hueHandle;
				if (pUVar3 == null) goto label_05cbbbf9;
				fVar9 = UVar10.m_Height + -6.0;
				pUVar3.anchoredPosition = (Vector2)((ulong)(uint)((1.0 - this._hue) * fVar9 + fVar9 * -0.5) << 0x20);
			}
		}
		pUVar3 = this._alphaRect;
		bVar5 = ((Object)pUVar3 != null);
		if (!bVar5) {
			return;
		}
		pUVar3 = this._alphaHandle;
		bVar5 = ((Object)pUVar3 != null);
		if (!bVar5) {
			return;
		}
		pUVar3 = this._alphaRect;
		if (pUVar3 == null) goto label_05cbbbf9;
		UVar10 = pUVar3.rect;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			pSVar6 = this._setting;
			if (pSVar6 == null) goto label_05cbbb51;
	label_05cbbb28: ;
			piVar7 = &pSVar6.MinAlpha;
		}
		else {
			pSVar6 = this._setting;
			if (pSVar6 != null) goto label_05cbbb28;
	label_05cbbb51: ;
			pSVar4 = this._alpha;
			if (pSVar4 == null) goto label_05cbbbf9;
			piVar7 = &pSVar4.MinValue;
		}
		fVar9 = (float)*piVar7 / 255.0;
		if ((fVar9 != 1.0) || (NAN(fVar9))) {
			fVar8 = (this._alphaValue - fVar9) / (1.0 - fVar9);
			fVar9 = 1.0;
			if (fVar8 <= 1.0) {
				fVar9 = fVar8;
			}
			fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
			pUVar3 = this._alphaHandle;
		}
		else {
			fVar9 = 0.0;
			pUVar3 = this._alphaHandle;
		}
		if (pUVar3 != null) {
			fVar8 = UVar10.m_Width + -6.0;
			value_00.y = 0.0;
			value_00.x = fVar8 * fVar9 + fVar8 * -0.5;
			pUVar3.anchoredPosition = value_00;
			return;
		}
	label_05cbbbf9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048FC")]
	[Address(RVA = "0x5BBBC00", Offset = "0x5BBAC00", VA = "0x5BBBC00")]
	private Color GetCurrentColor()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$GetCurrentColor): 3 lines keep C-only constructs
		ColorSetting pSVar1;
		IntSetting pSVar2;
		int piVar3;
		float fVar4;
		float fVar5;
		Color UVar6;
		Color UVar7;

		UVar6 = Color.HSVToRGB(this._hue, this._saturation, this._value, true);
		UVar7._0_8_ = UVar6._0_8_;
		pSVar1 = this._setting;
		if (pSVar1 == null) {
			pSVar2 = this._alpha;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			piVar3 = &pSVar2.MinValue;
		}
		else {
			piVar3 = &pSVar1.MinAlpha;
		}
		fVar5 = this._alphaValue;
		fVar4 = (float)*piVar3 / 255.0;
		if ((float)*piVar3 / 255.0 <= fVar5) {
			fVar4 = fVar5;
		}
		fVar5 = 1.0;
		if (fVar4 <= 1.0) {
			fVar5 = fVar4;
		}
		UVar7.a = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
		UVar7.b = UVar6.b;
		return (Color)UVar7;
	}

	[Token(Token = "0x60048FD")]
	[Address(RVA = "0x5BBBC90", Offset = "0x5BBAC90", VA = "0x5BBBC90")]
	private string GetHexString(Color color)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$GetHexString): clean
		String pSVar1;
		Color UStack_10;

		UStack_10.r = color.r;
		UStack_10.g = color.g;
		UStack_10.b = color.b;
		UStack_10.a = color.a;
		pSVar1 = ColorUtility.ToHtmlStringRGBA(ref UStack_10);
		pSVar1 = String.Concat("#", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60048FE")]
	[Address(RVA = "0x5BBAAB0", Offset = "0x5BB9AB0", VA = "0x5BBAAB0")]
	private float GetMinAlpha01()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$GetMinAlpha01): clean
		ColorSetting pSVar1;
		IntSetting pSVar2;

		pSVar1 = this._setting;
		if (pSVar1 != null) {
			return (float)pSVar1.MinAlpha / 255.0;
		}
		pSVar2 = this._alpha;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return (float)pSVar2.MinValue / 255.0;
	}

	[Token(Token = "0x60048FF")]
	[Address(RVA = "0x5BBA450", Offset = "0x5BB9450", VA = "0x5BBA450")]
	private Color255 GetCurrentColor255()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$GetCurrentColor255): 64 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		ColorSetting pSVar3;
		IntSetting pSVar4;
		double dVar5;
		_union_14 _Var6;
		byte[] auVar7 = new byte[16];
		int piVar8;
		Color255 __this_00;
		int iVar9;
		int a;
		MethodInfo method_00;
		_union_14 p_Var10;
		int r;
		int b;
		int g;
		float fVar11;
		float fVar12;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar13;
		uint uVar14;
		Color UVar15;
		_union_14 local_90;
		byte[] local_88 = new byte[8];
		float fStack_80;
		float fStack_7c;
		_union_14 local_70;
		byte[] local_68 = new byte[16];
		_union_14 local_50;
		byte[] local_48 = new byte[16];
		double local_30;

		uVar13 = 0;
		uVar14 = 0;
		method_00 = null;
		UVar15 = Color.HSVToRGB(this._hue, this._saturation, this._value, true);
		pSVar3 = this._setting;
		local_68._8_4_ = uVar13;
		local_68._0_8_ = UVar15._8_8_;
		local_68._12_4_ = uVar14;
		if (pSVar3 == null) {
			pSVar4 = this._alpha;
			if (pSVar4 == null) goto label_05cba9c5;
			piVar8 = &pSVar4.MinValue;
		}
		else {
			piVar8 = &pSVar3.MinAlpha;
		}
		fVar11 = this._alphaValue;
		fVar12 = (float)*piVar8 / 255.0;
		if ((float)*piVar8 / 255.0 <= fVar11) {
			fVar12 = fVar11;
		}
		local_48 = ZEXT416((uint)fVar12);
		fStack_80 = (float)extraout_XMM0_Dc;
		local_88 = (byte[])UVar15._0_8_;
		fStack_7c = (float)extraout_XMM0_Dd;
		fVar11 = UVar15.r;
		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			fVar11 = (float)local_88._0_4_;
		}
		local_50._0_4_ = fVar11 * 255.0;
		fVar11 = fVar11 * 255.0;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar11 = (float)local_50._0_4_;
		}
		local_70.genericMethod = (IntPtr)(double)fVar11;
		p_Var10 = &local_90;
		dVar5 = modf((double)local_70.genericMethod, (double)p_Var10, method_00);
		if (0.0 <= (float)local_50._0_4_) {
			if ((dVar5 == 0.5) && (!NAN(dVar5))) {
				local_50.genericMethod = local_90.genericMethod;
				if (((long)(double)local_90.genericMethod & 1U) != 0) {
					local_50.genericMethod = (IntPtr)((double)local_90.genericMethod + 1.0);
				}
				goto label_05cba5be;
			}
			dVar5 = floor((double)local_70.genericMethod + 0.5, (MethodInfo)p_Var10);
			uVar13 = SUB84(dVar5, 0);
			uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
	label_05cba7b2: ;
			local_50._4_4_ = uVar14;
			local_50._0_4_ = uVar13;
			local_88._0_4_ = local_88._4_4_;
		}
		else {
			if ((dVar5 != -0.5) || (NAN(dVar5))) {
				dVar5 = ceil((double)local_70.genericMethod + -0.5, (MethodInfo)p_Var10);
				uVar13 = SUB84(dVar5, 0);
				uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
				goto label_05cba7b2;
			}
			local_50.genericMethod = local_90.genericMethod;
			if (((long)(double)local_90.genericMethod & 1U) != 0) {
				local_50.genericMethod = (IntPtr)((double)local_90.genericMethod + -1.0);
			}
	label_05cba5be: ;
			local_88._0_4_ = local_88._4_4_;
		}
		local_88._4_4_ = local_88._0_4_;
		fStack_80 = (float)local_88._0_4_;
		fStack_7c = (float)local_88._0_4_;
		local_88._0_4_ = (float)local_88._0_4_ * 255.0;
		fVar11 = (float)local_88._0_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar11 = (float)local_88._0_4_;
		}
		local_70.genericMethod = (IntPtr)(double)fVar11;
		p_Var10 = &local_90;
		dVar5 = modf((double)local_70.genericMethod, (double)p_Var10, method_00);
		if (0.0 <= (float)local_88._0_4_) {
			if ((dVar5 == 0.5) && (!NAN(dVar5))) {
				local_70.genericMethod = local_90.genericMethod;
				if (((long)(double)local_90.genericMethod & 1U) != 0) {
					local_70.genericMethod = (IntPtr)((double)local_90.genericMethod + 1.0);
				}
				goto label_05cba693;
			}
			dVar5 = floor((double)local_70.genericMethod + 0.5, (MethodInfo)p_Var10);
			uVar13 = SUB84(dVar5, 0);
			uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
	label_05cba7fb: ;
			local_70._4_4_ = uVar14;
			local_70._0_4_ = uVar13;
		}
		else {
			if ((dVar5 != -0.5) || (NAN(dVar5))) {
				dVar5 = ceil((double)local_70.genericMethod + -0.5, (MethodInfo)p_Var10);
				uVar13 = SUB84(dVar5, 0);
				uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
				goto label_05cba7fb;
			}
			local_70.genericMethod = local_90.genericMethod;
			if (((long)(double)local_90.genericMethod & 1U) != 0) {
				local_70.genericMethod = (IntPtr)((double)local_90.genericMethod + -1.0);
			}
	label_05cba693: ;
		}
		local_68._0_4_ = (float)local_68._0_4_ * 255.0;
		fVar11 = (float)local_68._0_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar11 = (float)local_68._0_4_;
		}
		fVar12 = 1.0;
		if ((float)local_48._0_4_ <= 1.0) {
			fVar12 = (float)local_48._0_4_;
		}
		local_30 = (double)fVar11;
		p_Var10 = &local_90;
		dVar5 = modf(local_30, (double)p_Var10, method_00);
		_Var6 = local_90;
		if (0.0 <= (float)local_68._0_4_) {
			if ((dVar5 == 0.5) && (!NAN(dVar5))) {
				if (((long)(double)local_90.genericMethod & 1U) != 0) {
					_Var6.genericMethod = (IntPtr)((double)local_90.genericMethod + 1.0);
				}
				goto label_05cba77a;
			}
			dVar5 = floor(local_30 + 0.5, (MethodInfo)p_Var10);
			uVar13 = SUB84(dVar5, 0);
			uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
	label_05cba840: ;
			auVar7 = local_68;
			local_68._4_4_ = uVar14;
			local_68._0_4_ = uVar13;
			local_68._8_8_ = auVar7._8_8_;
		}
		else {
			if ((dVar5 != -0.5) || (NAN(dVar5))) {
				dVar5 = ceil(local_30 + -0.5, (MethodInfo)p_Var10);
				uVar13 = SUB84(dVar5, 0);
				uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
				goto label_05cba840;
			}
			if (((long)(double)local_90.genericMethod & 1U) != 0) {
				_Var6.genericMethod = (IntPtr)((double)local_90.genericMethod + -1.0);
			}
	label_05cba77a: ;
			local_68._0_8_ = _Var6.genericMethod;
		}
		local_48._4_4_ = local_48._4_4_ & local_88._4_4_;
		local_48._0_4_ = -(uint)(0.0 <= (float)local_48._0_4_) & (uint)((float)local_88._0_4_ * 255.0);
		local_48._8_4_ = local_48._8_4_ & (uint)fStack_80;
		local_48._12_4_ = local_48._12_4_ & (uint)fStack_7c;
		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		p_Var10 = &local_90;
		local_88 = (byte[])(double)(float)local_48._0_4_;
		dVar5 = modf((double)(float)local_48._0_4_, (double)p_Var10, method_00);
		if (0.0 <= (float)local_48._0_4_) {
			if ((dVar5 != 0.5) || (NAN(dVar5))) {
				local_90.genericMethod = (IntPtr)floor((double)local_88 + 0.5, (MethodInfo)p_Var10);
			}
			else if (((long)(double)local_90.genericMethod & 1U) != 0) {
				local_90.genericMethod = (IntPtr)((double)local_90.genericMethod + 1.0);
			}
		}
		else if ((dVar5 != -0.5) || (NAN(dVar5))) {
			local_90.genericMethod = (IntPtr)ceil((double)local_88 + -0.5, (MethodInfo)p_Var10);
		}
		else if (((long)(double)local_90.genericMethod & 1U) != 0) {
			local_90.genericMethod = (IntPtr)((double)local_90.genericMethod + -1.0);
		}
		pSVar3 = this._setting;
		if (pSVar3 != null) {
			iVar9 = (int)(double)local_90.genericMethod;
			b = (int)(double)local_68._0_8_;
			g = (int)(double)local_70.genericMethod;
			r = (int)(double)local_50.genericMethod;
			iVar2 = pSVar3.MinAlpha;
			a = 0xff;
			if (iVar9 < 0xff) {
				a = iVar9;
			}
			if (iVar9 < iVar2) {
				a = iVar2;
			}
			__this_00 = new Color255(r, g, b, a);
			return __this_00;
		}
	label_05cba9c5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004900")]
	[Address(RVA = "0x5BB99E0", Offset = "0x5BB89E0", VA = "0x5BB99E0")]
	private GameObject CreateTextureContainer(Transform parent, string name, float width, float height, out RectTransform textureRect)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$CreateTextureContainer): 13 lines keep C-only constructs
		Il2CppType handle;
		Type[] pSVar1;
		Type pSVar2;
		object pIVar3;
		GameObject __this_00;
		Transform pUVar4;
		LayoutElement pUVar5;
		Image pUVar6;
		GameObject __this_01;
		Transform parent_00;
		RectTransform pUVar7;

		pSVar1 = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 == null) goto label_05cb9edd;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cb9ee7;
		}
		if ((int)pSVar1.Length == 0) goto label_05cb9ee2;
		pSVar1[0] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cb9ee7;
		}
		if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05cb9ee2;
		pSVar1[1] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cb9ee7;
		}
		if ((uint)pSVar1.Length < 3) goto label_05cb9ee2;
		pSVar1[2] = pSVar2;
		__this_00 = new GameObject(name, pSVar1);
		if (__this_00 == null) {
	label_05cb9edd: ;
			throw new NullReferenceException();
		}
		pUVar4 = __this_00.transform;
		if (pUVar4 == null) goto label_05cb9edd;
		pUVar4.SetParent(parent, false);
		pUVar5 = __this_00.GetComponent<LayoutElement>();
		if (pUVar5 == null) goto label_05cb9edd;
		pUVar5.set_preferredWidth(width);
		pUVar5.set_preferredHeight(height);
		pUVar6 = __this_00.GetComponent<Image>();
		if (pUVar6 == null) goto label_05cb9edd;
		pUVar6.set_color((Color)(ZEXT816(0x3f00000000000000) << 0x40));
		pSVar1 = (Type[])new Type[3];
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar1 == null) goto label_05cb9edd;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cb9ee7;
		}
		if ((int)pSVar1.Length == 0) goto label_05cb9ee2;
		pSVar1[0] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_RawImage);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05cb9ee7;
		}
		if ((pSVar1.Length & 0xfffffffe) != 0) {
			pSVar1[1] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_ColorPickDragArea);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05cb9ee7: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if (2 < (uint)pSVar1.Length) {
				pSVar1[2] = pSVar2;
				__this_01 = new GameObject("Texture", pSVar1);
				if (__this_01 != null) {
					pUVar4 = __this_01.transform;
					parent_00 = __this_00.transform;
					if (pUVar4 != null) {
						pUVar4.SetParent(parent_00, false);
						pUVar7 = __this_01.GetComponent<RectTransform>();
						*textureRect = pUVar7;
						pUVar7 = *textureRect;
						if (pUVar7 != null) {
							pUVar7.anchorMin = (Vector2)(Vector2.zeroVector);
							pUVar7 = *textureRect;
							if (pUVar7 != null) {
								pUVar7.anchorMax = (Vector2)(Vector2.oneVector);
								if (*textureRect != null) {
									(*textureRect).offsetMin = (Vector2)0x4040000040400000;
									if (*textureRect != null) {
										(*textureRect).offsetMax = (Vector2)0xc0400000c0400000;
										return __this_00;
									}
								}
							}
						}
					}
				}
				goto label_05cb9edd;
			}
		}
	label_05cb9ee2: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004901")]
	[Address(RVA = "0x5BB9F00", Offset = "0x5BB8F00", VA = "0x5BB9F00")]
	private RawImage CreateTextureSurface(Transform container, string name, out RectTransform rect)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$CreateTextureSurface): clean
		Transform __this_00;
		RawImage __this_01;
		RectTransform pUVar1;

		if (container != null) {
			__this_00 = container.Find("Texture");
			if (__this_00 != null) {
				__this_01 = __this_00.GetComponent<RawImage>();
				if (__this_01 != null) {
					__this_01.name = name;
					__this_01.set_raycastTarget(true);
					pUVar1 = __this_00.GetComponent<RectTransform>() ;
					*rect = pUVar1;
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004902")]
	[Address(RVA = "0x5BBA000", Offset = "0x5BB9000", VA = "0x5BBA000")]
	private RectTransform CreateHandle(RectTransform parent, Vector2 size)
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$CreateHandle): 4 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		RectTransform __this_02;
		Image pUVar3;
		Shadow __this_03;
		Color UVar4;

		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05cba306: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05cba310;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05cba310;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Shadow);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_05cba310: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar1;
					__this_00 = new GameObject("Handle", components);
					if (__this_00 != null) {
						__this_01 = __this_00.transform;
						if (__this_01 != null) {
							__this_01.SetParent((Transform)parent, false);
							__this_02 = __this_00.GetComponent<RectTransform>();
							if (__this_02 != null) {
								__this_02.anchorMin = (Vector2)0x3f0000003f000000;
								__this_02.anchorMax = (Vector2)0x3f0000003f000000;
								__this_02.sizeDelta = size;
								pUVar3 = __this_00.GetComponent<Image>();
								if (pUVar3 != null) {
									UVar4.b = 1.0;
									UVar4.a = 0.85;
									UVar4.r = 1.0;
									UVar4.g = 1.0;
									pUVar3.set_color(UVar4);
									pUVar3.set_raycastTarget(false);
									__this_03 = __this_00.GetComponent<Shadow>();
									if (__this_03 != null) {
										__this_03.effectColor = (Color)(ZEXT816(0x3f66666600000000) << 0x40);
										__this_03.effectDistance = (Vector2)0xbf8000003f800000;
										return __this_02;
									}
								}
							}
						}
					}
					goto label_05cba306;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004903")]
	[Address(RVA = "0x5BBC030", Offset = "0x5BBB030", VA = "0x5BBC030")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$OnDestroy): clean
		Texture2D pUVar1;
		bool bVar2;

		pUVar1 = this._svTexture;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._svTexture;
			Object.Destroy((Object)pUVar1);
		}
		pUVar1 = this._alphaTexture;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._alphaTexture;
			Object.Destroy((Object)pUVar1);
		}
		pUVar1 = this._hueTexture;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._hueTexture;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x6004904")]
	[Address(RVA = "0x5BBC150", Offset = "0x5BBB150", VA = "0x5BBC150")]
	public ColorPickPopup()
	{
		// Lifted from source/cpp/UI/ColorPickPopup.c (UI.ColorPickPopup$$.ctor): clean
		IntSetting pSVar1;
		MethodInfo method_00;

		pSVar1 = new IntSetting(0, 0, 0xff);
		this._red = pSVar1;
		pSVar1 = new IntSetting(0, 0, 0xff);
		this._green = pSVar1;
		pSVar1 = new IntSetting(0, 0, 0xff);
		this._blue = pSVar1;
		pSVar1 = new IntSetting(0, 0, 0xff);
		this._alpha = pSVar1;
		method_00 = new StringSetting("#FFFFFFFF", 9);
		this._hex = (StringSetting)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ColorPickPopup.c.

	// UI.ColorPickPopup$$<Setup>b__53_0: clean
	private void Setup_b__53_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.ColorPickPopup$$<Setup>b__53_1: clean
	private void Setup_b__53_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
