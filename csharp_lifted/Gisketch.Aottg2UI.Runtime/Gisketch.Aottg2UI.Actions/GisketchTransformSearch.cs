// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchTransformSearch
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchTransformSearch.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000FC")]
internal static class GisketchTransformSearch
{
	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x52AAAC0", Offset = "0x52A9AC0", VA = "0x52AAAC0")]
	public static Transform FindDeep(Transform root, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchTransformSearch.c (Gisketch.Aottg2UI.Actions.GisketchTransformSearch$$FindDeep): 6 lines keep C-only constructs
		byte bVar1;
		bool bVar4;
		String a;
		Transform pUVar6;
		object pIVar7;
		MethodInfo extraout_RDX;
		MethodInfo method_00;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		bVar4 = ((Object)root == null);
		pUVar6 = null;
		if (!bVar4) {
			if (root == null) {
				throw new NullReferenceException();
			}
			a = root.name;
			bVar4 = (a == name);
			if (bVar4) {
				pUVar6 = root;
			}
			else {
				local_58 = (object)root.GetEnumerator();
				local_40 = (byte)&local_58;
				local_38 = &local_50;
				do {
					pIVar7 = local_58;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar7.Dispose();
					pIVar7 = local_58;
					if (!bVar4) {
						pUVar6 = null;
						break;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pUVar6 = (Transform)pIVar7.Dispose();
					method_00 = extraout_RDX;
					if (pUVar6 != null) {
						bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
						method_00 = (MethodInfo)(ulong)bVar1;
						if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(long)&method_00[-1].field_0x57] !=typeof(Transform))) {
							throw new InvalidCastException();
						}
					}
					pUVar6 = GisketchTransformSearch.FindDeep(pUVar6, name);
					bVar4 = ((Object)pUVar6 != null);
				} while (!bVar4);
				pIVar7 = (local_58 as IDisposable);
				if (pIVar7 != null) {
					local_50 = pIVar7;
					pIVar7.Dispose();
				}
			}
		}
		return pUVar6;
	}
}
