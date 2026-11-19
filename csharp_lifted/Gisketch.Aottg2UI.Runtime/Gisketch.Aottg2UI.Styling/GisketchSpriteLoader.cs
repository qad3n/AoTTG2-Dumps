// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002D")]
public static class GisketchSpriteLoader
{
	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Sprite> Cache;

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x5233110", Offset = "0x5232110", VA = "0x5233110")]
	public static Sprite Load(string resourcePath)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c (Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Load): 2 lines keep C-only constructs
		bool bVar1;
		Object x;
		Texture2D x_00;
		String pSVar2;
		String str2;
		String pSVar3;
		String area;
		int local_7c;
		Sprite local_78;
		String local_70;
		GisketchUiPerfLog.Scope local_60;
		GisketchUiPerfLog.Scope local_58;

		local_78 = null;
		local_58._startMs = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_7c = 0;
		x = null;
		bVar1 = String.IsNullOrEmpty(resourcePath);
		if (!bVar1) {
			if ((typeof(GisketchSpriteLoader)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar1 = GisketchSpriteLoader.TryGetCached(resourcePath, ref local_78);
			if (bVar1) {
				return local_78;
			}
			local_58 = GisketchUiPerfLog.Time("SpriteLoader.ResourcesLoadSprite", resourcePath);
			local_60 = &local_58;
			x = (Object)Resources.Load<Sprite>(resourcePath);
			local_58.Dispose();
			if ((typeof(GisketchSpriteLoader)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchSpriteLoader.Store(resourcePath, (Sprite)x);
			x_00 = null;
			bVar1 = (x != null);
			if (bVar1) {
				if (x == null) goto label_053333c3;
				x_00 = x.texture;
			}
			bVar1 = ((Object)x_00 != null);
			pSVar3 = " => ";
			if (bVar1) {
				if (x_00 == null) {
	label_053333c3: ;
					throw new NullReferenceException();
				}
				local_70 = "SpriteLoader.ResourcesLoadSprite";
				local_7c = x_00.get_width();
				pSVar2 = local_7c.ToString();
				local_7c = x_00.get_height();
				str2 = local_7c.ToString();
				area = local_70;
				pSVar2 = String.Concat(pSVar2, "x", str2);
			}
			else {
				pSVar2 = "null";
				area = "SpriteLoader.ResourcesLoadSprite";
			}
			pSVar3 = String.Concat(resourcePath, pSVar3, pSVar2);
			GisketchUiPerfLog.Mark(area, pSVar3);
		}
		return (Sprite)x;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x5233430", Offset = "0x5232430", VA = "0x5233430")]
	public static bool TryGetCached(string resourcePath, out Sprite sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c (Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$TryGetCached): clean
		Dictionary<object, object> __this;
		Object x;
		bool bVar1;

		*sprite = null;
		bVar1 = String.IsNullOrEmpty(resourcePath);
		if (!bVar1) {
			__this = (Dictionary<object, object>)GisketchSpriteLoader.Cache;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetValue((object)resourcePath, (object*)sprite);
			if (bVar1) {
				x = (Object)*sprite;
				bVar1 = (x != null);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x5233510", Offset = "0x5232510", VA = "0x5233510")]
	public static void Store(string resourcePath, Sprite sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c (Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Store): clean
		Dictionary<object, object> __this;
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(resourcePath);
		if (!bVar1) {
			bVar1 = ((Object)sprite != null);
			if (bVar1) {
				__this = (Dictionary<object, object>)GisketchSpriteLoader.Cache;
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.set_Item((object)resourcePath, (object)sprite);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x52335E0", Offset = "0x52325E0", VA = "0x52335E0")]
	public static void Release(IEnumerable<string> resourcePaths)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c (Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Release): 7 lines keep C-only constructs
		IEnumerable<string> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		Dictionary<object, object> __this;
		object pIVar4;
		bool bVar5;
		VirtualInvokeData pVVar6;
		String key;
		ulong uVar7;
		long lVar8;
		object local_48;
		byte local_38;

		if (resourcePaths == null) {
			throw new NullReferenceException();
		}
		pSVar1 = resourcePaths.klass;
		uVar7 = (ulong)(pSVar1._2).interface_offsets_count;
		local_48 = resourcePaths.Dispose();
		local_38 = (byte)&local_48;
		do {
			pIVar4 = local_48;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_48.klass;
			uVar7 = (ulong)(pIVar3._2).interface_offsets_count;
			bVar5 = pIVar4.Dispose();
			pIVar4 = local_48;
			if (!bVar5) {
				if (local_48 == null) {
					return;
				}
				pIVar3 = local_48.klass;
				uVar7 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar7 == 0) goto label_0533389f;
				pIVar2 = (pIVar3._1).interfaceOffsets;
				lVar8 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_48.klass;
			uVar7 = (ulong)(pIVar3._2).interface_offsets_count;
			key = pIVar4.Dispose();
			__this = (Dictionary<object, object>)GisketchSpriteLoader.Cache;
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Remove((object)key);
		} while(true);
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar8);
				goto label_053338bd;
			}
		}
	label_0533389f: ;
	label_053338bd: ;
		pIVar4.Dispose();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c.

	// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$.cctor: clean
	static GisketchSpriteLoader()
	{
		Dictionary<string, Sprite> __this;

		__this = new Dictionary<string, Sprite>();
		GisketchSpriteLoader.Cache = __this;
		return;
	}
}
