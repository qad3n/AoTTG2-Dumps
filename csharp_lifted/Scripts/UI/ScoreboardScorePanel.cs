// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardScorePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardScorePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace UI;

[Token(Token = "0x200086B")]
internal class ScoreboardScorePanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4002AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4002AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4002AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private AottgInGameView _view;

	[Token(Token = "0x4002AA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Player[] _lastPlayers;

	[Token(Token = "0x4002AA5")]
	private const float MaxSyncDelay = 1f;

	[Token(Token = "0x4002AA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000DEE")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005052")]
		[Address(RVA = "0x5C4BCF0", Offset = "0x5C4ACF0", VA = "0x5C4BCF0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$get_VerticalSpacing): clean
			return 6.0;
		}
	}

	[Token(Token = "0x17000DEF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005053")]
		[Address(RVA = "0x5C4BD00", Offset = "0x5C4AD00", VA = "0x5C4BD00", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$get_VerticalPadding): clean
			return 0x18;
		}
	}

	[Token(Token = "0x6005054")]
	[Address(RVA = "0x5C4BD10", Offset = "0x5C4AD10", VA = "0x5C4BD10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$Setup): clean
		MethodInfo method_00;

		this.SetupGisketch(parent);
		method_00 = new AottgInGameView();
		this._view = (AottgInGameView)method_00;
		this.Sync();
		return;
	}

	[Token(Token = "0x6005055")]
	[Address(RVA = "0x5C4BD80", Offset = "0x5C4AD80", VA = "0x5C4BD80")]
	private void Update()
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$Update): clean
		float fVar1;
		float fVar2;

		fVar2 = this._currentSyncDelay;
		fVar1 = Time.deltaTime;
		fVar2 = fVar2 - fVar1;
		this._currentSyncDelay = fVar2;
		if (0.0 < fVar2) {
			return;
		}
		this.Sync();
		return;
	}

	[Token(Token = "0x6005056")]
	[Address(RVA = "0x5C49980", Offset = "0x5C48980", VA = "0x5C49980")]
	public void Sync()
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$Sync): 1 lines keep C-only constructs
		Player[] pPVar1;
		object obj;
		object pIVar2;
		String themePanel;
		ElementStyle __this_00;
		Room pPVar3;
		ElementStyle style;

		if (Il2CppMethodInitialized_07547ee3 == false) {
			Il2CppMethodInitialized_07547ee3 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05d499f6;
	label_05d499a7: ;
			pPVar1 = PhotonNetwork.PlayerList;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05d499a7;
	label_05d499f6: ;
			pPVar1 = PhotonNetwork.PlayerList;
		}
		if (pPVar1 != null) {
			obj = pPVar1.Clone();
			if (obj == null) {
				this._lastPlayers = null;
			}
			else {
				pPVar1 = (Player[])(obj as Player[]);
				if (pPVar1 == null) {
	label_05d49b17: ;
					throw new InvalidCastException();
				}
				this._lastPlayers = pPVar1;
				pIVar2 = (obj as Player[]);
				if (pIVar2 == null) goto label_05d49b17;
			}
			themePanel = this.get_ThemePanel();
			style = (ElementStyle)&g_data_00000020;
			__this_00 = new ElementStyle(0x20, 120.0, 20.0, themePanel);
			pPVar1 = this._lastPlayers;
			if ((pPVar1 != null) &&(pPVar3 = PhotonNetwork.CurrentRoom, pPVar3 != null)) {
				this.SetHeader(style, (int32_t)pPVar1.Length, pPVar3.maxPlayers);
				this.SetRows(__this_00);
				this._currentSyncDelay = 1.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005057")]
	[Address(RVA = "0x5C4C440", Offset = "0x5C4B440", VA = "0x5C4C440")]
	private void SetRows(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$SetRows): 9 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		MethodInfo pMVar4;
		Transform pUVar5;
		Object obj;
		Player[] pPVar6;
		Il2CppRGCTXData method_00;
		ulong uVar7;
		int iVar8;
		List<Transform> pSVar9;

		if (Il2CppMethodInitialized_07547ee4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_RemoveAt) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item) ;
			Il2CppMethodInitialized_07547ee4 = true;
		}
		method_00 = (Il2CppRGCTXData)this._rows;
		if ((method_00 != null) &&(pPVar6 = this._lastPlayers, pPVar6 != null)) {
			iVar2 = *(int)&method_00[3].rgctxDataDummy;
			iVar8 = (int)pPVar6.Length;
			if (iVar8 < iVar2) {
				iVar8 = -1;
				do {
					iVar8 = iVar8 + 1;
					if (iVar2 - (int)pPVar6.Length <= iVar8) goto label_05d4c628;
					pSVar9 = this._rows;
					if ((pSVar9 == null) ||(pUVar5 = pSVar9.get_Item(pSVar9._size + -1), pUVar5 == null)) break;
					obj = (Object)pUVar5.gameObject;
					Object.Destroy(obj);
					pSVar9 = this._rows;
					if (pSVar9 == null) break;
					pSVar9.RemoveAt(pSVar9._size + -1);
					pPVar6 = this._lastPlayers;
				} while (pPVar6 != null);
			}
			else if (iVar2 < iVar8) {
				iVar8 = -1;
				do {
					while(true) {
						iVar8 = iVar8 + 1;
						if ((int)pPVar6.Length - iVar2 <= iVar8) goto label_05d4c628;
						pSVar9 = this._rows;
						if (pSVar9 == null) goto label_05d4c684;
						style = (ElementStyle)this.CreateRow(style, pSVar9._size);
						pMVar4 = MethodInfo_System_Collections_Generic_List_Transform_Add;
						piVar1 = &pSVar9._version;
						*piVar1 = *piVar1 + 1;
						method_00 = (Il2CppRGCTXData)pSVar9._items;
						if (method_00 == null) goto label_05d4c684;
						uVar3 = pSVar9._size;
						if (*(uint)&method_00[3].rgctxDataDummy <= uVar3) break;
						pSVar9._size = uVar3 + 1;
						method_00[(long)(int)uVar3 + 4].method = (MethodInfo)style;
						pPVar6 = this._lastPlayers;
						if (pPVar6 == null) goto label_05d4c684;
					}
					method_00 = pMVar4.klass.rgctx_data;
					pSVar9.AddWithResize((object)style);
					pPVar6 = this._lastPlayers;
				} while (pPVar6 != null);
			}
			else {
	label_05d4c628: ;
				pSVar9 = this._rows;
				if (pSVar9 != null) {
					uVar7 = 0;
					do {
						if ((long)pSVar9._size <= (long)uVar7) {
							return;
						}
						pUVar5 = pSVar9.get_Item((int32_t)uVar7);
						pPVar6 = this._lastPlayers;
						if (pPVar6 == null) break;
						if (*(uint)&pPVar6.Length <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						this.SetRow(pUVar5, (Player)pPVar6[uVar7]);
						uVar7 = uVar7 + 1;
						pSVar9 = this._rows;
					} while (pSVar9 != null);
				}
			}
		}
	label_05d4c684: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005058")]
	[Address(RVA = "0x5C4BDD0", Offset = "0x5C4ADD0", VA = "0x5C4BDD0")]
	private void SetHeader(ElementStyle style, int currentPlayers, int maxPlayers)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$SetHeader): 10 lines keep C-only constructs
		Transform* targetAddress;
		uint uVar1;
		AottgInGameView __this_00;
		bool bVar2;
		Transform pUVar3;
		TMP_Text pTVar4;
		String pSVar5;
		String[] values;
		CustomLogicEvaluator pCVar6;
		Object[] pSVar7;
		ulong uVar8;
		ulong uVar9;
		float fVar10;
		float fVar11;
		int local_38;
		int local_34;

		local_38 = maxPlayers;
		local_34 = currentPlayers;
		pUVar3 = this._header;
		targetAddress = &this._header;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			__this_00 = this._view;
			pUVar3 = this.SinglePanel;
			fVar10 = this.GetPanelWidth();
			if (__this_00 == null) goto label_05d4c439;
			pUVar3 = __this_00.Panel(pUVar3, "inGameTableHeader", fVar10 + -80.0, 48.0, true, (Nullable<float>)0x0);
			*targetAddress = pUVar3;
			pTVar4 = __this_00.Text(*targetAddress, "", 440.0, 40.0, "inGameColumnHeading");
			if (pTVar4 == null) goto label_05d4c439;
			pTVar4.name = "Player";
			pTVar4 = __this_00.Text(*targetAddress, "", 440.0, 40.0, "inGameColumnHeading");
			if (pTVar4 == null) goto label_05d4c439;
			pTVar4.name = "Score";
			pUVar3 = *targetAddress;
			pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Scoreboard", "Action", "", "");
			__this_00.Text(pUVar3, pSVar5, 220.0, 40.0, "inGameColumnHeading");
			pUVar3 = *targetAddress;
			pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Scoreboard", "Ping", "", "");
			__this_00.Text(pUVar3, pSVar5, 220.0, 40.0, "inGameColumnHeading");
		}
		if ((*targetAddress == null) ||(pUVar3 = (*targetAddress).Find("Player"), pUVar3 == null)) goto label_05d4c439;
		pTVar4 = pUVar3.GetComponent<TMP_Text>();
		values = (String[])new string[6];
		pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Scoreboard", "Player", "", "");
		if (values == null) goto label_05d4c439;
		if ((int)values.Length == 0) {
	label_05d4c434: ;
			throw new IndexOutOfRangeException();
		}
		values[0] = pSVar5;
		if ((values.Length & 0xfffffffe) == 0) goto label_05d4c434;
		values[1] = " (";
		pSVar5 = local_34.ToString();
		if ((uint)values.Length < 3) goto label_05d4c434;
		values[2] = pSVar5;
		if ((values.Length & 0xfffffffc) == 0) goto label_05d4c434;
		values[3] = "/";
		pSVar5 = local_38.ToString();
		if ((uint)values.Length < 5) goto label_05d4c434;
		values[4] = pSVar5;
		if ((uint)values.Length < 6) goto label_05d4c434;
		values[5] = ")";
		pSVar5 = String.Concat(values);
		if (pTVar4 == null) goto label_05d4c439;
		pTVar4.set_text(pSVar5) ;
		if ((*targetAddress == null) ||(pUVar3 = (*targetAddress).Find("Score"), pUVar3 == null)) goto label_05d4c439;
		pTVar4 = pUVar3.GetComponent<TMP_Text>();
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			pCVar6 = CustomLogicManager.Evaluator;
			if (pCVar6 != null) goto label_05d4c2e1;
	label_05d4c2ea: ;
			pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Scoreboard", "Score", "", "");
		}
		else {
			pCVar6 = CustomLogicManager.Evaluator;
			if (pCVar6 == null) goto label_05d4c2ea;
	label_05d4c2e1: ;
			pSVar5 = pCVar6.ScoreboardHeader;
			if (pSVar5 == null) goto label_05d4c2ea;
		}
		if (pTVar4 != null) {
			pTVar4.set_text(pSVar5);
			if ((*targetAddress != null) &&(pSVar7 = (*targetAddress).GetComponentsInChildren<TMP_Text>(), pSVar7 != null)) {
				if ((int)pSVar7.Length < 1) {
					fVar10 = 48.0;
				}
				else {
					uVar8 = pSVar7.Length & 0xffffffff;
					fVar10 = 48.0;
					uVar9 = 0;
					do {
						if (uVar8 <= uVar9) goto label_05d4c434;
						pTVar4 = (TMP_Text)pSVar7[uVar9];
						fVar11 = AottgInGameView.FitTextHeight(pTVar4, 40.0);
						if (fVar10 <= fVar11 + 8.0) {
							fVar10 = fVar11 + 8.0;
						}
						uVar9 = uVar9 + 1;
						uVar1 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar1;
					} while ((long)uVar9 < (long)(int)uVar1);
				}
				pUVar3 = *targetAddress;
				AottgInGameView.SetHeight(pUVar3, fVar10);
				return;
			}
		}
	label_05d4c439: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005059")]
	[Address(RVA = "0x5C4C6A0", Offset = "0x5C4B6A0", VA = "0x5C4C6A0")]
	private Transform CreateRow(ElementStyle style, int index)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$CreateRow): 1 lines keep C-only constructs
		AottgInGameView __this_00;
		Transform pUVar1;
		Transform pUVar2;
		RawImage pUVar3;
		EffectText __this_01;
		TMP_Text pTVar4;
		String pSVar5;
		String pSVar6;
		Button pUVar7;
		float fVar8;
		int local_3c;
		Nullable<float> local_38;

		local_3c = index;
		pSVar6 = "inGameRowAlternate";
		pSVar5 = "inGameRow";
		__this_00 = this._view;
		pUVar1 = this.SinglePanel;
		fVar8 = this.GetPanelWidth();
		if (__this_00 != null) {
			if ((index & 1U) == 0) {
				pSVar6 = pSVar5;
			}
			pUVar1 = __this_00.Panel(pUVar1, pSVar6, fVar8 + -80.0, 58.0, true, (Nullable<float>)0x0);
			pUVar2 = __this_00.Panel(pUVar1, "clear", 440.0, 58.0, true, (Nullable<float>)0x0);
			if (pUVar2 != null) {
				pUVar2.name = "Player";
				pUVar3 = __this_00.RawImage(pUVar2, 28.0, 28.0);
				if (pUVar3 != null) {
					pUVar3.name = "Status";
					pUVar3 = __this_00.RawImage(pUVar2, 28.0, 28.0);
					if (pUVar3 != null) {
						pUVar3.name = "Loadout" ;
						__this_01 = __this_00.PlayerName(pUVar2, 370.0);
						if (__this_01 != null) {
							__this_01.name = "Name";
							pTVar4 = __this_00.Text(pUVar1, (String)**(ulong*)(g_data_07556758 + 0xb8), 440.0, 40.0, "inGameText");
							if (pTVar4 != null) {
								pTVar4.name = "Score";
								local_38.hasValue = false;
								local_38._1_3_ = 0;
								local_38.value = 0.0;
								local_38 = new Nullable<float>(4.0);
								pUVar2 = __this_00.Panel(pUVar1, "clear", 220.0, 58.0, true, (Nullable<float>)local_38);
								if (pUVar2 != null) {
									pUVar2.name = "Actions";
									pSVar5 = UIManager.GetLocaleCommon("Profile");
									pSVar6 = local_3c.ToString();
									pUVar7 = __this_00.Button(pUVar2, pSVar5, "ingame.player.profile", pSVar6, 68.0, 36.0, 3);
									if (pUVar7 != null) {
										pUVar7.name = "Profile";
										pSVar5 = UIManager.GetLocale("ScoreboardPopup", "MutePopup", "Title", "", "");
										pSVar6 = local_3c.ToString();
										pUVar7 = __this_00.Button(pUVar2, pSVar5, "ingame.player.mute", pSVar6, 68.0, 36.0, 3);
										if (pUVar7 != null) {
											pUVar7.name = "Mute";
											pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Moderation", "Kick", "", "");
											pSVar6 = local_3c.ToString();
											pUVar7 = __this_00.Button(pUVar2, pSVar5, "ingame.player.kick", pSVar6, 68.0, 36.0, 3);
											if (pUVar7 != null) {
												pUVar7.name = "Kick";
												pTVar4 = __this_00.Text(pUVar1, "0", 220.0, 40.0, "inGameText");
												if (pTVar4 != null) {
													pTVar4.name = "Ping";
													return pUVar1;
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

	[Token(Token = "0x600505A")]
	[Address(RVA = "0x5C4CC30", Offset = "0x5C4BC30", VA = "0x5C4CC30")]
	private void SetRow(Transform row, Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$SetRow): 43 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int id;
		AottgInGameView __this_00;
		uint effect;
		bool bVar4;
		bool includeMC;
		String pSVar5;
		object pIVar6;
		List<string> __this_01;
		ulong uVar7;
		object pIVar8;
		String[] pSVar9;
		String __this_02;
		Transform pUVar10;
		RawImage pUVar11;
		GameObject pUVar12;
		Texture value;
		String* ppSVar13;
		CustomLogicEvaluator pCVar14;
		EffectText __this_03;
		TMP_FontAsset value_00;
		Transform pUVar15;
		TMP_Text pTVar16;
		Player pPVar17;
		ulong uVar18;
		String __this_04;
		Player __this_05;
		uint uVar19;
		float fVar20;
		uint uVar21;
		uint uVar22;
		float fVar23;
		uint uVar24;
		uint uVar25;
		uint uVar26;
		uint uVar27;
		uint uVar28;
		uint uVar29;
		uint uVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		Color UVar35;
		Color colorB;
		Color colorC;
		Color colorD;
		int local_14c;
		ulong local_148;
		ScoreboardScorePanel local_130;
		ulong local_128;
		Transform local_110;
		ulong local_108;
		String local_f0;
		ulong local_e8;
		ulong local_d8;
		Color local_c8;
		String local_b0;
		byte[] local_a8 = new byte[8];
		RawImage pUStack_a0;
		String local_98;
		String pSStack_90;
		Player local_88;
		byte[] auStack_80 = new byte[8];
		String local_78;
		Color UStack_70;
		float local_58;
		float fStack_54;
		Color local_48;

		local_130 = this;
		local_78 = null;
		UStack_70.r = 0.0;
		UStack_70.g = 0.0;
		local_88 = null;
		auStack_80._0_4_ = 0.0;
		auStack_80._4_4_ = 0.0;
		local_98 = null;
		pSStack_90 = null;
		local_a8[0] = false;
		local_a8._1_3_ = 0;
		local_a8._4_4_ = 0;
		pUStack_a0 = null;
		UStack_70.b = 0.0;
		UStack_70.a = 0.0;
		local_14c = 0;
		pSVar5 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
		local_f0 = MiscExtensions.TruncateRichText(pSVar5, 0xf);
		local_e8 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Status, "");
		local_108 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Character, "");
		local_d8 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Loadout, "");
		pCVar14 = CustomLogicManager.Evaluator;
		local_110 = row;
		if (pCVar14 == null) {
	label_05d4d0e0: ;
			__this_01 = new List<string>();
			pIVar6 = new string[4];
			if (pIVar6 == null) goto label_05d4e2ec;
			if (*(int)&pIVar6[1].monitor == 0) {
	label_05d4e2cc: ;
				throw new IndexOutOfRangeException();
			}
			pIVar6[2].klass = (Il2CppClass *)"Kills";
			if (((ulong)pIVar6[1].monitor & 0xfffffffe) == 0) goto label_05d4e2cc;
			pIVar6[2].monitor = "Deaths";
			if (*(uint)&pIVar6[1].monitor < 3) goto label_05d4e2cc;
			pIVar6[3].klass = (Il2CppClass *)"HighestDamage";
			if (((ulong)pIVar6[1].monitor & 0xfffffffc) == 0) goto label_05d4e2cc;
			pIVar6[3].monitor = "TotalDamage";
			if ((int)pIVar6[1].monitor < 1) {
				local_14c = 0;
				if (__this_01 == null) goto label_05d4e2ec;
			}
			else {
				if (__this_01 == null) {
					pIVar6 = PhotonExtensions.GetCustomProperty(player, (String)pIVar6[2].klass);
					if (pIVar6 != null) {
						(*pIVar6.klass.vtable[3].methodPtr)(pIVar6,pIVar6.klass.vtable[3].method);
						throw new NullReferenceException();
					}
					goto label_05d4e2ec;
				}
				uVar7 = (ulong)pIVar6[1].monitor & 0xffffffff;
				uVar18 = 0;
				do {
					if (uVar7 <= uVar18) goto label_05d4e2cc;
					pIVar8 = PhotonExtensions.GetCustomProperty(player, (String)(&pIVar6[2].klass)[uVar18]);
					if (pIVar8 == null) {
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						pSVar5 = (String)(*pIVar8.klass.vtable[3].methodPtr)(pIVar8,pIVar8.klass.vtable[3].method);
					}
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = __this_01._items;
					if (pSVar9 == null) goto label_05d4e2ec;
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pSVar9.Length) {
						__this_01._size = uVar2 + 1;
						pSVar9[(int)uVar2] = pSVar5;
					}
					else {
						__this_01.AddWithResize((object)pSVar5);
					}
					uVar18 = uVar18 + 1;
					uVar7 = (ulong)*(uint)&pIVar6[1].monitor;
				} while ((long)uVar18 < (long)(int)*(uint)&pIVar6[1].monitor);
				local_14c = (int32_t)uVar18;
			}
			pSVar9 = (String[])__this_01.ToArray();
			pSVar5 = String.Join(" / ", pSVar9);
			row = local_110;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar14 = CustomLogicManager.Evaluator;
				if (pCVar14 == null) goto label_05d4e2ec;
			}
			bVar4 = (pCVar14.ScoreboardProperty != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (!bVar4) goto label_05d4d0e0;
			pCVar14 = CustomLogicManager.Evaluator;
			if (pCVar14 == null) goto label_05d4e2ec;
			pIVar6 = PhotonExtensions.GetCustomProperty(player, pCVar14.ScoreboardProperty);
			if (pIVar6 == null) {
				pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar5 = (String)(*pIVar6.klass.vtable[3].methodPtr)(pIVar6,pIVar6.klass.vtable[3].method);
			}
		}
		local_128 = player;
		if ((row == null) ||(__this_02 = (String)row.Find("Player"), __this_02 == null)) goto label_05d4e2ec;
		local_b0 = pSVar5;
		pUVar10 = __this_02.Find("Status");
		if (pUVar10 == null) goto label_05d4e2ec;
		pUVar11 = pUVar10.GetComponent<RawImage>();
		pCVar14 = CustomLogicManager.Evaluator;
		if (pCVar14 == null) {
	label_05d4d68e: ;
			if ((pUVar11 == null) ||(pUVar12 = pUVar11.gameObject, pUVar12 == null)) goto label_05d4e2ec;
			pUVar12.SetActive(false);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d4d63a;
	label_05d4d6ca: ;
			pCVar14 = CustomLogicManager.Evaluator;
			if (pCVar14 == null) goto label_05d4d657;
	label_05d4d6de: ;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar14 = CustomLogicManager.Evaluator;
				if (pCVar14 == null) goto label_05d4e2ec;
			}
			fVar23 = (float)(uint)pCVar14.ShowScoreboardLoadout;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar14 = CustomLogicManager.Evaluator;
				if (pCVar14 == null) goto label_05d4e2ec;
			}
			if (pCVar14.ShowScoreboardStatus == false) goto label_05d4d68e;
			bVar4 = (local_e8 == PlayerStatus.Spectating);
			if (bVar4) {
				if ((pUVar11 == null) ||(pUVar12 = pUVar11.gameObject, pUVar12 == null)) goto label_05d4e2ec;
				pUVar12.SetActive(true);
				pSVar5 = ResourcePaths.UI;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, "Icons/Game/SpectateIcon", true, false);
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05d4e2d1;
				pUVar11.texture = value;
				pSVar5 = local_130.get_ThemePanel();
				ppSVar13 = &"SpectateColor";
			}
			else {
				bVar4 = (local_e8 == PlayerStatus.Dead);
				if (!bVar4) goto label_05d4d68e;
				if ((pUVar11 == null) ||(pUVar12 = pUVar11.gameObject, pUVar12 == null)) goto label_05d4e2ec;
				pUVar12.SetActive(true);
				pSVar5 = ResourcePaths.UI;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, "Icons/Quests/Skull1Icon", true, false);
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05d4e2d1;
				pUVar11.texture = value;
				pSVar5 = local_130.get_ThemePanel();
				ppSVar13 = &"DeadColor";
			}
			UVar35 = UIManager.GetThemeColor(pSVar5, "Icon", *ppSVar13, "DefaultPanel");
			pUVar11.set_color(UVar35);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d4d6ca;
	label_05d4d63a: ;
			pCVar14 = CustomLogicManager.Evaluator;
			if (pCVar14 != null) goto label_05d4d6de;
	label_05d4d657: ;
			fVar23 = 0.0;
		}
		if ((__this_02 == null) ||(pUVar10 = __this_02.Find("Loadout"), pUVar10 == null)) goto label_05d4e2ec;
		local_148 = pUVar10.GetComponent<RawImage>();
		local_c8.r = fVar23;
		pSVar5 = local_108;
		bVar4 = (local_108 == PlayerCharacter.Human);
		if (bVar4) {
			pSVar5 = local_130.get_ThemePanel();
			UVar35 = UIManager.GetThemeColor(pSVar5, "Icon", "LoadoutHuman", "DefaultPanel");
			if (local_148 == null) goto label_05d4e2ec;
			local_148.set_color(UVar35);
			pSVar5 = local_d8;
			bVar4 = (pSVar5 == HumanLoadout.Blade);
			if (bVar4) {
				pUVar11 = local_148;
				pSVar5 = ResourcePaths.UI;
				ppSVar13 = &"Icons/Game/BladeIcon";
				goto label_05d4d98e;
			}
			__this_05 = local_128;
			bVar4 = (pSVar5 == HumanLoadout.AHSS);
			if (bVar4) {
				local_108 = null;
				pSVar5 = ResourcePaths.UI;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, "Icons/Game/AHSSIcon", true, false);
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05d4e2d1;
				pUVar11 = local_148;
	label_05d4d9c3: ;
				pUVar11.texture = value;
				goto label_05d4d9d0;
			}
			local_108 = __this_02;
			pUVar11 = local_148;
			bVar4 = (pSVar5 == HumanLoadout.APG);
			__this_04 = local_108;
			if (bVar4) {
				pSVar5 = ResourcePaths.UI;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, "Icons/Game/APGIcon", true, false);
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05d4e2d1;
				goto label_05d4d9c3;
			}
			bVar4 = (pSVar5 == HumanLoadout.Thunderspear);
			if (bVar4) {
				pSVar5 = ResourcePaths.UI;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, "Icons/Game/ThunderspearIcon", true, false);
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05d4e2d1;
				__this_02 = local_108;
				goto label_05d4d9c3;
			}
			bVar4 = (pSVar5 == HumanLoadout.Unarmed);
			if (bVar4) {
	label_05d4e283: ;
				pSVar5 = ResourcePaths.UI;
				ppSVar13 = &"Icons/Specials/NoneSpecialIcon";
				__this_02 = __this_04;
				goto label_05d4dfa2;
			}
			bVar4 = (pSVar5 == HumanLoadout.Civilian);
			if (bVar4) goto label_05d4e283;
		}
		else {
			pUVar11 = local_148;
			bVar4 = (pSVar5 == PlayerCharacter.Titan);
			if (bVar4) {
				pSVar5 = local_130.get_ThemePanel();
				UVar35 = UIManager.GetThemeColor(pSVar5, "Icon", "LoadoutTitan", "DefaultPanel");
				if (pUVar11 == null) goto label_05d4e2ec;
				pUVar11.set_color(UVar35);
				pSVar5 = ResourcePaths.UI;
				ppSVar13 = &"Icons/Game/TitanIcon";
	label_05d4d98e: ;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, *ppSVar13, true, false);
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) goto label_05d4e2d1;
				__this_05 = local_128;
				goto label_05d4d9c3;
			}
			__this_05 = local_128;
			bVar4 = (pSVar5 == PlayerCharacter.Shifter) ;
			if (bVar4) {
				pSVar5 = local_130.get_ThemePanel();
				UVar35 = UIManager.GetThemeColor(pSVar5, "Icon", "LoadoutShifter", "DefaultPanel");
				if (local_148 == null) goto label_05d4e2ec;
				local_148.set_color(UVar35);
				pSVar5 = ResourcePaths.UI;
				ppSVar13 = &"Icons/Game/ShifterIcon";
	label_05d4dfa2: ;
				value = (Texture)ResourceManager.LoadAsset(pSVar5, *ppSVar13, true, false);
				pUVar11 = local_148;
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
	label_05d4e2d1: ;
					throw new InvalidCastException();
				}
				goto label_05d4d9c3;
			}
	label_05d4d9d0: ;
			__this_04 = __this_02;
		}
		if (local_c8.r == 0.0) {
	label_05d4da13: ;
			if ((pUVar11 == null) ||(pUVar12 = pUVar11.gameObject, pUVar12 == null)) goto label_05d4e2ec;
			pUVar12.SetActive(false);
		}
		else {
			bVar4 = (local_e8 == PlayerStatus.Spectating);
			if (bVar4) goto label_05d4da13;
			if ((pUVar11 == null) ||(pUVar12 = pUVar11.gameObject, pUVar12 == null)) goto label_05d4e2ec;
			pUVar12.SetActive(true);
		}
		if (__this_05 != null) {
			id = __this_05.actorNumber;
			includeMC = __this_05.IsMasterClient;
			bVar4 = __this_05.IsLocal;
			pSVar5 = ChatManager.GetIDString(id, includeMC, bVar4);
			bVar4 = NameEffectHelpers.TryGetNameEffect(__this_05, (ResolvedNameEffect)local_a8);
			if (bVar4) {
				effect = local_a8._4_4_;
				uVar19 = (int)pUStack_a0;
				uVar21 = (int)((ulong)pUStack_a0 >> 0x20);
				uVar22 = (int)local_98;
				uVar24 = (int)((ulong)local_98 >> 0x20);
				uVar25 = (int)pSStack_90;
				uVar26 = (int)((ulong)pSStack_90 >> 0x20);
				uVar27 = (int)local_88;
				uVar28 = (int)((ulong)local_88 >> 0x20);
				fVar23 = auStack_80._0_4_;
				fVar20 = auStack_80._4_4_;
				uVar29 = (int)local_78;
				uVar30 = (int)((ulong)local_78 >> 0x20);
				fVar31 = UStack_70.r;
				fVar32 = UStack_70.g;
				fVar33 = UStack_70.b;
				fVar34 = UStack_70.a;
				if ((typeof(EffectText)._2).cctor_finished_or_no_cctor == 0) {
					local_148 = pUStack_a0;
					local_e8 = local_98;
					local_108 = pSStack_90;
					local_128 = local_88;
					local_c8.r = (float)auStack_80._0_4_;
					local_c8.g = (float)auStack_80._4_4_;
					local_c8.b = 0.0;
					local_c8.a = 0.0;
					local_d8 = local_78;
					local_48.r = UStack_70.r;
					local_48.g = UStack_70.g;
					local_48.b = 0.0;
					local_48.a = 0.0;
					local_58 = UStack_70.b;
					fStack_54 = UStack_70.a;
					uVar19 = (undefined4)local_148;
					uVar21 = local_148._4_4_;
					uVar22 = (undefined4)local_e8;
					uVar24 = local_e8._4_4_;
					uVar25 = (undefined4)local_108;
					uVar26 = local_108._4_4_;
					uVar27 = (undefined4)local_128;
					uVar28 = local_128._4_4_;
					fVar23 = local_c8.r;
					fVar20 = local_c8.g;
					uVar29 = (undefined4)local_d8;
					uVar30 = local_d8._4_4_;
					fVar31 = local_48.r;
					fVar32 = local_48.g;
					fVar33 = local_58;
					fVar34 = fStack_54;
				}
				UVar35.g = (float)uVar21;
				UVar35.r = (float)uVar19;
				UVar35.a = (float)uVar24;
				UVar35.b = (float)uVar22;
				colorB.g = (float)uVar26;
				colorB.r = (float)uVar25;
				colorB.a = (float)uVar28;
				colorB.b = (float)uVar27;
				colorC.g = fVar20;
				colorC.r = fVar23;
				colorC.a = (float)uVar30;
				colorC.b = (float)uVar29;
				colorD.g = fVar32;
				colorD.r = fVar31;
				colorD.a = fVar34;
				colorD.b = fVar33;
				local_f0 = EffectText.Compose(local_f0, effect, UVar35, colorB, colorC, colorD);
			}
			if ((__this_04 != null) &&(pUVar10 = __this_04.Find("Name"), pUVar10 != null)) {
				__this_03 = pUVar10.GetComponent<EffectText>();
				value_00 = NameFontCatalog.FontForPlayer(__this_05, false);
				if (__this_03 != null) {
					__this_03.font = value_00;
					__this_00 = local_130._view;
					pSVar5 = String.Concat(pSVar5, local_f0);
					if (__this_00 != null) {
						pSVar5 = __this_00.Readable(pSVar5);
						__this_03.text = pSVar5;
						pUVar10 = local_110;
						pUVar15 = local_110.Find("Score");
						if ((pUVar15 != null) &&(pTVar16 = pUVar15.GetComponent<TMP_Text>(), pTVar16 != null)) {
							pTVar16.set_text(local_b0);
							fVar20 = AottgInGameView.FitTextHeight(pTVar16, 40.0);
							fVar23 = 58.0;
							if (58.0 <= fVar20 + 12.0) {
								fVar23 = fVar20 + 12.0;
							}
							AottgInGameView.SetHeight(pUVar10, fVar23);
							pUVar10 = pUVar10.Find("Actions");
							pPVar17 = PhotonNetwork.LocalPlayer;
							if (((pUVar10 != null) &&(pUVar15 = pUVar10.Find("Mute"), pUVar15 != null)) &&(pUVar12 = pUVar15.gameObject, pUVar12 != null)) {
								pUVar12.SetActive(pPVar17 != __this_05);
								pUVar10 = pUVar10.Find("Kick");
								if (pUVar10 != null) {
									bVar4 = false;
									pUVar12 = pUVar10.gameObject;
									pUVar10 = local_110;
									if (pPVar17 != __this_05) {
										bVar4 = PhotonNetwork.IsMasterClient;
									}
									if (pUVar12 != null) {
										pUVar12.SetActive(bVar4);
										pUVar10 = pUVar10.Find("Ping");
										if (pUVar10 != null) {
											pTVar16 = pUVar10.GetComponent<TMP_Text>();
											local_14c = PhotonExtensions.GetIntProperty(__this_05, PlayerProperty.Ping, 0);
											pSVar5 = local_14c.ToString();
											if (pTVar16 != null) {
												pTVar16.set_text(pSVar5);
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
	label_05d4e2ec: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600505B")]
	[Address(RVA = "0x5C4E310", Offset = "0x5C4D310", VA = "0x5C4E310")]
	internal void OnClickProfile(int index)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$OnClickProfile): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Player[] pPVar3;
		BasePanel pUVar4;
		ScoreboardProfilePopup __this_00;

		pPVar3 = this._lastPlayers;
		if (((pPVar3 == null) || (index < 0)) ||(uVar2 = (uint)pPVar3.Length, (int)uVar2 <= index)) {
			return;
		}
		if (uVar2 <= (uint)index) {
			throw new IndexOutOfRangeException();
		}
		pUVar4 = this.Parent;
		if (pUVar4 != null) {
			bVar1 = (typeof(ScoreboardPopup)._2).typeHierarchyDepth;
			if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] !=typeof(ScoreboardPopup))) {
				throw new InvalidCastException();
			}
			__this_00 = (ScoreboardProfilePopup)(*(ulong)((sbyte)pUVar4 + 0xb0));
			if (__this_00 != null) {
				__this_00.Show(pPVar3[(uint)index]);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600505C")]
	[Address(RVA = "0x5C4E3C0", Offset = "0x5C4D3C0", VA = "0x5C4E3C0")]
	internal void OnClickKick(int index)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$OnClickKick): 6 lines keep C-only constructs
		uint uVar1;
		Player[] pPVar2;
		Player pPVar3;
		BasePanel obj;
		ScoreboardKickPopup __this_00;
		bool bVar4;
		ScoreboardScorePanel.c__DisplayClass18_0 __this_01;
		object pIVar5;
		String message;
		UnityAction __this_02;
		Player* targetAddress;

		__this_01 = new ScoreboardScorePanel.c__DisplayClass18_0();
		if (__this_01 == null) {
	label_05d4e5d1: ;
			throw new NullReferenceException();
		}
		__this_01.__4__this = this;
		pPVar2 = this._lastPlayers;
		if (((pPVar2 != null) && (-1 < index)) &&(uVar1 = (uint)pPVar2.Length, index < (int)uVar1)) {
			if (uVar1 <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			targetAddress = &__this_01.player;
			__this_01.player = pPVar2[(uint)index];
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar4 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar4 = PhotonNetwork.IsMasterClient;
			}
			if (bVar4) {
				pPVar3 = *targetAddress;
				if (pPVar3 != null) {
					if (pPVar3.IsLocal != false) {
						return;
					}
					obj = this.Parent;
					pIVar5 = il2cpp_codegen_is_inst_class((object)obj, typeof(ScoreboardPopup));
					if (pIVar5 != null) {
						pIVar5 = il2cpp_codegen_is_inst_class((object)obj, typeof(ScoreboardPopup));
						__this_00 = pIVar5[0xb].monitor;
						message = UIManager.GetLocale("ScoreboardPopup", "KickPopup", "Confirm", "", "");
						__this_02 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardScorePanel_c__DisplayClass18_0_OnClickKick_b__0);
						if (__this_00 != null) {
							__this_00.Show(message, __this_02);
							return;
						}
					}
				}
				goto label_05d4e5d1;
			}
		}
		return;
	}

	[Token(Token = "0x600505D")]
	[Address(RVA = "0x5C4E5E0", Offset = "0x5C4D5E0", VA = "0x5C4E5E0")]
	private void FinishKickPlayer(Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$FinishKickPlayer): clean
		ChatManager.KickPlayer(player, true, false, ".");
		return;
	}

	[Token(Token = "0x600505E")]
	[Address(RVA = "0x5C4E650", Offset = "0x5C4D650", VA = "0x5C4E650")]
	internal void OnClickMute(int index)
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$OnClickMute): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Player[] pPVar3;
		BasePanel pUVar4;
		ScoreboardMutePopup __this_00;

		pPVar3 = this._lastPlayers;
		if (((pPVar3 == null) || (index < 0)) ||(uVar2 = (uint)pPVar3.Length, (int)uVar2 <= index)) {
			return;
		}
		if (uVar2 <= (uint)index) {
			throw new IndexOutOfRangeException();
		}
		pUVar4 = this.Parent;
		if (pUVar4 != null) {
			bVar1 = (typeof(ScoreboardPopup)._2).typeHierarchyDepth;
			if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] !=typeof(ScoreboardPopup))) {
				throw new InvalidCastException();
			}
			__this_00 = (ScoreboardMutePopup)(*(ulong)((sbyte)pUVar4 + 0xc0));
			if (__this_00 != null) {
				__this_00.Show(pPVar3[(uint)index]);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600505F")]
	[Address(RVA = "0x5C4E700", Offset = "0x5C4D700", VA = "0x5C4E700")]
	public ScoreboardScorePanel()
	{
		// Lifted from source/cpp/UI/ScoreboardScorePanel.c (UI.ScoreboardScorePanel$$.ctor): clean
		List<Transform> __this_00;

		__this_00 = new List<Transform>();
		this._rows = __this_00;
		this._currentSyncDelay = 1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ScoreboardScorePanel.c.

	// UI.ScoreboardScorePanel.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardScorePanel.<>c__DisplayClass18_0$$<OnClickKick>b__0: clean
	private void c__DisplayClass18_0__OnClickKick_b__0()
	{
		ScoreboardScorePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.FinishKickPlayer(this.player);
		return;
	}
}
