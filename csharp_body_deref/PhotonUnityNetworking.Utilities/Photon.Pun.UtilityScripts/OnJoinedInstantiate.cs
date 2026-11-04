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
	[Address(RVA = "0x1D54520", Offset = "0x1D52B20", VA = "0x181D54520", Slot = "11")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x1D544D0", Offset = "0x1D52AD0", VA = "0x181D544D0", Slot = "12")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x1D54570", Offset = "0x1D52B70", VA = "0x181D54570", Slot = "13")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x1D545F0", Offset = "0x1D52BF0", VA = "0x181D545F0", Slot = "14")]
	public virtual void SpawnObjects()
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x1D53FB0", Offset = "0x1D525B0", VA = "0x181D53FB0", Slot = "15")]
	public virtual void DespawnObjects(bool localOnly)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "17")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "18")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x1D54230", Offset = "0x1D52830", VA = "0x181D54230", Slot = "22")]
	public virtual void GetSpawnPoint(out Vector3 spawnPos, out Quaternion spawnRot)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x1D54370", Offset = "0x1D52970", VA = "0x181D54370", Slot = "23")]
	protected virtual Transform GetSpawnPoint()
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x1D540D0", Offset = "0x1D526D0", VA = "0x181D540D0", Slot = "24")]
	protected virtual Vector3 GetRandomOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x1D54840", Offset = "0x1D52E40", VA = "0x181D54840")]
	public OnJoinedInstantiate()
	{
	}
}
