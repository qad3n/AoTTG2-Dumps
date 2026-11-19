// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.SupplySpawnable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/SupplySpawnable.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SupplySpawnable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Spawnables;

[Token(Token = "0x2000062")]
internal class SupplySpawnable : BaseSpawnable
{
	[Token(Token = "0x6000314")]
	[Address(RVA = "0x576E330", Offset = "0x576D330", VA = "0x576E330")]
	protected void OnTriggerStay(Collider other)
	{
		// Lifted from source/cpp/Spawnables/SupplySpawnable.c (Spawnables.SupplySpawnable$$OnTriggerStay): clean
		bool bVar1;
		Transform pUVar2;
		GameObject __this_00;
		Human __this_01;

		if (other != null) {
			pUVar2 = other.transform;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.root;
				if (pUVar2 != null) {
					__this_00 = pUVar2.gameObject ;
					if (__this_00 != null) {
						__this_01 = __this_00.GetComponent<Human>();
						bVar1 = ((Object)__this_01 != null);
						if (bVar1) {
							if (__this_01 == null) goto label_0586e410;
							bVar1 = __this_01.IsMine();
							if (bVar1) {
								bVar1 = __this_01.NeedRefill(false);
								if (bVar1) {
									__this_01.SupplySpawnableRefill();
									return;
								}
							}
						}
						return;
					}
				}
			}
		}
	label_0586e410: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x576E420", Offset = "0x576D420", VA = "0x576E420")]
	public SupplySpawnable()
	{
		// Lifted from source/cpp/Spawnables/SupplySpawnable.c (Spawnables.SupplySpawnable$$.ctor): clean
		base();
		return;
	}
}
