using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004EC")]
internal class APGWeapon : AmmoWeapon
{
	[Token(Token = "0x6003417")]
	[Address(RVA = "0x3EEDDD0", Offset = "0x3EEDDD0", VA = "0x3EEDDD0")]
	public APGWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
	}

	[Token(Token = "0x6003418")]
	[Address(RVA = "0x3EEDE30", Offset = "0x3EEDE30", VA = "0x3EEDE30", Slot = "9")]
	protected override void Activate()
	{
	}
}
