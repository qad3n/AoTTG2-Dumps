// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000284")]
internal sealed class AottgCharacterPickerPopup : PromptPopup
{
	[Token(Token = "0x4000CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private AottgInGameView _view;

	[Token(Token = "0x4000CF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private TMP_Text _title;

	[Token(Token = "0x4000CF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000CF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private SkillTooltipPopup _skillTooltip;

	[Token(Token = "0x4000CF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _dim;

	[Token(Token = "0x4000CF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private BaseSetting _setting;

	[Token(Token = "0x4000CF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string[] _options;

	[Token(Token = "0x4000CF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Action<int> _onSelect;

	[Token(Token = "0x1700018F")]
	protected override float Width
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x57AEEC0", Offset = "0x57ADEC0", VA = "0x57AEEC0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_Width): clean
			return 1120.0;
		}
	}

	[Token(Token = "0x17000190")]
	protected override float Height
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x57AEED0", Offset = "0x57ADED0", VA = "0x57AEED0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_Height): clean
			return 820.0;
		}
	}

	[Token(Token = "0x17000191")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x57AEEE0", Offset = "0x57ADEE0", VA = "0x57AEEE0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x57AEEF0", Offset = "0x57ADEF0", VA = "0x57AEEF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Setup): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> __this_00;
		BasePopup[] pUVar3;
		Vector2 value;
		RectTransform pUVar4;
		Transform pUVar5;
		RectTransform pUVar6;
		AottgInGameView pGVar7;
		FlexLayout __this_01;
		TMP_Text pTVar8;
		String text;
		GisketchNodeDefinition __this_02;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar9;
		GameObject pUVar10;
		ScrollRect pUVar11;
		SkillTooltipPopup pUVar12;
		MethodInfo pMVar13;
		RectTransform* targetAddress;
		float fVar14;
		float fVar15;
		float headerHeight;
		float footerHeight;

		this.Parent = parent;
		pUVar5 = this.transform;
		AottgInGameView.HidePrefab(pUVar5);
		pUVar6 = (RectTransform)this.transform;
		fVar14 = this.get_Width();
		fVar15 = this.get_Height();
		if (pUVar6 != null) {
			if (pUVar6.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			value.y = fVar15;
			value.x = fVar14;
			pUVar6.sizeDelta = value;
			pGVar7 = new AottgInGameView();
			this._view = pGVar7;
			pGVar7 = this._view;
			pUVar5 = this.transform;
			fVar14 = this.get_Width();
			fVar15 = this.get_Height();
			if (pGVar7 != null) {
				pUVar6 = (RectTransform)pGVar7.Panel(pUVar5, "inGamePauseDimOverlay", fVar14, fVar15, false, (Nullable<float>)0x0);
				pUVar4 = typeof(RectTransform);
				if (pUVar6 == null) {
					this._dim = null;
				}
				else if ((pUVar6.klass != typeof(RectTransform)) ||(this._dim = pUVar6, pUVar6.klass != pUVar4)) {
					throw new InvalidCastException();
				}
				targetAddress = &this._dim;
				if ((*targetAddress != null) &&(__this_01 = (*targetAddress).GetComponent<FlexLayout>(), __this_01 != null)) {
					__this_01.enabled = false;
					pUVar6 = *targetAddress;
					AottgInGameView.Position((Transform)pUVar6, (Vector2)(Vector2.zeroVector));
					pGVar7 = this._view;
					pUVar5 = this.transform;
					fVar14 = this.get_Width();
					fVar15 = this.get_Height();
					headerHeight = this.get_TopBarHeight();
					footerHeight = this.get_BottomBarHeight();
					if (pGVar7 != null) {
						pMVar13 = (MethodInfo *)"inGameFooter";
						pGVar7.PopupShell(pUVar5, fVar14, fVar15, headerHeight, footerHeight, ref this.TopBar, ref this.BottomBar, "inGameFooter");
						pGVar7 = this._view;
						pUVar5 = this.TopBar;
						fVar14 = this.get_Width();
						if (pGVar7 != null) {
							pTVar8 = pGVar7.Text(pUVar5, "", fVar14 + -48.0, 44.0, "inGameNeutralTitle");
							this._title = pTVar8;
							pUVar5 = this.BottomBar;
							pGVar7 = this._view;
							text = UIManager.GetLocaleCommon("Back");
							if (pGVar7 != null) {
								pGVar7.Button(pUVar5, text, "ingame.character.picker.back", null, 220.0, 44.0, 3);
								pGVar7 = this._view;
								pUVar5 = this.transform;
								__this_02 = new GisketchNodeDefinition();
								if (__this_02 != null) {
									__this_02.type = "ScrollView";
									__this_02.style = "clear";
									fVar14 = this.get_Width();
									width = AottgUi.Points(fVar14);
									fVar14 = this.GetPanelHeight();
									height = AottgUi.Points(fVar14);
									pGVar9 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
									__this_02.layout = pGVar9;
									pGVar9 = AottgUi.Layout("Column", null, null, null, null, 16.0, null, null, null, null, null, null, 24.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
									__this_02.contentLayout = pGVar9;
									if ((pGVar7 != null) &&(pUVar10 = pGVar7.Build(pUVar5, __this_02), pUVar10 != null)) {
										pUVar11 = pUVar10.GetComponent<ScrollRect>();
										this._scroll = pUVar11;
										pUVar11 = this._scroll;
										if (pUVar11 != null) {
											pUVar5 = pUVar11.transform;
											AottgInGameView.Position(pUVar5, (Vector2)(Vector2.zeroVector));
											pUVar5 = this.transform;
											pUVar10 = ElementFactory.CreateTooltipPopup<SkillTooltipPopup>(pUVar5, false);
											if (pUVar10 != null) {
												pUVar12 = pUVar10.GetComponent<SkillTooltipPopup>();
												this._skillTooltip = pUVar12;
												__this_00 = this._popups;
												if (__this_00 != null) {
													pUVar12 = this._skillTooltip;
													piVar1 = &__this_00._version;
													*piVar1 = *piVar1 + 1;
													pUVar3 = __this_00._items;
													if (pUVar3 != null) {
														uVar2 = __this_00._size;
														if (uVar2 < (uint)pUVar3.Length) {
															__this_00._size = uVar2 + 1;
															pUVar3[(int)uVar2] = (BasePopup)pUVar12;
															return;
														}
														__this_00.AddWithResize((object)pUVar12);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x57B08E0", Offset = "0x57AF8E0", VA = "0x57B08E0")]
	public void Show(BaseSetting setting, string title, string[] options, string[] icons, string[] tooltips, Action<int> onSelect, [Optional][DefaultParameterValue(144f)] float previewSize, [Optional] string[] labels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Show): 63 lines keep C-only constructs
		byte bVar1;
		TMP_Text pTVar2;
		RectTransform __this_00;
		ScrollRect pUVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		AottgInGameView pGVar6;
		String pSVar7;
		uint uVar8;
		ulong uVar9;
		bool bVar10;
		int iVar11;
		int iVar12;
		Canvas pUVar13;
		RectTransform pUVar14;
		Transform pUVar15;
		VirtualInvokeData pVVar16;
		Component __this_01;
		GameObject pUVar17;
		Object obj;
		object pIVar18;
		GisketchNodeDefinition __this_02;
		GisketchLayoutDefinition pGVar19;
		Transform parent;
		Transform parent_00;
		RawImage __this_03;
		Texture pUVar20;
		String pSVar21;
		Button __this_04;
		HoverTooltip pUVar22;
		ulong uVar23;
		String[] pSVar25;
		long lVar26;
		AottgCharacterPickerPopup __this_05;
		float fVar27;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		byte[] auVar28 = new byte[16];
		byte[] auVar29 = new byte[16];
		Rect UVar30;
		Vector3 UVar31;
		uint local_d4;
		AottgCharacterPickerPopup local_d0;
		float local_c4;
		String[] local_c0;
		object local_b8;
		float local_ac;
		byte[] local_a8 = new byte[12];
		float fStack_9c;
		object local_98;
		Nullable<float> local_90;
		object* local_88;
		object* local_80;
		byte[] local_78 = new byte[12];
		float fStack_6c;
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		String[] local_38;

		local_c4 = previewSize;
		local_c0 = options;
		local_38 = tooltips;
		local_b8 = null;
		local_98 = null;
		local_d4 = 0;
		this._setting = setting;
		this._options = local_c0;
		this._onSelect = onSelect;
		pTVar2 = this._title;
		if (pTVar2 != null) {
			pTVar2.set_text(title);
			pUVar13 = this.GetComponentInParent<Canvas>();
			if (((pUVar13 != null) &&(pUVar13 = pUVar13.rootCanvas, pUVar13 != null)) &&(pUVar14 = (RectTransform)pUVar13.transform, pUVar14 != null)) {
				if (pUVar14.klass != typeof(RectTransform)) {
					throw new InvalidCastException();
				}
				__this_00 = this._dim;
				UVar30 = pUVar14.rect;
				local_a8._8_4_ = in_XMM1_Dc;
				local_a8._0_8_ = UVar30._8_8_;
				fStack_9c = (float)in_XMM1_Dd;
				UVar31 = pUVar14.lossyScale;
				local_78._8_4_ = extraout_XMM0_Dc;
				local_78._0_8_ = UVar31._0_8_;
				fStack_6c = (float)extraout_XMM0_Dd;
				pUVar15 = this.transform;
				if (pUVar15 != null) {
					UVar31 = pUVar15.lossyScale;
					local_48._8_4_ = extraout_XMM0_Dc_00;
					local_48._0_8_ = UVar31._0_8_;
					local_48._12_4_ = extraout_XMM0_Dd_00;
					UVar30 = pUVar14.rect;
					local_68._8_4_ = in_XMM1_Dc;
					local_68._0_8_ = UVar30._8_8_;
					local_68._12_4_ = in_XMM1_Dd;
					UVar31 = pUVar14.lossyScale;
					local_58._8_4_ = extraout_XMM0_Dc_01;
					local_58._0_8_ = UVar31._0_8_;
					local_58._12_4_ = extraout_XMM0_Dd_01;
					pUVar15 = this.transform;
					if (pUVar15 != null) {
						UVar31 = pUVar15.lossyScale;
						if (__this_00 != null) {
							auVar28._0_4_ = (float)local_78._0_4_ * (float)local_a8._0_4_;
							auVar28._4_4_ = (float)local_58._4_4_ * (float)local_68._4_4_;
							auVar28._8_4_ = (float)local_78._8_4_ * (float)local_a8._8_4_;
							auVar28._12_4_ = fStack_6c * fStack_9c;
							auVar29._4_4_ = UVar31.y;
							auVar29._0_4_ = local_48._0_4_;
							auVar29._8_4_ = local_48._8_4_;
							auVar29._12_4_ = local_48._12_4_;
							auVar29 = divps(auVar28, auVar29);
							__this_00.sizeDelta = (Vector2)auVar29._0_8_;
							pUVar3 = this._scroll;
							if (pUVar3 != null) {
								local_a8._0_8_ = icons;
								pUVar14 = pUVar3.m_Content;
								local_d0 = this;
								if (pUVar14 != null) {
									local_b8 = (object)pUVar14.GetEnumerator();
									local_90.hasValue = false;
									local_90._1_3_ = 0;
									local_90.value = 0.0;
									local_88 = &local_b8;
									local_80 = &local_98;
									do {
										pIVar18 = local_b8;
										if (local_b8 == null) {
											throw new NullReferenceException();
										}
										pIVar4 = local_b8.klass;
										uVar23 = (ulong)(pIVar4._2).interface_offsets_count;
										bVar10 = pIVar18.Dispose();
										pIVar18 = local_b8;
										__this_05 = local_d0;
										if (!bVar10) {
											pIVar18 = (local_b8 as IDisposable);
											local_98 = pIVar18;
											if (pIVar18 == null) goto label_058b0e86;
											pIVar4 = pIVar18.klass;
											uVar23 = (ulong)(pIVar4._2).interface_offsets_count;
											if (uVar23 == 0) goto label_058b0e5f;
											pIVar5 = (pIVar4._1).interfaceOffsets;
											lVar26 = 0;
											goto label_058b0e50;
										}
										if (local_b8 == null) {
											throw new NullReferenceException();
										}
										pIVar4 = local_b8.klass;
										uVar23 = (ulong)(pIVar4._2).interface_offsets_count;
										__this_01 = (Component)pIVar18.Dispose();
										if (__this_01 == null) {
											throw new NullReferenceException();
										}
										bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
										if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
											throw new InvalidCastException();
										}
										pUVar17 = __this_01.gameObject;
										if (pUVar17 == null) {
											throw new NullReferenceException();
										}
										pUVar17.SetActive(false);
										obj = (Object)__this_01.gameObject;
										Object.Destroy(obj);
									} while(true);
								}
							}
						}
					}
				}
			}
		}
		goto label_058b145c;
		while (true) {
			lVar26 = lVar26 + 0x10;
			if (!(uVar23 * 0x10 != lVar26)) break;
	label_058b0e50: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar26) == typeof(IDisposable)) {
				pVVar16 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar26);
				goto label_058b0e7d;
			}
		}
	label_058b0e5f: ;
	label_058b0e7d: ;
		pIVar18.Dispose();
	label_058b0e86: ;
		pSVar25 = local_c0;
		iVar11 = AottgCharacterPickerPopup.GetIndex(setting, local_c0);
		local_48._0_4_ = iVar11;
		uVar9 = local_a8._0_8_;
		bVar10 = local_a8._0_8_ != 0;
		fVar27 = __this_05.get_Width();
		local_d4 = 0;
		if (pSVar25 != null) {
			if (uVar9 == 0) {
				local_78._0_4_ = 0x42500000;
				iVar12 = (int)local_c0.Length;
			}
			else {
				local_78._0_4_ = local_c4 + 64.0;
				iVar12 = (int)local_c0.Length;
			}
			if (0 < iVar12) {
				iVar12 = (uint)bVar10 * 3 + 2;
				local_58._0_4_ = iVar12;
				local_ac = ((float)(byte)(bVar10 * '\x03' + 1) * -16.0 + fVar27 + -48.0) / (float)iVar12;
				local_68._0_4_ = local_ac;
				local_ac = local_ac + -12.0;
				pUVar15 = null;
				do {
					if ((int)local_d4 % (int)local_58._0_4_ == 0) {
						pUVar3 = __this_05._scroll;
						if (pUVar3 == null) goto label_058b145c;
						pGVar6 = __this_05._view;
						pUVar14 = pUVar3.m_Content;
						__this_02 = new GisketchNodeDefinition();
						if (__this_02 == null) goto label_058b145c;
						__this_02.type = "Panel";
						__this_02.style = "clear";
						tooltips = null;
						pGVar19 = AottgUi.Layout("Row", null, null, null, null, 16.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						__this_02.layout = pGVar19;
						if ((pGVar6 == null) ||(pUVar17 = pGVar6.Build((Transform)pUVar14, __this_02), pUVar17 == null)) goto label_058b145c;
						pUVar15 = pUVar17.transform;
					}
					pSVar7 = "inGameRow";
					pGVar6 = __this_05._view;
					local_90.hasValue = false;
					local_90._1_3_ = 0;
					local_90.value = 0.0;
					local_90 = new Nullable<float>(8.0);
					if (pGVar6 == null) goto label_058b145c;
					parent = pGVar6.Panel(pUVar15, pSVar7, (float)local_68._0_4_, (float)local_78._0_4_, false, (Nullable<float>)local_90);
					if (local_a8._0_8_ != 0) {
						pGVar6 = __this_05._view;
						if (pGVar6 == null) goto label_058b145c;
						parent_00 = pGVar6.Panel(parent, "inGamePickerPreview", local_c4, local_c4, false, (Nullable<float>)0x0);
						pGVar6 = __this_05._view;
						if (pGVar6 == null) goto label_058b145c;
						__this_03 = pGVar6.RawImage(parent_00, local_c4, local_c4);
						if (*(uint)(local_a8._0_8_ + 0x18) <= local_d4) goto label_058b1469;
						pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						pSVar21 = *(String*)(local_a8._0_8_ + 0x20 + (long)(int)local_d4 * 8);
						pUVar20 = (Texture)ResourceManager.LoadAsset(pSVar7, pSVar21, true, false);
						__this_05 = local_d0;
						if (__this_03 == null) goto label_058b145c;
						if (pUVar20 == null) {
							pUVar20 = null;
						}
						else if (pUVar20.klass != (Texture)typeof(Texture2D)) {
							pUVar20 = null;
						}
						__this_03.texture = pUVar20;
						pUVar20 = __this_03.m_Texture;
						bVar10 = ((Object)pUVar20 == null);
						if (bVar10) {
							if ((parent_00 == null) ||(pUVar17 = parent_00.gameObject, pUVar17 == null)) goto label_058b145c;
							pUVar17.SetActive(false);
						}
					}
					pGVar6 = __this_05._view;
					pSVar25 = labels;
					if (labels == null) {
						pSVar25 = local_c0;
					}
					if ((uint)pSVar25.Length <= local_d4) goto label_058b1469;
					pSVar7 = pSVar25[(int)local_d4];
					pSVar21 = local_d4.ToString();
					if (pGVar6 == null) goto label_058b145c;
					uVar8 = (uint)(local_d4 != local_48._0_4_) * 3;
					tooltips = (String[])(ulong)uVar8;
					__this_04 = pGVar6.Button(parent, pSVar7, "ingame.character.picker.select", pSVar21, local_ac, 48.0, uVar8);
					pSVar25 = local_38;
					if (local_38 != null) {
						uVar8 = (uint)local_38.Length;
						if ((int)local_d4 < (int)uVar8) {
							if (uVar8 <= local_d4) {
	label_058b1469: ;
								throw new IndexOutOfRangeException();
							}
							bVar10 = String.IsNullOrEmpty(local_38[(int)local_d4]);
							if (!bVar10) {
								if ((__this_04 == null) ||(pUVar17 = __this_04.gameObject, pUVar17 == null)) goto label_058b145c;
								pUVar22 = pUVar17.AddComponent<HoverTooltip>();
								if ((uint)pSVar25.Length <= local_d4) goto label_058b1469;
								if (pUVar22 == null) goto label_058b145c;
								pUVar22.Message = pSVar25[(int)local_d4];
								pUVar22.PopupOverride = (TooltipPopup)__this_05._skillTooltip;
							}
						}
					}
					local_d4 = local_d4 + 1;
				} while ((int)local_d4 < (int)local_c0.Length);
			}
			__this_05.Show();
			pUVar3 = __this_05._scroll;
			if (pUVar3 != null) {
				pUVar17 = pUVar3.gameObject;
				GisketchScreenBuilder.SettleLayout(pUVar17);
				pUVar3 = __this_05._scroll;
				if (pUVar3 != null) {
					pUVar3.verticalNormalizedPosition = 1.0;
					return;
				}
			}
		}
	label_058b145c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x57B1780", Offset = "0x57B0780", VA = "0x57B1780")]
	public void Select(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$Select): 1 lines keep C-only constructs
		String[] options;
		Action<int> pSVar1;
		code *vtableDispatch;

		options = this._options;
		if (((options != null) && (-1 < index)) && (index < (int)options.Length)) {
			AottgCharacterPickerPopup.SetIndex(this._setting, options, index) ;
			this.Hide();
			pSVar1 = this._onSelect;
			if (pSVar1 != null) {
				vtableDispatch = (code)pSVar1.invoke_impl;
				(*vtableDispatch)(pSVar1.method_code,index,pSVar1.method,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x57B14F0", Offset = "0x57B04F0", VA = "0x57B14F0")]
	public static int GetIndex(BaseSetting setting, string[] options)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$GetIndex): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		int iVar4;

		if (setting == null) {
			throw new NullReferenceException();
		}
		pSVar3 = setting.klass;
		bVar1 = (pSVar3._2).typeHierarchyDepth;
		bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) {
			return *(int)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
		}
		bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
			throw new InvalidCastException();
		}
		iVar4 = Array.IndexOf<string>((Object[])options, (*(ulong)((sbyte)setting + 0x20)));
		return iVar4;
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x57B17F0", Offset = "0x57B07F0", VA = "0x57B17F0")]
	public static void SetIndex(BaseSetting setting, string[] options, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$SetIndex): 2 lines keep C-only constructs
		byte bVar1;

		if (setting != null) {
			bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar1 <= (setting.klass._2).typeHierarchyDepth) &&((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(IntSetting))) {
				setting.Value = index;
				return;
			}
		}
		if (options != null) {
			if ((uint)options.Length <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			if (setting != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				setting.Value = (object)options[index];
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x57B18F0", Offset = "0x57B08F0", VA = "0x57B18F0")]
	public AottgCharacterPickerPopup()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c (Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup$$.ctor): clean
		base();
		return;
	}
}
