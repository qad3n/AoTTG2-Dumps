using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004D8")]
internal class BladeThrowSpecial : BaseAttackSpecial
{
	[Token(Token = "0x40016FC")]
	[FieldOffset(Offset = "0x48")]
	protected bool _needActivate;

	[Token(Token = "0x40016FD")]
	[FieldOffset(Offset = "0x4C")]
	protected float Speed;

	[Token(Token = "0x40016FE")]
	[FieldOffset(Offset = "0x50")]
	protected float LiveTime;

	[Token(Token = "0x1700097D")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033B2")]
		[Address(RVA = "0x3EE64F0", Offset = "0x3EE64F0", VA = "0x3EE64F0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033B3")]
	[Address(RVA = "0x3ED7950", Offset = "0x3ED7950", VA = "0x3ED7950")]
	public BladeThrowSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033B4")]
	[Address(RVA = "0x3EE6500", Offset = "0x3EE6500", VA = "0x3EE6500", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033B5")]
	[Address(RVA = "0x3EE6570", Offset = "0x3EE6570", VA = "0x3EE6570", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033B6")]
	[Address(RVA = "0x3EE6A20", Offset = "0x3EE6A20", VA = "0x3EE6A20")]
	protected void SpawnBladeProjectile(bool left, Vector3 target, Vector3 velocity)
	{
	}
}
