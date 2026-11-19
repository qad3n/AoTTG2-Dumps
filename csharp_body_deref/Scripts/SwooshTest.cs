// ==================== AoTTG2 cross-reference ====================
// Type: SwooshTest
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SwooshTest.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/SwooshTest.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000017")]
public class SwooshTest : MonoBehaviour
{
	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AnimationClip _animation;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x28")]
	private AnimationState _animationState;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int _start;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private int _end;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x38")]
	private float _startN;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x3C")]
	private float _endN;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x40")]
	private float _time;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x44")]
	private float _prevTime;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x48")]
	private float _prevAnimTime;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private MeleeWeaponTrail _trail;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x58")]
	private bool _firstFrame;

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x57492F0", Offset = "0x57482F0", VA = "0x57492F0")]
	private void Start()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x57493C0", Offset = "0x57483C0", VA = "0x57493C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5749490", Offset = "0x5748490", VA = "0x5749490")]
	public SwooshTest()
	{
	}
}
