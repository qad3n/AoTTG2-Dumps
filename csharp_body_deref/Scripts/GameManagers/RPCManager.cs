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

[Token(Token = "0x2000232")]
internal class RPCManager : MonoBehaviourPun
{
	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x0")]
	public static PhotonView PhotonView;

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x44704D0", Offset = "0x44704D0", VA = "0x44704D0")]
	[PunRPC]
	public void TransferLogicRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x4470560", Offset = "0x4470560", VA = "0x4470560")]
	[PunRPC]
	public void LoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x44705E0", Offset = "0x44705E0", VA = "0x44705E0")]
	[PunRPC]
	public void LoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x4470650", Offset = "0x4470650", VA = "0x4470650")]
	[PunRPC]
	public void TransferAddonBundleRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x44706E0", Offset = "0x44706E0", VA = "0x44706E0")]
	[PunRPC]
	public void LoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x4470750", Offset = "0x4470750", VA = "0x4470750")]
	[PunRPC]
	public void TransferMapRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x44707E0", Offset = "0x44707E0", VA = "0x44707E0")]
	[PunRPC]
	public void LoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x4470870", Offset = "0x4470870", VA = "0x4470870")]
	[PunRPC]
	public void LoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x44708E0", Offset = "0x44708E0", VA = "0x44708E0")]
	[PunRPC]
	public void LoadSkyboxRPC(string urls, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x4470A60", Offset = "0x4470A60", VA = "0x4470A60")]
	[PunRPC]
	public void LoadLevelSkinRPC(string indices, string urls1, string urls2, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x4470B90", Offset = "0x4470B90", VA = "0x4470B90")]
	[PunRPC]
	public void RestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x4470C00", Offset = "0x4470C00", VA = "0x4470C00")]
	[PunRPC]
	public void PreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x4470C80", Offset = "0x4470C80", VA = "0x4470C80")]
	[PunRPC]
	public void PauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x4470D30", Offset = "0x4470D30", VA = "0x4470D30")]
	[PunRPC]
	public void StartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x4470DE0", Offset = "0x4470DE0", VA = "0x4470DE0")]
	[PunRPC]
	public void UnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x4470E90", Offset = "0x4470E90", VA = "0x4470E90")]
	[PunRPC]
	public void ResetKDRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x4470F30", Offset = "0x4470F30", VA = "0x4470F30")]
	[PunRPC]
	public void PlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x4470FB0", Offset = "0x4470FB0", VA = "0x4470FB0")]
	[PunRPC]
	public void GameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x4471030", Offset = "0x4471030", VA = "0x4471030")]
	[PunRPC]
	public void SetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x44710F0", Offset = "0x44710F0", VA = "0x44710F0")]
	[PunRPC]
	public void EmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x4471100", Offset = "0x4471100", VA = "0x4471100")]
	[PunRPC]
	public void EmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x4471110", Offset = "0x4471110", VA = "0x4471110")]
	[PunRPC]
	public void SpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x4471370", Offset = "0x4471370", VA = "0x4471370")]
	[PunRPC]
	public void SpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x4471380", Offset = "0x4471380", VA = "0x4471380")]
	[PunRPC]
	public void SetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x4471480", Offset = "0x4471480", VA = "0x4471480")]
	[PunRPC]
	public void ShowKillFeedRPC(string killer, string victim, int score, string weapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x4471570", Offset = "0x4471570", VA = "0x4471570")]
	[PunRPC]
	public void ShowKillFeedWithPlayersRPC(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x4471680", Offset = "0x4471680", VA = "0x4471680")]
	[PunRPC]
	public void EndGameRPC(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x4471740", Offset = "0x4471740", VA = "0x4471740")]
	[PunRPC]
	public void NotifyPlayerJoinedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x44717D0", Offset = "0x44717D0", VA = "0x44717D0")]
	[PunRPC]
	public void TransferNetworkViewRPC(int id, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x4471920", Offset = "0x4471920", VA = "0x4471920")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4471A00", Offset = "0x4471A00", VA = "0x4471A00")]
	[PunRPC]
	public void SpawnPlayerRPC(bool force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x4471AB0", Offset = "0x4471AB0", VA = "0x4471AB0")]
	[PunRPC]
	public void SpawnPlayerAtRPC(bool force, Vector3 position, float rotationY, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x4471B80", Offset = "0x4471B80", VA = "0x4471B80")]
	[PunRPC]
	public void SyncCurrentTimeRPC(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x4471C40", Offset = "0x4471C40", VA = "0x4471C40")]
	[PunRPC]
	public void ChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x4471CD0", Offset = "0x4471CD0", VA = "0x4471CD0")]
	[PunRPC]
	public void PlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x4471D60", Offset = "0x4471D60", VA = "0x4471D60")]
	[PunRPC]
	public void AnnounceRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x4471E00", Offset = "0x4471E00", VA = "0x4471E00")]
	[PunRPC]
	public void VoteKickRPC(int id, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x4471EB0", Offset = "0x4471EB0", VA = "0x4471EB0")]
	[PunRPC]
	public void TestRPC(Color c)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x4471F40", Offset = "0x4471F40", VA = "0x4471F40")]
	[PunRPC]
	public void PrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x4471FD0", Offset = "0x4471FD0", VA = "0x4471FD0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x4472040", Offset = "0x4472040", VA = "0x4472040")]
	public RPCManager()
	{
	}
}
