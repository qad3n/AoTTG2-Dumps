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

[Token(Token = "0x20006C1")]
internal class HumanComponentCache : BaseComponentCache
{
	[Token(Token = "0x4001F67")]
	[FieldOffset(Offset = "0x38")]
	public Transform HandL;

	[Token(Token = "0x4001F68")]
	[FieldOffset(Offset = "0x40")]
	public Transform HandR;

	[Token(Token = "0x4001F69")]
	[FieldOffset(Offset = "0x48")]
	public Transform Head;

	[Token(Token = "0x4001F6A")]
	[FieldOffset(Offset = "0x50")]
	public Transform Neck;

	[Token(Token = "0x4001F6B")]
	[FieldOffset(Offset = "0x58")]
	public Transform Spine;

	[Token(Token = "0x4001F6C")]
	[FieldOffset(Offset = "0x60")]
	public Transform Chest;

	[Token(Token = "0x4001F6D")]
	[FieldOffset(Offset = "0x68")]
	public Transform ForearmL;

	[Token(Token = "0x4001F6E")]
	[FieldOffset(Offset = "0x70")]
	public Transform ForearmR;

	[Token(Token = "0x4001F6F")]
	[FieldOffset(Offset = "0x78")]
	public Transform UpperarmL;

	[Token(Token = "0x4001F70")]
	[FieldOffset(Offset = "0x80")]
	public Transform UpperarmR;

	[Token(Token = "0x4001F71")]
	[FieldOffset(Offset = "0x88")]
	public ParticleSystem Sparks;

	[Token(Token = "0x4001F72")]
	[FieldOffset(Offset = "0x90")]
	public ParticleSystem Smoke;

	[Token(Token = "0x4001F73")]
	[FieldOffset(Offset = "0x98")]
	public ParticleSystem Wind;

	[Token(Token = "0x4001F74")]
	[FieldOffset(Offset = "0xA0")]
	public Transform WindTransform;

	[Token(Token = "0x4001F75")]
	[FieldOffset(Offset = "0xA8")]
	public Transform HookLeftAnchorDefault;

	[Token(Token = "0x4001F76")]
	[FieldOffset(Offset = "0xB0")]
	public Transform HookRightAnchorDefault;

	[Token(Token = "0x4001F77")]
	[FieldOffset(Offset = "0xB8")]
	public Transform HookLeftAnchorGun;

	[Token(Token = "0x4001F78")]
	[FieldOffset(Offset = "0xC0")]
	public Transform HookRightAnchorGun;

	[Token(Token = "0x4001F79")]
	[FieldOffset(Offset = "0xC8")]
	public BaseHitbox BladeHitLeft;

	[Token(Token = "0x4001F7A")]
	[FieldOffset(Offset = "0xD0")]
	public BaseHitbox BladeHitRight;

	[Token(Token = "0x4001F7B")]
	[FieldOffset(Offset = "0xD8")]
	public BaseHitbox AHSSHit;

	[Token(Token = "0x4001F7C")]
	[FieldOffset(Offset = "0xE0")]
	public BaseHitbox APGHit;

	[Token(Token = "0x4001F7D")]
	[FieldOffset(Offset = "0xE8")]
	public Transform GroundLeft;

	[Token(Token = "0x4001F7E")]
	[FieldOffset(Offset = "0xF0")]
	public Transform GroundRight;

	[Token(Token = "0x4001F7F")]
	[FieldOffset(Offset = "0xF8")]
	public Transform Buff1;

	[Token(Token = "0x4001F80")]
	[FieldOffset(Offset = "0x100")]
	public Transform Buff2;

	[Token(Token = "0x4001F81")]
	[FieldOffset(Offset = "0x108")]
	public Transform Fire1;

	[Token(Token = "0x60041DD")]
	[Address(RVA = "0x5AE6A00", Offset = "0x5AE5A00", VA = "0x5AE6A00")]
	public HumanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x60041DE")]
	[Address(RVA = "0x5AF50F0", Offset = "0x5AF40F0", VA = "0x5AF50F0")]
	private void CreateAHSSHitbox(BaseCharacter human)
	{
	}

	[Token(Token = "0x60041DF")]
	[Address(RVA = "0x5AF5370", Offset = "0x5AF4370", VA = "0x5AF5370")]
	private void CreateAPGHitbox(BaseCharacter human)
	{
	}
}
