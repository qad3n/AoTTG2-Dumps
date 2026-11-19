// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Rendering/GisketchCanvasSorting.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Rendering;

[Token(Token = "0x200004C")]
internal static class GisketchCanvasSorting
{
	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x5254040", Offset = "0x5253040", VA = "0x5254040")]
	public static int AboveParent(Canvas canvas, int localOrder)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Rendering/GisketchCanvasSorting.c (Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting$$AboveParent): clean
		int iVar1;

		iVar1 = GisketchCanvasSorting.EffectiveSortingOrder(canvas);
		return iVar1 + localOrder;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x5254050", Offset = "0x5253050", VA = "0x5254050")]
	private static int EffectiveSortingOrder(Canvas canvas)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Rendering/GisketchCanvasSorting.c (Gisketch.Aottg2UI.Rendering.GisketchCanvasSorting$$EffectiveSortingOrder): 1 lines keep C-only constructs
		uint uVar1;
		Object x;
		bool bVar2;
		int iVar3;
		Object[] pSVar4;
		ulong uVar5;
		ulong uVar6;

		if (Il2CppMethodInitialized_0754293b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInParent_Canvas) ;
			Il2CppMethodInitialized_0754293b = true;
		}
		bVar2 = ((Object)canvas == null);
		if (bVar2) {
			return 0;
		}
		if (canvas != null) {
			pSVar4 = canvas.GetComponentsInParent<Canvas>(true);
			if (pSVar4 != null) {
				if (0 < (int)pSVar4.Length) {
					uVar5 = pSVar4.Length & 0xffffffff;
					uVar6 = 0;
					do {
						if (uVar5 <= uVar6) goto label_0535417e;
						x = (Object)pSVar4[uVar6];
						bVar2 = (x != null);
						if (bVar2) {
							if ((uint)pSVar4.Length <= uVar6) {
	label_0535417e: ;
								throw new IndexOutOfRangeException();
							}
							if ((Canvas)pSVar4[uVar6] == null) goto label_05354183;
							bVar2 = (pSVar4[uVar6]).overrideSorting;
							if (bVar2) {
								if ((uint)pSVar4.Length <= (uint)uVar6) goto label_0535417e;
								canvas = (Canvas)pSVar4[uVar6];
								if (canvas == null) goto label_05354183;
								break;
							}
						}
						uVar6 = uVar6 + 1;
						uVar1 = (uint)pSVar4.Length;
						uVar5 = (ulong)uVar1;
					} while ((long)uVar6 < (long)(int)uVar1);
				}
				return iVar3;
			}
		}
	label_05354183: ;
		throw new NullReferenceException();
	}
}
