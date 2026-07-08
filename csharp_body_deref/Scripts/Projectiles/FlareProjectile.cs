using Il2CppDummyDll;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x20000E1")]
internal class FlareProjectile : BaseProjectile
{
	[Token(Token = "0x170000A8")]
	protected override float DestroyDelay
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x3E19160", Offset = "0x3E19160", VA = "0x3E19160", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x3E19170", Offset = "0x3E19170", VA = "0x3E19170", Slot = "14")]
	protected override void SetupSettings(object[] settings)
	{
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x3E19220", Offset = "0x3E19220", VA = "0x3E19220")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x3E19260", Offset = "0x3E19260", VA = "0x3E19260")]
	public FlareProjectile()
	{
	}
}
