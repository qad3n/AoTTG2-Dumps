using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200001C")]
[RequireComponent(typeof(PhotonView))]
public class MoveByKeys : MonoBehaviourPun
{
	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x28")]
	public float Speed;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x2C")]
	public float JumpForce;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x30")]
	public float JumpTimeout;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x34")]
	private bool isSprite;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x38")]
	private float jumpingTime;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x40")]
	private Rigidbody body;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x48")]
	private Rigidbody2D body2d;

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3BF0720", Offset = "0x3BF0720", VA = "0x3BF0720")]
	public void Start()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3BF0800", Offset = "0x3BF0800", VA = "0x3BF0800")]
	public void FixedUpdate()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3BF0C30", Offset = "0x3BF0C30", VA = "0x3BF0C30")]
	public MoveByKeys()
	{
	}
}
