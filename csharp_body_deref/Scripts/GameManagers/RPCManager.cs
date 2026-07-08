using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20001FC")]
internal class RPCManager : MonoBehaviourPun
{
	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x0")]
	public static PhotonView PhotonView;

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x413BB00", Offset = "0x413BB00", VA = "0x413BB00")]
	[PunRPC]
	public void TransferLogicRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x413BF20", Offset = "0x413BF20", VA = "0x413BF20")]
	[PunRPC]
	public void LoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x413BFA0", Offset = "0x413BFA0", VA = "0x413BFA0")]
	[PunRPC]
	public void LoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x413C010", Offset = "0x413C010", VA = "0x413C010")]
	[PunRPC]
	public void TransferMapRPC(byte[][] strArray, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x413C0A0", Offset = "0x413C0A0", VA = "0x413C0A0")]
	[PunRPC]
	public void LoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x413C130", Offset = "0x413C130", VA = "0x413C130")]
	[PunRPC]
	public void LoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x413C1A0", Offset = "0x413C1A0", VA = "0x413C1A0")]
	[PunRPC]
	public void LoadSkyboxRPC(string urls, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x413C2B0", Offset = "0x413C2B0", VA = "0x413C2B0")]
	[PunRPC]
	public void LoadLevelSkinRPC(string indices, string urls1, string urls2, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x413C3C0", Offset = "0x413C3C0", VA = "0x413C3C0")]
	[PunRPC]
	public void RestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x413C430", Offset = "0x413C430", VA = "0x413C430")]
	[PunRPC]
	public void PreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x413C4B0", Offset = "0x413C4B0", VA = "0x413C4B0")]
	[PunRPC]
	public void PauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x413C570", Offset = "0x413C570", VA = "0x413C570")]
	[PunRPC]
	public void StartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x413C630", Offset = "0x413C630", VA = "0x413C630")]
	[PunRPC]
	public void UnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x413C6F0", Offset = "0x413C6F0", VA = "0x413C6F0")]
	[PunRPC]
	public void ResetKDRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x413C790", Offset = "0x413C790", VA = "0x413C790")]
	[PunRPC]
	public void PlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x413C810", Offset = "0x413C810", VA = "0x413C810")]
	[PunRPC]
	public void GameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x413C890", Offset = "0x413C890", VA = "0x413C890")]
	[PunRPC]
	public void SetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x413C950", Offset = "0x413C950", VA = "0x413C950")]
	[PunRPC]
	public void EmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x413C960", Offset = "0x413C960", VA = "0x413C960")]
	[PunRPC]
	public void EmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x413C970", Offset = "0x413C970", VA = "0x413C970")]
	[PunRPC]
	public void SpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x413CBD0", Offset = "0x413CBD0", VA = "0x413CBD0")]
	[PunRPC]
	public void SpawnSpawnableRPC(string name, Vector3 position, Quaternion rotation, float scale, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x413CBE0", Offset = "0x413CBE0", VA = "0x413CBE0")]
	[PunRPC]
	public void SetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x413CC80", Offset = "0x413CC80", VA = "0x413CC80")]
	[PunRPC]
	public void ShowKillFeedRPC(string killer, string victim, int score, string weapon, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x413CD70", Offset = "0x413CD70", VA = "0x413CD70")]
	[PunRPC]
	public void EndGameRPC(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x413CE30", Offset = "0x413CE30", VA = "0x413CE30")]
	[PunRPC]
	public void NotifyPlayerJoinedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x413CEC0", Offset = "0x413CEC0", VA = "0x413CEC0")]
	[PunRPC]
	public void TransferNetworkViewRPC(int id, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x413D010", Offset = "0x413D010", VA = "0x413D010")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x413D0F0", Offset = "0x413D0F0", VA = "0x413D0F0")]
	[PunRPC]
	public void SpawnPlayerRPC(bool force, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x413D1A0", Offset = "0x413D1A0", VA = "0x413D1A0")]
	[PunRPC]
	public void SpawnPlayerAtRPC(bool force, Vector3 position, float rotationY, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x413D280", Offset = "0x413D280", VA = "0x413D280")]
	[PunRPC]
	public void SyncCurrentTimeRPC(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x413D340", Offset = "0x413D340", VA = "0x413D340")]
	[PunRPC]
	public void ChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x413D3D0", Offset = "0x413D3D0", VA = "0x413D3D0")]
	[PunRPC]
	public void AnnounceRPC(string message, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x413D470", Offset = "0x413D470", VA = "0x413D470")]
	[PunRPC]
	public void VoteKickRPC(int id, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x413D520", Offset = "0x413D520", VA = "0x413D520")]
	[PunRPC]
	public void TestRPC(Color c)
	{
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x413D5B0", Offset = "0x413D5B0", VA = "0x413D5B0")]
	[PunRPC]
	public void PrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x413D640", Offset = "0x413D640", VA = "0x413D640")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x413D6B0", Offset = "0x413D6B0", VA = "0x413D6B0")]
	public RPCManager()
	{
	}
}
