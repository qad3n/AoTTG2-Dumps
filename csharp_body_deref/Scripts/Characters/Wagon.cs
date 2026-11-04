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

[Token(Token = "0x2000654")]
public class Wagon : MonoBehaviour
{
	[Token(Token = "0x4001CA4")]
	[FieldOffset(Offset = "0x20")]
	public GameObject leftWheel;

	[Token(Token = "0x4001CA5")]
	[FieldOffset(Offset = "0x28")]
	public GameObject rightWheel;

	[Token(Token = "0x4001CA6")]
	[FieldOffset(Offset = "0x30")]
	public GameObject horse;

	[Token(Token = "0x4001CA7")]
	[FieldOffset(Offset = "0x38")]
	public Vector2 targetVelocity;

	[Token(Token = "0x4001CA8")]
	[FieldOffset(Offset = "0x40")]
	private Transform leftWheelTransform;

	[Token(Token = "0x4001CA9")]
	[FieldOffset(Offset = "0x48")]
	private Transform rightWheelTransform;

	[Token(Token = "0x4001CAA")]
	[FieldOffset(Offset = "0x50")]
	private Rigidbody rigidbody;

	[Token(Token = "0x4001CAB")]
	[FieldOffset(Offset = "0x58")]
	private bool grounded;

	[Token(Token = "0x6003E4E")]
	[Address(RVA = "0x2161760", Offset = "0x215FD60", VA = "0x182161760")]
	private void Start()
	{
	}

	[Token(Token = "0x6003E4F")]
	[Address(RVA = "0x2161420", Offset = "0x215FA20", VA = "0x182161420")]
	private void CheckGround()
	{
	}

	[Token(Token = "0x6003E50")]
	[Address(RVA = "0x2161430", Offset = "0x215FA30", VA = "0x182161430")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6003E51")]
	[Address(RVA = "0x21617F0", Offset = "0x215FDF0", VA = "0x1821617F0")]
	public Wagon()
	{
	}
}
