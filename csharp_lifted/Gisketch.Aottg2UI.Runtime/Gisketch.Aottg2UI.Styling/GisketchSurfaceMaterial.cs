// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002E")]
public static class GisketchSurfaceMaterial
{
	[Token(Token = "0x40000BF")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Surface";

	[Token(Token = "0x40000C0")]
	public const float DefaultFineScale = 205f;

	[Token(Token = "0x40000C1")]
	public const float DefaultFineStrength = 0.0147f;

	[Token(Token = "0x40000C2")]
	public const float DefaultCoarseScale = 72f;

	[Token(Token = "0x40000C3")]
	public const float DefaultCoarseStrength = 0.0014f;

	[Token(Token = "0x40000C4")]
	public const float DefaultGradientStrength = 0.0089f;

	[Token(Token = "0x40000C5")]
	public const float DefaultLightFineScale = 263f;

	[Token(Token = "0x40000C6")]
	public const float DefaultLightFineStrength = 0.04f;

	[Token(Token = "0x40000C7")]
	public const float DefaultLightCoarseScale = 120f;

	[Token(Token = "0x40000C8")]
	public const float DefaultLightCoarseStrength = 0.007f;

	[Token(Token = "0x40000C9")]
	public const float DefaultLightGradientStrength = 0.018f;

	[Token(Token = "0x40000CA")]
	public const float DefaultReliefLightAngle = 225f;

	[Token(Token = "0x40000CB")]
	public const float DefaultReliefShadowSize = 4f;

	[Token(Token = "0x40000CC")]
	public const float DefaultWearStrength = 0.18f;

	[Token(Token = "0x40000CD")]
	public const float DefaultChipStrength = 0.34f;

	[Token(Token = "0x40000CE")]
	public const float DefaultStainScale = 18f;

	[Token(Token = "0x40000CF")]
	public const float DefaultBrushReveal = 1f;

	[Token(Token = "0x40000D0")]
	public const float DefaultBrushRevealDirection = 1f;

	[Token(Token = "0x40000D1")]
	public const float DefaultBrushStreakStrength = 0.46f;

	[Token(Token = "0x40000D2")]
	public const float DefaultBrushStreakScale = 42f;

	[Token(Token = "0x40000D3")]
	public const float DefaultVerticalLightGradient = 0f;

	[Token(Token = "0x40000D4")]
	public const float DefaultHorizontalBlur = 0f;

	[Token(Token = "0x40000D5")]
	public const string WornKeyword = "AOTTG_WORN";

	[Token(Token = "0x40000D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int FineScaleId;

	[Token(Token = "0x40000D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int FineStrengthId;

	[Token(Token = "0x40000D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly int CoarseScaleId;

	[Token(Token = "0x40000D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly int CoarseStrengthId;

	[Token(Token = "0x40000DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly int GradientStrengthId;

	[Token(Token = "0x40000DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static readonly int LightFineScaleId;

	[Token(Token = "0x40000DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly int LightFineStrengthId;

	[Token(Token = "0x40000DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static readonly int LightCoarseScaleId;

	[Token(Token = "0x40000DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly int LightCoarseStrengthId;

	[Token(Token = "0x40000DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static readonly int LightGradientStrengthId;

	[Token(Token = "0x40000E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly int ReliefId;

	[Token(Token = "0x40000E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public static readonly int ReliefGradientId;

	[Token(Token = "0x40000E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly int ReliefLightAngleId;

	[Token(Token = "0x40000E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public static readonly int ReliefShadowSizeId;

	[Token(Token = "0x40000E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static readonly int WornId;

	[Token(Token = "0x40000E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public static readonly int WearStrengthId;

	[Token(Token = "0x40000E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static readonly int ChipStrengthId;

	[Token(Token = "0x40000E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public static readonly int StainScaleId;

	[Token(Token = "0x40000E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static readonly int BrushRevealId;

	[Token(Token = "0x40000E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public static readonly int BrushRevealDirectionId;

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static readonly int BrushStreakId;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public static readonly int BrushStreakStrengthId;

	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static readonly int BrushStreakScaleId;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public static readonly int VerticalLightGradientId;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static readonly int HorizontalBlurId;

	[Token(Token = "0x40000EF")]
	private const string MaterialPath = "GisketchUI/Materials/AottgUiSurface";

	[Token(Token = "0x40000F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static Material _material;

	[Token(Token = "0x40000F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly List<Material> _instances;

	[Token(Token = "0x40000F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static readonly Dictionary<Material, float> _stainScaleOverrides;

	[Token(Token = "0x1700001E")]
	public static Material Shared
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x5233980", Offset = "0x5232980", VA = "0x5233980")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$get_Shared): clean
			Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_StaticFields pGVar1;
			bool bVar2;
			Material pUVar3;
			Object x;
			MethodInfo method_00;

			pUVar3 = GisketchSurfaceMaterial._material;
			bVar2 = ((Object)pUVar3 != null);
			if (!bVar2) {
				pUVar3 = Resources.Load<Material>("GisketchUI/Materials/AottgUiSurface");
				pGVar1 = typeof(GisketchSurfaceMaterial).static_fields;
				pGVar1._material = pUVar3;
				pUVar3 = GisketchSurfaceMaterial._material;
				bVar2 = ((Object)pUVar3 != null);
				if (!bVar2) {
					x = (Object)Shader.Find("Gisketch/AoTTG2 UI Surface");
					bVar2 = (x == null);
					if (bVar2) {
						return null;
					}
					method_00 = new Material((Shader)x);
					if (method_00 == null) {
						throw new NullReferenceException();
					}
					method_00.name = "AoTTG UI Textured Surface";
					method_00.hideFlags = 0x3d;
					pGVar1 = typeof(GisketchSurfaceMaterial).static_fields;
					pGVar1._material = (Material)method_00;
					GisketchSurfaceMaterial.ApplyDefaults(GisketchSurfaceMaterial._material);
					goto label_05333b90;
				}
			}
		label_05333b90: ;
			return GisketchSurfaceMaterial._material;
		}
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x5233BB0", Offset = "0x5232BB0", VA = "0x5233BB0")]
	public static void ApplyDefaults(Material material)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyDefaults): clean
		MethodInfo method_00;

		GisketchSurfaceMaterial.ApplyPreset(material, 205.0, 0.0147, 72.0, 0.0014, 0.0089);
		GisketchSurfaceMaterial.ApplyLightPreset(material, 263.0, 0.04, 120.0, 0.007, 0.018);
		if (material == null) {
			throw new NullReferenceException();
		}
		material.SetFloat(GisketchSurfaceMaterial.ReliefId, 0.0);
		material.SetFloat(GisketchSurfaceMaterial. ReliefGradientId, 0.0);
		material.SetFloat(GisketchSurfaceMaterial. ReliefLightAngleId, 225.0);
		material.SetFloat(GisketchSurfaceMaterial. ReliefShadowSizeId, 4.0);
		material.SetFloat(GisketchSurfaceMaterial.WornId, 0.0);
		material.SetFloat(GisketchSurfaceMaterial.BrushRevealId, 1.0);
		material.SetFloat(GisketchSurfaceMaterial. BrushRevealDirectionId, 1.0);
		material.SetFloat(GisketchSurfaceMaterial.BrushStreakId, 0.0);
		material.SetFloat(GisketchSurfaceMaterial. BrushStreakStrengthId, 0.46);
		material.SetFloat(GisketchSurfaceMaterial. BrushStreakScaleId, 42.0);
		material.SetFloat(GisketchSurfaceMaterial. VerticalLightGradientId, 0.0);
		material.SetFloat(GisketchSurfaceMaterial. HorizontalBlurId, 0.0);
		method_00 = (MethodInfo *)"AOTTG_WORN";
		material.DisableKeyword("AOTTG_WORN");
		GisketchSurfaceMaterial.ApplyWearPreset(material, 0.18, 0.34, 18.0);
		GisketchSurfaceMaterial.ApplyReliefSettings(225.0, 4.0);
		return;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x5222EA0", Offset = "0x5221EA0", VA = "0x5222EA0")]
	public static Material Instance(float relief, [Optional][DefaultParameterValue(false)] bool reliefGradient, [Optional][DefaultParameterValue(false)] bool worn, [Optional] float? stainScaleOverride, bool brushStreak = false, bool verticalLightGradient = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$Instance): 2 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<Material, float> __this;
		List<Material> __this_00;
		Material[] pUVar5;
		bool bVar7;
		Material source;
		Material __this_01;
		float fVar8;
		bool local_40;
		Nullable<float> local_38;

		local_38 = stainScaleOverride;
		source = GisketchSurfaceMaterial.Shared;
		bVar7 = ((Object)source == null);
		if (bVar7) {
			return null;
		}
		__this_01 = new Material(source);
		if (__this_01 == null) goto label_0532334f;
		__this_01.name = "AoTTG UI Surface Instance";
		__this_01.hideFlags = 0x34;
		__this_01.SetFloat(GisketchSurfaceMaterial.ReliefId, relief);
		if (reliefGradient) {
			fVar8 = 1.0;
		}
		else {
			fVar8 = 0.0;
		}
		__this_01.SetFloat(GisketchSurfaceMaterial.ReliefGradientId, fVar8);
		if ((typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor == 0) {
			if (!worn) goto label_0532304f;
	label_05323062: ;
			fVar8 = 1.0;
		}
		else {
			if (worn) goto label_05323062;
	label_0532304f: ;
			fVar8 = 0.0;
		}
		__this_01.SetFloat(GisketchSurfaceMaterial.WornId, fVar8);
		__this_01.SetFloat(GisketchSurfaceMaterial.BrushRevealId, 1.0);
		__this_01.SetFloat(GisketchSurfaceMaterial.BrushRevealDirectionId, 1.0);
		fVar8 = 1.0;
		if (!brushStreak) {
			fVar8 = 0.0;
		}
		__this_01.SetFloat(GisketchSurfaceMaterial.BrushStreakId, fVar8);
		if (source != null) {
			iVar2 = GisketchSurfaceMaterial.BrushStreakStrengthId;
			fVar8 = source.GetFloat(iVar2);
			__this_01.SetFloat(iVar2, fVar8);
			iVar2 = GisketchSurfaceMaterial.BrushStreakScaleId;
			fVar8 = source.GetFloat(iVar2);
			__this_01.SetFloat(iVar2, fVar8);
			if (verticalLightGradient) {
				fVar8 = 1.0;
			}
			else {
				fVar8 = 0.0;
			}
			__this_01.SetFloat(GisketchSurfaceMaterial. VerticalLightGradientId, fVar8);
			__this_01.SetFloat(GisketchSurfaceMaterial.HorizontalBlurId, 0.0);
			if (worn) {
				__this_01.EnableKeyword("AOTTG_WORN");
				uVar3 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
			}
			else {
				__this_01.DisableKeyword("AOTTG_WORN");
				uVar3 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			iVar2 = GisketchSurfaceMaterial.ReliefLightAngleId;
			fVar8 = source.GetFloat(iVar2);
			__this_01.SetFloat(iVar2, fVar8);
			iVar2 = GisketchSurfaceMaterial.ReliefShadowSizeId;
			fVar8 = source.GetFloat(iVar2);
			__this_01.SetFloat(iVar2, fVar8);
			local_40 = stainScaleOverride.hasValue;
			if (local_40 != false) {
				iVar2 = GisketchSurfaceMaterial.StainScaleId;
				fVar8 = local_38.Value;
				__this_01.SetFloat(iVar2, fVar8);
				__this = GisketchSurfaceMaterial._stainScaleOverrides ;
				fVar8 = local_38.Value;
				if (__this == null) goto label_0532334f;
				__this.set_Item((object)__this_01, fVar8);
			}
			__this_00 = GisketchSurfaceMaterial._instances;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar5 = __this_00._items;
				if (pUVar5 != null) {
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pUVar5.Length) {
						__this_00._size = uVar4 + 1;
						pUVar5[(int)uVar4] = __this_01;
					}
					else {
						__this_00.AddWithResize((object)__this_01);
					}
					return __this_01;
				}
			}
		}
	label_0532334f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x5234440", Offset = "0x5233440", VA = "0x5234440")]
	public static void ApplyReliefLightAngle(float angle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefLightAngle): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Material pUVar3;
		Il2CppClass klass;
		float shadowSize;

		pUVar3 = GisketchSurfaceMaterial.Shared;
		bVar2 = ((Object)pUVar3 != null);
		if (bVar2) {
			pUVar3 = GisketchSurfaceMaterial.Shared;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			shadowSize = pUVar3.GetFloat(GisketchSurfaceMaterial. ReliefShadowSizeId);
			uVar1 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchSurfaceMaterial);
		}
		else {
			shadowSize = 4.0;
			uVar1 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchSurfaceMaterial);
		}
		typeof(GisketchSurfaceMaterial) =(GisketchSurfaceMaterial)klass;
		if (uVar1 == 0) {
		}
		GisketchSurfaceMaterial.ApplyReliefSettings(angle, shadowSize) ;
		return;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x5234190", Offset = "0x5233190", VA = "0x5234190")]
	public static void ApplyReliefSettings(float angle, float shadowSize)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefSettings): 1 lines keep C-only constructs
		int index;
		List<Material> pSVar1;
		Dictionary<Material, float> __this;
		bool bVar2;
		Material pUVar3;

		if (Il2CppMethodInitialized_0754287e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_0754287e = true;
		}
		pUVar3 = GisketchSurfaceMaterial.Shared;
		bVar2 = ((Object)pUVar3 != null);
		if (bVar2) {
			if (pUVar3 == null) goto label_0533442c;
			pUVar3.SetFloat(GisketchSurfaceMaterial. ReliefLightAngleId, angle);
			pUVar3.SetFloat(GisketchSurfaceMaterial. ReliefShadowSizeId, shadowSize);
		}
		pSVar1 = GisketchSurfaceMaterial._instances;
		if (pSVar1 != null) {
			index = pSVar1._size;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return;
				}
				if (((typeof(GisketchSurfaceMaterial))._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar1 = GisketchSurfaceMaterial._instances;
				if (pSVar1 == null) break;
				pUVar3 = pSVar1.get_Item(index);
				bVar2 = ((Object)pUVar3 == null);
				if (bVar2) {
					if (pUVar3 != null) {
						if ((typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						__this = GisketchSurfaceMaterial. _stainScaleOverrides;
						if (__this == null) break;
						__this.Remove((object)pUVar3);
					}
					pSVar1 = GisketchSurfaceMaterial._instances;
					if (pSVar1 == null) break;
					pSVar1.RemoveAt(index);
				}
				else {
					if (pUVar3 == null) break;
					pUVar3.SetFloat(GisketchSurfaceMaterial. ReliefLightAngleId, angle);
					pUVar3.SetFloat(GisketchSurfaceMaterial. ReliefShadowSizeId, shadowSize);
				}
			}
		}
	label_0533442c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x5234540", Offset = "0x5233540", VA = "0x5234540")]
	public static void ApplyWearSettings(float wearStrength, float chipStrength, float stainScale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearSettings): 1 lines keep C-only constructs
		uint uVar1;
		List<Material> pSVar2;
		Dictionary<Material, float> pSVar3;
		bool bVar4;
		Material material;
		MethodInfo material_00;
		int index;
		float stainScale_00;
		float fStack_38;
		float fStack_34;

		if (Il2CppMethodInitialized_0754287f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			Il2CppMethodInitialized_0754287f = true;
		}
		fStack_38 = 0.0;
		material = GisketchSurfaceMaterial.Shared;
		GisketchSurfaceMaterial.ApplyWearPreset(material, wearStrength, chipStrength, stainScale);
		pSVar2 = GisketchSurfaceMaterial._instances;
		if (pSVar2 == null) {
	label_053347ec: ;
			throw new NullReferenceException();
		}
		index = pSVar2._size + -1;
		if (-1 < index) {
			do {
				while(true) {
					pSVar2 = GisketchSurfaceMaterial._instances;
					if (pSVar2 == null) goto label_053347ec;
					material_00 = (MethodInfo)pSVar2.get_Item(index);
					bVar4 = ((Object)material_00 == null);
					if (!bVar4) break;
					if (material_00 != null) {
						if ((typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pSVar3 = GisketchSurfaceMaterial. _stainScaleOverrides;
						if (pSVar3 == null) goto label_053347ec;
						pSVar3.Remove((object)material_00);
					}
					pSVar2 = GisketchSurfaceMaterial._instances;
					if (pSVar2 == null) goto label_053347ec;
					pSVar2.RemoveAt(index);
					index = index + -1;
					if (index < 0) {
						return;
					}
				}
				pSVar3 = GisketchSurfaceMaterial._stainScaleOverrides ;
				if (pSVar3 == null) goto label_053347ec;
				bVar4 = pSVar3.TryGetValue((object)material_00, ref fStack_38);
				if (bVar4) {
					uVar1 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
					stainScale_00 = fStack_38;
				}
				else {
					uVar1 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
					stainScale_00 = stainScale;
				}
				if (uVar1 == 0) {
					fStack_34 = stainScale_00;
					stainScale_00 = fStack_34;
				}
				GisketchSurfaceMaterial.ApplyWearPreset((Material)material_00, wearStrength, chipStrength, stainScale_00);
				index = index + -1;
			} while (-1 < index);
		}
		return;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x5233E10", Offset = "0x5232E10", VA = "0x5233E10")]
	public static void ApplyPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyPreset): clean
		bool bVar1;

		bVar1 = ((Object)material == null);
		if (bVar1) {
			return;
		}
		if (material == null) {
			throw new NullReferenceException();
		}
		material.SetFloat(GisketchSurfaceMaterial.FineScaleId, fineScale);
		material.SetFloat(GisketchSurfaceMaterial. FineStrengthId, fineStrength);
		material.SetFloat(GisketchSurfaceMaterial.CoarseScaleId, coarseScale);
		material.SetFloat(GisketchSurfaceMaterial. CoarseStrengthId, coarseStrength);
		material.SetFloat(GisketchSurfaceMaterial. GradientStrengthId, gradientStrength);
		return;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x5233F50", Offset = "0x5232F50", VA = "0x5233F50")]
	public static void ApplyLightPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyLightPreset): clean
		bool bVar1;

		bVar1 = ((Object)material == null);
		if (bVar1) {
			return;
		}
		if (material == null) {
			throw new NullReferenceException();
		}
		material.SetFloat(GisketchSurfaceMaterial. LightFineScaleId, fineScale);
		material.SetFloat(GisketchSurfaceMaterial. LightFineStrengthId, fineStrength);
		material.SetFloat(GisketchSurfaceMaterial. LightCoarseScaleId, coarseScale);
		material.SetFloat(GisketchSurfaceMaterial. LightCoarseStrengthId, coarseStrength);
		material.SetFloat(GisketchSurfaceMaterial. LightGradientStrengthId, gradientStrength);
		return;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x5234090", Offset = "0x5233090", VA = "0x5234090")]
	public static void ApplyWearPreset(Material material, float wearStrength, float chipStrength, float stainScale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c (Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearPreset): clean
		bool bVar1;

		bVar1 = ((Object)material == null);
		if (bVar1) {
			return;
		}
		if (material == null) {
			throw new NullReferenceException();
		}
		material.SetFloat(GisketchSurfaceMaterial. WearStrengthId, wearStrength);
		material.SetFloat(GisketchSurfaceMaterial. ChipStrengthId, chipStrength);
		material.SetFloat(GisketchSurfaceMaterial.StainScaleId, stainScale);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c.

	// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$.cctor: 1 lines keep C-only constructs
	static GisketchSurfaceMaterial()
	{
		Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_StaticFields pGVar1;
		int iVar2;
		List<Material> __this;
		Dictionary<Material, float> __this_00;

		if (Il2CppMethodInitialized_07542883 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<Material, float>)) ;
			Il2CppMethodInitialized_07542883 = true;
		}
		iVar2 = Shader.PropertyToID("_FineScale");
		GisketchSurfaceMaterial.FineScaleId = iVar2;
		iVar2 = Shader.PropertyToID("_FineStrength");
		GisketchSurfaceMaterial.FineStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_CoarseScale");
		GisketchSurfaceMaterial.CoarseScaleId = iVar2;
		iVar2 = Shader.PropertyToID("_CoarseStrength");
		GisketchSurfaceMaterial.CoarseStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_GradientStrength");
		GisketchSurfaceMaterial.GradientStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_LightFineScale");
		GisketchSurfaceMaterial.LightFineScaleId = iVar2;
		iVar2 = Shader.PropertyToID("_LightFineStrength");
		GisketchSurfaceMaterial.LightFineStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_LightCoarseScale");
		GisketchSurfaceMaterial.LightCoarseScaleId = iVar2;
		iVar2 = Shader.PropertyToID("_LightCoarseStrength");
		GisketchSurfaceMaterial.LightCoarseStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_LightGradientStrength");
		GisketchSurfaceMaterial.LightGradientStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_Relief");
		GisketchSurfaceMaterial.ReliefId = iVar2;
		iVar2 = Shader.PropertyToID("_ReliefGradient");
		GisketchSurfaceMaterial.ReliefGradientId = iVar2;
		iVar2 = Shader.PropertyToID("_ReliefLightAngle");
		GisketchSurfaceMaterial.ReliefLightAngleId = iVar2;
		iVar2 = Shader.PropertyToID("_ReliefShadowSize");
		GisketchSurfaceMaterial.ReliefShadowSizeId = iVar2;
		iVar2 = Shader.PropertyToID("_Worn");
		GisketchSurfaceMaterial.WornId = iVar2;
		iVar2 = Shader.PropertyToID("_WearStrength");
		GisketchSurfaceMaterial.WearStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_ChipStrength");
		GisketchSurfaceMaterial.ChipStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_StainScale");
		GisketchSurfaceMaterial.StainScaleId = iVar2;
		iVar2 = Shader.PropertyToID("_BrushReveal");
		GisketchSurfaceMaterial.BrushRevealId = iVar2;
		iVar2 = Shader.PropertyToID("_BrushRevealDirection");
		GisketchSurfaceMaterial.BrushRevealDirectionId = iVar2;
		iVar2 = Shader.PropertyToID("_BrushStreak");
		GisketchSurfaceMaterial.BrushStreakId = iVar2;
		iVar2 = Shader.PropertyToID("_BrushStreakStrength");
		GisketchSurfaceMaterial.BrushStreakStrengthId = iVar2;
		iVar2 = Shader.PropertyToID("_BrushStreakScale");
		GisketchSurfaceMaterial.BrushStreakScaleId = iVar2;
		iVar2 = Shader.PropertyToID("_VerticalLightGradient");
		GisketchSurfaceMaterial.VerticalLightGradientId = iVar2;
		iVar2 = Shader.PropertyToID("_HorizontalBlur");
		GisketchSurfaceMaterial.HorizontalBlurId = iVar2;
		__this = new List<Material>();
		pGVar1 = typeof(GisketchSurfaceMaterial).static_fields;
		pGVar1._instances = __this;
		__this_00 = new Dictionary<Material, float>();
		pGVar1 = typeof(GisketchSurfaceMaterial).static_fields;
		pGVar1._stainScaleOverrides = __this_00;
		return;
	}
}
