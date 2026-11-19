// ==================== AoTTG2 cross-reference ====================
// Type: UI.KDRPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KDRPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KDRPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000849")]
internal class KDRPanel : MonoBehaviour, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x40029CA")]
	[FieldOffset(Offset = "0x20")]
	private ElementStyle _style;

	[Token(Token = "0x40029CB")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, PlayerKDRRow> _players;

	[Token(Token = "0x40029CC")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, TeamKDRRow> _teamHeaders;

	[Token(Token = "0x40029CD")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x40029CE")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSyncDelay;

	[Token(Token = "0x40029CF")]
	[FieldOffset(Offset = "0x3C")]
	private KDRMode _kdrMode;

	[Token(Token = "0x40029D0")]
	[FieldOffset(Offset = "0x40")]
	private PVPMode _pvpMode;

	[Token(Token = "0x40029D1")]
	[FieldOffset(Offset = "0x48")]
	private string _defaultTeam;

	[Token(Token = "0x40029D2")]
	[FieldOffset(Offset = "0x50")]
	public bool _showScoreboardLoadout;

	[Token(Token = "0x40029D3")]
	[FieldOffset(Offset = "0x51")]
	public bool _showScoreboardStatus;

	[Token(Token = "0x6004F25")]
	[Address(RVA = "0x5C32030", Offset = "0x5C31030", VA = "0x5C32030")]
	public void Setup(ElementStyle style)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$Setup): clean
		this._style = style;
		this.DestroyAndRecreate();
		this.Sync();
		return;
	}

	[Token(Token = "0x6004F26")]
	[Address(RVA = "0x5C32670", Offset = "0x5C31670", VA = "0x5C32670")]
	private void Update()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$Update): clean
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

	[Token(Token = "0x6004F27")]
	[Address(RVA = "0x5C32510", Offset = "0x5C31510", VA = "0x5C32510")]
	private void Sync()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$Sync): clean
		bool bVar1;
		int iVar2;
		IntSetting pSVar3;
		InGameMiscSettings pSVar4;
		CustomLogicEvaluator pCVar5;
		Settings_SettingsManager_StaticFields pSVar6;
		bool bVar7;

		pSVar6 = typeof(SettingsManager).static_fields;
		if ((pSVar6.UISettings == null) ||(pSVar3 = pSVar6.UISettings.KDR, pSVar3 == null)) {
	label_05d3265e: ;
			throw new NullReferenceException();
		}
		iVar2 = pSVar3._value;
		if (iVar2 != this._kdrMode) {
			this._kdrMode = iVar2;
			this.DestroyAndRecreate();
			pSVar6 = typeof(SettingsManager).static_fields;
		}
		if (((pSVar6.InGameCurrent == null) ||(pSVar4 = pSVar6.InGameCurrent.Misc, pSVar4 == null)) ||(pSVar3 = pSVar4.PVP, pSVar3 == null)) goto label_05d3265e;
		iVar2 = pSVar3._value;
		if (iVar2 == this._pvpMode) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d325d8;
	label_05d32608: ;
			pCVar5 = CustomLogicManager.Evaluator;
		}
		else {
			this._pvpMode = iVar2;
			this.DestroyAndRecreate();
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d32608;
	label_05d325d8: ;
			pCVar5 = CustomLogicManager.Evaluator;
		}
		if (pCVar5 != null) {
			bVar1 = pCVar5.ShowScoreboardStatus;
			if (this._showScoreboardStatus == bVar1) {
				bVar7 = pCVar5.ShowScoreboardLoadout;
				if (this._showScoreboardLoadout == bVar7) goto label_05d3264f;
			}
			else {
				bVar7 = pCVar5.ShowScoreboardLoadout;
			}
			this._showScoreboardLoadout = bVar7;
			this._showScoreboardStatus = bVar1;
			this.DestroyAndRecreate();
		}
	label_05d3264f: ;
		this._currentSyncDelay = 0.2;
		return;
	}

	[Token(Token = "0x6004F28")]
	[Address(RVA = "0x5C326C0", Offset = "0x5C316C0", VA = "0x5C326C0")]
	private string GetPlayerTeam(Player player)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$GetPlayerTeam): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		IntSetting pSVar3;
		String pSVar4;

		if (player == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Misc, pSVar2 == null)) ||(pSVar3 = pSVar2.PVP, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar3._value != 2) {
			return this._defaultTeam;
		}
		pSVar4 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Team, this._defaultTeam);
		return pSVar4;
	}

	[Token(Token = "0x6004F29")]
	[Address(RVA = "0x5C327A0", Offset = "0x5C317A0", VA = "0x5C327A0")]
	private void ReorganizeLayout()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$ReorganizeLayout): 26 lines keep C-only constructs
		String* ppSVar1;
		Dictionary<string, TeamKDRRow> source;
		object pIVar2;
		Dictionary<int, PlayerKDRRow> source_00;
		Player player;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		IntSetting pSVar5;
		String b;
		Component __this_00;
		bool bVar6;
		Func<T, TResult> pSVar7;
		System_Linq_IOrderedEnumerable_TSource__o pSVar8;
		System_Collections_Generic_List_TSource__o __this_01;
		UI_KDRPanel___c_StaticFields pUVar9;
		System_Collections_Generic_List_KeyValuePair_int__object___o pSVar10;
		Transform pUVar11;
		String a;
		String* ppSVar12;
		int index;
		byte[] local_b8 = new byte[8];
		ulong uStack_b0;
		String local_a8;
		Component pUStack_a0;
		byte[] local_90 = new byte[16];
		String local_80;
		Component pUStack_78;
		System_Collections_Generic_List_KeyValuePair_int__object___o local_70;
		byte[] local_58 = new byte[8];
		Component pUStack_40;

		if (Il2CppMethodInitialized_07547e2f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_MoveNext) ;
			Il2CppMethodInitialized_07547e2f = true;
		}
		local_a8 = null;
		pUStack_a0 = null;
		local_b8 = (byte[])0x0;
		uStack_b0._0_4_ = 0;
		uStack_b0._4_4_ = 0;
		pUStack_40 = null;
		local_58 = (byte[])0x0;
		source = this._teamHeaders;
		if ((typeof(KDRPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar9 = typeof(KDRPanel.c).static_fields;
			pSVar7 = (Func<T, TResult>)pUVar9.__9__14_0;
		}
		else {
			pUVar9 = typeof(KDRPanel.c).static_fields;
			pSVar7 = (Func<T, TResult>)pUVar9.__9__14_0;
		}
		if (pSVar7 == null) {
			if (((typeof(KDRPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(KDRPanel.c).static_fields;
			}
			pIVar2 = (object)pUVar9.__9;
			pSVar7 = new Func<KeyValuePair<int, PlayerKDRRow>, int>(pIVar2, (intptr_t)MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_0);
			pUVar9 = typeof(KDRPanel.c).static_fields;
			pUVar9.__9__14_0 = (Func<KeyValuePair<string, TeamKDRRow>, string>)pSVar7;
		}
		pSVar8 = Enumerable.OrderBy<KeyValuePair<string, TeamKDRRow>, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)pSVar7);
		__this_01 = Enumerable.ToList<KeyValuePair<string, TeamKDRRow>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8);
		source_00 = this._players;
		pSVar7 = (Func<T, TResult>)il2cpp_codegen_object_new(typeof(Func<KeyValuePair<int, PlayerKDRRow>, string>)) ;
		pSVar7 = new Func<KeyValuePair<int, PlayerKDRRow>, int>((object)this, (intptr_t)MethodInfo_UI_KDRPanel_ReorganizeLayout_b__14_1);
		pSVar8 = Enumerable.OrderBy<KeyValuePair<int, PlayerKDRRow>, string>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__TKey__o)pSVar7);
		if ((typeof(KDRPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar9 = typeof(KDRPanel.c).static_fields;
			pSVar7 = (Func<T, TResult>)pUVar9.__9__14_2;
		}
		else {
			pUVar9 = typeof(KDRPanel.c).static_fields;
			pSVar7 = (Func<T, TResult>)pUVar9.__9__14_2;
		}
		if (pSVar7 == null) {
			if (((typeof(KDRPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(KDRPanel.c).static_fields;
			}
			pIVar2 = (object)pUVar9.__9;
			pSVar7 = new Func<KeyValuePair<int, PlayerKDRRow>, int>(pIVar2, (intptr_t)MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_2);
			pUVar9 = typeof(KDRPanel.c).static_fields;
			pUVar9.__9__14_2 = (Func<KeyValuePair<int, PlayerKDRRow>, int>)pSVar7;
		}
		pSVar8 = Enumerable.ThenBy<KeyValuePair<int, PlayerKDRRow>, int>(pSVar8, (System_Func_TSource__TKey__o)pSVar7);
		pSVar10 = (System_Collections_Generic_List_KeyValuePair_int__object___o)Enumerable.ToList<KeyValuePair<int, PlayerKDRRow>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8);
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		local_90.GetEnumerator((List<T>)__this_01);
		local_a8 = local_80;
		pUStack_a0 = pUStack_78;
		local_b8 = (byte[])local_90._0_8_;
		uStack_b0 = (System_Collections_Generic_List_Enumerator_T__o)local_90._8_8_;
		if (pSVar10 == null) {
			bVar6 = local_b8.MoveNext();
			if (bVar6) {
				if (pUStack_a0 != null) {
					pUVar11 = pUStack_a0.transform;
					if (pUVar11 != null) {
						pUVar11.SetSiblingIndex(0);
						throw new NullReferenceException();
					}
	label_05d32df2: ;
					throw new NullReferenceException();
				}
	label_05d32de1: ;
				throw new NullReferenceException();
			}
		}
		else {
			ppSVar1 = &this._defaultTeam;
			index = 0;
			local_70 = pSVar10;
	label_05d32b40: ;
			bVar6 = local_b8.MoveNext();
			b = local_a8;
			if (bVar6) {
				if (pUStack_a0 != null) {
					pUVar11 = pUStack_a0.transform;
					if (pUVar11 != null) {
						pUVar11.SetSiblingIndex(index);
						local_90.GetEnumerator(local_70);
						pUStack_40 = pUStack_78;
						local_58 = (byte[])local_90._0_8_;
						local_90._0_8_ = null;
						local_90._8_8_ = (System_Collections_Generic_List_Enumerator_T__o)local_58;
						do {
							index = index + 1;
							do {
								bVar6 = local_58.MoveNext();
								__this_00 = pUStack_40;
								if (!bVar6) {
									local_58.Dispose();
									goto label_05d32b40;
								}
								if (pUStack_40 == null) {
									throw new NullReferenceException();
								}
								player = (*(ulong)((sbyte)pUStack_40 + 0x20));
								if (player == null) {
									ppSVar12 = *(String**)(g_data_07556758 + 0xb8);
	label_05d32cd5: ;
									a = *ppSVar12;
								}
								else {
									pSVar3 = SettingsManager.InGameCurrent;
									if (((pSVar3 == null) ||(pSVar4 = pSVar3.Misc, pSVar4 == null)) ||(pSVar5 = pSVar4.PVP, pSVar5 == null)) {
										throw new NullReferenceException();
									}
									ppSVar12 = ppSVar1;
									if (pSVar5._value != 2) goto label_05d32cd5;
									a = PhotonExtensions.GetStringProperty(player, PlayerProperty.Team, *ppSVar1);
								}
								bVar6 = (a == b);
							} while (!bVar6);
							pUVar11 = __this_00.transform;
							if (pUVar11 == null) {
								throw new NullReferenceException();
							}
							pUVar11.SetSiblingIndex(index);
						} while(true);
					}
					goto label_05d32df2;
				}
				goto label_05d32de1;
			}
		}
		local_b8.Dispose();
		return;
	}

	[Token(Token = "0x6004F2A")]
	[Address(RVA = "0x5C32EA0", Offset = "0x5C31EA0", VA = "0x5C32EA0")]
	private void AddPlayer(Player player, bool redoLayout = false, bool isVisible = true)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$AddPlayer): clean
		Dictionary<int, object> pSVar1;
		Dictionary<object, object> pSVar2;
		UISettings pSVar3;
		IntSetting pSVar4;
		bool bVar5;
		Transform pUVar6;
		GameObject pUVar7;
		PlayerKDRRow player_00;
		String team;
		TeamKDRRow pUVar8;

		if (player == null) {
			return;
		}
		pSVar1 = (Dictionary<int, object>)this._players;
		if (pSVar1 != null) {
			bVar5 = pSVar1.ContainsKey(player.actorNumber);
			if (bVar5) {
				return;
			}
			pUVar6 = this.transform;
			pUVar7 = ElementFactory.CreatePlayerKDRRow(pUVar6, this._style, player);
			if (pUVar7 != null) {
				player_00 = pUVar7.GetComponent<PlayerKDRRow>();
				if (!isVisible) {
					if ((player_00 == null) ||(pUVar7 = player_00.gameObject, pUVar7 == null)) goto label_05d3312a;
					pUVar7.SetActive(false);
				}
				pSVar1 = (Dictionary<int, object>)this._players;
				if (pSVar1 != null) {
					pSVar1.Add(player.actorNumber, (object)player_00);
					if (this._pvpMode != 2) {
						return;
					}
					team = this.GetPlayerTeam(player);
					pSVar2 = (Dictionary<object, object>)this._teamHeaders;
					if (pSVar2 != null) {
						bVar5 = pSVar2.ContainsKey((object)team);
						if (!bVar5) {
							pUVar6 = this.transform ;
							pUVar7 = ElementFactory.CreateTeamKDRRow(pUVar6, this._style, team);
							if (pUVar7 == null) goto label_05d3312a;
							pUVar8 = pUVar7.GetComponent<TeamKDRRow>();
							pSVar3 = SettingsManager.UISettings;
							if ((pSVar3 == null) ||(pSVar4 = pSVar3.KDR, pSVar4 == null)) goto label_05d3312a;
							pUVar7.SetActive(pSVar4._value != 0);
							pSVar2 = (Dictionary<object, object>)this._teamHeaders;
							if (pSVar2 == null) goto label_05d3312a;
							pSVar2.Add((object)team, (object)pUVar8);
						}
						pSVar2 = (Dictionary<object, object>)this._teamHeaders;
						if ((pSVar2 != null) &&(pUVar8 = pSVar2.get_Item((object)team) , pUVar8 != null)) {
							pUVar8.AddPlayerStats(player_00);
							pUVar8.UpdateRow();
							if (redoLayout) {
								this.ReorganizeLayout();
								return;
							}
							return;
						}
					}
				}
			}
		}
	label_05d3312a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F2B")]
	[Address(RVA = "0x5C33130", Offset = "0x5C32130", VA = "0x5C33130")]
	private void RemovePlayer(Player player, bool redoLayout = false)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$RemovePlayer): clean
		Dictionary<int, object> pSVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		PlayerKDRRow pUVar4;
		TeamKDRRow pUVar5;
		Object pUVar6;
		MethodInfo key;

		if (player == null) {
			return;
		}
		pSVar1 = (Dictionary<int, object>)this._players;
		if (pSVar1 == null) goto label_05d3341b;
		bVar3 = pSVar1.ContainsKey(player.actorNumber);
		if (!bVar3) {
			return;
		}
		if (this._pvpMode == 2) {
			pSVar1 = (Dictionary<int, object>)this._players;
			if (((pSVar1 == null) ||(pUVar4 = pSVar1.get_Item(player.actorNumber), pUVar4 == null)) ||(pSVar2 = (Dictionary<object, object>)this._teamHeaders, pSVar2 == null)) goto label_05d3341b;
			key = (MethodInfo)pUVar4.team;
			bVar3 = pSVar2.ContainsKey((object)key);
			if (!bVar3) {
				key = (MethodInfo)this._defaultTeam;
			}
			pSVar2 = (Dictionary<object, object>)this._teamHeaders;
			if (pSVar2 == null) goto label_05d3341b;
			bVar3 = pSVar2.ContainsKey((object)key);
			if (bVar3) {
				pSVar2 = (Dictionary<object, object>)this._teamHeaders;
				if (pSVar2 == null) goto label_05d3341b;
				pUVar5 = pSVar2.get_Item((object)key);
				pSVar1 = (Dictionary<int, object>)this._players;
				if ((pSVar1 == null) ||(pUVar4 = pSVar1.get_Item(player.actorNumber), pUVar5 == null)) goto label_05d3341b;
				pUVar5.RemovePlayerStats(pUVar4);
				pSVar2 = (Dictionary<object, object>)this._teamHeaders;
				if ((pSVar2 == null) ||(pUVar5 = pSVar2.get_Item((object)key), pUVar5 == null)) goto label_05d3341b;
				pSVar2 = (Dictionary<object, object>)this._teamHeaders;
				if (pUVar5.playerCount < 1) {
					if ((pSVar2 == null) ||(pUVar5 = pSVar2.get_Item((object)key), pUVar5 == null)) goto label_05d3341b;
					pUVar6 = (Object)pUVar5.gameObject;
					Object.Destroy(pUVar6);
					pSVar2 = (Dictionary<object, object>)this._teamHeaders;
					if (pSVar2 == null) goto label_05d3341b;
					pSVar2.Remove((object)key);
				}
				else {
					if ((pSVar2 == null) ||(pUVar5 = pSVar2.get_Item((object)key), pUVar5 == null)) goto label_05d3341b;
					pUVar5.UpdateRow();
				}
			}
			if (redoLayout) {
				this.ReorganizeLayout();
			}
		}
		pSVar1 = (Dictionary<int, object>)this._players;
		if ((pSVar1 != null) &&(pUVar4 = pSVar1.get_Item(player.actorNumber), pUVar4 != null)) {
			pUVar6 = (Object)pUVar4.gameObject;
			Object.Destroy(pUVar6);
			pSVar1 = (Dictionary<int, object>)this._players;
			if (pSVar1 != null) {
				pSVar1.Remove(player.actorNumber);
				return;
			}
		}
	label_05d3341b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F2C")]
	[Address(RVA = "0x5C32060", Offset = "0x5C31060", VA = "0x5C32060")]
	public void DestroyAndRecreate()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$DestroyAndRecreate): 14 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		Dictionary<int, object> pSVar3;
		Dictionary<object, object> pSVar4;
		UISettings pSVar5;
		IntSetting pSVar6;
		bool bVar7;
		Object pUVar8;
		MethodInfo method_00;
		Player[] pPVar9;
		ulong uVar10;
		ulong uVar11;
		byte[] local_b0 = new byte[16];
		Component pUStack_98;
		int local_90;
		uint uStack_8c;
		byte[] local_88 = new byte[8];
		Component pUStack_70;
		ulong local_68;
		byte[] local_58 = new byte[8];
		Component pUStack_40;
		ulong local_38;

		pUStack_40 = null;
		local_58 = (byte[])0x0;
		local_38._0_4_ = 0;
		local_38._4_4_ = 0;
		pUStack_70 = null;
		local_88 = (byte[])0x0;
		local_68._0_4_ = 0;
		local_68._4_4_ = 0;
		pSVar3 = (Dictionary<int, object>)this._players;
		if (pSVar3 != null) {
			local_b0.GetEnumerator(pSVar3);
			local_38._0_4_ = local_90;
			local_38._4_4_ = uStack_8c;
			pUStack_40 = pUStack_98;
			local_58 = (byte[])local_b0._0_8_;
			local_b0._0_8_ = null;
			local_b0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)local_58;
			while(true) {
				bVar7 = local_58.MoveNext();
				if (!bVar7) break;
				if (pUStack_40 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = (Object)pUStack_40.gameObject;
				Object.Destroy(pUVar8);
			}
			local_58.Dispose();
			pSVar3 = (Dictionary<int, object>)this._players;
			if (pSVar3 != null) {
				pSVar3.Clear();
				pSVar4 = (Dictionary<object, object>)this._teamHeaders;
				if (pSVar4 != null) {
					local_b0.GetEnumerator(pSVar4);
					local_68._0_4_ = local_90;
					local_68._4_4_ = uStack_8c;
					pUStack_70 = pUStack_98;
					local_88 = (byte[])local_b0._0_8_;
					local_b0._0_8_ = null;
					local_b0._8_8_ = (Dictionary.Enumerator<object, object>)local_88;
					while(true) {
						bVar7 = local_88.MoveNext();
						if (!bVar7) break;
						if (pUStack_70 == null) {
							throw new NullReferenceException();
						}
						pUVar8 = (Object)pUStack_70.gameObject ;
						Object.Destroy(pUVar8);
					}
					local_88.Dispose();
					pSVar4 = (Dictionary<object, object>)this._teamHeaders;
					if (pSVar4 != null) {
						pSVar4.Clear();
						pSVar5 = SettingsManager.UISettings;
						if ((pSVar5 != null) &&(pSVar6 = pSVar5.KDR, pSVar6 != null)) {
							iVar1 = pSVar6._value;
							bVar7 = false;
							method_00 = (MethodInfo)PhotonNetwork.LocalPlayer;
							this.AddPlayer((Player)method_00, false, iVar1 != 0);
							if (iVar1 != 0) {
								pSVar5 = SettingsManager.UISettings;
								if ((pSVar5 == null) ||(pSVar6 = pSVar5.KDR, pSVar6 == null)) goto label_05d32450;
								bVar7 = pSVar6._value != 1;
							}
							pPVar9 = PhotonNetwork.PlayerListOthers;
							if (pPVar9 != null) {
								if (0 < (int)pPVar9.Length) {
									uVar10 = pPVar9.Length & 0xffffffff;
									uVar11 = 0;
									do {
										if (uVar10 <= uVar11) {
											throw new IndexOutOfRangeException();
										}
										method_00 = (MethodInfo)pPVar9[uVar11];
										this.AddPlayer((Player)method_00, false, bVar7);
										uVar11 = uVar11 + 1;
										uVar2 = (uint)pPVar9.Length;
										uVar10 = (ulong)uVar2;
									} while ((long)uVar11 < (long)(int)uVar2);
								}
								this.ReorganizeLayout();
								return;
							}
						}
					}
				}
			}
		}
	label_05d32450: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F2D")]
	[Address(RVA = "0x5C33420", Offset = "0x5C32420", VA = "0x5C33420", Slot = "4")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnPlayerEnteredRoom): clean
		UISettings pSVar1;
		IntSetting pSVar2;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.KDR, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		this.AddPlayer(newPlayer, true, newPlayer != null && pSVar2._value == 2);
		return;
	}

	[Token(Token = "0x6004F2E")]
	[Address(RVA = "0x5C334B0", Offset = "0x5C324B0", VA = "0x5C334B0", Slot = "5")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnPlayerLeftRoom): clean
		UISettings pSVar1;
		IntSetting pSVar2;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.KDR, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		if ((otherPlayer == null) || (pSVar2._value != 2)) {
			return;
		}
		this.RemovePlayer(otherPlayer, true);
		return;
	}

	[Token(Token = "0x6004F2F")]
	[Address(RVA = "0x5C33540", Offset = "0x5C32540", VA = "0x5C33540", Slot = "7")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnPlayerPropertiesUpdate): clean
		int iVar1;
		uint uVar2;
		UISettings pSVar3;
		IntSetting pSVar4;
		Dictionary<int, object> pSVar5;
		Dictionary<object, object> pSVar6;
		Player pPVar7;
		String key;
		TeamKDRRow pUVar8;
		PlayerKDRRow pUVar9;
		bool bVar10;
		object pIStack_38;

		pIStack_38 = null;
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 != null) &&(pSVar4 = pSVar3.KDR, pSVar4 != null)) {
			iVar1 = pSVar4._value;
			if (iVar1 == 0) {
				bVar10 = false;
				uVar2 = (typeof(PlayerProperty)._2).cctor_finished_or_no_cctor;
			}
			else if (iVar1 == 1) {
				pPVar7 = PhotonNetwork.LocalPlayer;
				bVar10 = pPVar7 == targetPlayer;
				uVar2 = (typeof(PlayerProperty)._2).cctor_finished_or_no_cctor;
			}
			else {
				bVar10 = true;
				uVar2 = (typeof(PlayerProperty)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			if (changedProps != null) {
				changedProps.TryGetValue((object)PlayerProperty.Team, ref pIStack_38);
				if (pIStack_38 != null) {
					this.RemovePlayer(targetPlayer, false);
					this.AddPlayer(targetPlayer, true, bVar10);
					return;
				}
				if (targetPlayer != null) {
					if (targetPlayer.IsLocal == false) {
						pSVar3 = SettingsManager.UISettings;
						if ((pSVar3 == null) ||(pSVar4 = pSVar3.KDR, pSVar4 == null)) goto label_05d338b7;
						if (pSVar4._value != 2) {
							return;
						}
					}
					pSVar5 = (Dictionary<int, object>)this._players;
					if (pSVar5 != null) {
						bVar10 = pSVar5.ContainsKey(targetPlayer.actorNumber);
						if (!bVar10) {
							return;
						}
						if (this._pvpMode == 2) {
							key = this.GetPlayerTeam(targetPlayer);
							pSVar6 = (Dictionary<object, object>)this._teamHeaders;
							if (pSVar6 != null) {
								bVar10 = pSVar6.ContainsKey((object)key);
								if (!bVar10) {
									return;
								}
								pSVar6 = (Dictionary<object, object>)this._teamHeaders;
								if (pSVar6 != null) {
									pUVar8 = pSVar6.get_Item((object)key);
									pSVar5 = (Dictionary<int, object>)this._players;
									if ((pSVar5 != null) &&(pUVar9 = pSVar5.get_Item(targetPlayer.actorNumber), pUVar8 != null)) {
										pUVar8.RemovePlayerStats(pUVar9);
										pSVar5 = (Dictionary<int, object>)this._players;
										if ((pSVar5 != null) &&(pUVar9 = pSVar5.get_Item(targetPlayer.actorNumber), pUVar9 != null)) {
											pUVar9.UpdateRow(targetPlayer);
											pSVar6 = (Dictionary<object, object>)this._teamHeaders;
											if (pSVar6 != null) {
												pUVar8 = pSVar6.get_Item((object)key);
												pSVar5 = (Dictionary<int, object>)this._players;
												if ((pSVar5 != null) &&(pUVar9 = pSVar5.get_Item(targetPlayer.actorNumber), pUVar8 != null)) {
													pUVar8.AddPlayerStats(pUVar9);
													pSVar6 = (Dictionary<object, object>)this._teamHeaders;
													if ((pSVar6 != null) &&(pUVar8 = pSVar6.get_Item((object)key), pUVar8 != null)) {
														pUVar8.UpdateRow();
														return;
													}
												}
											}
										}
									}
								}
							}
						}
						else {
							pSVar5 = (Dictionary<int, object>)this._players;
							if ((pSVar5 != null) &&(pUVar9 = pSVar5.get_Item(targetPlayer.actorNumber), pUVar9 != null)) {
								pUVar9.UpdateRow(targetPlayer);
								return;
							}
						}
					}
				}
			}
		}
	label_05d338b7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F30")]
	[Address(RVA = "0x5C338C0", Offset = "0x5C328C0", VA = "0x5C338C0", Slot = "12")]
	public void OnJoinedRoom()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnJoinedRoom): clean
		this.DestroyAndRecreate();
		return;
	}

	[Token(Token = "0x6004F31")]
	[Address(RVA = "0x5C338D0", Offset = "0x5C328D0", VA = "0x5C338D0", Slot = "16")]
	public virtual void OnEnable()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnEnable): clean


		PhotonNetwork.AddCallbackTarget((object)this);
		if (this._style == null) {
			return;
		}
		this.DestroyAndRecreate();
		return;
	}

	[Token(Token = "0x6004F32")]
	[Address(RVA = "0x5C33930", Offset = "0x5C32930", VA = "0x5C33930", Slot = "17")]
	public virtual void OnDisable()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnDisable): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547e37 == false) {
			Il2CppMethodInitialized_07547e37 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			PhotonNetwork.RemoveCallbackTarget((object)this);
			return;
		}
		PhotonNetwork.RemoveCallbackTarget((object)this);
		return;
	}

	[Token(Token = "0x6004F33")]
	[Address(RVA = "0x5C339A0", Offset = "0x5C329A0", VA = "0x5C339A0", Slot = "6")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnRoomPropertiesUpdate): clean
		return;
	}

	[Token(Token = "0x6004F34")]
	[Address(RVA = "0x5C339B0", Offset = "0x5C329B0", VA = "0x5C339B0", Slot = "8")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnMasterClientSwitched): clean
		return;
	}

	[Token(Token = "0x6004F35")]
	[Address(RVA = "0x5C339C0", Offset = "0x5C329C0", VA = "0x5C339C0", Slot = "9")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnFriendListUpdate): clean
		return;
	}

	[Token(Token = "0x6004F36")]
	[Address(RVA = "0x5C339D0", Offset = "0x5C329D0", VA = "0x5C339D0", Slot = "10")]
	public void OnCreatedRoom()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnCreatedRoom): clean
		return;
	}

	[Token(Token = "0x6004F37")]
	[Address(RVA = "0x5C339E0", Offset = "0x5C329E0", VA = "0x5C339E0", Slot = "11")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnCreateRoomFailed): clean
		return;
	}

	[Token(Token = "0x6004F38")]
	[Address(RVA = "0x5C339F0", Offset = "0x5C329F0", VA = "0x5C339F0", Slot = "13")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnJoinRoomFailed): clean
		return;
	}

	[Token(Token = "0x6004F39")]
	[Address(RVA = "0x5C33A00", Offset = "0x5C32A00", VA = "0x5C33A00", Slot = "14")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnJoinRandomFailed): clean
		return;
	}

	[Token(Token = "0x6004F3A")]
	[Address(RVA = "0x5C33A10", Offset = "0x5C32A10", VA = "0x5C33A10", Slot = "15")]
	public void OnLeftRoom()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$OnLeftRoom): clean
		return;
	}

	[Token(Token = "0x6004F3B")]
	[Address(RVA = "0x5C33A20", Offset = "0x5C32A20", VA = "0x5C33A20")]
	public KDRPanel()
	{
		// Lifted from source/cpp/UI/KDRPanel.c (UI.KDRPanel$$.ctor): clean
		Dictionary<int, PlayerKDRRow> __this_00;
		Dictionary<string, TeamKDRRow> __this_01;

		__this_00 = new Dictionary<int, PlayerKDRRow>();
		this._players = __this_00;
		__this_01 = new Dictionary<string, TeamKDRRow>();
		this._teamHeaders = __this_01;
		this._currentSyncDelay = 1.0;
		this._defaultTeam = "Individuals";
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/KDRPanel.c.

	// UI.KDRPanel$$<ReorganizeLayout>b__14_1: clean
	private String ReorganizeLayout_b__14_1(System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x)
	{
		String pSVar1;
		PlayerKDRRow pUVar2;

		pUVar2 = x.value;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar1 = this.GetPlayerTeam((Player)pUVar2.player);
		return pSVar1;
	}

	// UI.KDRPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new KDRPanel.c();
		KDRPanel.c.__9 = (KDRPanel.c)__this;
		return;
	}

	// UI.KDRPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_0: clean
	private String c__ReorganizeLayout_b__14_0(System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x)
	{
		return x.key;
	}

	// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_2: clean
	private int c__ReorganizeLayout_b__14_2(System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x)
	{
		return x.key;
	}
}
