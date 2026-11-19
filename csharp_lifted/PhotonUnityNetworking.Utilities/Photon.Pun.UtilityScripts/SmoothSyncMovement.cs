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

[Token(Token = "0x2000018")]
[RequireComponent(typeof(PhotonView))]
public class SmoothSyncMovement : MonoBehaviourPun, IPunObservable
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x28")]
	public float SmoothingDelay;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3 correctPlayerPos;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x38")]
	private Quaternion correctPlayerRot;

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x56F3270", Offset = "0x56F2270", VA = "0x56F3270")]
	public void Awake()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x56F3480", Offset = "0x56F2480", VA = "0x56F3480", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x56F35F0", Offset = "0x56F25F0", VA = "0x56F35F0")]
	public void Update()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x56F3760", Offset = "0x56F2760", VA = "0x56F3760")]
	public SmoothSyncMovement()
	{
	}
}
