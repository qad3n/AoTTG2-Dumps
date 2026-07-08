using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000015")]
public class SwooshTest : MonoBehaviour
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AnimationClip _animation;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x28")]
	private AnimationState _animationState;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int _start;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private int _end;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x38")]
	private float _startN;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x3C")]
	private float _endN;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x40")]
	private float _time;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x44")]
	private float _prevTime;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x48")]
	private float _prevAnimTime;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private MeleeWeaponTrail _trail;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x58")]
	private bool _firstFrame;

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3C69DB0", Offset = "0x3C69DB0", VA = "0x3C69DB0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3C69E90", Offset = "0x3C69E90", VA = "0x3C69E90")]
	private void Update()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3C69F60", Offset = "0x3C69F60", VA = "0x3C69F60")]
	public SwooshTest()
	{
	}
}
