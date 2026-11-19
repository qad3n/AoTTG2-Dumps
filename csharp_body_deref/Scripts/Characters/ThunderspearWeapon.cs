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

[Token(Token = "0x20006ED")]
internal class ThunderspearWeapon : AmmoWeapon
{
	[Token(Token = "0x4002085")]
	[FieldOffset(Offset = "0x50")]
	public ThunderspearProjectile Current;

	[Token(Token = "0x4002086")]
	[FieldOffset(Offset = "0x58")]
	public float Radius;

	[Token(Token = "0x4002087")]
	[FieldOffset(Offset = "0x5C")]
	public float Speed;

	[Token(Token = "0x4002088")]
	[FieldOffset(Offset = "0x60")]
	public float TravelTime;

	[Token(Token = "0x4002089")]
	[FieldOffset(Offset = "0x64")]
	public float Delay;

	[Token(Token = "0x400208A")]
	[FieldOffset(Offset = "0x68")]
	private float _delayTimeLeft;

	[Token(Token = "0x400208B")]
	[FieldOffset(Offset = "0x70")]
	private JSONNode TSInfo;

	[Token(Token = "0x600430D")]
	[Address(RVA = "0x5B122E0", Offset = "0x5B112E0", VA = "0x5B122E0")]
	public ThunderspearWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, JSONNode tsInfo)
	{
	}

	[Token(Token = "0x600430E")]
	[Address(RVA = "0x5B123A0", Offset = "0x5B113A0", VA = "0x5B123A0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600430F")]
	[Address(RVA = "0x5B13690", Offset = "0x5B12690", VA = "0x5B13690")]
	public bool HasActiveProjectile()
	{
		return default(bool);
	}

	[Token(Token = "0x6004310")]
	[Address(RVA = "0x5B13700", Offset = "0x5B12700", VA = "0x5B13700", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6004311")]
	[Address(RVA = "0x5B137F0", Offset = "0x5B127F0", VA = "0x5B137F0", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x6004312")]
	[Address(RVA = "0x5B135D0", Offset = "0x5B125D0", VA = "0x5B135D0")]
	private bool IsModelActive(Human human, bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x6004313")]
	[Address(RVA = "0x5B13620", Offset = "0x5B12620", VA = "0x5B13620")]
	private bool IsTwoShotMode()
	{
		return default(bool);
	}
}
