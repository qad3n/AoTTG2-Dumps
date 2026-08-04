// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ThunderspearWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ThunderspearWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/ThunderSpearWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Projectiles;
using SimpleJSONFixed;

namespace Characters;

[Token(Token = "0x2000534")]
internal class ThunderspearWeapon : AmmoWeapon
{
	[Token(Token = "0x400183A")]
	[FieldOffset(Offset = "0x50")]
	public ThunderspearProjectile Current;

	[Token(Token = "0x400183B")]
	[FieldOffset(Offset = "0x58")]
	public float Radius;

	[Token(Token = "0x400183C")]
	[FieldOffset(Offset = "0x5C")]
	public float Speed;

	[Token(Token = "0x400183D")]
	[FieldOffset(Offset = "0x60")]
	public float TravelTime;

	[Token(Token = "0x400183E")]
	[FieldOffset(Offset = "0x64")]
	public float Delay;

	[Token(Token = "0x400183F")]
	[FieldOffset(Offset = "0x68")]
	private float _delayTimeLeft;

	[Token(Token = "0x4001840")]
	[FieldOffset(Offset = "0x70")]
	private JSONNode TSInfo;

	[Token(Token = "0x6003637")]
	[Address(RVA = "0x41FB9B0", Offset = "0x41FB9B0", VA = "0x41FB9B0")]
	public ThunderspearWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, JSONNode tsInfo)
	{
	}

	[Token(Token = "0x6003638")]
	[Address(RVA = "0x41FBA70", Offset = "0x41FBA70", VA = "0x41FBA70", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003639")]
	[Address(RVA = "0x41FCC30", Offset = "0x41FCC30", VA = "0x41FCC30")]
	public bool HasActiveProjectile()
	{
		return default(bool);
	}

	[Token(Token = "0x600363A")]
	[Address(RVA = "0x41FCCA0", Offset = "0x41FCCA0", VA = "0x41FCCA0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x600363B")]
	[Address(RVA = "0x41FCD90", Offset = "0x41FCD90", VA = "0x41FCD90", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x600363C")]
	[Address(RVA = "0x41FCB80", Offset = "0x41FCB80", VA = "0x41FCB80")]
	private bool IsModelActive(Human human, bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x600363D")]
	[Address(RVA = "0x41FCBC0", Offset = "0x41FCBC0", VA = "0x41FCBC0")]
	private bool IsTwoShotMode()
	{
		return default(bool);
	}
}
