using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E6")]
internal class SmokeBombProjectile : BaseProjectile
{
	[Token(Token = "0x170000AE")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x3E1A3C0", Offset = "0x3E1A3C0", VA = "0x3E1A3C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x3E1A3D0", Offset = "0x3E1A3D0", VA = "0x3E1A3D0")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x3E1A760", Offset = "0x3E1A760", VA = "0x3E1A760")]
	public SmokeBombProjectile()
	{
	}
}
