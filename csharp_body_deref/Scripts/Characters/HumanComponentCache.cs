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

[Token(Token = "0x2000508")]
internal class HumanComponentCache : BaseComponentCache
{
	[Token(Token = "0x400172F")]
	[FieldOffset(Offset = "0x38")]
	public Transform HandL;

	[Token(Token = "0x4001730")]
	[FieldOffset(Offset = "0x40")]
	public Transform HandR;

	[Token(Token = "0x4001731")]
	[FieldOffset(Offset = "0x48")]
	public Transform Head;

	[Token(Token = "0x4001732")]
	[FieldOffset(Offset = "0x50")]
	public Transform Neck;

	[Token(Token = "0x4001733")]
	[FieldOffset(Offset = "0x58")]
	public Transform Spine;

	[Token(Token = "0x4001734")]
	[FieldOffset(Offset = "0x60")]
	public Transform Chest;

	[Token(Token = "0x4001735")]
	[FieldOffset(Offset = "0x68")]
	public Transform ForearmL;

	[Token(Token = "0x4001736")]
	[FieldOffset(Offset = "0x70")]
	public Transform ForearmR;

	[Token(Token = "0x4001737")]
	[FieldOffset(Offset = "0x78")]
	public Transform UpperarmL;

	[Token(Token = "0x4001738")]
	[FieldOffset(Offset = "0x80")]
	public Transform UpperarmR;

	[Token(Token = "0x4001739")]
	[FieldOffset(Offset = "0x88")]
	public ParticleSystem Sparks;

	[Token(Token = "0x400173A")]
	[FieldOffset(Offset = "0x90")]
	public ParticleSystem Smoke;

	[Token(Token = "0x400173B")]
	[FieldOffset(Offset = "0x98")]
	public ParticleSystem Wind;

	[Token(Token = "0x400173C")]
	[FieldOffset(Offset = "0xA0")]
	public Transform WindTransform;

	[Token(Token = "0x400173D")]
	[FieldOffset(Offset = "0xA8")]
	public Transform HookLeftAnchorDefault;

	[Token(Token = "0x400173E")]
	[FieldOffset(Offset = "0xB0")]
	public Transform HookRightAnchorDefault;

	[Token(Token = "0x400173F")]
	[FieldOffset(Offset = "0xB8")]
	public Transform HookLeftAnchorGun;

	[Token(Token = "0x4001740")]
	[FieldOffset(Offset = "0xC0")]
	public Transform HookRightAnchorGun;

	[Token(Token = "0x4001741")]
	[FieldOffset(Offset = "0xC8")]
	public BaseHitbox BladeHitLeft;

	[Token(Token = "0x4001742")]
	[FieldOffset(Offset = "0xD0")]
	public BaseHitbox BladeHitRight;

	[Token(Token = "0x4001743")]
	[FieldOffset(Offset = "0xD8")]
	public BaseHitbox AHSSHit;

	[Token(Token = "0x4001744")]
	[FieldOffset(Offset = "0xE0")]
	public BaseHitbox APGHit;

	[Token(Token = "0x4001745")]
	[FieldOffset(Offset = "0xE8")]
	public Transform GroundLeft;

	[Token(Token = "0x4001746")]
	[FieldOffset(Offset = "0xF0")]
	public Transform GroundRight;

	[Token(Token = "0x4001747")]
	[FieldOffset(Offset = "0xF8")]
	public Transform Buff1;

	[Token(Token = "0x4001748")]
	[FieldOffset(Offset = "0x100")]
	public Transform Buff2;

	[Token(Token = "0x4001749")]
	[FieldOffset(Offset = "0x108")]
	public Transform Fire1;

	[Token(Token = "0x6003518")]
	[Address(RVA = "0x41DFD10", Offset = "0x41DFD10", VA = "0x41DFD10")]
	public HumanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x6003519")]
	[Address(RVA = "0x41E0520", Offset = "0x41E0520", VA = "0x41E0520")]
	private void CreateAHSSHitbox(BaseCharacter human)
	{
	}

	[Token(Token = "0x600351A")]
	[Address(RVA = "0x41E07A0", Offset = "0x41E07A0", VA = "0x41E07A0")]
	private void CreateAPGHitbox(BaseCharacter human)
	{
	}
}
