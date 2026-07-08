using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000024")]
public class OnJoinedInstantiate : MonoBehaviour, IMatchmakingCallbacks
{
	[Token(Token = "0x2000025")]
	public enum SpawnSequence
	{
		[Token(Token = "0x400009A")]
		Connection,
		[Token(Token = "0x400009B")]
		Random,
		[Token(Token = "0x400009C")]
		RoundRobin
	}

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	private Transform SpawnPosition;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	public SpawnSequence Sequence;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	public List<Transform> SpawnPoints;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Add a random variance to a spawn point position. GetRandomOffset() can be overridden with your own method for producing offsets.")]
	[HideInInspector]
	public bool UseRandomOffset;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x3C")]
	[Tooltip("Radius of the RandomOffset.")]
	[FormerlySerializedAs("PositionOffset")]
	[HideInInspector]
	public float RandomOffset;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Disables the Y axis of RandomOffset. The Y value of the spawn point will be used.")]
	[HideInInspector]
	public bool ClampY;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	public List<GameObject> PrefabsToInstantiate;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x50")]
	[FormerlySerializedAs("autoSpawnObjects")]
	[HideInInspector]
	public bool AutoSpawnObjects;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x58")]
	public Stack<GameObject> SpawnedObjects;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x60")]
	protected int spawnedAsActorId;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x64")]
	protected int lastUsedSpawnPointIndex;

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3BF1970", Offset = "0x3BF1970", VA = "0x3BF1970", Slot = "11")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3BF19E0", Offset = "0x3BF19E0", VA = "0x3BF19E0", Slot = "12")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3BF1A50", Offset = "0x3BF1A50", VA = "0x3BF1A50", Slot = "13")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3BF1AC0", Offset = "0x3BF1AC0", VA = "0x3BF1AC0", Slot = "14")]
	public virtual void SpawnObjects()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3BF1DC0", Offset = "0x3BF1DC0", VA = "0x3BF1DC0", Slot = "15")]
	public virtual void DespawnObjects(bool localOnly)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3BF1F20", Offset = "0x3BF1F20", VA = "0x3BF1F20", Slot = "16")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3BF1F30", Offset = "0x3BF1F30", VA = "0x3BF1F30", Slot = "17")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3BF1F40", Offset = "0x3BF1F40", VA = "0x3BF1F40", Slot = "18")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3BF1F50", Offset = "0x3BF1F50", VA = "0x3BF1F50", Slot = "19")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3BF1F60", Offset = "0x3BF1F60", VA = "0x3BF1F60", Slot = "20")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3BF1F70", Offset = "0x3BF1F70", VA = "0x3BF1F70", Slot = "21")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3BF1F80", Offset = "0x3BF1F80", VA = "0x3BF1F80", Slot = "22")]
	public virtual void GetSpawnPoint(out Vector3 spawnPos, out Quaternion spawnRot)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3BF20C0", Offset = "0x3BF20C0", VA = "0x3BF20C0", Slot = "23")]
	protected virtual Transform GetSpawnPoint()
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3BF21C0", Offset = "0x3BF21C0", VA = "0x3BF21C0", Slot = "24")]
	protected virtual Vector3 GetRandomOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3BF2310", Offset = "0x3BF2310", VA = "0x3BF2310")]
	public OnJoinedInstantiate()
	{
	}
}
