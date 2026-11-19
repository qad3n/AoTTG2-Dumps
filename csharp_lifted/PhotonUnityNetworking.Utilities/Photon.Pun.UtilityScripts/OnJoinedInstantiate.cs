// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.OnJoinedInstantiate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Prototyping/OnJoinedInstantiate.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000022")]
public class OnJoinedInstantiate : MonoBehaviour, IMatchmakingCallbacks
{
	[Token(Token = "0x2000023")]
	public enum SpawnSequence
	{
		[Token(Token = "0x4000095")]
		Connection,
		[Token(Token = "0x4000096")]
		Random,
		[Token(Token = "0x4000097")]
		RoundRobin
	}

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	private Transform SpawnPosition;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	public SpawnSequence Sequence;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	public List<Transform> SpawnPoints;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Add a random variance to a spawn point position. GetRandomOffset() can be overridden with your own method for producing offsets.")]
	[HideInInspector]
	public bool UseRandomOffset;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x3C")]
	[Tooltip("Radius of the RandomOffset.")]
	[FormerlySerializedAs("PositionOffset")]
	[HideInInspector]
	public float RandomOffset;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Disables the Y axis of RandomOffset. The Y value of the spawn point will be used.")]
	[HideInInspector]
	public bool ClampY;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	public List<GameObject> PrefabsToInstantiate;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x50")]
	[FormerlySerializedAs("autoSpawnObjects")]
	[HideInInspector]
	public bool AutoSpawnObjects;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x58")]
	public Stack<GameObject> SpawnedObjects;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x60")]
	protected int spawnedAsActorId;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x64")]
	protected int lastUsedSpawnPointIndex;

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x56F4E80", Offset = "0x56F3E80", VA = "0x56F4E80", Slot = "11")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x56F4EF0", Offset = "0x56F3EF0", VA = "0x56F4EF0", Slot = "12")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x56F4F60", Offset = "0x56F3F60", VA = "0x56F4F60", Slot = "13")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x56F4FD0", Offset = "0x56F3FD0", VA = "0x56F4FD0", Slot = "14")]
	public virtual void SpawnObjects()
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x56F5260", Offset = "0x56F4260", VA = "0x56F5260", Slot = "15")]
	public virtual void DespawnObjects(bool localOnly)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x56F53B0", Offset = "0x56F43B0", VA = "0x56F53B0", Slot = "16")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x56F53C0", Offset = "0x56F43C0", VA = "0x56F53C0", Slot = "17")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x56F53D0", Offset = "0x56F43D0", VA = "0x56F53D0", Slot = "18")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x56F53E0", Offset = "0x56F43E0", VA = "0x56F53E0", Slot = "19")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x56F53F0", Offset = "0x56F43F0", VA = "0x56F53F0", Slot = "20")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x56F5400", Offset = "0x56F4400", VA = "0x56F5400", Slot = "21")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x56F5410", Offset = "0x56F4410", VA = "0x56F5410", Slot = "22")]
	public virtual void GetSpawnPoint(out Vector3 spawnPos, out Quaternion spawnRot)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x56F5550", Offset = "0x56F4550", VA = "0x56F5550", Slot = "23")]
	protected virtual Transform GetSpawnPoint()
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x56F5650", Offset = "0x56F4650", VA = "0x56F5650", Slot = "24")]
	protected virtual Vector3 GetRandomOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x56F57E0", Offset = "0x56F47E0", VA = "0x56F57E0")]
	public OnJoinedInstantiate()
	{
	}
}
