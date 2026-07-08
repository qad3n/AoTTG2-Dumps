using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004B1")]
internal class Horse : BaseCharacter
{
	[Token(Token = "0x4001502")]
	[FieldOffset(Offset = "0xF0")]
	private Human _owner;

	[Token(Token = "0x4001503")]
	[FieldOffset(Offset = "0xF8")]
	private HorseComponentCache HorseCache;

	[Token(Token = "0x4001504")]
	[FieldOffset(Offset = "0x100")]
	public HorseState State;

	[Token(Token = "0x4001505")]
	[FieldOffset(Offset = "0x104")]
	public bool FollowingEnabled;

	[Token(Token = "0x4001506")]
	[FieldOffset(Offset = "0x108")]
	private float WalkSpeed;

	[Token(Token = "0x4001507")]
	[FieldOffset(Offset = "0x10C")]
	private float RunCloseSpeed;

	[Token(Token = "0x4001508")]
	[FieldOffset(Offset = "0x110")]
	private float TeleportTime;

	[Token(Token = "0x4001509")]
	[FieldOffset(Offset = "0x114")]
	private float JumpForce;

	[Token(Token = "0x400150A")]
	[FieldOffset(Offset = "0x118")]
	private float MaxTilt;

	[Token(Token = "0x400150B")]
	[FieldOffset(Offset = "0x11C")]
	private float _idleTimeLeft;

	[Token(Token = "0x400150C")]
	[FieldOffset(Offset = "0x120")]
	private float _teleportTimeLeft;

	[Token(Token = "0x400150D")]
	[FieldOffset(Offset = "0x124")]
	private float _jumpCooldownLeft;

	[Token(Token = "0x1700095C")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x6003226")]
		[Address(RVA = "0x3EAA160", Offset = "0x3EAA160", VA = "0x3EAA160", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6003227")]
	[Address(RVA = "0x3EAA1B0", Offset = "0x3EAA1B0", VA = "0x3EAA1B0")]
	public void Init(Human human)
	{
	}

	[Token(Token = "0x6003228")]
	[Address(RVA = "0x3EAA200", Offset = "0x3EAA200", VA = "0x3EAA200", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003229")]
	[Address(RVA = "0x3EAA300", Offset = "0x3EAA300", VA = "0x3EAA300")]
	public void Jump()
	{
	}

	[Token(Token = "0x600322A")]
	[Address(RVA = "0x3EAA3B0", Offset = "0x3EAA3B0", VA = "0x3EAA3B0", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600322B")]
	[Address(RVA = "0x3EAA4A0", Offset = "0x3EAA4A0", VA = "0x3EAA4A0")]
	private void ToggleDust(bool toggle)
	{
	}

	[Token(Token = "0x600322C")]
	[Address(RVA = "0x3EAA510", Offset = "0x3EAA510", VA = "0x3EAA510")]
	private void TeleportToHuman()
	{
	}

	[Token(Token = "0x600322D")]
	[Address(RVA = "0x3EAA800", Offset = "0x3EAA800", VA = "0x3EAA800")]
	private float GetHeight(Vector3 pt)
	{
		return default(float);
	}

	[Token(Token = "0x600322E")]
	[Address(RVA = "0x3EAA940", Offset = "0x3EAA940", VA = "0x3EAA940")]
	private void UpdateIdle()
	{
	}

	[Token(Token = "0x600322F")]
	[Address(RVA = "0x3EAAD40", Offset = "0x3EAAD40", VA = "0x3EAAD40")]
	private void IdleOneShot(string animation)
	{
	}

	[Token(Token = "0x6003230")]
	[Address(RVA = "0x3EAAD90", Offset = "0x3EAAD90", VA = "0x3EAAD90")]
	private void Update()
	{
	}

	[Token(Token = "0x6003231")]
	[Address(RVA = "0x3EAB410", Offset = "0x3EAB410", VA = "0x3EAB410", Slot = "102")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003232")]
	[Address(RVA = "0x3EAC1A0", Offset = "0x3EAC1A0", VA = "0x3EAC1A0", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003233")]
	[Address(RVA = "0x3EAC970", Offset = "0x3EAC970", VA = "0x3EAC970", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6003234")]
	[Address(RVA = "0x3EACB50", Offset = "0x3EACB50", VA = "0x3EACB50")]
	public Horse()
	{
	}
}
