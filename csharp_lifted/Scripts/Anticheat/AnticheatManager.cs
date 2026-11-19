// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.AnticheatManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Anticheat/AnticheatManager.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Anticheat;

[Token(Token = "0x20009CB")]
internal class AnticheatManager : MonoBehaviour
{
	[Token(Token = "0x4003119")]
	[FieldOffset(Offset = "0x0")]
	private static AnticheatManager _instance;

	[Token(Token = "0x400311A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>> _IdToEventFilters;

	[Token(Token = "0x400311B")]
	[FieldOffset(Offset = "0x10")]
	private static BallotBox VoteKick;

	[Token(Token = "0x400311C")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> BanList;

	[Token(Token = "0x6005AA8")]
	[Address(RVA = "0x5D2BE10", Offset = "0x5D2AE10", VA = "0x5D2BE10")]
	public static void Init()
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$Init): 1 lines keep C-only constructs
		AnticheatManager pAVar1;
		OnLoadScene __this;

		pAVar1 = SingletonFactory.CreateSingleton<AnticheatManager>((object)AnticheatManager._instance);
		AnticheatManager._instance = pAVar1;
		__this = new OnLoadScene(null, (intptr_t)MethodInfo_Anticheat_AnticheatManager_OnLoadScene);
		EventManager.add_OnLoadScene(__this);
		return;
	}

	[Token(Token = "0x6005AA9")]
	[Address(RVA = "0x5D2BEE0", Offset = "0x5D2AEE0", VA = "0x5D2BEE0")]
	public static void Reset()
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$Reset): 3 lines keep C-only constructs
		uint uVar1;
		HashSet<object> __this;
		BallotBox __this_00;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_0754851b == false) {
			Il2CppMethodInitialized_0754851b = true;
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (HashSet<object>)AnticheatManager.BanList;
			method_00 = MethodInfo_System_Collections_Generic_HashSet_string_Clear;
		}
		else {
			__this = *(HashSet<object>*)((long)(typeof(AnticheatManager)).static_fields + 0x18);
			method_00 = MethodInfo_System_Collections_Generic_HashSet_string_Clear;
		}
		MethodInfo_System_Collections_Generic_HashSet_string_Clear = method_00;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		__this_00 = new BallotBox();
		AnticheatManager.VoteKick = __this_00;
		return;
	}

	[Token(Token = "0x6005AAA")]
	[Address(RVA = "0x5D2C0E0", Offset = "0x5D2B0E0", VA = "0x5D2C0E0")]
	private static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$OnLoadScene): clean
		uint uVar1;
		Dictionary<int, object> __this;

		if (Il2CppMethodInitialized_0754851c == false) {
			Il2CppMethodInitialized_0754851c = true;
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<int, object>)AnticheatManager._IdToEventFilters;
		}
		else {
			__this = *(Dictionary<int, object>*)((long)(typeof(AnticheatManager)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		return;
	}

	[Token(Token = "0x6005AAB")]
	[Address(RVA = "0x5D2C170", Offset = "0x5D2B170", VA = "0x5D2C170")]
	public static bool CheckPhotonEvent(Player sender, PhotonEventType eventType, object[] data)
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$CheckPhotonEvent): 1 lines keep C-only constructs
		uint uVar1;
		int key;
		Dictionary<int, object> pSVar2;
		bool bVar3;
		Dictionary<PhotonEventType, BaseEventFilter> __this;
		Dictionary<TKey, TValue> __this_00;
		InstantiateEventFilter __this_01;
		BaseEventFilter pAVar4;

		if (Il2CppMethodInitialized_0754851d == false) {
			Il2CppMethodInitialized_0754851d = true;
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((sender != null) &&(pSVar2 = *(Dictionary<int, object>*)((long)(typeof(AnticheatManager)).static_fields + 8), pSVar2 != null)) {
			bVar3 = pSVar2.ContainsKey(sender.actorNumber);
			if (!bVar3) {
				pSVar2 = (Dictionary<int, object>)AnticheatManager._IdToEventFilters;
				key = sender.actorNumber;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<PhotonEventType, BaseEventFilter>));
				__this = new Dictionary<Int32Enum, object>();
				if (pSVar2 == null) goto label_05e2c3e5;
				pSVar2.Add(key, (object)__this);
			}
			pSVar2 = (Dictionary<int, object>)AnticheatManager._IdToEventFilters;
			if ((pSVar2 != null) &&(__this_00 = (Dictionary<TKey, TValue>)pSVar2.get_Item(sender.actorNumber), __this_00 != null)) {
				bVar3 = __this_00.ContainsKey(eventType);
				if ((eventType == 0) && (!bVar3)) {
					__this_01 = new InstantiateEventFilter();
					__this_01._player = sender;
					__this_01._eventType = 0;
					__this_00.Add(0, (object)__this_01);
				}
				pAVar4 = __this_00.get_Item(eventType);
				if (pAVar4 != null) {
					bVar3 = pAVar4.CheckEvent(data);
					return bVar3;
				}
			}
		}
	label_05e2c3e5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AAC")]
	[Address(RVA = "0x5D2C420", Offset = "0x5D2B420", VA = "0x5D2C420")]
	public static void KickPlayer(Player player, bool ban = false, string reason = "")
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$KickPlayer): clean
		Dictionary<int, object> pSVar1;
		HashSet<object> __this;
		ProfileSettings pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		Player pPVar5;
		PlayerInfo pGVar6;
		String pSVar7;
		int local_2c;

		if (Il2CppMethodInitialized_0754851e == false) {
			Il2CppMethodInitialized_0754851e = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05e2c454;
	label_05e2c516: ;
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05e2c516;
	label_05e2c454: ;
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar4) {
			return;
		}
		if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			bVar4 = PhotonNetwork.IsMasterClient;
			if (bVar4) goto label_05e2c55a;
		}
		else {
			bVar4 = PhotonNetwork.IsMasterClient;
			if (bVar4) {
	label_05e2c55a: ;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					pPVar5 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar5 = PhotonNetwork.LocalPlayer;
				}
				if ((pPVar5 == player) &&(bVar4 = (reason != (String)**(ulong*)(g_data_07556758 + 0xb8)))) {
					pSVar7 = String.Concat("Attempting to ban myself for: ", reason, ", please report this to the devs.");
					DebugConsole.Log(pSVar7, true);
					return;
				}
			}
		}
		if (ban) {
			if ((player == null) ||(pSVar1 = (Dictionary<int, object>)InGameManager.AllPlayerInfo, pSVar1 == null)) goto label_05e2c7c5;
			bVar4 = pSVar1.ContainsKey(player.actorNumber);
			if (bVar4) {
				__this = (HashSet<object>)AnticheatManager.BanList;
				pSVar1 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
				if ((((pSVar1 == null) ||(pGVar6 = pSVar1.get_Item(player.actorNumber), pGVar6 == null)) ||(pSVar2 = pGVar6.Profile, pSVar2 == null)) ||((pSVar3 = pSVar2.ID, pSVar3 == null ||(__this == null)))) goto label_05e2c7c5;
				__this.Add((object)pSVar3._value);
			}
		}
		PhotonNetwork.DestroyPlayerObjects(player);
		PhotonNetwork.CloseConnection(player);
		bVar4 = (reason != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar4) {
			if (player == null) {
	label_05e2c7c5: ;
				throw new NullReferenceException();
			}
			local_2c = player.actorNumber;
			pSVar7 = local_2c.ToString();
			pSVar7 = String.Concat("Player ", pSVar7, " was autobanned. Reason:", reason);
			DebugConsole.Log(pSVar7, true);
		}
		return;
	}

	[Token(Token = "0x6005AAD")]
	[Address(RVA = "0x5D2C7D0", Offset = "0x5D2B7D0", VA = "0x5D2C7D0")]
	public static BallotBox.Result TryVoteKickPlayer(Player voter, Player target)
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$TryVoteKickPlayer): 2 lines keep C-only constructs
		uint uVar1;
		BallotBox __this;
		BallotBox.Result local_48;

		if (Il2CppMethodInitialized_0754851f == false) {
			Il2CppMethodInitialized_0754851f = true;
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = AnticheatManager.VoteKick;
		}
		else {
			__this = *(BallotBox*)((long)(typeof(AnticheatManager)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_48 = __this.TryCastBallot(voter, target);
		if (local_48.type == 0) {
			AnticheatManager.KickPlayer(target, false, "");
		}
		__return_storage_ptr__.type = local_48.type;
		__return_storage_ptr__.progress = local_48.progress;
		*(ulong)&__return_storage_ptr__.field_0xc = CONCAT44(local_48.target._0_4_, local_48._12_4_);
		__return_storage_ptr__.target =(Player)CONCAT44(local_48.target._4_4_, local_48.target._0_4_);
		__return_storage_ptr__.cooldown._ticks = (int64_t)local_48.cooldown._ticks;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6005AAE")]
	[Address(RVA = "0x5D2CF40", Offset = "0x5D2BF40", VA = "0x5D2CF40")]
	public static void ResetVoteKicks(Player voter)
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$ResetVoteKicks): clean
		uint uVar1;
		BallotBox __this;

		if (Il2CppMethodInitialized_07548520 == false) {
			Il2CppMethodInitialized_07548520 = true;
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AnticheatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = AnticheatManager.VoteKick;
		}
		else {
			__this = *(BallotBox*)((long)(typeof(AnticheatManager)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.ResetBallots(voter);
		return;
	}

	[Token(Token = "0x6005AAF")]
	[Address(RVA = "0x5D2D1C0", Offset = "0x5D2C1C0", VA = "0x5D2D1C0")]
	public AnticheatManager()
	{
		// Lifted from source/cpp/Anticheat/AnticheatManager.c (Anticheat.AnticheatManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Anticheat/AnticheatManager.c.

	// Anticheat.AnticheatManager$$.cctor: 2 lines keep C-only constructs
	static AnticheatManager()
	{
		Anticheat_AnticheatManager_StaticFields pAVar1;
		MethodInfo method_00;
		BallotBox __this;
		HashSet<string> __this_00;

		if (Il2CppMethodInitialized_07548521 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>>)) ;
			Il2CppMethodInitialized_07548521 = true;
		}
		method_00 = (MethodInfo)il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>>));
		method_00 = new Dictionary<int, object>();
		pAVar1 = typeof(AnticheatManager).static_fields;
		pAVar1._IdToEventFilters =(Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>>)method_00 ;
		__this = new BallotBox();
		pAVar1 = typeof(AnticheatManager).static_fields;
		pAVar1.VoteKick = __this;
		__this_00 = new HashSet<string>();
		pAVar1 = typeof(AnticheatManager).static_fields;
		pAVar1.BanList = __this_00;
		return;
	}
}
