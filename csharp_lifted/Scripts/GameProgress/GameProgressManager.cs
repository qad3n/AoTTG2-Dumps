// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameProgressManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameProgressManager.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x2000368")]
internal class GameProgressManager : MonoBehaviour
{
	[Token(Token = "0x2000369")]
	[CompilerGenerated]
	private sealed class _003CIncrementPlayTime_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001101")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001102")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000253")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001540")]
			[Address(RVA = "0x5821880", Offset = "0x5820880", VA = "0x5821880", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000254")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001542")]
			[Address(RVA = "0x58218D0", Offset = "0x58208D0", VA = "0x58218D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600153D")]
		[Address(RVA = "0x58216A0", Offset = "0x58206A0", VA = "0x58216A0")]
		[DebuggerHidden]
		public _003CIncrementPlayTime_003Ed__19(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600153E")]
		[Address(RVA = "0x5821750", Offset = "0x5820750", VA = "0x5821750", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600153F")]
		[Address(RVA = "0x5821760", Offset = "0x5820760", VA = "0x5821760", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$MoveNext): clean
			int iVar1;
			GameProgressContainer pGVar2;
			GameStatContainer pGVar3;
			FloatSetting __this_00;
			WaitForSeconds __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				pGVar2 = GameProgressManager.GameProgress;
				if (((pGVar2 == null) ||(pGVar3 = pGVar2.GameStat, pGVar3 == null)) ||(__this_00 = pGVar3.PlayTime, __this_00 == null)) {
					throw new NullReferenceException();
				}
				__this_00.Value = __this_00._value + 10.0;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
			}
			__this_01 = new WaitForSeconds(10.0);
			this.__2__current = (object)__this_01;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x6001541")]
		[Address(RVA = "0x5821890", Offset = "0x5820890", VA = "0x5821890", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x0")]
	private static GameProgressManager _instance;

	[Token(Token = "0x40010FC")]
	[FieldOffset(Offset = "0x8")]
	public static GameProgressContainer GameProgress;

	[Token(Token = "0x40010FD")]
	[FieldOffset(Offset = "0x10")]
	private static GameStatHandler _gameStatHandler;

	[Token(Token = "0x40010FE")]
	[FieldOffset(Offset = "0x18")]
	private static AchievementHandler _achievementHandler;

	[Token(Token = "0x40010FF")]
	[FieldOffset(Offset = "0x20")]
	private static QuestHandler _questHandler;

	[Token(Token = "0x4001100")]
	[FieldOffset(Offset = "0x28")]
	private static List<BaseGameProgressHandler> _handlers;

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x581FB30", Offset = "0x581EB30", VA = "0x581FB30")]
	public static void Init()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$Init): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GameProgress_GameProgressManager_StaticFields pGVar3;
		GameProgressManager __this;
		GameStatContainer gameStat;
		QuestContainer quest;
		List<object> pSVar4;
		Object[] pSVar5;
		MethodInfo pMVar6;
		GameProgressContainer pGVar7;
		GameProgressManager.d__19<IncrementPlayTime> __this_00;
		GameStatHandler pGVar8;
		AchievementHandler pGVar9;
		QuestHandler pGVar10;
		OnLoadScene __this_01;

		pMVar6 = (MethodInfo)SingletonFactory.CreateSingleton<GameProgressManager>((object)GameProgressManager._instance);
		GameProgressManager._instance =(GameProgressManager)pMVar6;
		pGVar7 = new GameProgressContainer();
		pGVar3 = typeof(GameProgressManager).static_fields;
		pGVar3.GameProgress = pGVar7;
		__this = GameProgressManager._instance;
		if (__this != null) {
			__this_00 = new GameProgressManager.d__19<IncrementPlayTime>();
			__this_00.__1__state = 0;
			__this.StartCoroutine((IEnumerator)__this_00);
			pGVar7 = GameProgressManager.GameProgress;
			if (pGVar7 != null) {
				gameStat = pGVar7.GameStat;
				pGVar8 = new GameStatHandler(gameStat);
				pGVar3 = typeof(GameProgressManager).static_fields;
				pGVar3._gameStatHandler = pGVar8;
				pGVar7 = GameProgressManager.GameProgress;
				if (pGVar7 != null) {
					pMVar6 = (MethodInfo)pGVar7.Achievement;
					if ((typeof(QuestHandler)._2).cctor_finished_or_no_cctor == 0) {
					}
					pGVar9 = new AchievementHandler(null);
					pGVar9._achievement = (AchievementContainer)pMVar6;
					pGVar9.LoadAchievements();
					pGVar9.CacheActiveAchievements();
					pGVar3 = typeof(GameProgressManager).static_fields;
					pGVar3._achievementHandler = pGVar9;
					pGVar7 = GameProgressManager.GameProgress;
					if (pGVar7 != null) {
						quest = pGVar7.Quest;
						pGVar10 = new QuestHandler(quest);
						pGVar3 = typeof(GameProgressManager).static_fields;
						pGVar3._questHandler = pGVar10;
						pMVar6 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
						pSVar4 = (List<object>)GameProgressManager._handlers;
						if (pSVar4 != null) {
							pGVar8 = GameProgressManager._gameStatHandler;
							piVar1 = &pSVar4._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = pSVar4._items;
							if (pSVar5 != null) {
								uVar2 = pSVar4._size;
								if (uVar2 < (uint)pSVar5.Length) {
									pSVar4._size = uVar2 + 1;
									pSVar5[(int)uVar2] = (object)pGVar8;
								}
								else {
									pSVar4.AddWithResize((object)pGVar8);
								}
								pMVar6 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
								pSVar4 = (List<object>)GameProgressManager._handlers;
								if (pSVar4 != null) {
									pGVar9 = GameProgressManager._achievementHandler;
									piVar1 = &pSVar4._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = pSVar4._items;
									if (pSVar5 != null) {
										uVar2 = pSVar4._size;
										if (uVar2 < (uint)pSVar5.Length) {
											pSVar4._size = uVar2 + 1;
											pSVar5[(int)uVar2] = (object)pGVar9;
										}
										else {
											pSVar4.AddWithResize((object)pGVar9);
										}
										pMVar6 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
										pSVar4 = (List<object>)GameProgressManager._handlers;
										if (pSVar4 != null) {
											pGVar10 = GameProgressManager._questHandler;
											piVar1 = &pSVar4._version;
											*piVar1 = *piVar1 + 1;
											pSVar5 = pSVar4._items;
											if (pSVar5 != null) {
												uVar2 = pSVar4._size;
												if (uVar2 < (uint)pSVar5.Length) {
													pSVar4._size = uVar2 + 1;
													pSVar5[(int)uVar2] = (object)pGVar10;
												}
												else {
													pSVar4.AddWithResize((object)pGVar10);
												}
												__this_01 = new OnLoadScene(null, (intptr_t)MethodInfo_GameProgress_GameProgressManager_OnLoadScene);
												EventManager.add_OnLoadScene(__this_01);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x5820150", Offset = "0x581F150", VA = "0x5820150")]
	private void OnApplicationQuit()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$OnApplicationQuit): clean
		uint uVar1;
		GameProgressContainer pGVar2;

		if (Il2CppMethodInitialized_07545748 == false) {
			Il2CppMethodInitialized_07545748 = true;
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754574a == false) {
			Il2CppMethodInitialized_0754574a = true;
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(GameProgressManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar2 = GameProgressManager.GameProgress;
		}
		else {
			pGVar2 = *(GameProgressContainer*)((long)(typeof(GameProgressManager)).static_fields + 8);
		}
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		pGVar2.Save();
		return;
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x58202B0", Offset = "0x581F2B0", VA = "0x58202B0")]
	public static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$OnLoadScene): clean
		uint uVar1;
		GameProgressContainer pGVar2;
		AchievementHandler __this;
		QuestHandler __this_00;

		if (sceneName != 1) {
			return;
		}
		if (Il2CppMethodInitialized_0754574a == false) {
			Il2CppMethodInitialized_0754574a = true;
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(GameProgressManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar2 = GameProgressManager.GameProgress;
		}
		else {
			pGVar2 = *(GameProgressContainer*)((long)(typeof(GameProgressManager)).static_fields + 8);
		}
		if (pGVar2 != null) {
			pGVar2.Save();
			__this = GameProgressManager._achievementHandler;
			if (__this != null) {
				__this.LoadAchievements();
				__this.CacheActiveAchievements();
				__this_00 = GameProgressManager._questHandler;
				if (__this_00 != null) {
					__this_00.LoadQuests();
					__this_00.CacheActiveQuests();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x5820220", Offset = "0x581F220", VA = "0x5820220")]
	private static void Save()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$Save): clean
		uint uVar1;
		GameProgressContainer pGVar2;

		if (Il2CppMethodInitialized_0754574a == false) {
			Il2CppMethodInitialized_0754574a = true;
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar2 = GameProgressManager.GameProgress;
		}
		else {
			pGVar2 = *(GameProgressContainer*)((long)(typeof(GameProgressManager)).static_fields + 8);
		}
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		pGVar2.Save();
		return;
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x58203F0", Offset = "0x581F3F0", VA = "0x58203F0")]
	public static int GetExpToNext()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$GetExpToNext): clean
		uint uVar1;
		GameStatHandler pGVar2;
		GameStatContainer pGVar3;
		IntSetting pSVar4;
		List<int> __this;
		int iVar5;

		if (Il2CppMethodInitialized_0754574b == false) {
			Il2CppMethodInitialized_0754574b = true;
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar2 = GameProgressManager._gameStatHandler;
		}
		else {
			pGVar2 = *(GameStatHandler*)((long)(typeof(GameProgressManager)).static_fields + 0x10);
		}
		if (pGVar2 != null) {
			pGVar3 = pGVar2._gameStat;
			if ((pGVar3 != null) &&(pSVar4 = pGVar3.Level, pSVar4 != null)) {
				iVar5 = pSVar4._value;
				if (0x31 < iVar5) {
					return 0;
				}
				__this = pGVar2._expPerLevel;
				if (__this != null) {
					iVar5 = __this.get_Item(iVar5);
					return iVar5;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x5820540", Offset = "0x581F540", VA = "0x5820540")]
	public static void AddExp(int exp)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$AddExp): clean
		uint uVar1;
		GameStatHandler __this;
		GameStatContainer pGVar2;
		IntSetting __this_00;
		uint value;

		if (Il2CppMethodInitialized_0754574c == false) {
			Il2CppMethodInitialized_0754574c = true;
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = GameProgressManager._gameStatHandler;
		}
		else {
			__this = *(GameStatHandler*)((long)(typeof(GameProgressManager)).static_fields + 0x10);
		}
		if (__this != null) {
			pGVar2 = __this._gameStat;
			if ((pGVar2 != null) &&(__this_00 = pGVar2.Exp, __this_00 != null)) {
				value = exp + __this_00._value;
				__this_00.Value = value;
				__this.CheckLevelUp();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x5820690", Offset = "0x581F690", VA = "0x5820690")]
	public static void ClearGameStat(GameStatRecord record)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$ClearGameStat): clean
		uint uVar1;
		GameStatContainer __this;
		GameProgressContainer pGVar2;

		if (Il2CppMethodInitialized_0754574d == false) {
			Il2CppMethodInitialized_0754574d = true;
			if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor != 0) goto label_059206ba;
	label_0592077c: ;
			pGVar2 = GameProgressManager.GameProgress;
		}
		else {
			if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor == 0) goto label_0592077c;
	label_059206ba: ;
			pGVar2 = GameProgressManager.GameProgress;
		}
		if (pGVar2 == null) {
			return;
		}
		if (((typeof(GameProgressManager))._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = GameProgressManager.GameProgress;
			if (pGVar2 == null) goto label_059207df;
		}
		__this = pGVar2.GameStat;
		if (__this != null) {
			__this.Clear(record);
			if (Il2CppMethodInitialized_0754574a == false) {
				Il2CppMethodInitialized_0754574a = true;
				uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar2 = GameProgressManager.GameProgress;
			}
			else {
				pGVar2 = *(GameProgressContainer*)((long)(typeof(GameProgressManager)).static_fields + 8);
			}
			if (pGVar2 != null) {
				pGVar2.Save();
				return;
			}
		}
	label_059207df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x5820A40", Offset = "0x581FA40", VA = "0x5820A40")]
	public static void ClearAllGameStats()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$ClearAllGameStats): clean
		uint uVar1;
		GameStatContainer __this;
		GameProgressContainer pGVar2;

		if (Il2CppMethodInitialized_0754574e == false) {
			Il2CppMethodInitialized_0754574e = true;
			if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor != 0) goto label_05920a65;
	label_05920b1f: ;
			pGVar2 = GameProgressManager.GameProgress;
		}
		else {
			if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor == 0) goto label_05920b1f;
	label_05920a65: ;
			pGVar2 = GameProgressManager.GameProgress;
		}
		if (pGVar2 == null) {
			return;
		}
		if (((typeof(GameProgressManager))._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = GameProgressManager.GameProgress;
			if (pGVar2 == null) goto label_05920b7c;
		}
		__this = pGVar2.GameStat;
		if (__this != null) {
			__this.ClearAll();
			if (Il2CppMethodInitialized_0754574a == false) {
				Il2CppMethodInitialized_0754574a = true;
				uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(GameProgressManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar2 = GameProgressManager.GameProgress;
			}
			else {
				pGVar2 = *(GameProgressContainer*)((long)(typeof(GameProgressManager)).static_fields + 8);
			}
			if (pGVar2 != null) {
				pGVar2.Save();
				return;
			}
		}
	label_05920b7c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x5820EC0", Offset = "0x581FEC0", VA = "0x5820EC0")]
	public static void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$RegisterTitanKill): 3 lines keep C-only constructs
		List<object> __this;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this = (List<object>)GameProgressManager._handlers;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_58 = __this.GetEnumerator();
		local_30 = (byte)&local_58;
		while(true) {
			bVar1 = local_58.MoveNext() ;
			if (!bVar1) {
				local_58.Dispose();
				return;
			}
			if (local_58._current == null) break;
			(*(local_58._current).klass.vtable[4].methodPtr)(local_58._current,victim,(ulong)(uint)method.Weapon,method.Special,(local_58._current).klass.vtable[4].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x5821050", Offset = "0x5820050", VA = "0x5821050")]
	public static void RegisterHumanKill(Human victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$RegisterHumanKill): 3 lines keep C-only constructs
		List<object> __this;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this = (List<object>)GameProgressManager._handlers;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_58 = __this.GetEnumerator();
		local_30 = (byte)&local_58;
		while(true) {
			bVar1 = local_58.MoveNext() ;
			if (!bVar1) {
				local_58.Dispose();
				return;
			}
			if (local_58._current == null) break;
			(*(local_58._current).klass.vtable[5].methodPtr)(local_58._current,victim,(ulong)(uint)method.Weapon,method.Special,(local_58._current).klass.vtable[5].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x58211E0", Offset = "0x58201E0", VA = "0x58211E0")]
	public static void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$RegisterDamage): 3 lines keep C-only constructs
		List<object> __this;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (0 < damage) {
			__this = (List<object>)GameProgressManager._handlers;
			if (__this == null) {
				throw new NullReferenceException();
			}
			local_58 = __this.GetEnumerator();
			local_38 = (byte)&local_58;
			while(true) {
				bVar1 = local_58.MoveNext();
				if (!bVar1) break;
				if (local_58._current == null) {
					throw new NullReferenceException();
				}
				(*(local_58._current).klass.vtable[6].methodPtr)(local_58._current,victim,(ulong)(uint)method.Weapon,method.Special,(ulong)(uint)damage,(local_58._current).klass.vtable[6].method);
			}
			local_58.Dispose();
		}
		return;
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x5821380", Offset = "0x5820380", VA = "0x5821380")]
	public static void RegisterSpeed(float speed)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$RegisterSpeed): 4 lines keep C-only constructs
		List<object> __this;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_38;
		System_Collections_Generic_List_Enumerator_T__o local_18;

		local_38._list = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._current = null;
		__this = (List<object>)GameProgressManager._handlers;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_38 = __this.GetEnumerator();
		local_18 = &local_38;
		while(true) {
			bVar1 = local_38.MoveNext() ;
			if (!bVar1) {
				local_38.Dispose();
				return;
			}
			if (local_38._current == null) break;
			(*(local_38._current).klass.vtable[7].methodPtr)(speed,local_38._current,(local_38._current).klass.vtable[7].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x5821510", Offset = "0x5820510", VA = "0x5821510")]
	public static void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$RegisterInteraction): 3 lines keep C-only constructs
		List<object> __this;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this = (List<object>)GameProgressManager._handlers;
		if (__this == null) {
			throw new NullReferenceException();
		}
		SStack_48 = __this.GetEnumerator();
		puStack_28 = (byte)&SStack_48;
		while(true) {
			bVar1 = SStack_48.MoveNext() ;
			if (!bVar1) {
				SStack_48.Dispose();
				return;
			}
			if (SStack_48._current == null) break;
			(*(SStack_48._current).klass.vtable[8].methodPtr)(SStack_48._current,interact,(ulong)(uint)interactionType,(SStack_48._current).klass.vtable[8].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x581FF60", Offset = "0x581EF60", VA = "0x581FF60")]
	[IteratorStateMachine(typeof(_003CIncrementPlayTime_003Ed__19))]
	private IEnumerator IncrementPlayTime()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$IncrementPlayTime): clean
		GameProgressManager.d__19<IncrementPlayTime> __this_00;

		__this_00 = new GameProgressManager.d__19<IncrementPlayTime>();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x58216C0", Offset = "0x58206C0", VA = "0x58216C0")]
	public GameProgressManager()
	{
		// Lifted from source/cpp/GameProgress/GameProgressManager.c (GameProgress.GameProgressManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameProgress/GameProgressManager.c.

	// GameProgress.GameProgressManager$$.cctor: clean
	static GameProgressManager()
	{
		List<object> __this;

		__this = new List<BaseGameProgressHandler>();
		GameProgressManager._handlers = (List<BaseGameProgressHandler>)__this;
		return;
	}
}
