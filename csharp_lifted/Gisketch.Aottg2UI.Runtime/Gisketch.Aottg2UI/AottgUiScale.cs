// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.AottgUiScale
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/AottgUiScale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI;

[Token(Token = "0x2000008")]
public static class AottgUiScale
{
	[Token(Token = "0x4000031")]
	public const float UserMin = 0.5f;

	[Token(Token = "0x4000032")]
	public const float UserMax = 1.5f;

	[Token(Token = "0x4000033")]
	public const float AppliedMin = 0.8f;

	[Token(Token = "0x4000034")]
	public const float AppliedMax = 1.2f;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Labels;

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x521B150", Offset = "0x521A150", VA = "0x521B150")]
	public static float Value(AottgUiScalePreset preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$Value): 1 lines keep C-only constructs
		if ((uint)preset < 5) {
			return *(float)(&g_data_01010910 + (long)preset * 4);
		}
		return 1.0;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x521E060", Offset = "0x521D060", VA = "0x521E060")]
	public static string Label(AottgUiScalePreset preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$Label): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_075427c4 == false) {
			Il2CppMethodInitialized_075427c4 = true;
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgUiScale.Labels;
		}
		else {
			pSVar2 = *(String[]*)(typeof(AottgUiScale)).static_fields;
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((uint)pSVar2.Length <= (uint)preset) {
			throw new IndexOutOfRangeException();
		}
		return pSVar2[preset];
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x521E0F0", Offset = "0x521D0F0", VA = "0x521E0F0")]
	public static bool TryParseLabel(string label, out AottgUiScalePreset preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$TryParseLabel): clean
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		int iVar4;
		long lVar5;
		ulong uVar6;

		uVar6 = 0;
		uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		do {
			if (uVar1 == 0) {
			}
			pSVar3 = AottgUiScale.Labels;
			if (pSVar3 == null) {
	label_0531e1cc: ;
				throw new NullReferenceException();
			}
			lVar5 = (long)(int)pSVar3.Length;
			if (lVar5 <= (long)uVar6) {
				iVar4 = 2;
				goto label_0531e1b9;
			}
			if ((typeof(AottgUiScale)._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = AottgUiScale.Labels;
				if (pSVar3 == null) goto label_0531e1cc;
			}
			if ((uint)pSVar3.Length <= uVar6) {
				throw new IndexOutOfRangeException();
			}
			bVar2 = (pSVar3[uVar6] == label);
			if (bVar2) {
				iVar4 = (int32_t)uVar6;
	label_0531e1b9: ;
				*preset = iVar4;
				return (long)uVar6 < lVar5;
			}
			uVar6 = uVar6 + 1;
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		} while(true);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x521B270", Offset = "0x521A270", VA = "0x521B270")]
	public static float Clamp(float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$Clamp): clean
		float fVar1;

		fVar1 = 1.5;
		if (scale <= 1.5) {
			fVar1 = scale;
		}
		return (float)(~-(uint)(0.5 <= scale) & 0x3f000000 | (uint)fVar1 & -(uint)(0.5 <= scale));
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x521B040", Offset = "0x521A040", VA = "0x521B040")]
	public static float AppliedValue(float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$AppliedValue): clean
		float fVar1;
		float fVar2;

		fVar2 = 1.5;
		if (scale <= 1.5) {
			fVar2 = scale;
		}
		fVar1 = (float)(-(uint)(0.5 <= scale) & (uint)(fVar2 + -0.5));
		fVar2 = 1.0;
		if (fVar1 <= 1.0) {
			fVar2 = fVar1;
		}
		fVar2 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
		fVar1 = 0.0;
		if (0.0 <= fVar2) {
			fVar1 = fVar2;
		}
		return fVar1 * 0.40000004 + 0.8;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x521E1E0", Offset = "0x521D1E0", VA = "0x521E1E0")]
	internal static Vector2 ReferenceResolution(AottgUiScalePreset preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution): 5 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;
		Vector2 UVar2;

		if (Il2CppMethodInitialized_075427c7 == false) {
			Il2CppMethodInitialized_075427c7 = true;
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgUiScale);
		}
		else {
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgUiScale);
		}
		typeof(AottgUiScale) = (AottgUiScale)klass;
		if (uVar1 == 0) {
		}
		if ((uint)preset < 5) {
			UVar2 = AottgUiScale.ReferenceResolution(*(float)(&g_data_01010910 + (long)preset * 4));
			return (Vector2)UVar2;
		}
		UVar2 = AottgUiScale.ReferenceResolution(1.0);
		return (Vector2)UVar2;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x521B3D0", Offset = "0x521A3D0", VA = "0x521B3D0")]
	internal static Vector2 ReferenceResolution(float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c (Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution): 19 lines keep C-only constructs
		uint uVar1;
		byte[] auVar2 = new byte[12];
		byte[] auVar3 = new byte[12];
		byte[] auVar4 = new byte[16];
		float fVar5;
		float fVar6;

		if (Il2CppMethodInitialized_075427c8 == false) {
			Il2CppMethodInitialized_075427c8 = true;
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075427c6 == false) {
			Il2CppMethodInitialized_075427c6 = true;
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgUiScale))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		auVar2 = ZEXT812(0x3fc00000);
		if (scale <= auVar2._0_4_) {
			auVar2._4_8_ = auVar2._4_8_;
			auVar2._0_4_ = scale;
		}
		fVar5 = (float)(-(uint)(0.5 <= scale) & (uint)(auVar2._0_4_ + -0.5));
		auVar3 = ZEXT812(0x3f800000);
		if (fVar5 <= auVar3._0_4_) {
			auVar3._4_8_ = auVar3._4_8_;
			auVar3._0_4_ = fVar5;
		}
		fVar6 = (float)(-(uint)(0.0 <= fVar5) & auVar3._0_4_);
		fVar5 = 0.0;
		if (0.0 <= fVar6) {
			fVar5 = fVar6;
		}
		fVar5 = fVar5 * 0.40000004 + 0.8;
		auVar4._4_4_ = fVar5;
		auVar4._0_4_ = fVar5;
		auVar4._8_4_ = fVar5;
		auVar4._12_4_ = fVar5;
		auVar4 = divps(_DAT_0100a420, auVar4);
		return (Vector2)auVar4._0_8_;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/AottgUiScale.c.

	// Gisketch.Aottg2UI.AottgUiScale$$.cctor: clean
	static AottgUiScale()
	{
		String[] pSVar1;

		pSVar1 = (String[])new string[5];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "Very Small";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Small";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "Normal";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "Large";
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = "Very Large";
							AottgUiScale.Labels = pSVar1;
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
