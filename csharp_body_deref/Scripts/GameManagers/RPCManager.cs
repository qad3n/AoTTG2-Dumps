// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.RPCManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/RPCManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/RPCManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x200034A")]
internal class RPCManager : MonoBehaviourPun
{
	[Token(Token = "0x400111D")]
	[FieldOffset(Offset = "0x0")]
	public static PhotonView PhotonView;

	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x1E75100", Offset = "0x1E73700", VA = "0x181E75100")]
	[PunRPC]
	public void TransferLogicRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x1E73C60", Offset = "0x1E72260", VA = "0x181E73C60")]
	[PunRPC]
	public void LoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x1E73DB0", Offset = "0x1E723B0", VA = "0x181E73DB0")]
	[PunRPC]
	public void LoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x1E75070", Offset = "0x1E73670", VA = "0x181E75070")]
	[PunRPC]
	public void TransferAddonBundleRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x1E73D50", Offset = "0x1E72350", VA = "0x181E73D50")]
	[PunRPC]
	public void LoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x1E75190", Offset = "0x1E73790", VA = "0x181E75190")]
	[PunRPC]
	public void TransferMapRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x1E73CD0", Offset = "0x1E722D0", VA = "0x181E73CD0")]
	[PunRPC]
	public void LoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x1E74510", Offset = "0x1E72B10", VA = "0x181E74510")]
	[PunRPC]
	public void RequestMapDestructionRPC(int attackerId, int[] objectIds, Vector3 center, Vector3 direction, float hitSize, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x1E740F0", Offset = "0x1E726F0", VA = "0x181E740F0")]
	[PunRPC]
	public void MapObjectsDestroyedRPC(int[] objectIds, Vector3 center, float hitSize, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x1E745D0", Offset = "0x1E72BD0", VA = "0x181E745D0")]
	[PunRPC]
	public void RequestMapDestructionStateRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x1E74080", Offset = "0x1E72680", VA = "0x181E74080")]
	[PunRPC]
	public void MapDestructionStateRPC(int[] objectIds, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x1E73E10", Offset = "0x1E72410", VA = "0x181E73E10")]
	[PunRPC]
	public void LoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x1E73F80", Offset = "0x1E72580", VA = "0x181E73F80")]
	[PunRPC]
	public void LoadSkyboxRPC(string urls, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x1E73E70", Offset = "0x1E72470", VA = "0x181E73E70")]
	[PunRPC]
	public void LoadLevelSkinRPC(string indices, string urls1, string urls2, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x1E746D0", Offset = "0x1E72CD0", VA = "0x181E746D0")]
	[PunRPC]
	public void RestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x1E74410", Offset = "0x1E72A10", VA = "0x181E74410")]
	[PunRPC]
	public void PreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x1E74240", Offset = "0x1E72840", VA = "0x181E74240")]
	[PunRPC]
	public void PauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x1E74E60", Offset = "0x1E73460", VA = "0x181E74E60")]
	[PunRPC]
	public void StartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x1E75360", Offset = "0x1E73960", VA = "0x181E75360")]
	[PunRPC]
	public void UnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x1E74630", Offset = "0x1E72C30", VA = "0x181E74630")]
	[PunRPC]
	public void ResetKDRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x1E743A0", Offset = "0x1E729A0", VA = "0x181E743A0")]
	[PunRPC]
	public void PlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x1E73BF0", Offset = "0x1E721F0", VA = "0x181E73BF0")]
	[PunRPC]
	public void GameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x1E74890", Offset = "0x1E72E90", VA = "0x181E74890")]
	[PunRPC]
	public void SetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x1E73A70", Offset = "0x1E72070", VA = "0x181E73A70")]
	[PunRPC]
	public void EmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x1E73AB0", Offset = "0x1E720B0", VA = "0x181E73AB0")]
	[PunRPC]
	public void EmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x1E74B00", Offset = "0x1E73100", VA = "0x181E74B00")]
	[PunRPC]
	public void SpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x1E74DD0", Offset = "0x1E733D0", VA = "0x181E74DD0")]
	[PunRPC]
	public void SpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001500")]
	[Address(RVA = "0x1E74800", Offset = "0x1E72E00", VA = "0x181E74800")]
	[PunRPC]
	public void SetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001501")]
	[Address(RVA = "0x1E74950", Offset = "0x1E72F50", VA = "0x181E74950")]
	[PunRPC]
	public void ShowKillFeedRPC(string killer, string victim, int score, string weapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001502")]
	[Address(RVA = "0x1E74A20", Offset = "0x1E73020", VA = "0x181E74A20")]
	[PunRPC]
	public void ShowKillFeedWithPlayersRPC(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x1E73AF0", Offset = "0x1E720F0", VA = "0x181E73AF0")]
	[PunRPC]
	public void EndGameRPC(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x1E741A0", Offset = "0x1E727A0", VA = "0x181E741A0")]
	[PunRPC]
	public void NotifyPlayerJoinedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x1E75220", Offset = "0x1E73820", VA = "0x181E75220")]
	[PunRPC]
	public void TransferNetworkViewRPC(int id, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001506")]
	[Address(RVA = "0x1E74730", Offset = "0x1E72D30", VA = "0x181E74730")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001507")]
	[Address(RVA = "0x1E74D10", Offset = "0x1E73310", VA = "0x181E74D10")]
	[PunRPC]
	public void SpawnPlayerRPC(bool force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001508")]
	[Address(RVA = "0x1E74BE0", Offset = "0x1E731E0", VA = "0x181E74BE0")]
	[PunRPC]
	public void SpawnPlayerAtRPC(bool force, Vector3 position, float rotationY, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x1E74F40", Offset = "0x1E73540", VA = "0x181E74F40")]
	[PunRPC]
	public void SyncCurrentTimeRPC(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x1E739F0", Offset = "0x1E71FF0", VA = "0x181E739F0")]
	[PunRPC]
	public void ChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x1E74320", Offset = "0x1E72920", VA = "0x181E74320")]
	[PunRPC]
	public void PlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x1E738F0", Offset = "0x1E71EF0", VA = "0x181E738F0")]
	[PunRPC]
	public void AnnounceRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x1E75440", Offset = "0x1E73A40", VA = "0x181E75440")]
	[PunRPC]
	public void VoteKickRPC(int id, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x1E74FF0", Offset = "0x1E735F0", VA = "0x181E74FF0")]
	[PunRPC]
	public void TestRPC(Color c)
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x1E74480", Offset = "0x1E72A80", VA = "0x181E74480")]
	[PunRPC]
	public void PrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x1E73980", Offset = "0x1E71F80", VA = "0x181E73980")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public RPCManager()
	{
	}
}
