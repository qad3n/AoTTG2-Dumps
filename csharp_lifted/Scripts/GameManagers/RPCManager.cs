// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.RPCManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/RPCManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/RPCManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20003AC")]
internal class RPCManager : MonoBehaviourPun
{
	[Token(Token = "0x40012CD")]
	[FieldOffset(Offset = "0x0")]
	public static PhotonView PhotonView;

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x5859130", Offset = "0x5858130", VA = "0x5859130")]
	[PunRPC]
	public void TransferLogicRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$TransferLogicRPC): clean


		CustomLogicTransfer.OnTransferLogicRPC(strArray, msgNumber, msgTotal, info);
		return;
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x5859300", Offset = "0x5858300", VA = "0x5859300")]
	[PunRPC]
	public void LoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$LoadBuiltinLogicRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458c7 == false) {
			Il2CppMethodInitialized_075458c7 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			CustomLogicManager.OnLoadBuiltinLogicRPC(name, info);
			return;
		}
		CustomLogicManager.OnLoadBuiltinLogicRPC(name, info);
		return;
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x5859370", Offset = "0x5858370", VA = "0x5859370")]
	[PunRPC]
	public void LoadCachedLogicRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$LoadCachedLogicRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458c8 == false) {
			Il2CppMethodInitialized_075458c8 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			CustomLogicManager.OnLoadCachedLogicRPC(info);
			return;
		}
		CustomLogicManager.OnLoadCachedLogicRPC(info);
		return;
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x58593D0", Offset = "0x58583D0", VA = "0x58593D0")]
	[PunRPC]
	public void TransferAddonBundleRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$TransferAddonBundleRPC): clean


		CustomLogicAddonTransfer.OnTransferAddonBundleRPC(strArray, msgNumber, msgTotal, info);
		return;
	}

	[Token(Token = "0x600176A")]
	[Address(RVA = "0x5859560", Offset = "0x5858560", VA = "0x5859560")]
	[PunRPC]
	public void LoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$LoadCachedAddonBundleRPC): clean
		bool bVar1;

		if ((info.Sender != null) &&(bVar1 = info.Sender.IsMasterClient, !bVar1)) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicManager.FinishLoadAddons();
			return;
		}
		CustomLogicManager.FinishLoadAddons();
		return;
	}

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x5859670", Offset = "0x5858670", VA = "0x5859670")]
	[PunRPC]
	public void TransferMapRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$TransferMapRPC): clean
		MapTransfer.OnTransferMapRPC(strArray, msgNumber, msgTotal, info);
		return;
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x58596D0", Offset = "0x58586D0", VA = "0x58596D0")]
	[PunRPC]
	public void LoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$LoadBuiltinMapRPC): clean
		MapManager.OnLoadBuiltinMapRPC(category, name, info);
		return;
	}

	[Token(Token = "0x600176D")]
	[Address(RVA = "0x5859730", Offset = "0x5858730", VA = "0x5859730")]
	[PunRPC]
	public void RequestMapDestructionRPC(int attackerId, int[] objectIds, Vector3 center, Vector3 direction, float hitSize, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$RequestMapDestructionRPC): clean
		MapDestruction.OnRequest(attackerId, objectIds, center, direction, hitSize, info.Sender);
		return;
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x5859810", Offset = "0x5858810", VA = "0x5859810")]
	[PunRPC]
	public void MapObjectsDestroyedRPC(int[] objectIds, Vector3 center, float hitSize, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$MapObjectsDestroyedRPC): clean
		MapDestruction.OnDestroyed(objectIds, center, hitSize, info);
		return;
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x58598A0", Offset = "0x58588A0", VA = "0x58598A0")]
	[PunRPC]
	public void RequestMapDestructionStateRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$RequestMapDestructionStateRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458cf == false) {
			Il2CppMethodInitialized_075458cf = true;
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MapDestruction.OnStateRequest(info);
			return;
		}
		MapDestruction.OnStateRequest(info);
		return;
	}

	[Token(Token = "0x6001770")]
	[Address(RVA = "0x5859900", Offset = "0x5858900", VA = "0x5859900")]
	[PunRPC]
	public void MapDestructionStateRPC(int[] objectIds, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$MapDestructionStateRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458d0 == false) {
			Il2CppMethodInitialized_075458d0 = true;
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MapDestruction.OnState(objectIds, info);
			return;
		}
		MapDestruction.OnState(objectIds, info);
		return;
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x5859970", Offset = "0x5858970", VA = "0x5859970")]
	[PunRPC]
	public void LoadCachedMapRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$LoadCachedMapRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458d1 == false) {
			Il2CppMethodInitialized_075458d1 = true;
			uVar1 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MapManager.OnLoadCachedMapRPC(info);
			return;
		}
		MapManager.OnLoadCachedMapRPC(info);
		return;
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x58599D0", Offset = "0x58589D0", VA = "0x58599D0")]
	[PunRPC]
	public void LoadSkyboxRPC(string urls, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$LoadSkyboxRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		Player pPVar2;
		String[] urls_00;
		IEnumerator routine;

		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			pPVar2 = PhotonNetwork.MasterClient;
		}
		else {
			pPVar2 = PhotonNetwork.MasterClient;
		}
		if (info.Sender != pPVar2) {
			return;
		}
		if (urls != null) {
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			urls_00 = urls.Split(0x2c, 0);
			if (__this_00 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				routine = __this_00.OnLoadSkyboxRPC(urls_00);
				__this_00.StartCoroutine(routine);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x5859AE0", Offset = "0x5858AE0", VA = "0x5859AE0")]
	[PunRPC]
	public void RestartGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$RestartGameRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458d3 == false) {
			Il2CppMethodInitialized_075458d3 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.OnRestartGameRPC(info);
			return;
		}
		InGameManager.OnRestartGameRPC(info);
		return;
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x5859B40", Offset = "0x5858B40", VA = "0x5859B40")]
	[PunRPC]
	public void PreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$PreRestartGameRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458d4 == false) {
			Il2CppMethodInitialized_075458d4 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.OnPreRestartGameRPC(immediate, info);
			return;
		}
		InGameManager.OnPreRestartGameRPC(immediate, info);
		return;
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x5859BA0", Offset = "0x5858BA0", VA = "0x5859BA0")]
	[PunRPC]
	public void PauseGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$PauseGameRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;

		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this_00.OnPauseGameRPC(info);
		return;
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x5859C20", Offset = "0x5858C20", VA = "0x5859C20")]
	[PunRPC]
	public void StartUnpauseGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$StartUnpauseGameRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;

		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this_00.OnStartUnpauseGameRPC(info);
		return;
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x5859CA0", Offset = "0x5858CA0", VA = "0x5859CA0")]
	[PunRPC]
	public void UnpauseGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$UnpauseGameRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;

		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this_00.OnUnpauseGameRPC(info);
		return;
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x5859D20", Offset = "0x5858D20", VA = "0x5859D20")]
	[PunRPC]
	public void ResetKDRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$ResetKDRPC): clean
		bool bVar1;
		Player player;

		if (info.Sender == null) {
			throw new NullReferenceException();
		}
		bVar1 = info.Sender.IsMasterClient;
		if (!bVar1) {
			return;
		}
		player = PhotonNetwork.LocalPlayer;
		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			InGameManager.ResetPlayerKD(player);
			return;
		}
		InGameManager.ResetPlayerKD(player);
		return;
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x5859DC0", Offset = "0x5858DC0", VA = "0x5859DC0")]
	[PunRPC]
	public void PlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$PlayerInfoRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458d9 == false) {
			Il2CppMethodInitialized_075458d9 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.OnPlayerInfoRPC(data, info);
			return;
		}
		InGameManager.OnPlayerInfoRPC(data, info);
		return;
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x5859E30", Offset = "0x5858E30", VA = "0x5859E30")]
	[PunRPC]
	public void GameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$GameSettingsRPC): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075458da == false) {
			Il2CppMethodInitialized_075458da = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.OnGameSettingsRPC(data, info);
			return;
		}
		InGameManager.OnGameSettingsRPC(data, info);
		return;
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x5859EA0", Offset = "0x5858EA0", VA = "0x5859EA0")]
	[PunRPC]
	public void SetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SetWeatherRPC): clean
		WeatherManager.OnSetWeatherRPC(currentWeatherJson, startWeatherJson, targetWeatherJson, targetWeatherStartTimes, targetWeatherEndTimes, currentTime, info);
		return;
	}

	[Token(Token = "0x600177C")]
	[Address(RVA = "0x5859F30", Offset = "0x5858F30", VA = "0x5859F30")]
	[PunRPC]
	public void EmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$EmoteEmojiRPC): clean
		EmoteHandler.OnEmoteEmojiRPC(viewId, emoji, info);
		return;
	}

	[Token(Token = "0x600177D")]
	[Address(RVA = "0x5859F40", Offset = "0x5858F40", VA = "0x5859F40")]
	[PunRPC]
	public void EmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$EmoteTextRPC): clean
		EmoteHandler.OnEmoteTextRPC(viewId, text, info);
		return;
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x5859F50", Offset = "0x5858F50", VA = "0x5859F50")]
	[PunRPC]
	public void SpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SpawnEffectRPC): clean


		EffectSpawner.OnSpawnEffectRPC(name, position, rotation, scale, scaleSize, settings, info);
		return;
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x585A420", Offset = "0x5859420", VA = "0x585A420")]
	[PunRPC]
	public void SpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SpawnSpawnableRPC): clean
		SpawnableSpawner.OnSpawnSpawnableRPC(name, position, rotation, scale, settings, info);
		return;
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x585A430", Offset = "0x5859430", VA = "0x585A430")]
	[PunRPC]
	public void SetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SetLabelRPC): clean
		InGameManager.OnSetLabelRPC(label, message, time, info);
		return;
	}

	[Token(Token = "0x6001781")]
	[Address(RVA = "0x585A4A0", Offset = "0x58594A0", VA = "0x585A4A0")]
	[PunRPC]
	public void ShowKillFeedRPC(string killer, string victim, int score, string weapon, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$ShowKillFeedRPC): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this_00;

		if (Il2CppMethodInitialized_075458de == false) {
			Il2CppMethodInitialized_075458de = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.ShowKillFeed(killer, victim, score, weapon);
		return;
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x585A590", Offset = "0x5859590", VA = "0x585A590")]
	[PunRPC]
	public void ShowKillFeedWithPlayersRPC(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$ShowKillFeedWithPlayersRPC): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this_00;

		if (Il2CppMethodInitialized_075458df == false) {
			Il2CppMethodInitialized_075458df = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.ShowKillFeed(killer, victim, score, weapon, killerActorNumber, victimActorNumber);
		return;
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x585A6A0", Offset = "0x58596A0", VA = "0x585A6A0")]
	[PunRPC]
	public void EndGameRPC(float time, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$EndGameRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;

		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this_00.EndGame(time, info);
		return;
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x585A730", Offset = "0x5859730", VA = "0x585A730")]
	[PunRPC]
	public void NotifyPlayerJoinedRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$NotifyPlayerJoinedRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;

		__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this_00.OnNotifyPlayerJoined(info.Sender);
		return;
	}

	[Token(Token = "0x6001785")]
	[Address(RVA = "0x585A7C0", Offset = "0x58597C0", VA = "0x585A7C0")]
	[PunRPC]
	public void TransferNetworkViewRPC(int id, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$TransferNetworkViewRPC): clean
		Quaternion rotation;
		Vector3 position;
		GameObject __this_00;
		CustomLogicPhotonSync __this_01;

		position = (Vector3.zeroVector);
		rotation = *(Quaternion)typeof(Quaternion).static_fields;
		__this_00 = PhotonNetwork.Instantiate("Game/CustomLogicPhotonSyncPrefab", (Vector3)position, (Quaternion)rotation, 0, null);
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<CustomLogicPhotonSync>();
			if (__this_01 != null) {
				__this_01.Init(id);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x585A910", Offset = "0x5859910", VA = "0x585A910")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SendMessageRPC): clean
		uint uVar1;
		CustomLogicEvaluator __this_00;
		Player sender;
		double sentServerTimestamp;

		if (Il2CppMethodInitialized_075458e3 == false) {
			Il2CppMethodInitialized_075458e3 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
			sender = info.Sender;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
			sender = info.Sender;
		}
		if (__this_00 != null) {
			info.Sender = sender;
			if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				sender = info.Sender;
				__this_00 = CustomLogicManager.Evaluator;
				sentServerTimestamp = info.SentServerTime;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
			}
			else {
				sentServerTimestamp = info.SentServerTime;
			}
			__this_00.OnNetworkMessage(sender, message, sentServerTimestamp);
		}
		return;
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x585AA00", Offset = "0x5859A00", VA = "0x585AA00")]
	[PunRPC]
	public void SpawnPlayerRPC(bool force, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SpawnPlayerRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;

		if (info.Sender != null) {
			bVar2 = info.Sender.IsMasterClient;
			if (!bVar2) {
				return;
			}
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				__this_00.SpawnPlayer(force);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x585AAB0", Offset = "0x5859AB0", VA = "0x585AAB0")]
	[PunRPC]
	public void SpawnPlayerAtRPC(bool force, Vector3 position, float rotationY, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SpawnPlayerAtRPC): 1 lines keep C-only constructs
		byte bVar1;
		InGameManager __this_00;
		bool bVar2;

		if (info.Sender != null) {
			bVar2 = info.Sender.IsMasterClient;
			if (!bVar2) {
				return;
			}
			__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
			if (__this_00 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				__this_00.SpawnPlayerAt(force, position, rotationY);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x585AB90", Offset = "0x5859B90", VA = "0x585AB90")]
	[PunRPC]
	public void SyncCurrentTimeRPC(float time, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$SyncCurrentTimeRPC): clean
		bool bVar1;
		CustomLogicEvaluator pCVar2;

		if (info.Sender == null) {
	label_0595ac43: ;
			throw new NullReferenceException();
		}
		bVar1 = info.Sender.IsMasterClient;
		if (bVar1) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			if (pCVar2 != null) {
				if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicManager.Evaluator;
					if (pCVar2 == null) goto label_0595ac43;
				}
				pCVar2.CurrentTime = time;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x585AC50", Offset = "0x5859C50", VA = "0x585AC50")]
	[PunRPC]
	public void ChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$ChatRPC): clean
		ChatManager.OnChatRPC(message, senderTimestamp, info);
		return;
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x585ACB0", Offset = "0x5859CB0", VA = "0x585ACB0")]
	[PunRPC]
	public void PlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$PlayerChatRPC): clean
		ChatManager.OnPlayerChatRPC(message, senderTimestamp, info);
		return;
	}

	[Token(Token = "0x600178C")]
	[Address(RVA = "0x585AD10", Offset = "0x5859D10", VA = "0x585AD10")]
	[PunRPC]
	public void AnnounceRPC(string message, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$AnnounceRPC): clean
		Player pPVar1;

		if (info.Sender != null) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar1 = PhotonNetwork.MasterClient;
			}
			else {
				pPVar1 = PhotonNetwork.MasterClient;
			}
			if (info.Sender != pPVar1) {
				return;
			}
		}
		ChatManager.OnAnnounceRPC(message);
		return;
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x585ADB0", Offset = "0x5859DB0", VA = "0x585ADB0")]
	[PunRPC]
	public void VoteKickRPC(int id, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$VoteKickRPC): clean
		Room pPVar1;
		Player target;

		pPVar1 = PhotonNetwork.CurrentRoom;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		target = pPVar1.GetPlayer(id, false);
		ChatManager.VoteKickPlayer(info.Sender, target);
		return;
	}

	[Token(Token = "0x600178E")]
	[Address(RVA = "0x585AE60", Offset = "0x5859E60", VA = "0x585AE60")]
	[PunRPC]
	public void TestRPC(Color c)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$TestRPC): clean
		object message;
		float local_18;

		local_18 = c.r;
		message = (object)local_18;
		Debug.Log(message);
		return;
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x585AEF0", Offset = "0x5859EF0", VA = "0x585AEF0")]
	[PunRPC]
	public void PrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$PrivateChatRPC): clean
		ChatManager.OnPrivateChatRPC(message, targetID, senderTimestamp, info);
		return;
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x585AF50", Offset = "0x5859F50", VA = "0x585AF50")]
	private void Awake()
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$Awake): clean
		PhotonView pPVar1;

		pPVar1 = this.GetComponent<PhotonView>();
		RPCManager.PhotonView = pPVar1;
		return;
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x585AFC0", Offset = "0x5859FC0", VA = "0x585AFC0")]
	public RPCManager()
	{
		// Lifted from source/cpp/GameManagers/RPCManager.c (GameManagers.RPCManager$$.ctor): clean
		base();
		return;
	}
}
