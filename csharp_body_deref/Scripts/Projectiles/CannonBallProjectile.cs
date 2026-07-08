using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E0")]
internal class CannonBallProjectile : BaseProjectile
{
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x3E18AA0", Offset = "0x3E18AA0", VA = "0x3E18AA0", Slot = "15")]
	protected override void RegisterObjects()
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x3E18B70", Offset = "0x3E18B70", VA = "0x3E18B70")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x3E190D0", Offset = "0x3E190D0", VA = "0x3E190D0")]
	private int CalculateDamage()
	{
		return default(int);
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x3E19150", Offset = "0x3E19150", VA = "0x3E19150")]
	public CannonBallProjectile()
	{
	}
}
