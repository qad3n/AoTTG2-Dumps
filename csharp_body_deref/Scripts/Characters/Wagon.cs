using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004B6")]
public class Wagon : MonoBehaviour
{
	[Token(Token = "0x4001521")]
	[FieldOffset(Offset = "0x20")]
	public GameObject leftWheel;

	[Token(Token = "0x4001522")]
	[FieldOffset(Offset = "0x28")]
	public GameObject rightWheel;

	[Token(Token = "0x4001523")]
	[FieldOffset(Offset = "0x30")]
	public GameObject horse;

	[Token(Token = "0x4001524")]
	[FieldOffset(Offset = "0x38")]
	public Vector2 targetVelocity;

	[Token(Token = "0x4001525")]
	[FieldOffset(Offset = "0x40")]
	private Transform leftWheelTransform;

	[Token(Token = "0x4001526")]
	[FieldOffset(Offset = "0x48")]
	private Transform rightWheelTransform;

	[Token(Token = "0x4001527")]
	[FieldOffset(Offset = "0x50")]
	private Rigidbody rigidbody;

	[Token(Token = "0x4001528")]
	[FieldOffset(Offset = "0x58")]
	private bool grounded;

	[Token(Token = "0x600323A")]
	[Address(RVA = "0x3ED1980", Offset = "0x3ED1980", VA = "0x3ED1980")]
	private void Start()
	{
	}

	[Token(Token = "0x600323B")]
	[Address(RVA = "0x3ED1A10", Offset = "0x3ED1A10", VA = "0x3ED1A10")]
	private void CheckGround()
	{
	}

	[Token(Token = "0x600323C")]
	[Address(RVA = "0x3ED1A20", Offset = "0x3ED1A20", VA = "0x3ED1A20")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600323D")]
	[Address(RVA = "0x3ED1D00", Offset = "0x3ED1D00", VA = "0x3ED1D00")]
	public Wagon()
	{
	}
}
