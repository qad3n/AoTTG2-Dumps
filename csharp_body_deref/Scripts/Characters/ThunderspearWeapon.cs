using Il2CppDummyDll;
using Projectiles;
using SimpleJSONFixed;

namespace Characters;

[Token(Token = "0x20004EF")]
internal class ThunderspearWeapon : AmmoWeapon
{
	[Token(Token = "0x4001729")]
	[FieldOffset(Offset = "0x50")]
	public ThunderspearProjectile Current;

	[Token(Token = "0x400172A")]
	[FieldOffset(Offset = "0x58")]
	public float Radius;

	[Token(Token = "0x400172B")]
	[FieldOffset(Offset = "0x5C")]
	public float Speed;

	[Token(Token = "0x400172C")]
	[FieldOffset(Offset = "0x60")]
	public float TravelTime;

	[Token(Token = "0x400172D")]
	[FieldOffset(Offset = "0x64")]
	public float Delay;

	[Token(Token = "0x400172E")]
	[FieldOffset(Offset = "0x68")]
	private float _delayTimeLeft;

	[Token(Token = "0x400172F")]
	[FieldOffset(Offset = "0x70")]
	private JSONNode TSInfo;

	[Token(Token = "0x6003429")]
	[Address(RVA = "0x3EEF0F0", Offset = "0x3EEF0F0", VA = "0x3EEF0F0")]
	public ThunderspearWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, JSONNode tsInfo)
	{
	}

	[Token(Token = "0x600342A")]
	[Address(RVA = "0x3EEF1B0", Offset = "0x3EEF1B0", VA = "0x3EEF1B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600342B")]
	[Address(RVA = "0x3EF0370", Offset = "0x3EF0370", VA = "0x3EF0370")]
	public bool HasActiveProjectile()
	{
		return default(bool);
	}

	[Token(Token = "0x600342C")]
	[Address(RVA = "0x3EF03E0", Offset = "0x3EF03E0", VA = "0x3EF03E0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x600342D")]
	[Address(RVA = "0x3EF04D0", Offset = "0x3EF04D0", VA = "0x3EF04D0", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x600342E")]
	[Address(RVA = "0x3EF02C0", Offset = "0x3EF02C0", VA = "0x3EF02C0")]
	private bool IsModelActive(Human human, bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x600342F")]
	[Address(RVA = "0x3EF0300", Offset = "0x3EF0300", VA = "0x3EF0300")]
	private bool IsTwoShotMode()
	{
		return default(bool);
	}
}
