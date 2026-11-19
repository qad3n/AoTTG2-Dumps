// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicManager.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000642")]
internal class CustomLogicManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4001B72")]
	[FieldOffset(Offset = "0x0")]
	public static CustomLogicManager _instance;

	[Token(Token = "0x4001B73")]
	[FieldOffset(Offset = "0x8")]
	public static CustomLogicEvaluator Evaluator;

	[Token(Token = "0x4001B74")]
	[FieldOffset(Offset = "0x10")]
	public static bool LogicLoaded;

	[Token(Token = "0x4001B75")]
	[FieldOffset(Offset = "0x11")]
	public static bool AddonsLoaded;

	[Token(Token = "0x4001B76")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, string> CustomAddonSources;

	[Token(Token = "0x4001B77")]
	[FieldOffset(Offset = "0x20")]
	public static bool LogicWasLocallyLoaded;

	[Token(Token = "0x4001B78")]
	[FieldOffset(Offset = "0x28")]
	public static string Logic;

	[Token(Token = "0x4001B79")]
	[FieldOffset(Offset = "0x30")]
	public static string LogicHash;

	[Token(Token = "0x4001B7A")]
	[FieldOffset(Offset = "0x38")]
	public static string BaseLogic;

	[Token(Token = "0x4001B7B")]
	[FieldOffset(Offset = "0x40")]
	public static CustomLogicCompiler Compiler;

	[Token(Token = "0x4001B7C")]
	[FieldOffset(Offset = "0x48")]
	public static bool Cutscene;

	[Token(Token = "0x4001B7D")]
	[FieldOffset(Offset = "0x49")]
	public static bool ManualCamera;

	[Token(Token = "0x4001B7E")]
	[FieldOffset(Offset = "0x4C")]
	public static float CameraFOV;

	[Token(Token = "0x4001B7F")]
	[FieldOffset(Offset = "0x50")]
	public static bool SkipCutscene;

	[Token(Token = "0x4001B80")]
	[FieldOffset(Offset = "0x54")]
	public static Vector3 CameraPosition;

	[Token(Token = "0x4001B81")]
	[FieldOffset(Offset = "0x60")]
	public static Vector3 CameraRotation;

	[Token(Token = "0x4001B82")]
	[FieldOffset(Offset = "0x6C")]
	public static Vector3 CameraVelocity;

	[Token(Token = "0x4001B83")]
	[FieldOffset(Offset = "0x78")]
	public static CameraInputMode? CameraMode;

	[Token(Token = "0x4001B84")]
	[FieldOffset(Offset = "0x80")]
	public static bool CameraLocked;

	[Token(Token = "0x4001B85")]
	[FieldOffset(Offset = "0x81")]
	public static bool CursorVisible;

	[Token(Token = "0x4001B86")]
	[FieldOffset(Offset = "0x88")]
	public static HashSet<KeybindSetting> KeybindDefaultDisabled;

	[Token(Token = "0x4001B87")]
	[FieldOffset(Offset = "0x90")]
	public static HashSet<KeybindSetting> KeybindHold;

	[Token(Token = "0x4001B88")]
	[FieldOffset(Offset = "0x98")]
	public static Dictionary<string, object> RoomData;

	[Token(Token = "0x4001B89")]
	[FieldOffset(Offset = "0xA0")]
	public static Dictionary<string, object> PersistentData;

	[Token(Token = "0x4001B8A")]
	[FieldOffset(Offset = "0xA8")]
	public static HashSet<string> GeneralComponents;

	[Token(Token = "0x4001B8B")]
	[FieldOffset(Offset = "0xB0")]
	public static HashSet<string> InternalComponents;

	[Token(Token = "0x4001B8C")]
	[FieldOffset(Offset = "0xB8")]
	private static bool _hasRestarted;

	[Token(Token = "0x17000A82")]
	public static bool IsWaitingForRestart
	{
		[Token(Token = "0x6003C47")]
		[Address(RVA = "0x5A75BB0", Offset = "0x5A74BB0", VA = "0x5A75BB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$get_IsWaitingForRestart): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07547373 == false) {
				Il2CppMethodInitialized_07547373 = true;
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicManager._hasRestarted;
			}
			return (bool)*(byte)((long)(typeof(CustomLogicManager)).static_fields + 0xb8);
		}
	}

	[Token(Token = "0x6003C48")]
	[Address(RVA = "0x5A75C20", Offset = "0x5A74C20", VA = "0x5A75C20")]
	public static void WaitForRestart()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$WaitForRestart): clean

		CustomLogicManager._hasRestarted = false;
		CustomLogicManager.Evaluator = null;
		return;
	}

	[Token(Token = "0x6003C49")]
	[Address(RVA = "0x5A75C80", Offset = "0x5A74C80", VA = "0x5A75C80", Slot = "41")]
	public override void OnJoinedRoom()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$OnJoinedRoom): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;

		if (Il2CppMethodInitialized_07547375 == false) {
			Il2CppMethodInitialized_07547375 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)CustomLogicManager.RoomData;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicManager)).static_fields + 0x98);
		}
		if (pSVar2 != null) {
			pSVar2.Clear();
			pSVar2 = (Dictionary<object, object>)CustomLogicManager.PersistentData;
			if (pSVar2 != null) {
				pSVar2.Clear();
				CustomLogicManager.CameraLocked = false;
				CustomLogicManager.CursorVisible = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C4A")]
	[Address(RVA = "0x5A75D60", Offset = "0x5A74D60", VA = "0x5A75D60")]
	public static void Init()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$Init): 2 lines keep C-only constructs
		HashSet<object> __this;
		bool bVar2;
		uint uVar3;
		CustomLogicManager pCVar4;
		OnLoadScene __this_00;
		OnPreLoadScene __this_01;
		String pSVar5;
		String[] pSVar6;
		uint uVar7;
		long lVar8;

		pCVar4 = SingletonFactory.CreateSingleton<CustomLogicManager>((object)CustomLogicManager._instance);
		CustomLogicManager._instance = pCVar4;
		CustomLogicSymbols.Init();
		CustomLogicTransfer.Init();
		CustomLogicAddonTransfer.Init();
		__this_00 = new OnLoadScene(null, (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_OnLoadScene);
		EventManager.add_OnLoadScene(__this_00);
		__this_01 = new OnPreLoadScene(null, (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_OnPreLoadScene);
		EventManager.add_OnPreLoadScene(__this_01);
		pSVar5 = ResourcePaths.Modes;
		pSVar5 = ResourceManager.TryLoadText(pSVar5, "BaseLogic");
		CustomLogicManager.BaseLogic = pSVar5;
		pSVar5 = CustomLogicManager.BaseLogic;
		if ((pSVar5 == null) ||(pSVar6 = pSVar5.Split(10, 0), pSVar6 == null)) {
	label_05b7620f: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)pSVar6.Length;
		if (0 < (int)uVar3) {
			lVar8 = 0;
			do {
				uVar7 = (uint)lVar8;
				if (uVar3 <= uVar7) goto label_05b76214;
				if (pSVar6[(int)uVar7] == null) goto label_05b7620f;
				bVar2 = (pSVar6[(int)uVar7]).StartsWith("# general");
				if (bVar2) {
	label_05b760ba: ;
					uVar3 = (uint)pSVar6.Length;
					if ((int)uVar7 < (int)(uVar3 - 1)) {
						if (uVar3 <= uVar7 + 1) goto label_05b76214;
						if (pSVar6[lVar8 + 1] == null) goto label_05b7620f;
						bVar2 = (pSVar6[lVar8 + 1]).StartsWith("component");
						if (bVar2) {
							if ((uint)pSVar6.Length <= uVar7 + 1) {
	label_05b76214: ;
								throw new IndexOutOfRangeException();
							}
							if ((("component " == null) ||(pSVar6[lVar8 + 1] == null)) ||(pSVar5 = (pSVar6[lVar8 + 1]).Substring(("component ".fields)._stringLength), pSVar5 == null)) goto label_05b7620f;
							pSVar5 = pSVar5.Trim();
							if ((uint)pSVar6.Length <= uVar7) goto label_05b76214;
							if (pSVar6[(int)uVar7] == null) goto label_05b7620f;
							bVar2 = (pSVar6[(int)uVar7]).StartsWith("# general");
							if (bVar2) {
								__this = (HashSet<object>)CustomLogicManager.GeneralComponents;
							}
							else {
								if ((uint)pSVar6.Length <= uVar7) goto label_05b76214;
								if (pSVar6[(int)uVar7] == null) goto label_05b7620f;
								bVar2 = (pSVar6[(int)uVar7]).StartsWith("# internal");
								if (!bVar2) goto label_05b761f0;
								__this = (HashSet<object>)CustomLogicManager.InternalComponents;
							}
							if (__this == null) goto label_05b7620f;
							__this.Add((object)pSVar5);
						}
					}
				}
				else {
					if ((uint)pSVar6.Length <= uVar7) goto label_05b76214;
					if (pSVar6[(int)uVar7] == null) goto label_05b7620f;
					bVar2 = (pSVar6[(int)uVar7]).StartsWith("# internal") ;
					if (bVar2) goto label_05b760ba;
				}
	label_05b761f0: ;
				uVar3 = (uint)pSVar6.Length;
				lVar8 = lVar8 + 1;
			} while ((int)lVar8 < (int)uVar3);
		}
		return;
	}

	[Token(Token = "0x6003C4B")]
	[Address(RVA = "0x5A76220", Offset = "0x5A75220", VA = "0x5A76220")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$OnPreLoadScene): clean
		float fVar1;
		uint uVar2;
		CustomLogicManager __this;
		UnityEngine_Vector3_StaticFields pUVar3;
		HashSet<object> pSVar4;
		float fVar5;
		Vector3 pUVar6;
		CustomLogicManager pCVar7;
		CustomLogic_CustomLogicManager_StaticFields pCVar8;

		if (Il2CppMethodInitialized_07547377 == false) {
			Il2CppMethodInitialized_07547377 = true;
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = CustomLogicManager._instance;
		}
		else {
			__this = *(CustomLogicManager*)(typeof(CustomLogicManager)).static_fields;
		}
		if (__this != null) {
			__this.StopAllCoroutines();
			pCVar8 = typeof(CustomLogicManager).static_fields;
			pCVar8._hasRestarted = true;
			pCVar8.Evaluator = null;
			pCVar8 = typeof(CustomLogicManager).static_fields;
			pCVar8.Compiler = null;
			pCVar7 = typeof(CustomLogicManager);
			pCVar8 = typeof(CustomLogicManager).static_fields;
			pCVar8.LogicLoaded = false;
			pCVar8.AddonsLoaded = false;
			pCVar8.LogicWasLocallyLoaded = false;
			pCVar8.Cutscene = false;
			pCVar8.ManualCamera = false;
			pCVar8.SkipCutscene = false;
			if (Il2CppMethodInitialized_0753e4b6 == false) {
				Il2CppMethodInitialized_0753e4b6 = true;
				pCVar8 = typeof(CustomLogicManager).static_fields;
				pCVar7 = typeof(CustomLogicManager);
			}
			pUVar6 = typeof(Vector3);
			pUVar3 = typeof(Vector3).static_fields;
			fVar5 = (pUVar3.zeroVector).y;
			fVar1 = (pUVar3.zeroVector).z;
			(pCVar8.CameraPosition).x = (pUVar3.zeroVector).x;
			(pCVar8.CameraPosition).y = fVar5;
			(pCVar8.CameraPosition).z = fVar1;
			pUVar3 = pUVar6.static_fields;
			fVar5 = (pUVar3.zeroVector).y;
			fVar1 = (pUVar3.zeroVector).z;
			pCVar8 = pCVar7.static_fields;
			(pCVar8.CameraRotation).x = (pUVar3.zeroVector).x;
			(pCVar8.CameraRotation).y = fVar5;
			(pCVar8.CameraRotation).z = fVar1;
			pUVar3 = pUVar6.static_fields;
			fVar5 = (pUVar3.zeroVector).y;
			fVar1 = (pUVar3.zeroVector).z;
			pCVar8 = pCVar7.static_fields;
			(pCVar8.CameraVelocity).x = (pUVar3.zeroVector).x;
			(pCVar8.CameraVelocity).y = fVar5;
			(pCVar8.CameraVelocity).z = fVar1;
			(pCVar7.static_fields.CameraMode) = (System_Nullable_CameraInputMode__Fields)0x0;
			pCVar8 = pCVar7.static_fields;
			pCVar8.CameraFOV = 0.0;
			pSVar4 = (HashSet<object>)pCVar8.KeybindDefaultDisabled;
			if (pSVar4 != null) {
				pSVar4.Clear();
				pSVar4 = (HashSet<object>)CustomLogicManager.KeybindHold;
				if (pSVar4 != null) {
					pSVar4.Clear();
					CustomLogicUIBuiltin.ClearLabels();
					CustomLogicCommandsBuiltin.ClearCommands();
					CustomLogicMapBuiltin.ResetRuntimeNetworkedSpawnLimits();
					pCVar8 = typeof(CustomLogicManager).static_fields;
					pCVar8.CameraLocked = false;
					pCVar8.CursorVisible = false;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C4C")]
	[Address(RVA = "0x5A76470", Offset = "0x5A75470", VA = "0x5A76470")]
	public static void ToggleCutscene(bool cutscene)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$ToggleCutscene): 2 lines keep C-only constructs
		sbyte cVar1;
		byte bVar2;
		CustomLogic_CustomLogicManager_StaticFields pCVar3;
		InGameCharacterSettings pSVar4;
		IntSetting pSVar5;
		bool enabled;
		InGameMenu __this;

		if (Il2CppMethodInitialized_07547378 == false) {
			Il2CppMethodInitialized_07547378 = true;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b764f9;
	label_05b76492: ;
			pCVar3 = typeof(CustomLogicManager).static_fields;
			cVar1 = pCVar3.Cutscene;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b76492;
	label_05b764f9: ;
			pCVar3 = typeof(CustomLogicManager).static_fields;
			cVar1 = pCVar3.Cutscene;
		}
		if ((bool)cVar1 == cutscene) {
			return;
		}
		if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicManager.Cutscene = cutscene;
		}
		else {
			pCVar3.Cutscene = cutscene;
		}
		if (cutscene) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			__this = (InGameMenu)UIManager.CurrentMenu;
			if (__this != null) {
				bVar2 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((((BaseMenu)__this.klass)._2).typeHierarchyDepth < bVar2) ||((((BaseMenu)__this.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameMenu))) {
	label_05b7663d: ;
					throw new InvalidCastException();
				}
				enabled = false;
	label_05b7662a: ;
				__this.SetCharacterMenu(enabled);
				return;
			}
		}
		else {
			pSVar4 = SettingsManager.InGameCharacterSettings;
			if ((pSVar4 != null) &&(pSVar5 = pSVar4.ChooseStatus, pSVar5 != null)) {
				if (pSVar5._value != 0) {
					return;
				}
				if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				__this = (InGameMenu)UIManager.CurrentMenu;
				if (__this != null) {
					bVar2 = (typeof(InGameMenu)._2).typeHierarchyDepth;
					if (((((BaseMenu)__this.klass)._2).typeHierarchyDepth < bVar2) ||((((BaseMenu)__this.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameMenu))) goto label_05b7663d;
					enabled = true;
					goto label_05b7662a;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C4D")]
	[Address(RVA = "0x5A76650", Offset = "0x5A75650", VA = "0x5A76650")]
	private static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$OnLoadScene): clean
		uint uVar1;

		uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		if (sceneName == 2) {
			if (uVar1 == 0) {
				CustomLogicManager.StartInGame();
				return;
			}
			CustomLogicManager.StartInGame();
			return;
		}
		if (uVar1 == 0) {
		}
		CustomLogicManager.LogicLoaded = true;
		CustomLogicManager.AddonsLoaded = true;
		return;
	}

	[Token(Token = "0x6003C4E")]
	[Address(RVA = "0x5A766D0", Offset = "0x5A756D0", VA = "0x5A766D0")]
	public static void StartInGame()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$StartInGame): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		PhotonView __this;
		CustomLogic_CustomLogicManager_StaticFields pCVar4;
		bool bVar5;
		Object[] parameters;
		object pIVar6;
		String pSVar7;
		PhotonMessageInfo PStack_38;

		if (Il2CppMethodInitialized_0754737a == false) {
			Il2CppMethodInitialized_0754737a = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05b767b1;
	label_05b766fb: ;
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05b766fb;
	label_05b767b1: ;
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		if (bVar5) {
			if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			CustomLogicManager.LogicWasLocallyLoaded = true;
			pSVar1 = SettingsManager.InGameCurrent;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) goto label_05b76a8f;
			pSVar7 = pSVar3._value;
			bVar5 = BuiltinLevels.IsLogicBuiltin(pSVar7);
			pSVar3 = pSVar2.GameMode;
			if (bVar5) {
				if (pSVar3 == null) {
	label_05b76a8f: ;
					throw new NullReferenceException();
				}
				pSVar7 = pSVar3._value;
				CustomLogicTransfer.UseBuiltin(pSVar7);
				CustomLogicTransfer.LogicTransferReady = true;
				__this = RPCManager.PhotonView;
				parameters = (Object[])new object[1];
				pSVar3 = pSVar2.GameMode;
				if ((pSVar3 == null) || (parameters == null)) goto label_05b76a8f;
				pSVar7 = pSVar3._value;
				if ((pSVar7 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar7, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
					pIVar6 = new ArrayTypeMismatchException();
					throw pIVar6;
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = (object)pSVar7;
				if (__this == null) goto label_05b76a8f;
				__this.RPC("LoadBuiltinLogicRPC", 0, parameters);
			}
			else {
				if (pSVar3 == null) goto label_05b76a8f;
				pSVar7 = pSVar3._value;
				pSVar7 = BuiltinLevels.LoadLogic(pSVar7);
				pCVar4 = typeof(CustomLogicManager).static_fields;
				pCVar4.Logic = pSVar7;
				pSVar7 = CustomLogicManager.Logic;
				pSVar7 = Util.CreateMD5(pSVar7);
				pCVar4 = typeof(CustomLogicManager).static_fields;
				pCVar4.LogicHash = pSVar7;
				pSVar3 = pSVar2.GameMode;
				if (pSVar3 == null) goto label_05b76a8f;
				pSVar7 = pSVar3._value;
				CustomLogicTransfer.Start(pSVar7);
				PStack_38 = Util.CreateLocalPhotonInfo();
				if ((PStack_38.Sender == null) ||(bVar5 = PStack_38.Sender.IsMasterClient)) {
					CustomLogicManager.FinishLoadLogic();
				}
			}
			CustomLogicAddonTransfer.Start();
		}
		return;
	}

	[Token(Token = "0x6003C4F")]
	[Address(RVA = "0x5A76B10", Offset = "0x5A75B10", VA = "0x5A76B10")]
	public static void OnLoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$OnLoadBuiltinLogicRPC): 1 lines keep C-only constructs
		CustomLogic_CustomLogicManager_StaticFields pCVar1;
		bool bVar3;
		String pSVar4;
		MethodInfo method_00;

		if (info.Sender == null) {
			throw new NullReferenceException();
		}
		bVar3 = info.Sender.IsMasterClient;
		if (bVar3) {
			pSVar4 = BuiltinLevels.LoadLogic(name);
			pCVar1 = typeof(CustomLogicManager).static_fields;
			pCVar1.Logic = pSVar4;
			pSVar4 = CustomLogicManager.Logic;
			pSVar4 = Util.CreateMD5(pSVar4);
			pCVar1 = typeof(CustomLogicManager).static_fields;
			pCVar1.LogicHash = pSVar4;
			pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			CustomLogicTransfer.LogicHash = pSVar4;
			method_00 = (MethodInfo)&CustomLogicTransfer.LogicHash;
			CustomLogicManager.FinishLoadLogic();
			return;
		}
		return;
	}

	[Token(Token = "0x6003C50")]
	[Address(RVA = "0x5A76AB0", Offset = "0x5A75AB0", VA = "0x5A76AB0")]
	public static void OnLoadCachedLogicRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$OnLoadCachedLogicRPC): clean
		bool bVar1;

		if (info.Sender != null) {
			bVar1 = info.Sender.IsMasterClient;
			if (!bVar1) {
				return;
			}
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicManager.FinishLoadLogic();
			return;
		}
		CustomLogicManager.FinishLoadLogic();
		return;
	}

	[Token(Token = "0x6003C51")]
	[Address(RVA = "0x5A76C80", Offset = "0x5A75C80", VA = "0x5A76C80")]
	public static void FinishLoadLogic()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$FinishLoadLogic): clean
		String key;
		Player player;

		player = PhotonNetwork.LocalPlayer;
		key = PlayerProperty.CustomLogicHash;
		PhotonExtensions.SetCustomProperty(player, key, (object)CustomLogicTransfer.LogicHash);
		CustomLogicManager.LogicLoaded = true;
		return;
	}

	[Token(Token = "0x6003C52")]
	[Address(RVA = "0x5A76D70", Offset = "0x5A75D70", VA = "0x5A76D70")]
	public static void ApplyAddonBundle(string bundleJson)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$ApplyAddonBundle): 4 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		JSONNode __this;
		String key;
		JSONNode pSVar3;
		String value;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		pSVar1 = (Dictionary<object, object>)CustomLogicManager.CustomAddonSources;
		if (pSVar1 == null) {
	label_05b76f67: ;
			throw new NullReferenceException();
		}
		pSVar1.Clear();
		bVar2 = String.IsNullOrEmpty(bundleJson);
		if (!bVar2) {
			__this = JSON.Parse(bundleJson);
			if (__this == null) goto label_05b76f67;
			local_78 = __this.Keys;
			local_c8.m_Array._current = local_78.m_Array._current;
			local_c8.m_Array._list = local_78.m_Array._list;
			local_c8.m_Array._index = local_78.m_Array._index;
			local_c8.m_Array._version = local_78.m_Array._version;
			local_c8.m_Object._current.value = local_78.m_Object._current.value;
			local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
			local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
			local_c8.m_Object._version = local_78.m_Object._version;
			local_c8.m_Object._index = local_78.m_Object._index;
			local_c8.m_Object._current.key = local_78.m_Object._current.key;
			local_c8.type = local_78.type;
			local_c8._4_4_ = local_78._4_4_;
			local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
			local_118 = local_c8.GetEnumerator();
			bVar2 = local_118.MoveNext();
			if (bVar2) {
				do {
					key = local_118.Current;
					pSVar1 = (Dictionary<object, object>)CustomLogicManager.CustomAddonSources;
					pSVar3 = __this.get_Item(key);
					if ((pSVar3 == null) ||(value = pSVar3.get_Value(), pSVar1 == null)) goto label_05b76f67;
					pSVar1.set_Item((object)key, (object)value);
					bVar2 = local_118.MoveNext();
				} while (bVar2);
			}
		}
		return;
	}

	[Token(Token = "0x6003C53")]
	[Address(RVA = "0x5A76F70", Offset = "0x5A75F70", VA = "0x5A76F70")]
	public static void FinishLoadAddons()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$FinishLoadAddons): clean
		String key;
		Player player;

		player = PhotonNetwork.LocalPlayer;
		key = PlayerProperty.CustomAddonHash;
		PhotonExtensions.SetCustomProperty(player, key, (object)CustomLogicAddonTransfer.AddonBundleHash);
		CustomLogicManager.AddonsLoaded = true;
		return;
	}

	[Token(Token = "0x6003C54")]
	[Address(RVA = "0x5A77060", Offset = "0x5A76060", VA = "0x5A77060", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$OnPlayerEnteredRoom): 1 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameGeneralSettings pSVar4;
		StringSetting pSVar5;
		String pSVar6;
		PhotonView __this_00;
		bool bVar7;
		Object[] parameters;
		object pIVar8;

		if (Il2CppMethodInitialized_07547380 == false) {
			Il2CppMethodInitialized_07547380 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05b7708f;
	label_05b7712e: ;
			bVar7 = PhotonNetwork.IsMasterClient;
			if (bVar7) {
	label_05b77142: ;
				if ((typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor == 0) {
					cVar1 = CustomLogicTransfer.LogicTransferReady;
				}
				else {
					cVar1 = CustomLogicTransfer.LogicTransferReady;
				}
				if (cVar1 != false) {
					pSVar3 = SettingsManager.InGameCurrent;
					if (((pSVar3 == null) ||(pSVar4 = pSVar3.General, pSVar4 == null)) ||(pSVar5 = pSVar4.GameMode, pSVar5 == null)) goto label_05b77348;
					pSVar6 = pSVar5._value;
					if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar7 = BuiltinLevels.IsLogicBuiltin(pSVar6);
					if (!bVar7) {
						CustomLogicTransfer.Transfer(player);
						uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
						goto joined_r0x05b772ce;
					}
					__this_00 = RPCManager.PhotonView;
					parameters = (Object[])new object[1];
					pSVar5 = pSVar4.GameMode;
					if ((pSVar5 == null) || (parameters == null)) {
	label_05b77348: ;
						throw new NullReferenceException();
					}
					pSVar6 = pSVar5._value;
					if ((pSVar6 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar6, (((parameters.obj).klass)._1).element_class), pIVar8 == null)) {
						pIVar8 = new ArrayTypeMismatchException();
						throw pIVar8;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = (object)pSVar6;
					if (__this_00 == null) goto label_05b77348;
					__this_00.RPC("LoadBuiltinLogicRPC", player, parameters);
				}
			}
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05b7712e;
	label_05b7708f: ;
			bVar7 = PhotonNetwork.IsMasterClient;
			if (bVar7) goto label_05b77142;
		}
		uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
	joined_r0x05b772ce: ;
		if (uVar2 == 0) {
			bVar7 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar7 = PhotonNetwork.IsMasterClient;
		}
		if (bVar7) {
			if (((typeof(CustomLogicAddonTransfer))._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = CustomLogicAddonTransfer.AddonTransferReady;
			}
			else {
				cVar1 = *(sbyte)(typeof(CustomLogicAddonTransfer)).static_fields;
			}
			if (cVar1 != false) {
				if (((typeof(CustomLogicAddonTransfer))._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicAddonTransfer.Transfer(player);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003C55")]
	[Address(RVA = "0x5A77370", Offset = "0x5A76370", VA = "0x5A77370")]
	public static Dictionary<string, BaseSetting> GetModeSettings(string source)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$GetModeSettings): clean
		CustomLogicEvaluator __this;
		Dictionary<string, BaseSetting> pSVar1;

		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		__this = CustomLogicManager.GetEditorEvaluator(source, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6003C56")]
	[Address(RVA = "0x5A77AE0", Offset = "0x5A76AE0", VA = "0x5A77AE0")]
	public static Dictionary<string, BaseSetting> GetAddonSettings(string addonName, string source)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$GetAddonSettings): 6 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		CustomLogicCompiler __this;
		CustomLogicSourceFile file;
		String pSVar3;
		MethodInfo pMVar4;
		CustomLogicLexer __this_00;
		CustomLogicParser __this_01;
		CustomLogicEvaluator __this_02;
		Dictionary<string, Dictionary<string, BaseSetting>> __this_03;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_04;
		Dictionary<string, BaseSetting> __this_05;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_68;
		String pSStack_48;
		byte puStack_38;

		pMVar4 = (MethodInfo)source;
		pSStack_48 = addonName;
		SStack_68._dictionary = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._currentKey = null;
		__this = new CustomLogicCompiler();
		pSVar3 = CustomLogicManager.BaseLogic;
		pSVar1 = "BaseLogic.cl";
		file = new CustomLogicSourceFile();
		file._Name_k__BackingField = pSVar1;
		file._Content_k__BackingField = pSVar3;
		file._Type_k__BackingField = 1;
		file._StartLine_k__BackingField = 0;
		file._EndLine_k__BackingField = 0;
		file._MapLogicOffset_k__BackingField = 0;
		if (__this != null) {
			__this.AddSourceFile(file);
			pSVar3 = String.Concat(pSStack_48, ".cl");
			pMVar4 = new CustomLogicSourceFile();
			((CustomLogicSourceFile)&pMVar4.invoker_method)._Name_k__BackingField = pSVar3;
			pMVar4.name = (sbyte)source;
			pMVar4.klass = (Il2CppClass)0x2;
			pMVar4.return_type = null;
			__this.AddSourceFile((CustomLogicSourceFile)pMVar4);
			pMVar4 = (MethodInfo)__this.Compile();
			__this_00 = new CustomLogicLexer((String)pMVar4, __this);
			if (__this_00 != null) {
				pMVar4 = (MethodInfo)__this_00.GetTokens();
				__this_01 = new CustomLogicParser((List<CustomLogicToken>)pMVar4, __this);
				if (__this_01 != null) {
					pMVar4 = (MethodInfo)__this_01.GetStartAst();
					__this_02 = new CustomLogicEvaluator((CustomLogicStartAst)pMVar4, __this);
					if (__this_02 != null) {
						__this_03 = __this_02.GetAddonSettings();
						if (__this_03 !=null) {
							__this_04 = __this_03.Keys;
							if (__this_04 != null) {
								SStack_68 = __this_04.GetEnumerator();
								puStack_38 = (byte)&SStack_68;
								bVar2 = SStack_68.MoveNext();
								if (bVar2) {
									__this_05 = (Dictionary<string, BaseSetting>)__this_03.get_Item(SStack_68._currentKey);
									SStack_68.Dispose();
								}
								else {
									SStack_68.Dispose();
									__this_05 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, BaseSetting>));
									__this_05 = new Dictionary<object, object>();
								}
								return __this_05;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C57")]
	[Address(RVA = "0x5A78F50", Offset = "0x5A77F50", VA = "0x5A78F50")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettingsGrouped(string addonName, string source)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$GetAddonSettingsGrouped): 2 lines keep C-only constructs
		String pSVar1;
		CustomLogicCompiler __this;
		CustomLogicSourceFile file;
		String pSVar2;
		MethodInfo pMVar3;
		CustomLogicLexer __this_00;
		CustomLogicParser __this_01;
		CustomLogicEvaluator __this_02;
		Dictionary<string, Dictionary<string, BaseSetting>> pSVar4;

		pMVar3 = (MethodInfo)source;
		__this = new CustomLogicCompiler();
		pSVar2 = CustomLogicManager.BaseLogic;
		pSVar1 = "BaseLogic.cl";
		file = new CustomLogicSourceFile();
		file._Name_k__BackingField = pSVar1;
		file._Content_k__BackingField = pSVar2;
		file._Type_k__BackingField = 1;
		file._StartLine_k__BackingField = 0;
		file._EndLine_k__BackingField = 0;
		file._MapLogicOffset_k__BackingField = 0;
		if (__this != null) {
			__this.AddSourceFile(file);
			pSVar2 = String.Concat(addonName, ".cl");
			pMVar3 = new CustomLogicSourceFile();
			((CustomLogicSourceFile)&pMVar3.invoker_method)._Name_k__BackingField = pSVar2;
			pMVar3.name = (sbyte)source;
			pMVar3.klass = (Il2CppClass)0x2;
			pMVar3.return_type = null;
			__this.AddSourceFile((CustomLogicSourceFile)pMVar3);
			pMVar3 = (MethodInfo)__this.Compile();
			__this_00 = new CustomLogicLexer((String)pMVar3, __this);
			if (__this_00 != null) {
				pMVar3 = (MethodInfo)__this_00.GetTokens();
				__this_01 = new CustomLogicParser((List<CustomLogicToken>)pMVar3, __this);
				if (__this_01 != null) {
					pMVar3 = (MethodInfo)__this_01.GetStartAst();
					__this_02 = new CustomLogicEvaluator((CustomLogicStartAst)pMVar3, __this);
					if (__this_02 != null) {
						return pSVar4;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C58")]
	[Address(RVA = "0x5A79190", Offset = "0x5A78190", VA = "0x5A79190")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetSelectedAddonSettings(List<string> addonNames)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$GetSelectedAddonSettings): 10 lines keep C-only constructs
		String name;
		bool bVar1;
		Dictionary<string, Dictionary<string, BaseSetting>> __this;
		String value;
		Dictionary<string, Dictionary<string, BaseSetting>> __this_00;
		byte[] auStack_a8 = new byte[16];
		String pSStack_98;
		byte[] auStack_90 = new byte[16];
		String pSStack_80;
		object pIStack_78;
		int iStack_70;
		uint uStack_6c;
		byte[] auStack_58 = new byte[8];
		String pSStack_48;
		object pIStack_40;
		ulong uStack_38;

		pSStack_48 = null;
		pIStack_40 = null;
		auStack_58 = (byte[])0x0;
		uStack_38._0_4_ = 0;
		uStack_38._4_4_ = 0;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
		__this = new Dictionary<object, object>();
		if (addonNames == null) {
			throw new NullReferenceException();
		}
		auStack_90.GetEnumerator((List<object>)addonNames);
		pSStack_98 = pSStack_80;
		auStack_a8._0_8_ = auStack_90._0_8_;
		auStack_a8._8_8_ = auStack_90._8_8_;
		while(true) {
			do {
				bVar1 = auStack_a8.MoveNext();
				name = pSStack_98;
				if (!bVar1) {
					auStack_a8.Dispose() ;
					return __this;
				}
				value = BuiltinLevels.LoadAddon(name);
				bVar1 = String.IsNullOrEmpty(value);
			} while (bVar1);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			__this_00 = CustomLogicManager.GetAddonSettingsGrouped(name, value);
			if (__this_00 == null) break;
			auStack_90.GetEnumerator((Dictionary<object, object>)__this_00);
			uStack_38._0_4_ = iStack_70;
			uStack_38._4_4_ = uStack_6c;
			pSStack_48 = pSStack_80;
			pIStack_40 = pIStack_78;
			auStack_58 = (byte[])auStack_90._0_8_;
			auStack_90._0_8_ = null;
			auStack_90._8_8_ = (Dictionary.Enumerator<object, object>)auStack_58;
			if (__this == null) {
				bVar1 = auStack_58.MoveNext();
				if (bVar1) {
					throw new NullReferenceException();
				}
			}
			else {
				while (bVar1 = auStack_58.MoveNext()) {
					__this.set_Item((object)pSStack_48, pIStack_40);
				}
			}
			auStack_58.Dispose();
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C59")]
	[Address(RVA = "0x5A79510", Offset = "0x5A78510", VA = "0x5A79510")]
	public static string GetModeDescription(Dictionary<string, BaseSetting> settings)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$GetModeDescription): 3 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		BaseSetting pSVar3;
		String* ppSVar4;

		if (settings == null) {
	label_05b7963a: ;
			throw new NullReferenceException();
		}
		bVar2 = settings.ContainsKey((Il2CppObject *)"Description");
		ppSVar4 = &"";
		if (bVar2) {
			pSVar3 = settings.get_Item((Il2CppObject *)"Description");
			if (pSVar3 != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if ((bVar1 <= (pSVar3.klass._2).typeHierarchyDepth) &&((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(StringSetting))) {
					pSVar3 = settings.get_Item((Il2CppObject *)"Description");
					if (pSVar3 == null) goto label_05b7963a;
					bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
					if (((pSVar3.klass._2).typeHierarchyDepth < bVar1) ||((pSVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
						throw new InvalidCastException();
					}
					ppSVar4 = &(*(ulong)((sbyte)pSVar3 + 0x20));
				}
			}
		}
		return *ppSVar4;
	}

	[Token(Token = "0x6003C5A")]
	[Address(RVA = "0x5A773D0", Offset = "0x5A763D0", VA = "0x5A773D0")]
	public static CustomLogicEvaluator GetEditorEvaluator(string source, bool loadBaseLogic = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$GetEditorEvaluator): 4 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		CustomLogicCompiler __this;
		CustomLogicSourceFile file;
		MethodInfo pMVar3;
		CustomLogicLexer __this_00;
		CustomLogicParser __this_01;
		CustomLogicStartAst start;
		CustomLogicEvaluator __this_02;
		undefined7 in_register_00000031;

		pMVar3 = (MethodInfo)CONCAT71(in_register_00000031, loadBaseLogic);
		__this = new CustomLogicCompiler();
		if (loadBaseLogic) {
			pSVar1 = CustomLogicManager.BaseLogic;
			pSVar2 = "BaseLogic.cl";
			file = new CustomLogicSourceFile();
			file._Name_k__BackingField = pSVar2;
			file._Content_k__BackingField = pSVar1;
			file._Type_k__BackingField = 1;
			file._StartLine_k__BackingField = 0;
			file._EndLine_k__BackingField = 0;
			file._MapLogicOffset_k__BackingField = 0;
			if (__this == null) goto label_05b77600;
			__this.AddSourceFile(file);
		}
		pSVar1 = "UserSource.cl";
		pMVar3 = new CustomLogicSourceFile();
		((CustomLogicSourceFile)&pMVar3.invoker_method)._Name_k__BackingField = pSVar1;
		pMVar3.name = (sbyte)source;
		pMVar3.klass = (Il2CppClass)0x4;
		pMVar3.return_type = null;
		if (__this != null) {
			__this.AddSourceFile((CustomLogicSourceFile)pMVar3);
			pMVar3 = (MethodInfo)__this.Compile();
			__this_00 = new CustomLogicLexer((String)pMVar3, __this);
			if (__this_00 != null) {
				pMVar3 = (MethodInfo)__this_00.GetTokens();
				__this_01 = new CustomLogicParser((List<CustomLogicToken>)pMVar3, __this);
				if (__this_01 != null) {
					start = __this_01.GetStartAst();
					__this_02 = new CustomLogicEvaluator(start, __this);
					return __this_02;
				}
			}
		}
	label_05b77600: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C5B")]
	[Address(RVA = "0x5A79650", Offset = "0x5A78650", VA = "0x5A79650")]
	public static string TryParseLogic(string source)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$TryParseLogic): 5 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		bool bVar3;
		CustomLogicCompiler __this;
		CustomLogicSourceFile file;
		MethodInfo pMVar4;
		CustomLogicLexer __this_00;
		List<CustomLogicToken> tokens;
		CustomLogicParser __this_01;
		String* ppSVar5;

		__this = new CustomLogicCompiler();
		pSVar1 = CustomLogicManager.BaseLogic;
		pSVar2 = "BaseLogic.cl";
		file = new CustomLogicSourceFile();
		file._Name_k__BackingField = pSVar2;
		file._Content_k__BackingField = pSVar1;
		file._Type_k__BackingField = 1;
		file._StartLine_k__BackingField = 0;
		file._EndLine_k__BackingField = 0;
		file._MapLogicOffset_k__BackingField = 0;
		if (__this != null) {
			__this.AddSourceFile(file);
			pSVar1 = "UserSource.cl";
			pMVar4 = new CustomLogicSourceFile();
			((CustomLogicSourceFile)&pMVar4.invoker_method)._Name_k__BackingField = pSVar1;
			pMVar4.name = (sbyte)source;
			pMVar4.klass = (Il2CppClass)0x4;
			pMVar4.return_type = null;
			__this.AddSourceFile((CustomLogicSourceFile)pMVar4);
			pMVar4 = (MethodInfo)__this.Compile();
			__this_00 = new CustomLogicLexer((String)pMVar4, __this);
			if (__this_00 != null) {
				tokens = __this_00.GetTokens();
				__this_01 = new CustomLogicParser(tokens, __this);
				pMVar4 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
				bVar3 = (__this_00.Error != (String)pMVar4);
				if (bVar3) {
					ppSVar5 = &__this_00.Error;
				}
				else {
					if (__this_01 == null) goto label_05b798a5;
					__this_01.GetStartAst();
					bVar3 = (__this_01.Error != (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (bVar3) {
						ppSVar5 = &__this_01.Error;
					}
					else {
						ppSVar5 = &"";
					}
				}
				return *ppSVar5;
			}
		}
	label_05b798a5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C5C")]
	[Address(RVA = "0x5A798B0", Offset = "0x5A788B0", VA = "0x5A798B0")]
	public static void StartLogic(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$StartLogic): 17 lines keep C-only constructs
		int iVar1;
		CustomLogic_CustomLogicManager_StaticFields pCVar2;
		String pSVar3;
		InGameSet pSVar4;
		InGameGeneralSettings pSVar5;
		ListSetting<StringSetting> pSVar6;
		List<T> source;
		object @object;
		Dictionary<@object, @object> __this;
		StringSetting pSVar7;
		Dictionary<string, Dictionary<string, BaseSetting>> addonSettings_00;
		bool bVar8;
		CustomLogicCompiler pCVar9;
		CustomLogicSourceFile pCVar10;
		CustomLogic_CustomLogicManager___c_StaticFields pCVar11;
		Func<StringSetting, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_List_TSource__o __this_01;
		String pSVar12;
		MapScript pMVar13;
		MethodInfo pMVar14;
		CustomLogicLexer __this_02;
		CustomLogicParser __this_03;
		CustomLogicStartAst start;
		CustomLogicEvaluator pCVar15;
		MethodInfo* method_00;
		String local_78;
		Dictionary<string, Dictionary<string, BaseSetting>> local_70;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_50 = new byte[16];
		String local_40;
		Dictionary<string, BaseSetting> local_38;

		pMVar14 = (MethodInfo)addonSettings;
		local_38 = modeSettings;
		if (Il2CppMethodInitialized_07547388 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_StringSetting_string) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07547388 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		local_78 = null;
		pCVar9 = new CustomLogicCompiler();
		pCVar2 = typeof(CustomLogicManager).static_fields;
		pCVar2.Compiler = pCVar9;
		pSVar3 = CustomLogicManager.BaseLogic;
		pCVar9 = CustomLogicManager.Compiler;
		pSVar12 = "BaseLogic.cl";
		pCVar10 = new CustomLogicSourceFile();
		pCVar10._Name_k__BackingField = pSVar12;
		pCVar10._Content_k__BackingField = pSVar3;
		pCVar10._Type_k__BackingField = 1;
		pCVar10._StartLine_k__BackingField = 0;
		pCVar10._EndLine_k__BackingField = 0;
		pCVar10._MapLogicOffset_k__BackingField = 0;
		if (pCVar9 != null) {
			pCVar9.AddSourceFile(pCVar10);
			pSVar4 = SettingsManager.InGameCurrent;
			if (((pSVar4 != null) &&(pSVar5 = pSVar4.General, pSVar5 != null)) &&(pSVar6 = pSVar5.Addons, pSVar6 != null)) {
				source = pSVar6._value;
				if ((typeof(CustomLogicManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar11 = typeof(CustomLogicManager.c).static_fields;
					__this_00 = pCVar11.__9__49_0;
				}
				else {
					pCVar11 = typeof(CustomLogicManager.c).static_fields;
					__this_00 = pCVar11.__9__49_0;
				}
				if (__this_00 == null) {
					if (((typeof(CustomLogicManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pCVar11 = typeof(CustomLogicManager.c).static_fields;
					}
					@object = (object)pCVar11.__9;
					__this_00 = new Func<StringSetting, string>(@object, (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_c_StartLogic_b__49_0);
					pCVar11 = typeof(CustomLogicManager.c).static_fields;
					pCVar11.__9__49_0 = __this_00;
				}
				local_70 = addonSettings;
				source_00 = Enumerable.Select<StringSetting, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
				__this_01 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
				if (__this_01 != null) {
					method_00 = &MethodInfo_System_Collections_Generic_List_string_GetEnumerator;
					local_50.GetEnumerator((List<@object>)__this_01);
					local_58 = local_40;
					local_68 = (byte[])local_50._0_8_;
					local_50._0_8_ = null;
					local_50._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
					while(true) {
						bVar8 = local_68.MoveNext();
						pSVar3 = local_58;
						if (!bVar8) break;
						bVar8 = BuiltinLevels.IsAddonBuiltin(pSVar3);
						if (bVar8) {
							local_78 = BuiltinLevels.LoadAddon(pSVar3);
						}
						else {
							__this = (Dictionary<@object, @object>)CustomLogicManager.CustomAddonSources;
							if (__this == null) {
								throw new NullReferenceException();
							}
							method_00 = (MethodInfo*)MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue;
							__this.TryGetValue((object)pSVar3, (@object*)&local_78);
						}
						bVar8 = String.IsNullOrEmpty(local_78);
						if (!bVar8) {
							pCVar9 = CustomLogicManager.Compiler;
							pSVar12 = String.Concat(pSVar3, ".addon");
							pSVar3 = local_78;
							pCVar10 = new CustomLogicSourceFile();
							pCVar10._Name_k__BackingField = pSVar12;
							pCVar10._Content_k__BackingField = pSVar3;
							pCVar10._Type_k__BackingField = 2;
							pCVar10._StartLine_k__BackingField = 0;
							pCVar10._EndLine_k__BackingField = 0;
							pCVar10._MapLogicOffset_k__BackingField = 0;
							if (pCVar9 == null) {
								throw new NullReferenceException();
							}
							pCVar9.AddSourceFile(pCVar10);
						}
					}
					local_68.Dispose() ;
					pSVar4 = SettingsManager.InGameCurrent;
					if (((pSVar4 != null) &&(pSVar5 = pSVar4.General, pSVar5 != null)) &&(pSVar7 = pSVar5.GameMode, pSVar7 != null)) {
						pSVar3 = pSVar7._value;
						bVar8 = (pSVar3 == BuiltinLevels.UseMapLogic);
						if (bVar8) {
							if ((typeof(MapManager)._2).cctor_finished_or_no_cctor == 0) {
								pMVar13 = MapManager.MapScript;
							}
							else {
								pMVar13 = MapManager.MapScript;
							}
							if (pMVar13 != null) {
								if (((typeof(MapManager))._2).cctor_finished_or_no_cctor == 0) {
									pMVar13 = MapManager.MapScript;
									if (pMVar13 == null) goto label_05b7a21f;
								}
								pSVar3 = pMVar13.Logic;
								bVar8 = String.IsNullOrEmpty(pSVar3);
								if (!bVar8) {
									pSVar7 = pSVar5.MapName;
									if (pSVar7 == null) goto label_05b7a21f;
									pSVar12 = pSVar7._value;
									pCVar9 = CustomLogicManager.Compiler;
									pSVar12 = String.Concat(pSVar12, ".txt");
									pMVar13 = MapManager.MapScript;
									if (pMVar13 == null) goto label_05b7a21f;
									iVar1 = pMVar13.LogicStart;
									pCVar10 = il2cpp_codegen_object_new(typeof(CustomLogicSourceFile)) ;
									pCVar10 = new CustomLogicSourceFile();
									pCVar10._Name_k__BackingField = pSVar12;
									pCVar10._Content_k__BackingField = pSVar3;
									pCVar10._Type_k__BackingField = 3;
									pCVar10._StartLine_k__BackingField = 0;
									pCVar10._EndLine_k__BackingField = 0;
									pCVar10._MapLogicOffset_k__BackingField = iVar1;
									if (pCVar9 == null) goto label_05b7a21f;
									pCVar9.AddSourceFile(pCVar10);
								}
							}
						}
						pMVar14 = null;
						bVar8 = String.IsNullOrEmpty(CustomLogicManager.Logic);
						if (!bVar8) {
							pSVar7 = pSVar5.GameMode;
							if (pSVar7 == null) goto label_05b7a21f;
							pSVar3 = pSVar7._value;
							pMVar14 = (MethodInfo)BuiltinLevels.UseMapLogic;
							bVar8 = (pSVar3 == (String)pMVar14);
							if (!bVar8) {
								pCVar9 = CustomLogicManager.Compiler;
								pSVar12 = String.Concat(pSVar3, ".cl");
								pSVar3 = CustomLogicManager.Logic;
								pMVar14 = new CustomLogicSourceFile();
								((CustomLogicSourceFile)&pMVar14.invoker_method)._Name_k__BackingField = pSVar12;
								pMVar14.name = (sbyte)pSVar3;
								pMVar14.klass = (Il2CppClass)0x4;
								pMVar14.return_type = null;
								if (pCVar9 == null) goto label_05b7a21f;
								pCVar9.AddSourceFile((CustomLogicSourceFile)pMVar14);
							}
						}
						addonSettings_00 = local_70;
						pCVar9 = CustomLogicManager.Compiler;
						if (pCVar9 != null) {
							pMVar14 = (MethodInfo)pCVar9.Compile();
							pCVar9 = CustomLogicManager.Compiler;
							__this_02 = new CustomLogicLexer((String)pMVar14, pCVar9);
							if (__this_02 != null) {
								pMVar14 = (MethodInfo)__this_02.GetTokens();
								pCVar9 = CustomLogicManager.Compiler;
								__this_03 = new CustomLogicParser((List<CustomLogicToken>)pMVar14, pCVar9);
								if (__this_03 != null) {
									start = __this_03.GetStartAst();
									pCVar9 = CustomLogicManager.Compiler;
									pCVar15 = new CustomLogicEvaluator(start, pCVar9);
									pCVar2 = typeof(CustomLogicManager).static_fields;
									pCVar2.Evaluator = pCVar15;
									pCVar15 = CustomLogicManager.Evaluator;
									if (pCVar15 != null) {
										pCVar15.Start(local_38, addonSettings_00);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05b7a21f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C5D")]
	[Address(RVA = "0x5A7B590", Offset = "0x5A7A590", VA = "0x5A7B590")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$FixedUpdate): clean
		float fVar1;
		uint uVar2;
		CustomLogicEvaluator __this_00;
		float fVar3;

		if (Il2CppMethodInitialized_07547389 == false) {
			Il2CppMethodInitialized_07547389 = true;
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this_00 == null) {
			return;
		}
		if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = CustomLogicManager.Evaluator;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
		}
		__this_00.EvaluateMethodForCallbacks("OnTick", null);
		fVar1 = __this_00.CurrentTime;
		fVar3 = Time.fixedDeltaTime;
		__this_00.CurrentTime = fVar3 + fVar1;
		return;
	}

	[Token(Token = "0x6003C5E")]
	[Address(RVA = "0x5A7B6F0", Offset = "0x5A7A6F0", VA = "0x5A7B6F0")]
	private void Update()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$Update): 23 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		sbyte cVar7;
		uint uVar8;
		GeneralSettings pSVar9;
		BoolSetting pSVar10;
		InputSettings pSVar11;
		GeneralInputSettings pSVar12;
		KeybindSetting __this_00;
		bool bVar13;
		CustomLogic_CustomLogicManager_StaticFields pCVar14;
		CustomLogicEvaluator __this_01;
		Il2CppClass klass;
		float fVar15;

		if (Il2CppMethodInitialized_0754738a == false) {
			Il2CppMethodInitialized_0754738a = true;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b7b713;
	label_05b7b772: ;
			__this_01 = CustomLogicManager.Evaluator;
			klass = typeof(CustomLogicManager);
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b7b772;
	label_05b7b713: ;
			__this_01 = CustomLogicManager.Evaluator;
			klass = typeof(CustomLogicManager);
		}
		typeof(CustomLogicManager) = (CustomLogicManager)klass;
		if (__this_01 != null) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				__this_01 = CustomLogicManager.Evaluator;
				if (__this_01 == null) goto label_05b7ba0f;
			}
			__this_01.EvaluateMethodForCallbacks("OnFrame", null);
			pCVar14 = typeof(CustomLogicManager).static_fields;
			if (pCVar14.Cutscene == false) {
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
					pCVar14 = typeof(CustomLogicManager).static_fields;
				}
				klass = typeof(CustomLogicManager);
				if (pCVar14.ManualCamera == false) goto label_05b7b88a;
			}
			pCVar14 = typeof(CustomLogicManager).static_fields;
			uVar3 = (pCVar14.CameraPosition).x;
			uVar5 = (pCVar14.CameraPosition).y;
			fVar1 = (pCVar14.CameraPosition).z;
			uVar4 = (pCVar14.CameraVelocity).x;
			uVar6 = (pCVar14.CameraVelocity).y;
			fVar2 = (pCVar14.CameraVelocity).z;
			fVar15 = Time.deltaTime;
			klass = typeof(CustomLogicManager);
			pCVar14 = typeof(CustomLogicManager).static_fields;
			(pCVar14.CameraPosition).x = fVar15 * (float)uVar4 + (float)uVar3;
			(pCVar14.CameraPosition).y = fVar15 * (float)uVar6 + (float)uVar5;
			(pCVar14.CameraPosition).z = fVar2 * fVar15 + fVar1;
		}
	label_05b7b88a: ;
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			klass = typeof(CustomLogicManager);
		}
		pCVar14 = klass.static_fields;
		if (pCVar14.SkipCutscene == false) {
	label_05b7b8b7: ;
			uVar8 = (klass._2).cctor_finished_or_no_cctor;
	joined_r0x05b7b8be: ;
			if (uVar8 == 0) goto label_05b7b91e;
	label_05b7b8c0: ;
			cVar7 = *(sbyte)((long)klass.static_fields + 0x48);
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				pCVar14 = typeof(CustomLogicManager).static_fields;
				cVar7 = pCVar14.Cutscene;
				klass = typeof(CustomLogicManager);
			}
			else {
				cVar7 = pCVar14.Cutscene;
			}
			if (cVar7 != false) goto label_05b7b8b7;
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(CustomLogicManager);
				CustomLogicManager.SkipCutscene = false;
				uVar8 = (((CustomLogicManager)klass)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05b7b8be;
			}
			pCVar14.SkipCutscene = false;
			if ((klass._2).cctor_finished_or_no_cctor != 0) goto label_05b7b8c0;
	label_05b7b91e: ;
			cVar7 = CustomLogicManager.Cutscene;
			klass = typeof(CustomLogicManager);
		}
		if (cVar7 != false) {
			pSVar9 = SettingsManager.GeneralSettings;
			if ((pSVar9 == null) ||(pSVar10 = pSVar9.SkipCutscenes, pSVar10 == null)) {
	label_05b7ba0f: ;
				throw new NullReferenceException();
			}
			if (pSVar10._value != false) {
				uVar8 = (klass._2).cctor_finished_or_no_cctor;
	joined_r0x05b7ba04: ;
				if (uVar8 == 0) {
					klass = typeof(CustomLogicManager);
				}
				*(byte)((long)klass.static_fields + 0x50) = 1;
				return;
			}
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar13 = ChatManager.IsChatActive();
			if ((!bVar13) && (bVar13 = InGameMenu.InMenu(), !bVar13)) {
				pSVar11 = SettingsManager.InputSettings;
				if ((pSVar11 == null) ||((pSVar12 = pSVar11.General, pSVar12 == null ||(__this_00 = pSVar12.SkipCutscene, __this_00 == null)))) goto label_05b7ba0f;
				bVar13 = __this_00.GetKeyDown(false);
				if (bVar13) {
					uVar8 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
					klass = typeof(CustomLogicManager);
					goto joined_r0x05b7ba04;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003C5F")]
	[Address(RVA = "0x5A7BA60", Offset = "0x5A7AA60", VA = "0x5A7BA60")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$LateUpdate): clean
		uint uVar1;
		CustomLogicEvaluator __this_00;

		if (Il2CppMethodInitialized_0754738b == false) {
			Il2CppMethodInitialized_0754738b = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this_00 == null) {
			return;
		}
		if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = CustomLogicManager.Evaluator;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
		}
		__this_00.EvaluateMethodForCallbacks("OnLateFrame", null);
		return;
	}

	[Token(Token = "0x6003C60")]
	[Address(RVA = "0x5A7BB90", Offset = "0x5A7AB90", VA = "0x5A7BB90")]
	public CustomLogicManager()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicManager.c (CustomLogic.CustomLogicManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicManager.c.

	// CustomLogic.CustomLogicManager$$.cctor: clean
	static CustomLogicManager()
	{
		CustomLogic_CustomLogicManager_StaticFields pCVar1;
		Dictionary<string, string> __this;
		HashSet<KeybindSetting> pSVar2;
		Dictionary<string, object> pSVar3;
		HashSet<string> pSVar4;

		__this = new Dictionary<string, string>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.CustomAddonSources = __this;
		(CustomLogicManager.CameraMode) =(System_Nullable_CameraInputMode__Fields)0x0;
		pSVar2 = new HashSet<KeybindSetting>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.KeybindDefaultDisabled = pSVar2;
		pSVar2 = new HashSet<KeybindSetting>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.KeybindHold = pSVar2;
		pSVar3 = new Dictionary<string, object>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.RoomData = pSVar3;
		pSVar3 = new Dictionary<string, object>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.PersistentData = pSVar3;
		pSVar4 = new HashSet<string>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.GeneralComponents = pSVar4;
		pSVar4 = new HashSet<string>();
		pCVar1 = typeof(CustomLogicManager).static_fields;
		pCVar1.InternalComponents = pSVar4;
		CustomLogicManager._hasRestarted = false;
		return;
	}

	// CustomLogic.CustomLogicManager.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicManager.c)) ;
		__this = new Object();
		CustomLogicManager.c.__9 =(CustomLogicManager.c)__this;
		return;
	}

	// CustomLogic.CustomLogicManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicManager.<>c$$<StartLogic>b__49_0: clean
	private String c__StartLogic_b__49_0(StringSetting x)
	{
		if (x == null) {
			throw new NullReferenceException();
		}
		return x._value;
	}
}
