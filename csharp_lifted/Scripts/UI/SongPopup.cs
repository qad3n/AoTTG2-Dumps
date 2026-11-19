// ==================== AoTTG2 cross-reference ====================
// Type: UI.SongPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SongPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200086F")]
internal class SongPopup : BasePopup
{
	[Token(Token = "0x2000870")]
	[CompilerGenerated]
	private sealed class _003CShowNextSongPopup_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002ABD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002ABE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002ABF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public SongPopup _003C_003E4__this;

		[Token(Token = "0x17000E02")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005088")]
			[Address(RVA = "0x5C50830", Offset = "0x5C4F830", VA = "0x5C50830", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000E03")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600508A")]
			[Address(RVA = "0x5C50880", Offset = "0x5C4F880", VA = "0x5C50880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005085")]
		[Address(RVA = "0x5C50700", Offset = "0x5C4F700", VA = "0x5C50700")]
		[DebuggerHidden]
		public _003CShowNextSongPopup_003Ed__36(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup.<ShowNextSongPopup>d__36$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005086")]
		[Address(RVA = "0x5C50730", Offset = "0x5C4F730", VA = "0x5C50730", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup.<ShowNextSongPopup>d__36$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005087")]
		[Address(RVA = "0x5C50740", Offset = "0x5C4F740", VA = "0x5C50740", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup.<ShowNextSongPopup>d__36$$MoveNext): 5 lines keep C-only constructs
			ushort puVar1;
			int iVar2;
			SongPopup __this_00;
			String name;
			WaitForSeconds __this_01;

			iVar2 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar2 == 0) {
				this.__1__state = -1;
				name = MusicManager.GetCurrentSong();
				if (__this_00 == null) {
		label_05d5082a: ;
					throw new NullReferenceException();
				}
				__this_00.ChangeSongInfo(name);
				puVar1 = &__this_00.ienumCount;
				*puVar1 = *puVar1 + 1;
				__this_00.Show();
				__this_01 = new WaitForSeconds(5.0);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			else if (iVar2 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05d5082a;
				puVar1 = &__this_00.ienumCount;
				*puVar1 = *puVar1 - 1;
				if (*puVar1 == 0) {
					__this_00.Hide();
				}
			}
			return iVar2 == 0;
		}

		[Token(Token = "0x6005089")]
		[Address(RVA = "0x5C50840", Offset = "0x5C4F840", VA = "0x5C50840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup.<ShowNextSongPopup>d__36$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_SongPopup_ShowNextSongPopup_d__36_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002ABA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ushort ienumCount;

	[Token(Token = "0x4002ABB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _songName;

	[Token(Token = "0x4002ABC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _authorName;

	[Token(Token = "0x17000DF3")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6005071")]
		[Address(RVA = "0x5C4FB20", Offset = "0x5C4EB20", VA = "0x5C4FB20", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DF4")]
	protected override float Width
	{
		[Token(Token = "0x6005072")]
		[Address(RVA = "0x5C4FB30", Offset = "0x5C4EB30", VA = "0x5C4FB30", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_Width): clean
			return 275.0;
		}
	}

	[Token(Token = "0x17000DF5")]
	protected override float Height
	{
		[Token(Token = "0x6005073")]
		[Address(RVA = "0x5C4FB40", Offset = "0x5C4EB40", VA = "0x5C4FB40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_Height): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000DF6")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005074")]
		[Address(RVA = "0x5C4FB50", Offset = "0x5C4EB50", VA = "0x5C4FB50", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000DF7")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6005075")]
		[Address(RVA = "0x5C4FB60", Offset = "0x5C4EB60", VA = "0x5C4FB60", Slot = "14")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_DoublePanelDivider): clean
			return false;
		}
	}

	[Token(Token = "0x17000DF8")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005076")]
		[Address(RVA = "0x5C4FB70", Offset = "0x5C4EB70", VA = "0x5C4FB70", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_VerticalSpacing): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DF9")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005077")]
		[Address(RVA = "0x5C4FB80", Offset = "0x5C4EB80", VA = "0x5C4FB80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_VerticalPadding): clean
			return 0;
		}
	}

	[Token(Token = "0x17000DFA")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005078")]
		[Address(RVA = "0x5C4FB90", Offset = "0x5C4EB90", VA = "0x5C4FB90", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_HorizontalPadding): clean
			return 0;
		}
	}

	[Token(Token = "0x17000DFB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005079")]
		[Address(RVA = "0x5C4FBA0", Offset = "0x5C4EBA0", VA = "0x5C4FBA0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DFC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600507A")]
		[Address(RVA = "0x5C4FBB0", Offset = "0x5C4EBB0", VA = "0x5C4FBB0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DFD")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x600507B")]
		[Address(RVA = "0x5C4FBC0", Offset = "0x5C4EBC0", VA = "0x5C4FBC0", Slot = "38")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_BottomBarSpacing): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DFE")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x600507C")]
		[Address(RVA = "0x5C4FBD0", Offset = "0x5C4EBD0", VA = "0x5C4FBD0", Slot = "39")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_BottomBarPadding): clean
			return 0;
		}
	}

	[Token(Token = "0x17000DFF")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x600507D")]
		[Address(RVA = "0x5C4FBE0", Offset = "0x5C4EBE0", VA = "0x5C4FBE0", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_TitleFontSize): clean
			return 0;
		}
	}

	[Token(Token = "0x17000E00")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x600507E")]
		[Address(RVA = "0x5C4FBF0", Offset = "0x5C4EBF0", VA = "0x5C4FBF0", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_ButtonFontSize): clean
			return 0;
		}
	}

	[Token(Token = "0x17000E01")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600507F")]
		[Address(RVA = "0x5C4FC00", Offset = "0x5C4EC00", VA = "0x5C4FC00", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x6005080")]
	[Address(RVA = "0x5C4FC10", Offset = "0x5C4EC10", VA = "0x5C4FC10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$Setup): 5 lines keep C-only constructs
		Text* ppUVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		BoolSetting pSVar4;
		GeneralSettings pSVar5;
		LayoutElement pUVar6;
		VerticalLayoutGroup pUVar7;
		Transform pUVar8;
		HorizontalLayoutGroup __this_00;
		ElementStyle pUVar9;
		GameObject pUVar10;
		RawImage __this_01;
		RectTransform __this_02;
		Text pUVar11;
		GameObject __this_03;
		GameObject pUVar12;
		float fVar13;
		Vector2 UStack_48;

		this.Setup(parent);
		pUVar8 = this.DoublePanelLeft;
		if (pUVar8 != null) {
			pUVar6 = pUVar8.GetComponent<LayoutElement>();
			if (pUVar6 != null) {
				pUVar6.set_preferredWidth(55.0);
				fVar13 = this.get_Height();
				pUVar6.set_preferredHeight(fVar13);
				pUVar8 = this.DoublePanelLeft;
				if (pUVar8 != null) {
					pUVar7 = pUVar8.GetComponent<VerticalLayoutGroup>();
					if (pUVar7 != null) {
						pUVar7.childAlignment = 4;
						pUVar7.childControlHeight = false;
						pUVar7.childControlWidth = false;
						pUVar8 = this.DoublePanelRight;
						if (pUVar8 != null) {
							pUVar6 = pUVar8.GetComponent<LayoutElement>();
							if (pUVar6 != null) {
								pUVar6.set_preferredWidth(200.0);
								fVar13 = this.get_Height();
								pUVar6.set_preferredHeight(fVar13);
								pUVar8 = this.DoublePanelRight;
								if (pUVar8 != null) {
									pUVar7 = pUVar8.GetComponent<VerticalLayoutGroup>();
									if (pUVar7 != null) {
										pUVar7.childAlignment = 4;
										pUVar8 = this.DoublePanelLeft;
										if (pUVar8 != null) {
											pUVar8 = pUVar8.transform;
											if (pUVar8 != null) {
												pUVar8 = pUVar8.parent;
												if (pUVar8 != null) {
													__this_00 = pUVar8.GetComponent<HorizontalLayoutGroup>();
													if (__this_00 != null) {
														__this_00.spacing = 10.0;
														this.Parent = parent;
														pUVar8 = this.DoublePanelLeft;
														if (pUVar8 != null) {
															pUVar8 = pUVar8.transform;
															pUVar9 = new ElementStyle(0x18, 120.0, 20.0, "DefaultPanel");
															pUVar10 = ElementFactory.CreateRawImage(pUVar8, pUVar9, "Sprites/ost_cover", 32.0, 32.0);
															if (pUVar10 != null) {
																__this_01 = pUVar10.GetComponent<RawImage>();
																if (__this_01 != null) {
																	__this_02 = __this_01.GetComponent<RectTransform>();
																	if (__this_02 != null) {
																		__this_02.sizeDelta = (Vector2)0x425c0000425c0000;
																		pUVar8 = this.DoublePanelRight;
																		if (pUVar8 != null) {
																			pUVar8 = pUVar8.transform;
																			pUVar9 = new ElementStyle(0x18, 120.0, 20.0, "DefaultPanel") ;
																			pUVar10 = ElementFactory.CreateDefaultLabel(pUVar8, pUVar9, "", 0, 4);
																			if (pUVar10 != null) {
																				pUVar11 = pUVar10.GetComponent<Text>();
																				ppUVar1 = &this._songName;
																				this._songName = pUVar11;
																				pUVar11 = this._songName;
																				if (pUVar11 != null) {
																					pUVar11.fontSize = 0x12;
																					pUVar11 = *ppUVar1;
																					if (pUVar11 != null) {
																						pUVar11.alignment = 0;
																						pUVar8 = this.DoublePanelRight;
																						if (pUVar8 != null) {
																							pUVar8 = pUVar8.transform;
																							pUVar9 = new ElementStyle(0x18, 120.0, 20.0, "DefaultPanel");
																							__this_03 = ElementFactory.CreateDefaultLabel(pUVar8, pUVar9, "", 0, 4);
																							if (__this_03 != null) {
																								pUVar11 = __this_03.GetComponent<Text>();
																								ppUVar1 = &this._authorName;
																								this._authorName = pUVar11;
																								pUVar11 = this._authorName;
																								if (pUVar11 != null) {
																									pUVar11.fontSize = 0xe;
																									pUVar11 = *ppUVar1;
																									if (pUVar11 != null) {
																										pUVar11.alignment = 8;
																										pUVar12 = __this_01.gameObject;
																										ElementFactory.SetAnchor(pUVar12, 4, 4, (Vector2)0x41a00000);
																										pSVar2 = SettingsManager. InGameCurrent;
																										if (((pSVar2 != null) &&(pSVar3 = pSVar2.Misc, pSVar3 != null)) &&(pSVar4 = pSVar3.GlobalMinimapDisable, pSVar4 != null)) {
																											UStack_48.x = -15.0;
																											UStack_48.y = -10.0;
																											if (pSVar4._value == false) {
																												pSVar4 = pSVar3.RealismMode;
																												if (pSVar4 == null) goto label_05d50226;
																												if (pSVar4._value == false) {
																													pSVar5 = typeof(SettingsManager). static_fields.GeneralSettings;
																													if ((pSVar5 == null) ||(pSVar4 = pSVar5.MinimapEnabled, pSVar4 == null)) goto label_05d50226;
																													if (pSVar4._value == false) {
																														UStack_48.x = -15.0;
																													}
																													else {
																														UStack_48.x = -350.0;
																													}
																													UStack_48.y = -10.0;
																												}
																											}
																											pUVar12 = this.gameObject;
																											ElementFactory.SetAnchor(pUVar12, 2, 2, (Vector2)UStack_48);
																											ElementFactory.SetAnchor(pUVar10, 0, 0, (Vector2)0x0);
																											ElementFactory.SetAnchor(__this_03, 8, 8, (Vector2)0x0);
																											this.Hide() ;
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
			}
		}
	label_05d50226: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005081")]
	[Address(RVA = "0x5C50230", Offset = "0x5C4F230", VA = "0x5C50230")]
	public void ChangeSongInfo(string name)
	{
		// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$ChangeSongInfo): 2 lines keep C-only constructs
		Text pUVar1;
		String str0;
		String str2;
		String* ppSVar2;
		int index;
		List<string> local_40;
		String local_38;

		local_40 = null;
		local_38 = null;
		SongPopup.ParseMusicString(name, ref local_40, ref local_38);
		pUVar1 = this._songName;
		if (pUVar1 != null) {
			pUVar1.set_text(local_38);
			if (local_40 != null) {
				index = 0;
				str0 = "";
				do {
					if (local_40._size <= index) {
						pUVar1 = this._authorName;
						if (pUVar1 != null) {
							pUVar1.set_text(str0);
							return;
						}
						break;
					}
					str2 = local_40.get_Item(index);
					ppSVar2 = &" and ";
					if (index == 0) {
						ppSVar2 = &"by ";
					}
					str0 = String.Concat(str0, *ppSVar2, str2);
					index = index + 1;
				} while (local_40 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005082")]
	[Address(RVA = "0x5C50380", Offset = "0x5C4F380", VA = "0x5C50380")]
	public static void ParseMusicString(string input, out List<string> authors, out string song)
	{
		// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$ParseMusicString): 3 lines keep C-only constructs
		int piVar1;
		int iVar2;
		String[] pSVar3;
		bool bVar5;
		uint uVar6;
		List<string> pSVar7;
		Char[] separator;
		String[] pSVar8;
		String pSVar9;
		String pSVar10;
		uint uVar11;

		pSVar7 = new List<string>();
		*authors = pSVar7;
		*song = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar5 = String.IsNullOrWhiteSpace(input);
		if (bVar5) {
			return;
		}
		separator = (Char[])new char[1];
		if (separator == null) {
	label_05d50678: ;
			throw new NullReferenceException();
		}
		if ((int)separator.Length != 0) {
			separator[0] = 0x5f;
			if ((input == null) ||(pSVar8 = input.Split(separator, 2), pSVar8 == null)) goto label_05d50678;
			iVar2 = (int)pSVar8.Length;
			if (iVar2 != 0) {
				pSVar10 = pSVar8[0];
				if (1 < iVar2) {
					if ((pSVar8[1] == null) ||(pSVar9 = (pSVar8[1]).Replace("-", " "), pSVar9 == null)) goto label_05d50678;
					pSVar9 = pSVar9.Trim();
					*song = pSVar9;
				}
				pSVar8 = (String[])new string[1];
				if (pSVar8 == null) goto label_05d50678;
				if ((int)pSVar8.Length != 0) {
					pSVar8[0] = "--";
					if ((pSVar10 == null) ||(pSVar8 = pSVar10.Split(pSVar8, 1), pSVar8 == null)) goto label_05d50678;
					uVar6 = (uint)pSVar8.Length;
					if ((int)uVar6 < 1) {
						return;
					}
					uVar11 = 0;
					while (uVar11 < uVar6) {
						if ((pSVar8[(int)uVar11] == null) ||(pSVar10 = (pSVar8[(int)uVar11]).Replace("-", " "), pSVar10 == null)) goto label_05d50678;
						pSVar10 = pSVar10.Trim();
						bVar5 = String.IsNullOrWhiteSpace(pSVar10);
						if (!bVar5) {
							pSVar7 = *authors;
							if (pSVar7 == null) goto label_05d50678;
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = pSVar7._items;
							if (pSVar3 == null) goto label_05d50678;
							uVar6 = pSVar7._size;
							if (uVar6 < (uint)pSVar3.Length) {
								pSVar7._size = uVar6 + 1;
								pSVar3[(int)uVar6] = pSVar10;
							}
							else {
								pSVar7.AddWithResize((object)pSVar10);
							}
						}
						uVar11 = uVar11 + 1;
						uVar6 = (uint)pSVar8.Length;
						if ((int)uVar6 <= (int)uVar11) {
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005083")]
	[Address(RVA = "0x5C50690", Offset = "0x5C4F690", VA = "0x5C50690")]
	[IteratorStateMachine(typeof(_003CShowNextSongPopup_003Ed__36))]
	public IEnumerator ShowNextSongPopup()
	{
		// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$ShowNextSongPopup): clean
		SongPopup.d__36<ShowNextSongPopup> __this_00;

		__this_00 = new SongPopup.d__36<ShowNextSongPopup>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005084")]
	[Address(RVA = "0x5C50720", Offset = "0x5C4F720", VA = "0x5C50720")]
	public SongPopup()
	{
		// Lifted from source/cpp/UI/SongPopup.c (UI.SongPopup$$.ctor): clean
		base();
		return;
	}
}
