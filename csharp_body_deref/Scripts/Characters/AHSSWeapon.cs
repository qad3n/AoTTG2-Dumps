using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004EB")]
internal class AHSSWeapon : AmmoWeapon
{
	[Token(Token = "0x4001720")]
	[FieldOffset(Offset = "0x4C")]
	protected Vector3 _target;

	[Token(Token = "0x6003412")]
	[Address(RVA = "0x3EECFE0", Offset = "0x3EECFE0", VA = "0x3EECFE0")]
	public AHSSWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
	}

	[Token(Token = "0x6003413")]
	[Address(RVA = "0x3EED0A0", Offset = "0x3EED0A0", VA = "0x3EED0A0", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x6003414")]
	[Address(RVA = "0x3EED190", Offset = "0x3EED190", VA = "0x3EED190", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003415")]
	[Address(RVA = "0x3EED210", Offset = "0x3EED210", VA = "0x3EED210", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003416")]
	[Address(RVA = "0x3EEDCE0", Offset = "0x3EEDCE0", VA = "0x3EEDCE0")]
	public void HandleUI()
	{
	}
}
