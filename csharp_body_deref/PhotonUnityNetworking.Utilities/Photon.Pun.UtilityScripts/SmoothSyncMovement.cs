// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.SmoothSyncMovement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/PhotonView/SmoothSyncMovement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200001A")]
[RequireComponent(typeof(PhotonView))]
public class SmoothSyncMovement : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x28")]
	public float SmoothingDelay;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3 correctPlayerPos;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x38")]
	private Quaternion correctPlayerRot;

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3F081A0", Offset = "0x3F081A0", VA = "0x3F081A0")]
	public void Awake()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3F083C0", Offset = "0x3F083C0", VA = "0x3F083C0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3F08530", Offset = "0x3F08530", VA = "0x3F08530")]
	public void Update()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3F086A0", Offset = "0x3F086A0", VA = "0x3F086A0")]
	public SmoothSyncMovement()
	{
	}
}
