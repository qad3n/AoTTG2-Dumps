// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Horse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Horse.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004F6")]
internal class Horse : BaseCharacter
{
	[Token(Token = "0x4001613")]
	[FieldOffset(Offset = "0xF0")]
	private Human _owner;

	[Token(Token = "0x4001614")]
	[FieldOffset(Offset = "0xF8")]
	private HorseComponentCache HorseCache;

	[Token(Token = "0x4001615")]
	[FieldOffset(Offset = "0x100")]
	public HorseState State;

	[Token(Token = "0x4001616")]
	[FieldOffset(Offset = "0x104")]
	public bool FollowingEnabled;

	[Token(Token = "0x4001617")]
	[FieldOffset(Offset = "0x108")]
	private float WalkSpeed;

	[Token(Token = "0x4001618")]
	[FieldOffset(Offset = "0x10C")]
	private float RunCloseSpeed;

	[Token(Token = "0x4001619")]
	[FieldOffset(Offset = "0x110")]
	private float TeleportTime;

	[Token(Token = "0x400161A")]
	[FieldOffset(Offset = "0x114")]
	private float JumpForce;

	[Token(Token = "0x400161B")]
	[FieldOffset(Offset = "0x118")]
	private float MaxTilt;

	[Token(Token = "0x400161C")]
	[FieldOffset(Offset = "0x11C")]
	private float _idleTimeLeft;

	[Token(Token = "0x400161D")]
	[FieldOffset(Offset = "0x120")]
	private float _teleportTimeLeft;

	[Token(Token = "0x400161E")]
	[FieldOffset(Offset = "0x124")]
	private float _jumpCooldownLeft;

	[Token(Token = "0x170009C6")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x6003434")]
		[Address(RVA = "0x41B6A00", Offset = "0x41B6A00", VA = "0x41B6A00", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6003435")]
	[Address(RVA = "0x41B6A50", Offset = "0x41B6A50", VA = "0x41B6A50")]
	public void Init(Human human)
	{
	}

	[Token(Token = "0x6003436")]
	[Address(RVA = "0x41B6AA0", Offset = "0x41B6AA0", VA = "0x41B6AA0", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003437")]
	[Address(RVA = "0x41B6BA0", Offset = "0x41B6BA0", VA = "0x41B6BA0")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003438")]
	[Address(RVA = "0x41B6C50", Offset = "0x41B6C50", VA = "0x41B6C50", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003439")]
	[Address(RVA = "0x41B6D40", Offset = "0x41B6D40", VA = "0x41B6D40")]
	private void ToggleDust(bool toggle)
	{
	}

	[Token(Token = "0x600343A")]
	[Address(RVA = "0x41B6DB0", Offset = "0x41B6DB0", VA = "0x41B6DB0")]
	private void TeleportToHuman()
	{
	}

	[Token(Token = "0x600343B")]
	[Address(RVA = "0x41B70A0", Offset = "0x41B70A0", VA = "0x41B70A0")]
	private float GetHeight(Vector3 pt)
	{
		return default(float);
	}

	[Token(Token = "0x600343C")]
	[Address(RVA = "0x41B71E0", Offset = "0x41B71E0", VA = "0x41B71E0")]
	private void UpdateIdle()
	{
	}

	[Token(Token = "0x600343D")]
	[Address(RVA = "0x41B75E0", Offset = "0x41B75E0", VA = "0x41B75E0")]
	private void IdleOneShot(string animation)
	{
	}

	[Token(Token = "0x600343E")]
	[Address(RVA = "0x41B7630", Offset = "0x41B7630", VA = "0x41B7630")]
	private void Update()
	{
	}

	[Token(Token = "0x600343F")]
	[Address(RVA = "0x41B7CB0", Offset = "0x41B7CB0", VA = "0x41B7CB0", Slot = "102")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003440")]
	[Address(RVA = "0x41B8A40", Offset = "0x41B8A40", VA = "0x41B8A40", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003441")]
	[Address(RVA = "0x41B9210", Offset = "0x41B9210", VA = "0x41B9210", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6003442")]
	[Address(RVA = "0x41B93F0", Offset = "0x41B93F0", VA = "0x41B93F0")]
	public Horse()
	{
	}
}
