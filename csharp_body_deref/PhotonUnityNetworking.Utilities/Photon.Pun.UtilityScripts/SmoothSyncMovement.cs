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
	[Address(RVA = "0x3BEFCD0", Offset = "0x3BEFCD0", VA = "0x3BEFCD0")]
	public void Awake()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3BEFEF0", Offset = "0x3BEFEF0", VA = "0x3BEFEF0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3BF0060", Offset = "0x3BF0060", VA = "0x3BF0060")]
	public void Update()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3BF01D0", Offset = "0x3BF01D0", VA = "0x3BF01D0")]
	public SmoothSyncMovement()
	{
	}
}
