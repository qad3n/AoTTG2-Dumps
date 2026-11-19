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

[Token(Token = "0x20006B3")]
public class Wagon : MonoBehaviour
{
	[Token(Token = "0x4001E52")]
	[FieldOffset(Offset = "0x20")]
	public GameObject leftWheel;

	[Token(Token = "0x4001E53")]
	[FieldOffset(Offset = "0x28")]
	public GameObject rightWheel;

	[Token(Token = "0x4001E54")]
	[FieldOffset(Offset = "0x30")]
	public GameObject horse;

	[Token(Token = "0x4001E55")]
	[FieldOffset(Offset = "0x38")]
	public Vector2 targetVelocity;

	[Token(Token = "0x4001E56")]
	[FieldOffset(Offset = "0x40")]
	private Transform leftWheelTransform;

	[Token(Token = "0x4001E57")]
	[FieldOffset(Offset = "0x48")]
	private Transform rightWheelTransform;

	[Token(Token = "0x4001E58")]
	[FieldOffset(Offset = "0x50")]
	private Rigidbody rigidbody;

	[Token(Token = "0x4001E59")]
	[FieldOffset(Offset = "0x58")]
	private bool grounded;

	[Token(Token = "0x60040E8")]
	[Address(RVA = "0x5AF34A0", Offset = "0x5AF24A0", VA = "0x5AF34A0")]
	private void Start()
	{
	}

	[Token(Token = "0x60040E9")]
	[Address(RVA = "0x5AF3530", Offset = "0x5AF2530", VA = "0x5AF3530")]
	private void CheckGround()
	{
	}

	[Token(Token = "0x60040EA")]
	[Address(RVA = "0x5AF3540", Offset = "0x5AF2540", VA = "0x5AF3540")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60040EB")]
	[Address(RVA = "0x5AF37F0", Offset = "0x5AF27F0", VA = "0x5AF37F0")]
	public Wagon()
	{
	}
}
