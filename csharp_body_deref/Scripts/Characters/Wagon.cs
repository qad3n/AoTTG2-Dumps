// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Wagon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Wagon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Wagon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004FB")]
public class Wagon : MonoBehaviour
{
	[Token(Token = "0x4001632")]
	[FieldOffset(Offset = "0x20")]
	public GameObject leftWheel;

	[Token(Token = "0x4001633")]
	[FieldOffset(Offset = "0x28")]
	public GameObject rightWheel;

	[Token(Token = "0x4001634")]
	[FieldOffset(Offset = "0x30")]
	public GameObject horse;

	[Token(Token = "0x4001635")]
	[FieldOffset(Offset = "0x38")]
	public Vector2 targetVelocity;

	[Token(Token = "0x4001636")]
	[FieldOffset(Offset = "0x40")]
	private Transform leftWheelTransform;

	[Token(Token = "0x4001637")]
	[FieldOffset(Offset = "0x48")]
	private Transform rightWheelTransform;

	[Token(Token = "0x4001638")]
	[FieldOffset(Offset = "0x50")]
	private Rigidbody rigidbody;

	[Token(Token = "0x4001639")]
	[FieldOffset(Offset = "0x58")]
	private bool grounded;

	[Token(Token = "0x6003448")]
	[Address(RVA = "0x41DE240", Offset = "0x41DE240", VA = "0x41DE240")]
	private void Start()
	{
	}

	[Token(Token = "0x6003449")]
	[Address(RVA = "0x41DE2D0", Offset = "0x41DE2D0", VA = "0x41DE2D0")]
	private void CheckGround()
	{
	}

	[Token(Token = "0x600344A")]
	[Address(RVA = "0x41DE2E0", Offset = "0x41DE2E0", VA = "0x41DE2E0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600344B")]
	[Address(RVA = "0x41DE5C0", Offset = "0x41DE5C0", VA = "0x41DE5C0")]
	public Wagon()
	{
	}
}
