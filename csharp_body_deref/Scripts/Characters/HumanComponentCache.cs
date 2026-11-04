// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000662")]
internal class HumanComponentCache : BaseComponentCache
{
	[Token(Token = "0x4001DB9")]
	[FieldOffset(Offset = "0x38")]
	public Transform HandL;

	[Token(Token = "0x4001DBA")]
	[FieldOffset(Offset = "0x40")]
	public Transform HandR;

	[Token(Token = "0x4001DBB")]
	[FieldOffset(Offset = "0x48")]
	public Transform Head;

	[Token(Token = "0x4001DBC")]
	[FieldOffset(Offset = "0x50")]
	public Transform Neck;

	[Token(Token = "0x4001DBD")]
	[FieldOffset(Offset = "0x58")]
	public Transform Spine;

	[Token(Token = "0x4001DBE")]
	[FieldOffset(Offset = "0x60")]
	public Transform Chest;

	[Token(Token = "0x4001DBF")]
	[FieldOffset(Offset = "0x68")]
	public Transform ForearmL;

	[Token(Token = "0x4001DC0")]
	[FieldOffset(Offset = "0x70")]
	public Transform ForearmR;

	[Token(Token = "0x4001DC1")]
	[FieldOffset(Offset = "0x78")]
	public Transform UpperarmL;

	[Token(Token = "0x4001DC2")]
	[FieldOffset(Offset = "0x80")]
	public Transform UpperarmR;

	[Token(Token = "0x4001DC3")]
	[FieldOffset(Offset = "0x88")]
	public ParticleSystem Sparks;

	[Token(Token = "0x4001DC4")]
	[FieldOffset(Offset = "0x90")]
	public ParticleSystem Smoke;

	[Token(Token = "0x4001DC5")]
	[FieldOffset(Offset = "0x98")]
	public ParticleSystem Wind;

	[Token(Token = "0x4001DC6")]
	[FieldOffset(Offset = "0xA0")]
	public Transform WindTransform;

	[Token(Token = "0x4001DC7")]
	[FieldOffset(Offset = "0xA8")]
	public Transform HookLeftAnchorDefault;

	[Token(Token = "0x4001DC8")]
	[FieldOffset(Offset = "0xB0")]
	public Transform HookRightAnchorDefault;

	[Token(Token = "0x4001DC9")]
	[FieldOffset(Offset = "0xB8")]
	public Transform HookLeftAnchorGun;

	[Token(Token = "0x4001DCA")]
	[FieldOffset(Offset = "0xC0")]
	public Transform HookRightAnchorGun;

	[Token(Token = "0x4001DCB")]
	[FieldOffset(Offset = "0xC8")]
	public BaseHitbox BladeHitLeft;

	[Token(Token = "0x4001DCC")]
	[FieldOffset(Offset = "0xD0")]
	public BaseHitbox BladeHitRight;

	[Token(Token = "0x4001DCD")]
	[FieldOffset(Offset = "0xD8")]
	public BaseHitbox AHSSHit;

	[Token(Token = "0x4001DCE")]
	[FieldOffset(Offset = "0xE0")]
	public BaseHitbox APGHit;

	[Token(Token = "0x4001DCF")]
	[FieldOffset(Offset = "0xE8")]
	public Transform GroundLeft;

	[Token(Token = "0x4001DD0")]
	[FieldOffset(Offset = "0xF0")]
	public Transform GroundRight;

	[Token(Token = "0x4001DD1")]
	[FieldOffset(Offset = "0xF8")]
	public Transform Buff1;

	[Token(Token = "0x4001DD2")]
	[FieldOffset(Offset = "0x100")]
	public Transform Buff2;

	[Token(Token = "0x4001DD3")]
	[FieldOffset(Offset = "0x108")]
	public Transform Fire1;

	[Token(Token = "0x6003F45")]
	[Address(RVA = "0x2151F00", Offset = "0x2150500", VA = "0x182151F00")]
	public HumanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x6003F46")]
	[Address(RVA = "0x21519D0", Offset = "0x214FFD0", VA = "0x1821519D0")]
	private void CreateAHSSHitbox(BaseCharacter human)
	{
	}

	[Token(Token = "0x6003F47")]
	[Address(RVA = "0x2151C90", Offset = "0x2150290", VA = "0x182151C90")]
	private void CreateAPGHitbox(BaseCharacter human)
	{
	}
}
