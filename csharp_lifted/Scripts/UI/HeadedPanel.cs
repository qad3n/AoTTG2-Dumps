// ==================== AoTTG2 cross-reference ====================
// Type: UI.HeadedPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HeadedPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HeadedPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000794")]
internal class HeadedPanel : BasePanel
{
	[Token(Token = "0x400264D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform BottomBar;

	[Token(Token = "0x400264E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Transform TopBar;

	[Token(Token = "0x400264F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected Dictionary<string, Button> _topButtons;

	[Token(Token = "0x17000C88")]
	protected virtual string Title
	{
		[Token(Token = "0x6004931")]
		[Address(RVA = "0x5BBDFF0", Offset = "0x5BBCFF0", VA = "0x5BBDFF0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_Title): clean
			return "Default";
		}
	}

	[Token(Token = "0x17000C89")]
	protected virtual float TopBarHeight
	{
		[Token(Token = "0x6004932")]
		[Address(RVA = "0x5BBE020", Offset = "0x5BBD020", VA = "0x5BBE020", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_TopBarHeight): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000C8A")]
	protected virtual float BottomBarHeight
	{
		[Token(Token = "0x6004933")]
		[Address(RVA = "0x5BBE030", Offset = "0x5BBD030", VA = "0x5BBE030", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_BottomBarHeight): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000C8B")]
	protected virtual float BottomBarSpacing
	{
		[Token(Token = "0x6004934")]
		[Address(RVA = "0x5BBE040", Offset = "0x5BBD040", VA = "0x5BBE040", Slot = "38")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_BottomBarSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000C8C")]
	protected virtual int BottomBarPadding
	{
		[Token(Token = "0x6004935")]
		[Address(RVA = "0x5BBE050", Offset = "0x5BBD050", VA = "0x5BBE050", Slot = "39")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_BottomBarPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C8D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004936")]
		[Address(RVA = "0x5BBE060", Offset = "0x5BBD060", VA = "0x5BBE060", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C8E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004937")]
		[Address(RVA = "0x5BBE070", Offset = "0x5BBD070", VA = "0x5BBE070", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C8F")]
	protected virtual int TitleFontSize
	{
		[Token(Token = "0x6004938")]
		[Address(RVA = "0x5BBE080", Offset = "0x5BBD080", VA = "0x5BBE080", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_TitleFontSize): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C90")]
	protected virtual int ButtonFontSize
	{
		[Token(Token = "0x6004939")]
		[Address(RVA = "0x5BBE090", Offset = "0x5BBD090", VA = "0x5BBE090", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_ButtonFontSize): clean
			return 0x1c;
		}
	}

	[Token(Token = "0x17000C91")]
	protected virtual bool CategoryButtons
	{
		[Token(Token = "0x600493A")]
		[Address(RVA = "0x5BBE0A0", Offset = "0x5BBD0A0", VA = "0x5BBE0A0", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$get_CategoryButtons): clean
			return false;
		}
	}

	[Token(Token = "0x600493B")]
	[Address(RVA = "0x5BBE0B0", Offset = "0x5BBD0B0", VA = "0x5BBE0B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$Setup): 23 lines keep C-only constructs
		Transform* targetAddress;
		Transform* targetAddress_00;
		bool bVar1;
		int iVar2;
		int right;
		Transform pUVar3;
		RectTransform pUVar4;
		HorizontalLayoutGroup pUVar5;
		RectOffset __this_00;
		GameObject __this_01;
		Text pUVar6;
		RawImage pUVar7;
		String pSVar8;
		Texture pUVar9;
		Image pUVar10;
		float fVar11;
		Color UVar12;

		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("Background/TopBar");
			targetAddress = &this.TopBar;
			this.TopBar = pUVar3;
			pUVar3 = this.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.Find("Background/BottomBar");
				targetAddress_00 = &this.BottomBar;
				this.BottomBar = pUVar3;
				pUVar3 = this.TopBar;
				if (pUVar3 != null) {
					pUVar4 = pUVar3.GetComponent<RectTransform>() ;
					fVar11 = this.get_TopBarHeight();
					if (pUVar4 != null) {
						pUVar4.SetSizeWithCurrentAnchors(1, fVar11);
						if (*targetAddress_00 != null) {
							pUVar4 = (*targetAddress_00).GetComponent<RectTransform>();
							fVar11 = this.get_BottomBarHeight();
							if (pUVar4 != null) {
								pUVar4.SetSizeWithCurrentAnchors(1, fVar11);
								if (*targetAddress_00 != null) {
									pUVar5 = (*targetAddress_00).GetComponent<HorizontalLayoutGroup>();
									fVar11 = this.get_BottomBarSpacing();
									if (pUVar5 != null) {
										pUVar5.spacing = fVar11;
										if (*targetAddress_00 != null) {
											pUVar5 = (*targetAddress_00).GetComponent<HorizontalLayoutGroup>();
											iVar2 = this.get_BottomBarPadding();
											right = this.get_BottomBarPadding();
											__this_00 = new RectOffset(iVar2, right, 0, 0);
											if (pUVar5 != null) {
												pUVar5.padding = __this_00;
												if (*targetAddress != null) {
													pUVar3 = (*targetAddress).Find("Label");
													bVar1 = ((Object)pUVar3 != null);
													if (bVar1) {
														bVar1 = this.get_CategoryButtons();
														pUVar3 = this.TopBar;
														if (bVar1) {
															if (pUVar3 == null) goto label_05cbe7e0;
															pUVar3 = pUVar3.Find("Label");
															if (pUVar3 == null) goto label_05cbe7e0;
															__this_01 = pUVar3.gameObject;
															if (__this_01 == null) goto label_05cbe7e0;
															__this_01.SetActive(false);
														}
														else {
															if (pUVar3 == null) goto label_05cbe7e0;
															pUVar3 = pUVar3.Find("Label");
															if (pUVar3 == null) goto label_05cbe7e0;
															pUVar6 = pUVar3.GetComponent<Text>();
															iVar2 = this.get_TitleFontSize();
															if (pUVar6 == null) goto label_05cbe7e0;
															pUVar6.fontSize = iVar2;
															if (*targetAddress == null) goto label_05cbe7e0;
															pUVar3 = (*targetAddress).Find("Label");
															if (pUVar3 == null) goto label_05cbe7e0;
															pUVar6 = pUVar3.GetComponent<Text>();
															pSVar8 = this.get_ThemePanel();
															UVar12 = UIManager.GetThemeColor(pSVar8, "MainBody", "TitleColor", "DefaultPanel");
															if (pUVar6 == null) goto label_05cbe7e0;
															pUVar6.set_color(UVar12);
															pSVar8 = this.get_Title();
															this.SetTitle(pSVar8);
														}
													}
													if (*targetAddress != null) {
														pUVar7 = (*targetAddress).GetComponent<RawImage>();
														pSVar8 = this.get_ThemePanel();
														pUVar9 = (Texture)UIManager.GetThemeTexture(pSVar8, "MainBody", "HeaderTexture", "DefaultPanel");
														if (pUVar7 != null) {
															pUVar7.texture = pUVar9;
															if (*targetAddress != null) {
																pUVar7 = (*targetAddress).GetComponent<RawImage>();
																pSVar8 = this.get_ThemePanel();
																UVar12 = UIManager.GetThemeColor(pSVar8, "MainBody", "HeaderColor", "DefaultPanel");
																if (pUVar7 != null) {
																	pUVar7.set_color(UVar12);
																	if (*targetAddress_00 != null) {
																		pUVar7 = (*targetAddress_00).GetComponent<RawImage>();
																		pSVar8 = this.get_ThemePanel() ;
																		pUVar9 = (Texture)UIManager.GetThemeTexture(pSVar8, "MainBody", "HeaderTexture", "DefaultPanel");
																		if (pUVar7 != null) {
																			pUVar7.texture = pUVar9;
																			if (*targetAddress_00 != null) {
																				pUVar7 = (*targetAddress_00).GetComponent<RawImage>() ;
																				pSVar8 = this.get_ThemePanel();
																				UVar12 = UIManager.GetThemeColor(pSVar8, "MainBody", "HeaderColor", "DefaultPanel");
																				if (pUVar7 != null) {
																					pUVar7.set_color(UVar12) ;
																					pUVar3 = this.transform;
																					if (pUVar3 != null) {
																						pUVar3 = pUVar3.Find("Border");
																						if (pUVar3 != null) {
																							pUVar10 = pUVar3.GetComponent<Image>();
																							pSVar8 = this.get_ThemePanel();
																							UVar12 = UIManager.GetThemeColor(pSVar8, "MainBody", "BorderColor", "DefaultPanel");
																							if (pUVar10 != null) {
																								pUVar10.set_color(UVar12);
																								bVar1 = (*(this.klass.vtable)._42_get_CategoryButtons. methodPtr)(this,(this.klass.vtable). _42_get_CategoryButtons.method);
																								if (bVar1) {
																									this.SetupTopButtons();
																								}
																								this.Setup(parent);
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
	label_05cbe7e0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600493C")]
	[Address(RVA = "0x5BBE7F0", Offset = "0x5BBD7F0", VA = "0x5BBE7F0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$SetCategoryPanel): clean
		this.SetCategoryPanel(name);
		this.SetTopButton(name);
		return;
	}

	[Token(Token = "0x600493D")]
	[Address(RVA = "0x5BBE820", Offset = "0x5BBD820", VA = "0x5BBE820", Slot = "43")]
	protected virtual void SetTopButton(string name)
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$SetTopButton): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		Selectable __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
		byte puStack_28;

		SStack_48._dictionary = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._currentValue = null;
		pSVar1 = (Dictionary<object, object>)this._topButtons;
		if (pSVar1 != null) {
			iVar3 = pSVar1.Count;
			if (iVar3 < 1) {
				return;
			}
			pSVar1 = (Dictionary<object, object>)this._topButtons;
			if (pSVar1 != null) {
				__this_00 = pSVar1.Values ;
				if (__this_00 != null) {
					SStack_48 = __this_00.GetEnumerator();
					puStack_28 = (byte)&SStack_48;
					while(true) {
						bVar2 = SStack_48.MoveNext();
						if (!bVar2) break;
						if ((Selectable)SStack_48._currentValue ==null) {
							throw new NullReferenceException();
						}
						SStack_48._currentValue.interactable = true;
					}
					SStack_48.Dispose();
					pSVar1 = (Dictionary<object, object>)this._topButtons;
					if ((pSVar1 != null) &&(__this_01 = (Selectable)pSVar1.get_Item((object)name), __this_01 != null)) {
						__this_01.interactable = false;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600493E")]
	[Address(RVA = "0x5BBCA90", Offset = "0x5BBBA90", VA = "0x5BBCA90")]
	protected void SetTitle(string title)
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$SetTitle): clean
		Transform pUVar1;
		Text pUVar2;

		pUVar1 = this.TopBar;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Label");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<Text>();
				if (pUVar2 != null) {
					pUVar2.set_text(title);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600493F")]
	[Address(RVA = "0x5BBEA00", Offset = "0x5BBDA00", VA = "0x5BBEA00", Slot = "44")]
	protected virtual void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$SetupTopButtons): 13 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Transform __this_00;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		RectTransform __this_02;
		HorizontalLayoutGroup __this_03;
		float fVar4;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Rect UVar5;
		float local_74;
		byte[] local_70 = new byte[16];
		Component local_60;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		Component local_38;

		Canvas.ForceUpdateCanvases();
		pSVar1 = (Dictionary<object, object>)this._topButtons;
		if (pSVar1 != null) {
			__this_01 = pSVar1.Values;
			if (__this_01 != null) {
				local_70.GetEnumerator(__this_01) ;
				local_38 = local_60;
				local_48._0_8_ = local_70._0_8_;
				local_48._8_8_ = local_70._8_8_;
				local_70._0_8_ = null;
				local_74 = 0.0;
				local_70._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_48;
				while(true) {
					bVar2 = local_48.MoveNext();
					if (!bVar2) break;
					if (local_38 == null) {
						throw new NullReferenceException();
					}
					__this_02 = local_38.GetComponent<RectTransform>();
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					UVar5 = __this_02.rect;
					local_58._8_4_ = in_XMM1_Dc;
					local_58._0_8_ = UVar5._8_8_;
					local_58._12_4_ = in_XMM1_Dd;
					local_74 = local_74 + (float)local_58._0_4_;
				}
				local_48.Dispose();
				__this_00 = this.TopBar;
				if (__this_00 != null) {
					__this_03 = __this_00.GetComponent<HorizontalLayoutGroup>();
					fVar4 = this.GetWidth();
					local_58._0_4_ = fVar4;
					pSVar1 = (Dictionary<object, object>)this._topButtons;
					if (pSVar1 != null) {
						iVar3 = pSVar1.Count;
						if (__this_03 != null) {
							__this_03.spacing = ((float)local_58._0_4_ - local_74) / (float)(iVar3 + 1);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004940")]
	[Address(RVA = "0x5BBECA0", Offset = "0x5BBDCA0", VA = "0x5BBECA0", Slot = "31")]
	public override float GetPanelHeight()
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$GetPanelHeight): clean
		Transform pUVar1;
		Vector2 UVar2;
		RectTransform pUVar3;
		float fVar4;
		float fVar5;
		float fStack_24;

		pUVar1 = this.TopBar;
		if (pUVar1 != null) {
			pUVar3 = pUVar1.GetComponent<RectTransform>();
			if (pUVar3 != null) {
				UVar2 = pUVar3.sizeDelta;
				fVar4 = this.get_BorderVerticalPadding();
				pUVar1 = this.BottomBar;
				if (pUVar1 != null) {
					pUVar3 = pUVar1.GetComponent<RectTransform>() ;
					if (pUVar3 != null) {
						fStack_24 = UVar2.y;
						if (fStack_24 <= fVar4) {
							fStack_24 = fVar4;
						}
						UVar2 = pUVar3.sizeDelta;
						fVar5 = this.get_BorderVerticalPadding();
						fVar4 = UVar2.y;
						if (UVar2.y <= fVar5) {
							fVar4 = fVar5;
						}
						fVar5 = this.GetHeight();
						return (fVar5 - fStack_24) - fVar4;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004941")]
	[Address(RVA = "0x5BB76E0", Offset = "0x5BB66E0", VA = "0x5BB76E0")]
	public HeadedPanel()
	{
		// Lifted from source/cpp/UI/HeadedPanel.c (UI.HeadedPanel$$.ctor): clean
		MethodInfo method_00;

		method_00 = new Dictionary<string, Button>();
		this._topButtons = (Dictionary<string, Button>)method_00;
		base();
		return;
	}
}
