// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MainMenuGameManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/MainMenuGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MainMenuGameManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace GameManagers;

[Token(Token = "0x2000394")]
internal class MainMenuGameManager : BaseGameManager
{
	[Token(Token = "0x4001226")]
	[FieldOffset(Offset = "0x0")]
	public static bool JustLeftRoom;

	[Token(Token = "0x4001227")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, RoomInfo> RoomList;

	[Token(Token = "0x4001228")]
	[FieldOffset(Offset = "0x10")]
	public static bool RoomListReceived;

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x584B360", Offset = "0x584A360", VA = "0x584B360", Slot = "36")]
	public override void OnJoinedLobby()
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnJoinedLobby): clean
		GameManagers_MainMenuGameManager_StaticFields pGVar1;
		MultiplayerSettings __this_00;
		BaseMenu pUVar2;
		bool bVar3;
		Dictionary<string, RoomInfo> __this_01;
		MainMenu pUVar4;

		__this_01 = new Dictionary<string, RoomInfo>();
		pGVar1 = typeof(MainMenuGameManager).static_fields;
		pGVar1.RoomList = __this_01;
		pGVar1 = typeof(MainMenuGameManager).static_fields;
		pGVar1.RoomListReceived = false;
		if (pGVar1.JustLeftRoom == false) {
			if (HeadlessManager._IsHeadless_k__BackingField != false) {
				HeadlessManager.OnJoinedLobby();
				return;
			}
			bVar3 = AottgQuickPlay.IsRunning;
			if (!bVar3) {
				pUVar2 = UIManager.CurrentMenu;
				bVar3 = ((Object)pUVar2 != null);
				if (bVar3) {
					pUVar2 = UIManager.CurrentMenu;
					if (pUVar2 != null) {
						pUVar4 = pUVar2.GetComponent<MainMenu>();
						bVar3 = ((Object)pUVar4 != null);
						if (!bVar3) {
							return;
						}
						pUVar2 = UIManager.CurrentMenu;
						if ((pUVar2 != null) &&(pUVar4 = pUVar2.GetComponent<MainMenu>(), pUVar4 != null)) {
							pUVar4.ShowMultiplayerRoomList();
							return;
						}
					}
					goto label_0594b5eb;
				}
			}
		}
		else {
			__this_00 = SettingsManager.MultiplayerSettings;
			if (__this_00 == null) {
	label_0594b5eb: ;
				throw new NullReferenceException();
			}
			__this_00.Disconnect();
			MainMenuGameManager.JustLeftRoom = false;
		}
		return;
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x584B5F0", Offset = "0x584A5F0", VA = "0x584B5F0", Slot = "45")]
	public override void OnConnectedToMaster()
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnConnectedToMaster): clean
		sbyte cVar1;
		uint uVar2;

		if (Il2CppMethodInitialized_07545871 == false) {
			Il2CppMethodInitialized_07545871 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = PhotonNetwork.offlineMode;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(PhotonNetwork)).static_fields + 0x30);
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			PhotonNetwork.JoinLobby();
			return;
		}
		PhotonNetwork.JoinLobby();
		return;
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x584B6C0", Offset = "0x584A6C0", VA = "0x584B6C0")]
	private void Update()
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$Update): clean
		return;
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x584B6D0", Offset = "0x584A6D0", VA = "0x584B6D0", Slot = "41")]
	public override void OnJoinedRoom()
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnJoinedRoom): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545872 == false) {
			Il2CppMethodInitialized_07545872 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		typeof(InGameManager) = (InGameManager)klass;
		if (uVar1 == 0) {
			InGameManager.OnJoinRoom();
			return;
		}
		InGameManager.OnJoinRoom();
		return;
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x584B730", Offset = "0x584A730", VA = "0x584B730", Slot = "34")]
	public override void OnJoinRoomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnJoinRoomFailed): clean
		MainMenuGameManager.OnRoomEntryFailed(returnCode, message, false);
		return;
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x584B810", Offset = "0x584A810", VA = "0x584B810", Slot = "33")]
	public override void OnCreateRoomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnCreateRoomFailed): clean
		MainMenuGameManager.OnRoomEntryFailed(returnCode, message, true);
		return;
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x584B780", Offset = "0x584A780", VA = "0x584B780")]
	private static void OnRoomEntryFailed(short returnCode, string message, bool creating)
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnRoomEntryFailed): clean
		MultiplayerSettings __this;

		Debug.Log((object)message);
		__this = SettingsManager.MultiplayerSettings;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.OnRoomEntryFailed();
		AottgNetworkNotifications.ReportRoomEntryFailed(returnCode, creating);
		return;
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x584B870", Offset = "0x584A870", VA = "0x584B870")]
	private void UpdateCachedRoomList(List<RoomInfo> roomList)
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$UpdateCachedRoomList): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		RoomInfo value;
		int index;

		if (Il2CppMethodInitialized_07545876 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count) ;
			Il2CppMethodInitialized_07545876 = true;
		}
		if (roomList == null) {
	label_0594b9ca: ;
			throw new NullReferenceException();
		}
		if (0 < roomList._size) {
			index = 0;
			do {
				while(true) {
					value = roomList.get_Item(index) ;
					if (value == null) goto label_0594b9ca;
					uVar1 = (typeof(MainMenuGameManager)._2).cctor_finished_or_no_cctor;
					if (value.RemovedFromList == false) break;
					if (uVar1 == 0) {
					}
					pSVar2 = (Dictionary<object, object>)MainMenuGameManager.RoomList;
					if (pSVar2 == null) goto label_0594b9ca;
					pSVar2.Remove((object)value.name);
					index = index + 1;
					if (roomList._size <= index) {
						return;
					}
				}
				if (uVar1 == 0) {
					pSVar2 = (Dictionary<object, object>)MainMenuGameManager.RoomList;
				}
				else {
					pSVar2 = (Dictionary<object, object>)MainMenuGameManager.RoomList;
				}
				if (pSVar2 == null) goto label_0594b9ca;
				pSVar2.set_Item((object)value.name, (object)value);
				index = index + 1;
			} while (index < roomList._size);
		}
		return;
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x584B9D0", Offset = "0x584A9D0", VA = "0x584B9D0", Slot = "40")]
	public override void OnRoomListUpdate(List<RoomInfo> roomList)
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$OnRoomListUpdate): 2 lines keep C-only constructs
		MainMenuGameManager* ppGVar1;

		if (g_data_07545877 == false) {
			ppGVar1 = &typeof(MainMenuGameManager);
			g_data_07545877 = true;
			this = (MainMenuGameManager)ppGVar1;
		}
		this.UpdateCachedRoomList(roomList);
		MainMenuGameManager.RoomListReceived = true;
		HeadlessManager.OnRoomListUpdate();
		return;
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x584BA30", Offset = "0x584AA30", VA = "0x584BA30")]
	public MainMenuGameManager()
	{
		// Lifted from source/cpp/GameManagers/MainMenuGameManager.c (GameManagers.MainMenuGameManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/MainMenuGameManager.c.

	// GameManagers.MainMenuGameManager$$.cctor: clean
	static MainMenuGameManager()
	{
		Dictionary<string, RoomInfo> __this;

		__this = new Dictionary<string, RoomInfo>();
		MainMenuGameManager.RoomList = __this;
		return;
	}
}
