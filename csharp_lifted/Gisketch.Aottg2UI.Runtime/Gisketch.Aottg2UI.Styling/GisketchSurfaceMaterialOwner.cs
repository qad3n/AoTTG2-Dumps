// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002F")]
public sealed class GisketchSurfaceMaterialOwner : MonoBehaviour
{
	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x5235090", Offset = "0x5234090", VA = "0x5235090")]
	public static void Assign(Graphic graphic, Material material)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Assign): clean
		bool bVar1;
		GisketchSurfaceMaterialOwner __this;
		GameObject __this_00;

		if (graphic != null) {
			graphic.set_material(material);
			__this = graphic.GetComponent<GisketchSurfaceMaterialOwner>();
			bVar1 = ((Object)__this == null);
			if (bVar1) {
				bVar1 = ((Object)material == null);
				if (bVar1) {
					return;
				}
				__this_00 = graphic.gameObject;
				if (__this_00 == null) goto label_0533519c;
				__this = __this_00.AddComponent<GisketchSurfaceMaterialOwner>();
			}
			if (__this != null) {
				__this.Setup(material);
				return;
			}
		}
	label_0533519c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5235260", Offset = "0x5234260", VA = "0x5235260")]
	public static void ReleaseAll(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$ReleaseAll): clean
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		uint uVar4;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if ((root != null) &&(pSVar3 = root.GetComponentsInChildren<GisketchSurfaceMaterialOwner>(true), pSVar3 != null)) {
			uVar2 = (uint)pSVar3.Length;
			if ((int)uVar2 < 1) {
				return;
			}
			uVar4 = 0;
			while(true) {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if ((GisketchSurfaceMaterialOwner)pSVar3[(int)uVar4] ==null) break;
				(pSVar3[(int)uVar4]).Setup(null);
				uVar4 = uVar4 + 1;
				uVar2 = (uint)pSVar3.Length;
				if ((int)uVar2 <= (int)uVar4) {
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x52351B0", Offset = "0x52341B0", VA = "0x52351B0")]
	public void Setup(Material material)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Setup): 4 lines keep C-only constructs
		Material pUVar1;
		bool bVar2;
		Material* targetAddress;

		pUVar1 = this._material;
		targetAddress = &this._material;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = *targetAddress;
			bVar2 = ((Object)pUVar1 != (Object)material);
			if (bVar2) {
				GisketchSurfaceMaterialOwner.Release(*targetAddress);
			}
		}
		*targetAddress = material;
		return;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x52353D0", Offset = "0x52343D0", VA = "0x52353D0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$OnDestroy): clean
		Material x;
		bool bVar1;

		x = this._material;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			GisketchSurfaceMaterialOwner.Release(this._material);
			return;
		}
		return;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x5235330", Offset = "0x5234330", VA = "0x5235330")]
	private static void Release(Material material)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Release): clean
		uint uVar1;
		bool bVar2;

		bVar2 = Application.isPlaying;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
				Object.Destroy((Object)material);
				return;
			}
			Object.Destroy((Object)material);
			return;
		}
		if (uVar1 == 0) {
			Object.DestroyImmediate((Object)material);
			return;
		}
		Object.DestroyImmediate((Object)material);
		return;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x5235440", Offset = "0x5234440", VA = "0x5235440")]
	public GisketchSurfaceMaterialOwner()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterialOwner.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$.ctor): clean
		base();
		return;
	}
}
