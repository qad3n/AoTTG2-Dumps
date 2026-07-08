using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004C3")]
internal class HumanComponentCache : BaseComponentCache
{
	[Token(Token = "0x400161E")]
	[FieldOffset(Offset = "0x38")]
	public Transform HandL;

	[Token(Token = "0x400161F")]
	[FieldOffset(Offset = "0x40")]
	public Transform HandR;

	[Token(Token = "0x4001620")]
	[FieldOffset(Offset = "0x48")]
	public Transform Head;

	[Token(Token = "0x4001621")]
	[FieldOffset(Offset = "0x50")]
	public Transform Neck;

	[Token(Token = "0x4001622")]
	[FieldOffset(Offset = "0x58")]
	public Transform Spine;

	[Token(Token = "0x4001623")]
	[FieldOffset(Offset = "0x60")]
	public Transform Chest;

	[Token(Token = "0x4001624")]
	[FieldOffset(Offset = "0x68")]
	public Transform ForearmL;

	[Token(Token = "0x4001625")]
	[FieldOffset(Offset = "0x70")]
	public Transform ForearmR;

	[Token(Token = "0x4001626")]
	[FieldOffset(Offset = "0x78")]
	public Transform UpperarmL;

	[Token(Token = "0x4001627")]
	[FieldOffset(Offset = "0x80")]
	public Transform UpperarmR;

	[Token(Token = "0x4001628")]
	[FieldOffset(Offset = "0x88")]
	public ParticleSystem Sparks;

	[Token(Token = "0x4001629")]
	[FieldOffset(Offset = "0x90")]
	public ParticleSystem Smoke;

	[Token(Token = "0x400162A")]
	[FieldOffset(Offset = "0x98")]
	public ParticleSystem Wind;

	[Token(Token = "0x400162B")]
	[FieldOffset(Offset = "0xA0")]
	public Transform WindTransform;

	[Token(Token = "0x400162C")]
	[FieldOffset(Offset = "0xA8")]
	public Transform HookLeftAnchorDefault;

	[Token(Token = "0x400162D")]
	[FieldOffset(Offset = "0xB0")]
	public Transform HookRightAnchorDefault;

	[Token(Token = "0x400162E")]
	[FieldOffset(Offset = "0xB8")]
	public Transform HookLeftAnchorGun;

	[Token(Token = "0x400162F")]
	[FieldOffset(Offset = "0xC0")]
	public Transform HookRightAnchorGun;

	[Token(Token = "0x4001630")]
	[FieldOffset(Offset = "0xC8")]
	public BaseHitbox BladeHitLeft;

	[Token(Token = "0x4001631")]
	[FieldOffset(Offset = "0xD0")]
	public BaseHitbox BladeHitRight;

	[Token(Token = "0x4001632")]
	[FieldOffset(Offset = "0xD8")]
	public BaseHitbox AHSSHit;

	[Token(Token = "0x4001633")]
	[FieldOffset(Offset = "0xE0")]
	public BaseHitbox APGHit;

	[Token(Token = "0x4001634")]
	[FieldOffset(Offset = "0xE8")]
	public Transform GroundLeft;

	[Token(Token = "0x4001635")]
	[FieldOffset(Offset = "0xF0")]
	public Transform GroundRight;

	[Token(Token = "0x4001636")]
	[FieldOffset(Offset = "0xF8")]
	public Transform Buff1;

	[Token(Token = "0x4001637")]
	[FieldOffset(Offset = "0x100")]
	public Transform Buff2;

	[Token(Token = "0x4001638")]
	[FieldOffset(Offset = "0x108")]
	public Transform Fire1;

	[Token(Token = "0x600330A")]
	[Address(RVA = "0x3ED3450", Offset = "0x3ED3450", VA = "0x3ED3450")]
	public HumanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x600330B")]
	[Address(RVA = "0x3ED3C60", Offset = "0x3ED3C60", VA = "0x3ED3C60")]
	private void CreateAHSSHitbox(BaseCharacter human)
	{
	}

	[Token(Token = "0x600330C")]
	[Address(RVA = "0x3ED3EE0", Offset = "0x3ED3EE0", VA = "0x3ED3EE0")]
	private void CreateAPGHitbox(BaseCharacter human)
	{
	}
}
