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

[Token(Token = "0x200068E")]
internal class ThunderspearWeapon : AmmoWeapon
{
	[Token(Token = "0x4001ED7")]
	[FieldOffset(Offset = "0x50")]
	public ThunderspearProjectile Current;

	[Token(Token = "0x4001ED8")]
	[FieldOffset(Offset = "0x58")]
	public float Radius;

	[Token(Token = "0x4001ED9")]
	[FieldOffset(Offset = "0x5C")]
	public float Speed;

	[Token(Token = "0x4001EDA")]
	[FieldOffset(Offset = "0x60")]
	public float TravelTime;

	[Token(Token = "0x4001EDB")]
	[FieldOffset(Offset = "0x64")]
	public float Delay;

	[Token(Token = "0x4001EDC")]
	[FieldOffset(Offset = "0x68")]
	private float _delayTimeLeft;

	[Token(Token = "0x4001EDD")]
	[FieldOffset(Offset = "0x70")]
	private JSONNode TSInfo;

	[Token(Token = "0x6004075")]
	[Address(RVA = "0x21792D0", Offset = "0x21778D0", VA = "0x1821792D0")]
	public ThunderspearWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, JSONNode tsInfo)
	{
	}

	[Token(Token = "0x6004076")]
	[Address(RVA = "0x2177DE0", Offset = "0x21763E0", VA = "0x182177DE0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004077")]
	[Address(RVA = "0x2178E80", Offset = "0x2177480", VA = "0x182178E80")]
	public bool HasActiveProjectile()
	{
		return default(bool);
	}

	[Token(Token = "0x6004078")]
	[Address(RVA = "0x21791E0", Offset = "0x21777E0", VA = "0x1821791E0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x6004079")]
	[Address(RVA = "0x2178FD0", Offset = "0x21775D0", VA = "0x182178FD0", Slot = "13")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x600407A")]
	[Address(RVA = "0x2178F00", Offset = "0x2177500", VA = "0x182178F00")]
	private bool IsModelActive(Human human, bool left)
	{
		return default(bool);
	}

	[Token(Token = "0x600407B")]
	[Address(RVA = "0x2178F50", Offset = "0x2177550", VA = "0x182178F50")]
	private bool IsTwoShotMode()
	{
		return default(bool);
	}
}
