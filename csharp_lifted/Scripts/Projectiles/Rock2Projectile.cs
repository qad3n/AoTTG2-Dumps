// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.Rock2Projectile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/Rock2Projectile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Projectiles;

[Token(Token = "0x200007A")]
internal class Rock2Projectile : Rock1Projectile
{
	[Token(Token = "0x17000088")]
	protected override bool DestroyOnImpact
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x5773780", Offset = "0x5772780", VA = "0x5773780", Slot = "20")]
		get
		{
			// Lifted from source/cpp/Projectiles/Rock2Projectile.c (Projectiles.Rock2Projectile$$get_DestroyOnImpact): clean
			return false;
		}
	}

	[Token(Token = "0x17000089")]
	protected override float MinImpactVelocity
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x5773790", Offset = "0x5772790", VA = "0x5773790", Slot = "21")]
		get
		{
			// Lifted from source/cpp/Projectiles/Rock2Projectile.c (Projectiles.Rock2Projectile$$get_MinImpactVelocity): clean
			return 50.0;
		}
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x57737A0", Offset = "0x57727A0", VA = "0x57737A0", Slot = "15")]
	protected override void RegisterObjects()
	{
		// Lifted from source/cpp/Projectiles/Rock2Projectile.c (Projectiles.Rock2Projectile$$RegisterObjects): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		Transform pUVar5;
		GameObject item;

		pUVar5 = this.transform;
		if (pUVar5 != null) {
			pUVar5 = pUVar5.Find("Sphere1");
			if (pUVar5 != null) {
				item = pUVar5.gameObject;
				__this_00 = this._hideObjects;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = __this_00._items;
					if (pUVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pUVar3.Length) {
							__this_00._size = uVar2 + 1;
							pUVar3[(int)uVar2] = item;
							return;
						}
						__this_00.AddWithResize((object)item);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x5773870", Offset = "0x5772870", VA = "0x5773870")]
	public Rock2Projectile()
	{
		// Lifted from source/cpp/Projectiles/Rock2Projectile.c (Projectiles.Rock2Projectile$$.ctor): clean
		base();
		return;
	}
}
