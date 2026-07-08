using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004C8")]
internal class FlareItem : SimpleUseable
{
	[Token(Token = "0x400169A")]
	[FieldOffset(Offset = "0x38")]
	private Color _color;

	[Token(Token = "0x400169B")]
	[FieldOffset(Offset = "0x48")]
	private float Speed;

	[Token(Token = "0x400169C")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 Gravity;

	[Token(Token = "0x6003333")]
	[Address(RVA = "0x3ED9C60", Offset = "0x3ED9C60", VA = "0x3ED9C60")]
	public FlareItem(BaseCharacter owner, string name, Color color, float cooldown)
	{
	}

	[Token(Token = "0x6003334")]
	[Address(RVA = "0x3ED9D20", Offset = "0x3ED9D20", VA = "0x3ED9D20", Slot = "9")]
	protected override void Activate()
	{
	}
}
