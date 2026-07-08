using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004E4")]
internal class SmokeBombSpecial : SimpleUseable
{
	[Token(Token = "0x400170D")]
	[FieldOffset(Offset = "0x38")]
	private float Speed;

	[Token(Token = "0x400170E")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 Gravity;

	[Token(Token = "0x60033EE")]
	[Address(RVA = "0x3ED7990", Offset = "0x3ED7990", VA = "0x3ED7990")]
	public SmokeBombSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033EF")]
	[Address(RVA = "0x3EEB3B0", Offset = "0x3EEB3B0", VA = "0x3EEB3B0", Slot = "9")]
	protected override void Activate()
	{
	}
}
