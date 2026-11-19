// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.MoveByKeys
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Prototyping/MoveByKeys.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200001A")]
[RequireComponent(typeof(PhotonView))]
public class MoveByKeys : MonoBehaviourPun
{
	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x28")]
	public float Speed;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x2C")]
	public float JumpForce;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x30")]
	public float JumpTimeout;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x34")]
	private bool isSprite;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x38")]
	private float jumpingTime;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x40")]
	private Rigidbody body;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x48")]
	private Rigidbody2D body2d;

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x56F3CB0", Offset = "0x56F2CB0", VA = "0x56F3CB0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x56F3D90", Offset = "0x56F2D90", VA = "0x56F3D90")]
	public void FixedUpdate()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x56F41B0", Offset = "0x56F31B0", VA = "0x56F41B0")]
	public MoveByKeys()
	{
	}
}
