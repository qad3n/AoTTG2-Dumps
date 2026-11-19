// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.Intrinsics.X86
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;

namespace Unity.Burst.Intrinsics;

[Token(Token = "0x200003A")]
[BurstCompile]
public static class X86
{
	[Token(Token = "0x200003B")]
	public static class Avx
	{
		[Token(Token = "0x200003C")]
		public enum CMP
		{
			[Token(Token = "0x400026D")]
			EQ_OQ,
			[Token(Token = "0x400026E")]
			LT_OS,
			[Token(Token = "0x400026F")]
			LE_OS,
			[Token(Token = "0x4000270")]
			UNORD_Q,
			[Token(Token = "0x4000271")]
			NEQ_UQ,
			[Token(Token = "0x4000272")]
			NLT_US,
			[Token(Token = "0x4000273")]
			NLE_US,
			[Token(Token = "0x4000274")]
			ORD_Q,
			[Token(Token = "0x4000275")]
			EQ_UQ,
			[Token(Token = "0x4000276")]
			NGE_US,
			[Token(Token = "0x4000277")]
			NGT_US,
			[Token(Token = "0x4000278")]
			FALSE_OQ,
			[Token(Token = "0x4000279")]
			NEQ_OQ,
			[Token(Token = "0x400027A")]
			GE_OS,
			[Token(Token = "0x400027B")]
			GT_OS,
			[Token(Token = "0x400027C")]
			TRUE_UQ,
			[Token(Token = "0x400027D")]
			EQ_OS,
			[Token(Token = "0x400027E")]
			LT_OQ,
			[Token(Token = "0x400027F")]
			LE_OQ,
			[Token(Token = "0x4000280")]
			UNORD_S,
			[Token(Token = "0x4000281")]
			NEQ_US,
			[Token(Token = "0x4000282")]
			NLT_UQ,
			[Token(Token = "0x4000283")]
			NLE_UQ,
			[Token(Token = "0x4000284")]
			ORD_S,
			[Token(Token = "0x4000285")]
			EQ_US,
			[Token(Token = "0x4000286")]
			NGE_UQ,
			[Token(Token = "0x4000287")]
			NGT_UQ,
			[Token(Token = "0x4000288")]
			FALSE_OS,
			[Token(Token = "0x4000289")]
			NEQ_OS,
			[Token(Token = "0x400028A")]
			GE_OQ,
			[Token(Token = "0x400028B")]
			GT_OQ,
			[Token(Token = "0x400028C")]
			TRUE_US
		}

		[Token(Token = "0x17000041")]
		public static bool IsAvxSupported
		{
			[Token(Token = "0x6000ACA")]
			[Address(RVA = "0x633F7B0", Offset = "0x633E7B0", VA = "0x633F7B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x633F7C0", Offset = "0x633E7C0", VA = "0x633F7C0")]
		[DebuggerStepThrough]
		public static v256 mm256_add_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x633F820", Offset = "0x633E820", VA = "0x633F820")]
		[DebuggerStepThrough]
		public static v256 mm256_add_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x633F8A0", Offset = "0x633E8A0", VA = "0x633F8A0")]
		[DebuggerStepThrough]
		public static v256 mm256_addsub_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x633F900", Offset = "0x633E900", VA = "0x633F900")]
		[DebuggerStepThrough]
		public static v256 mm256_addsub_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x633F960", Offset = "0x633E960", VA = "0x633F960")]
		[DebuggerStepThrough]
		public static v256 mm256_and_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x633F9C0", Offset = "0x633E9C0", VA = "0x633F9C0")]
		[DebuggerStepThrough]
		public static v256 mm256_and_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x633F9F0", Offset = "0x633E9F0", VA = "0x633F9F0")]
		[DebuggerStepThrough]
		public static v256 mm256_andnot_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x633FA50", Offset = "0x633EA50", VA = "0x633FA50")]
		[DebuggerStepThrough]
		public static v256 mm256_andnot_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x633FA90", Offset = "0x633EA90", VA = "0x633FA90")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x633FB10", Offset = "0x633EB10", VA = "0x633FB10")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x633FB90", Offset = "0x633EB90", VA = "0x633FB90")]
		[DebuggerStepThrough]
		public static v256 mm256_blendv_pd(v256 a, v256 b, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x633FC20", Offset = "0x633EC20", VA = "0x633FC20")]
		[DebuggerStepThrough]
		public static v256 mm256_blendv_ps(v256 a, v256 b, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x633FCB0", Offset = "0x633ECB0", VA = "0x633FCB0")]
		[DebuggerStepThrough]
		public static v256 mm256_div_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x633FD10", Offset = "0x633ED10", VA = "0x633FD10")]
		[DebuggerStepThrough]
		public static v256 mm256_div_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x633FD90", Offset = "0x633ED90", VA = "0x633FD90")]
		[DebuggerStepThrough]
		public static v256 mm256_dp_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x633FE00", Offset = "0x633EE00", VA = "0x633FE00")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x633FE60", Offset = "0x633EE60", VA = "0x633FE60")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x633FEC0", Offset = "0x633EEC0", VA = "0x633FEC0")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x633FF20", Offset = "0x633EF20", VA = "0x633FF20")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x633FF80", Offset = "0x633EF80", VA = "0x633FF80")]
		[DebuggerStepThrough]
		public static v256 mm256_max_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x633FFE0", Offset = "0x633EFE0", VA = "0x633FFE0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x6340140", Offset = "0x633F140", VA = "0x6340140")]
		[DebuggerStepThrough]
		public static v256 mm256_min_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE1")]
		[Address(RVA = "0x63401A0", Offset = "0x633F1A0", VA = "0x63401A0")]
		[DebuggerStepThrough]
		public static v256 mm256_min_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x6340300", Offset = "0x633F300", VA = "0x6340300")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x6340360", Offset = "0x633F360", VA = "0x6340360")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x63403E0", Offset = "0x633F3E0", VA = "0x63403E0")]
		[DebuggerStepThrough]
		public static v256 mm256_or_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x6340440", Offset = "0x633F440", VA = "0x6340440")]
		[DebuggerStepThrough]
		public static v256 mm256_or_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x6340470", Offset = "0x633F470", VA = "0x6340470")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x63404F0", Offset = "0x633F4F0", VA = "0x63404F0")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x63405F0", Offset = "0x633F5F0", VA = "0x63405F0")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x6340650", Offset = "0x633F650", VA = "0x6340650")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x63406D0", Offset = "0x633F6D0", VA = "0x63406D0")]
		[DebuggerStepThrough]
		public static v256 mm256_xor_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x6340730", Offset = "0x633F730", VA = "0x6340730")]
		[DebuggerStepThrough]
		public static v256 mm256_xor_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x6340760", Offset = "0x633F760", VA = "0x6340760")]
		[DebuggerStepThrough]
		public static v128 cmp_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x6340A40", Offset = "0x633FA40", VA = "0x6340A40")]
		[DebuggerStepThrough]
		public static v256 mm256_cmp_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x6340AB0", Offset = "0x633FAB0", VA = "0x6340AB0")]
		[DebuggerStepThrough]
		public static v128 cmp_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x63427A0", Offset = "0x63417A0", VA = "0x63427A0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmp_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x6342810", Offset = "0x6341810", VA = "0x6342810")]
		[DebuggerStepThrough]
		public static v128 cmp_sd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x6342820", Offset = "0x6341820", VA = "0x6342820")]
		[DebuggerStepThrough]
		public static v128 cmp_ss(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x6342850", Offset = "0x6341850", VA = "0x6342850")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi32_pd(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x6342880", Offset = "0x6341880", VA = "0x6342880")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi32_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x63428D0", Offset = "0x63418D0", VA = "0x63428D0")]
		[DebuggerStepThrough]
		public static v128 mm256_cvtpd_ps(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x6342900", Offset = "0x6341900", VA = "0x6342900")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtps_epi32(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x6342950", Offset = "0x6341950", VA = "0x6342950")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtps_pd(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x6342990", Offset = "0x6341990", VA = "0x6342990")]
		[DebuggerStepThrough]
		public static v128 mm256_cvttpd_epi32(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x63429D0", Offset = "0x63419D0", VA = "0x63429D0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v128 mm256_cvtpd_epi32(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x6342A00", Offset = "0x6341A00", VA = "0x6342A00")]
		[DebuggerStepThrough]
		public static v256 mm256_cvttps_epi32(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x6342A50", Offset = "0x6341A50", VA = "0x6342A50")]
		[DebuggerStepThrough]
		public static float mm256_cvtss_f32(v256 a)
		{
			return default(float);
		}

		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x6342A60", Offset = "0x6341A60", VA = "0x6342A60")]
		[DebuggerStepThrough]
		public static v128 mm256_extractf128_ps(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x6342A80", Offset = "0x6341A80", VA = "0x6342A80")]
		[DebuggerStepThrough]
		public static v128 mm256_extractf128_pd(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x6342AA0", Offset = "0x6341AA0", VA = "0x6342AA0")]
		[DebuggerStepThrough]
		public static v128 mm256_extractf128_si256(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x6342AC0", Offset = "0x6341AC0", VA = "0x6342AC0")]
		[DebuggerStepThrough]
		public static void mm256_zeroall()
		{
		}

		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x6342AD0", Offset = "0x6341AD0", VA = "0x6342AD0")]
		[DebuggerStepThrough]
		public static void mm256_zeroupper()
		{
		}

		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x6342AE0", Offset = "0x6341AE0", VA = "0x6342AE0")]
		[DebuggerStepThrough]
		public static v128 permutevar_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x6342B40", Offset = "0x6341B40", VA = "0x6342B40")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x6342C30", Offset = "0x6341C30", VA = "0x6342C30")]
		[DebuggerStepThrough]
		public static v128 permute_ps(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x6342C40", Offset = "0x6341C40", VA = "0x6342C40")]
		[DebuggerStepThrough]
		public static v256 mm256_permute_ps(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x6342CA0", Offset = "0x6341CA0", VA = "0x6342CA0")]
		[DebuggerStepThrough]
		public static v128 permutevar_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x6342CE0", Offset = "0x6341CE0", VA = "0x6342CE0")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x6342D50", Offset = "0x6341D50", VA = "0x6342D50")]
		[DebuggerStepThrough]
		public static v256 mm256_permute_pd(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x6342DE0", Offset = "0x6341DE0", VA = "0x6342DE0")]
		[DebuggerStepThrough]
		public static v128 permute_pd(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x6342E20", Offset = "0x6341E20", VA = "0x6342E20")]
		private static v128 Select4(v256 src1, v256 src2, int control)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x6342E80", Offset = "0x6341E80", VA = "0x6342E80")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2f128_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x6342F20", Offset = "0x6341F20", VA = "0x6342F20")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2f128_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x6342FC0", Offset = "0x6341FC0", VA = "0x6342FC0")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2f128_si256(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x6343060", Offset = "0x6342060", VA = "0x6343060")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_ss(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x6343080", Offset = "0x6342080", VA = "0x6343080")]
		[DebuggerStepThrough]
		public unsafe static v128 broadcast_ss(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x6343090", Offset = "0x6342090", VA = "0x6343090")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_sd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x63430B0", Offset = "0x63420B0", VA = "0x63430B0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_ps(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x63430E0", Offset = "0x63420E0", VA = "0x63430E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_pd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x6343100", Offset = "0x6342100", VA = "0x6343100")]
		[DebuggerStepThrough]
		public static v256 mm256_insertf128_ps(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x6343140", Offset = "0x6342140", VA = "0x6343140")]
		[DebuggerStepThrough]
		public static v256 mm256_insertf128_pd(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x6343180", Offset = "0x6342180", VA = "0x6343180")]
		[DebuggerStepThrough]
		public static v256 mm256_insertf128_si256(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x63431C0", Offset = "0x63421C0", VA = "0x63431C0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_load_ps(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x63431E0", Offset = "0x63421E0", VA = "0x63431E0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_store_ps(void* ptr, v256 val)
		{
		}

		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x6343200", Offset = "0x6342200", VA = "0x6343200")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_load_pd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B17")]
		[Address(RVA = "0x6343220", Offset = "0x6342220", VA = "0x6343220")]
		[DebuggerStepThrough]
		public unsafe static void mm256_store_pd(void* ptr, v256 a)
		{
		}

		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x6343240", Offset = "0x6342240", VA = "0x6343240")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_loadu_pd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x6343260", Offset = "0x6342260", VA = "0x6343260")]
		[DebuggerStepThrough]
		public unsafe static void mm256_storeu_pd(void* ptr, v256 a)
		{
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x6343280", Offset = "0x6342280", VA = "0x6343280")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_loadu_ps(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0x63432A0", Offset = "0x63422A0", VA = "0x63432A0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_storeu_ps(void* ptr, v256 a)
		{
		}

		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x63432C0", Offset = "0x63422C0", VA = "0x63432C0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_load_si256(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x63432E0", Offset = "0x63422E0", VA = "0x63432E0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_store_si256(void* ptr, v256 v)
		{
		}

		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x6343300", Offset = "0x6342300", VA = "0x6343300")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_loadu_si256(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B1F")]
		[Address(RVA = "0x6343320", Offset = "0x6342320", VA = "0x6343320")]
		[DebuggerStepThrough]
		public unsafe static void mm256_storeu_si256(void* ptr, v256 v)
		{
		}

		[Token(Token = "0x6000B20")]
		[Address(RVA = "0x6343340", Offset = "0x6342340", VA = "0x6343340")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static v256 mm256_loadu2_m128(void* hiaddr, void* loaddr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B21")]
		[Address(RVA = "0x6343380", Offset = "0x6342380", VA = "0x6343380")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static v256 mm256_loadu2_m128d(void* hiaddr, void* loaddr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B22")]
		[Address(RVA = "0x63433A0", Offset = "0x63423A0", VA = "0x63433A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static v256 mm256_loadu2_m128i(void* hiaddr, void* loaddr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B23")]
		[Address(RVA = "0x6343360", Offset = "0x6342360", VA = "0x6343360")]
		[DebuggerStepThrough]
		public static v256 mm256_set_m128(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B24")]
		[Address(RVA = "0x63433C0", Offset = "0x63423C0", VA = "0x63433C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static void mm256_storeu2_m128(void* hiaddr, void* loaddr, v256 val)
		{
		}

		[Token(Token = "0x6000B25")]
		[Address(RVA = "0x63433F0", Offset = "0x63423F0", VA = "0x63433F0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static void mm256_storeu2_m128d(void* hiaddr, void* loaddr, v256 val)
		{
		}

		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x6343410", Offset = "0x6342410", VA = "0x6343410")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static void mm256_storeu2_m128i(void* hiaddr, void* loaddr, v256 val)
		{
		}

		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x6343430", Offset = "0x6342430", VA = "0x6343430")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_pd(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B28")]
		[Address(RVA = "0x6343450", Offset = "0x6342450", VA = "0x6343450")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_pd(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B29")]
		[Address(RVA = "0x63434C0", Offset = "0x63424C0", VA = "0x63434C0")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_pd(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000B2A")]
		[Address(RVA = "0x63434E0", Offset = "0x63424E0", VA = "0x63434E0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_pd(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000B2B")]
		[Address(RVA = "0x6343550", Offset = "0x6342550", VA = "0x6343550")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_ps(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0x63435B0", Offset = "0x63425B0", VA = "0x63435B0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_ps(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x63436A0", Offset = "0x63426A0", VA = "0x63436A0")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_ps(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x63436F0", Offset = "0x63426F0", VA = "0x63436F0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_ps(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000B2F")]
		[Address(RVA = "0x63437D0", Offset = "0x63427D0", VA = "0x63437D0")]
		[DebuggerStepThrough]
		public static v256 mm256_movehdup_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x6343800", Offset = "0x6342800", VA = "0x6343800")]
		[DebuggerStepThrough]
		public static v256 mm256_moveldup_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x6343830", Offset = "0x6342830", VA = "0x6343830")]
		[DebuggerStepThrough]
		public static v256 mm256_movedup_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x6343860", Offset = "0x6342860", VA = "0x6343860")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_lddqu_si256(void* mem_addr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B33")]
		[Address(RVA = "0x6343880", Offset = "0x6342880", VA = "0x6343880")]
		[DebuggerStepThrough]
		public unsafe static void mm256_stream_si256(void* mem_addr, v256 a)
		{
		}

		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x63438A0", Offset = "0x63428A0", VA = "0x63438A0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_stream_pd(void* mem_addr, v256 a)
		{
		}

		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x63438C0", Offset = "0x63428C0", VA = "0x63438C0")]
		[DebuggerStepThrough]
		public unsafe static void mm256_stream_ps(void* mem_addr, v256 a)
		{
		}

		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x63438E0", Offset = "0x63428E0", VA = "0x63438E0")]
		[DebuggerStepThrough]
		public static v256 mm256_rcp_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x6343940", Offset = "0x6342940", VA = "0x6343940")]
		[DebuggerStepThrough]
		public static v256 mm256_rsqrt_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B38")]
		[Address(RVA = "0x6343D40", Offset = "0x6342D40", VA = "0x6343D40")]
		[DebuggerStepThrough]
		public static v256 mm256_sqrt_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x6343D90", Offset = "0x6342D90", VA = "0x6343D90")]
		[DebuggerStepThrough]
		public static v256 mm256_sqrt_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3A")]
		[Address(RVA = "0x6344130", Offset = "0x6343130", VA = "0x6344130")]
		[DebuggerStepThrough]
		public static v256 mm256_round_pd(v256 a, int rounding)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x6344190", Offset = "0x6343190", VA = "0x6344190")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_ceil_pd(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x63441F0", Offset = "0x63431F0", VA = "0x63441F0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_floor_pd(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x6344250", Offset = "0x6343250", VA = "0x6344250")]
		[DebuggerStepThrough]
		public static v256 mm256_round_ps(v256 a, int rounding)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x63442B0", Offset = "0x63432B0", VA = "0x63442B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_ceil_ps(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x6344310", Offset = "0x6343310", VA = "0x6344310")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_floor_ps(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B40")]
		[Address(RVA = "0x6344370", Offset = "0x6343370", VA = "0x6344370")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x63443D0", Offset = "0x63433D0", VA = "0x63443D0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B42")]
		[Address(RVA = "0x6344430", Offset = "0x6343430", VA = "0x6344430")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_unpackhi_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x63444B0", Offset = "0x63434B0", VA = "0x63444B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_unpacklo_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x6344540", Offset = "0x6343540", VA = "0x6344540")]
		[DebuggerStepThrough]
		public static int mm256_testz_si256(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x6344580", Offset = "0x6343580", VA = "0x6344580")]
		[DebuggerStepThrough]
		public static int mm256_testc_si256(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x63445C0", Offset = "0x63435C0", VA = "0x63445C0")]
		[DebuggerStepThrough]
		public static int mm256_testnzc_si256(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x63446A0", Offset = "0x63436A0", VA = "0x63446A0")]
		[DebuggerStepThrough]
		public static int mm256_testz_pd(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x63446E0", Offset = "0x63436E0", VA = "0x63446E0")]
		[DebuggerStepThrough]
		public static int mm256_testc_pd(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x6344730", Offset = "0x6343730", VA = "0x6344730")]
		[DebuggerStepThrough]
		public static int mm256_testnzc_pd(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x6344810", Offset = "0x6343810", VA = "0x6344810")]
		[DebuggerStepThrough]
		public static int testz_pd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4B")]
		[Address(RVA = "0x6344840", Offset = "0x6343840", VA = "0x6344840")]
		[DebuggerStepThrough]
		public static int testc_pd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4C")]
		[Address(RVA = "0x6344880", Offset = "0x6343880", VA = "0x6344880")]
		[DebuggerStepThrough]
		public static int testnzc_pd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4D")]
		[Address(RVA = "0x63448F0", Offset = "0x63438F0", VA = "0x63448F0")]
		[DebuggerStepThrough]
		public static int mm256_testz_ps(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4E")]
		[Address(RVA = "0x6344950", Offset = "0x6343950", VA = "0x6344950")]
		[DebuggerStepThrough]
		public static int mm256_testc_ps(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x63449C0", Offset = "0x63439C0", VA = "0x63449C0")]
		[DebuggerStepThrough]
		public static int mm256_testnzc_ps(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B50")]
		[Address(RVA = "0x6344B00", Offset = "0x6343B00", VA = "0x6344B00")]
		[DebuggerStepThrough]
		public static int testz_ps(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B51")]
		[Address(RVA = "0x6344B50", Offset = "0x6343B50", VA = "0x6344B50")]
		[DebuggerStepThrough]
		public static int testc_ps(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B52")]
		[Address(RVA = "0x6344BA0", Offset = "0x6343BA0", VA = "0x6344BA0")]
		[DebuggerStepThrough]
		public static int testnzc_ps(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x6344C50", Offset = "0x6343C50", VA = "0x6344C50")]
		[DebuggerStepThrough]
		public static int mm256_movemask_pd(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x6344C80", Offset = "0x6343C80", VA = "0x6344C80")]
		[DebuggerStepThrough]
		public static int mm256_movemask_ps(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x6344D10", Offset = "0x6343D10", VA = "0x6344D10")]
		[DebuggerStepThrough]
		public static v256 mm256_setzero_pd()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B56")]
		[Address(RVA = "0x6344D20", Offset = "0x6343D20", VA = "0x6344D20")]
		[DebuggerStepThrough]
		public static v256 mm256_setzero_ps()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B57")]
		[Address(RVA = "0x6344D30", Offset = "0x6343D30", VA = "0x6344D30")]
		[DebuggerStepThrough]
		public static v256 mm256_setzero_si256()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B58")]
		[Address(RVA = "0x6344D40", Offset = "0x6343D40", VA = "0x6344D40")]
		[DebuggerStepThrough]
		public static v256 mm256_set_pd(double d, double c, double b, double a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B59")]
		[Address(RVA = "0x6344D60", Offset = "0x6343D60", VA = "0x6344D60")]
		[DebuggerStepThrough]
		public static v256 mm256_set_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5A")]
		[Address(RVA = "0x6344D90", Offset = "0x6343D90", VA = "0x6344D90")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi8(byte e31_, byte e30_, byte e29_, byte e28_, byte e27_, byte e26_, byte e25_, byte e24_, byte e23_, byte e22_, byte e21_, byte e20_, byte e19_, byte e18_, byte e17_, byte e16_, byte e15_, byte e14_, byte e13_, byte e12_, byte e11_, byte e10_, byte e9_, byte e8_, byte e7_, byte e6_, byte e5_, byte e4_, byte e3_, byte e2_, byte e1_, byte e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x6344EC0", Offset = "0x6343EC0", VA = "0x6344EC0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi16(short e15_, short e14_, short e13_, short e12_, short e11_, short e10_, short e9_, short e8_, short e7_, short e6_, short e5_, short e4_, short e3_, short e2_, short e1_, short e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x6344F40", Offset = "0x6343F40", VA = "0x6344F40")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x6344F70", Offset = "0x6343F70", VA = "0x6344F70")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi64x(long e3, long e2, long e1, long e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x6344F90", Offset = "0x6343F90", VA = "0x6344F90")]
		[DebuggerStepThrough]
		public static v256 mm256_set_m128d(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x6344FB0", Offset = "0x6343FB0", VA = "0x6344FB0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_m128i(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x6344FD0", Offset = "0x6343FD0", VA = "0x6344FD0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_pd(double d, double c, double b, double a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x6344FF0", Offset = "0x6343FF0", VA = "0x6344FF0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x6345020", Offset = "0x6344020", VA = "0x6345020")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi8(byte e31_, byte e30_, byte e29_, byte e28_, byte e27_, byte e26_, byte e25_, byte e24_, byte e23_, byte e22_, byte e21_, byte e20_, byte e19_, byte e18_, byte e17_, byte e16_, byte e15_, byte e14_, byte e13_, byte e12_, byte e11_, byte e10_, byte e9_, byte e8_, byte e7_, byte e6_, byte e5_, byte e4_, byte e3_, byte e2_, byte e1_, byte e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x6345140", Offset = "0x6344140", VA = "0x6345140")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi16(short e15_, short e14_, short e13_, short e12_, short e11_, short e10_, short e9_, short e8_, short e7_, short e6_, short e5_, short e4_, short e3_, short e2_, short e1_, short e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x63451C0", Offset = "0x63441C0", VA = "0x63451C0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B65")]
		[Address(RVA = "0x63451F0", Offset = "0x63441F0", VA = "0x63451F0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi64x(long e3, long e2, long e1, long e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B66")]
		[Address(RVA = "0x6345210", Offset = "0x6344210", VA = "0x6345210")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_m128(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B67")]
		[Address(RVA = "0x6345230", Offset = "0x6344230", VA = "0x6345230")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_m128d(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B68")]
		[Address(RVA = "0x6345250", Offset = "0x6344250", VA = "0x6345250")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_m128i(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x6345270", Offset = "0x6344270", VA = "0x6345270")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_pd(double a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x6345290", Offset = "0x6344290", VA = "0x6345290")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_ps(float a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x63452A0", Offset = "0x63442A0", VA = "0x63452A0")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi8(byte a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x63452C0", Offset = "0x63442C0", VA = "0x63452C0")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi16(short a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x63452E0", Offset = "0x63442E0", VA = "0x63452E0")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi32(int a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x6345300", Offset = "0x6344300", VA = "0x6345300")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi64x(long a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x6345320", Offset = "0x6344320", VA = "0x6345320")]
		[DebuggerStepThrough]
		public static v256 mm256_castpd_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x6345340", Offset = "0x6344340", VA = "0x6345340")]
		[DebuggerStepThrough]
		public static v256 mm256_castps_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B71")]
		[Address(RVA = "0x6345360", Offset = "0x6344360", VA = "0x6345360")]
		[DebuggerStepThrough]
		public static v256 mm256_castps_si256(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B72")]
		[Address(RVA = "0x6345380", Offset = "0x6344380", VA = "0x6345380")]
		[DebuggerStepThrough]
		public static v256 mm256_castpd_si256(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B73")]
		[Address(RVA = "0x63453A0", Offset = "0x63443A0", VA = "0x63453A0")]
		[DebuggerStepThrough]
		public static v256 mm256_castsi256_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B74")]
		[Address(RVA = "0x63453C0", Offset = "0x63443C0", VA = "0x63453C0")]
		[DebuggerStepThrough]
		public static v256 mm256_castsi256_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B75")]
		[Address(RVA = "0x63453E0", Offset = "0x63443E0", VA = "0x63453E0")]
		[DebuggerStepThrough]
		public static v128 mm256_castps256_ps128(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B76")]
		[Address(RVA = "0x63453F0", Offset = "0x63443F0", VA = "0x63453F0")]
		[DebuggerStepThrough]
		public static v128 mm256_castpd256_pd128(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B77")]
		[Address(RVA = "0x6345400", Offset = "0x6344400", VA = "0x6345400")]
		[DebuggerStepThrough]
		public static v128 mm256_castsi256_si128(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B78")]
		[Address(RVA = "0x6345410", Offset = "0x6344410", VA = "0x6345410")]
		[DebuggerStepThrough]
		public static v256 mm256_castps128_ps256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x6345440", Offset = "0x6344440", VA = "0x6345440")]
		[DebuggerStepThrough]
		public static v256 mm256_castpd128_pd256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x6345460", Offset = "0x6344460", VA = "0x6345460")]
		[DebuggerStepThrough]
		public static v256 mm256_castsi128_si256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x6345480", Offset = "0x6344480", VA = "0x6345480")]
		[DebuggerStepThrough]
		public static v128 undefined_ps()
		{
			return default(v128);
		}

		[Token(Token = "0x6000B7C")]
		[Address(RVA = "0x6345490", Offset = "0x6344490", VA = "0x6345490")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v128 undefined_pd()
		{
			return default(v128);
		}

		[Token(Token = "0x6000B7D")]
		[Address(RVA = "0x63454A0", Offset = "0x63444A0", VA = "0x63454A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v128 undefined_si128()
		{
			return default(v128);
		}

		[Token(Token = "0x6000B7E")]
		[Address(RVA = "0x63454B0", Offset = "0x63444B0", VA = "0x63454B0")]
		[DebuggerStepThrough]
		public static v256 mm256_undefined_ps()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B7F")]
		[Address(RVA = "0x63454C0", Offset = "0x63444C0", VA = "0x63454C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_undefined_pd()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B80")]
		[Address(RVA = "0x63454D0", Offset = "0x63444D0", VA = "0x63454D0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_undefined_si256()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x63454E0", Offset = "0x63444E0", VA = "0x63454E0")]
		[DebuggerStepThrough]
		public static v256 mm256_zextps128_ps256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x6345500", Offset = "0x6344500", VA = "0x6345500")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_zextpd128_pd256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x6345520", Offset = "0x6344520", VA = "0x6345520")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_zextsi128_si256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x6345540", Offset = "0x6344540", VA = "0x6345540")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi8(v256 a, int i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B85")]
		[Address(RVA = "0x6345580", Offset = "0x6344580", VA = "0x6345580")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi16(v256 a, int i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x63455C0", Offset = "0x63445C0", VA = "0x63455C0")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi32(v256 a, int i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x63455F0", Offset = "0x63445F0", VA = "0x63455F0")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi64(v256 a, long i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x6345630", Offset = "0x6344630", VA = "0x6345630")]
		[DebuggerStepThrough]
		public static int mm256_extract_epi32(v256 a, int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x6345640", Offset = "0x6344640", VA = "0x6345640")]
		[DebuggerStepThrough]
		public static long mm256_extract_epi64(v256 a, int index)
		{
			return default(long);
		}
	}

	[Token(Token = "0x200003D")]
	public static class Avx2
	{
		[Token(Token = "0x17000042")]
		public static bool IsAvx2Supported
		{
			[Token(Token = "0x6000B8A")]
			[Address(RVA = "0x6345650", Offset = "0x6344650", VA = "0x6345650")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x6345660", Offset = "0x6344660", VA = "0x6345660")]
		[DebuggerStepThrough]
		public static int mm256_movemask_epi8(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x6345830", Offset = "0x6344830", VA = "0x6345830")]
		[DebuggerStepThrough]
		public static int mm256_extract_epi8(v256 a, int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x6345840", Offset = "0x6344840", VA = "0x6345840")]
		[DebuggerStepThrough]
		public static int mm256_extract_epi16(v256 a, int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x6345850", Offset = "0x6344850", VA = "0x6345850")]
		[DebuggerStepThrough]
		public static double mm256_cvtsd_f64(v256 a)
		{
			return default(double);
		}

		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x6345860", Offset = "0x6344860", VA = "0x6345860")]
		[DebuggerStepThrough]
		public static int mm256_cvtsi256_si32(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x6345870", Offset = "0x6344870", VA = "0x6345870")]
		[DebuggerStepThrough]
		public static long mm256_cvtsi256_si64(v256 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x6345880", Offset = "0x6344880", VA = "0x6345880")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B92")]
		[Address(RVA = "0x63458E0", Offset = "0x63448E0", VA = "0x63458E0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x6345940", Offset = "0x6344940", VA = "0x6345940")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x63459A0", Offset = "0x63449A0", VA = "0x63459A0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x6345A00", Offset = "0x6344A00", VA = "0x6345A00")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x6345A60", Offset = "0x6344A60", VA = "0x6345A60")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x6345AC0", Offset = "0x6344AC0", VA = "0x6345AC0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x6345B20", Offset = "0x6344B20", VA = "0x6345B20")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x6345BE0", Offset = "0x6344BE0", VA = "0x6345BE0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x6345C40", Offset = "0x6344C40", VA = "0x6345C40")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x6345CA0", Offset = "0x6344CA0", VA = "0x6345CA0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x6345D00", Offset = "0x6344D00", VA = "0x6345D00")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x6345D60", Offset = "0x6344D60", VA = "0x6345D60")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x6345DC0", Offset = "0x6344DC0", VA = "0x6345DC0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epu32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x6345E20", Offset = "0x6344E20", VA = "0x6345E20")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x6345E80", Offset = "0x6344E80", VA = "0x6345E80")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x6345EE0", Offset = "0x6344EE0", VA = "0x6345EE0")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x6345F40", Offset = "0x6344F40", VA = "0x6345F40")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA3")]
		[Address(RVA = "0x6345FA0", Offset = "0x6344FA0", VA = "0x6345FA0")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x6346000", Offset = "0x6345000", VA = "0x6346000")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epu32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x6346060", Offset = "0x6345060", VA = "0x6346060")]
		[DebuggerStepThrough]
		public static v256 mm256_and_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x63460C0", Offset = "0x63450C0", VA = "0x63460C0")]
		[DebuggerStepThrough]
		public static v256 mm256_andnot_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x6346120", Offset = "0x6345120", VA = "0x6346120")]
		[DebuggerStepThrough]
		public static v256 mm256_or_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x6346180", Offset = "0x6345180", VA = "0x6346180")]
		[DebuggerStepThrough]
		public static v256 mm256_xor_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x63461E0", Offset = "0x63451E0", VA = "0x63461E0")]
		[DebuggerStepThrough]
		public static v256 mm256_abs_epi8(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x6346230", Offset = "0x6345230", VA = "0x6346230")]
		[DebuggerStepThrough]
		public static v256 mm256_abs_epi16(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x6346280", Offset = "0x6345280", VA = "0x6346280")]
		[DebuggerStepThrough]
		public static v256 mm256_abs_epi32(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x63462D0", Offset = "0x63452D0", VA = "0x63462D0")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x6346330", Offset = "0x6345330", VA = "0x6346330")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAE")]
		[Address(RVA = "0x6346390", Offset = "0x6345390", VA = "0x6346390")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x63463F0", Offset = "0x63453F0", VA = "0x63463F0")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x6346450", Offset = "0x6345450", VA = "0x6346450")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x63464B0", Offset = "0x63454B0", VA = "0x63464B0")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB2")]
		[Address(RVA = "0x6346510", Offset = "0x6345510", VA = "0x6346510")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x6346570", Offset = "0x6345570", VA = "0x6346570")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x63465D0", Offset = "0x63455D0", VA = "0x63465D0")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x6346630", Offset = "0x6345630", VA = "0x6346630")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x6346690", Offset = "0x6345690", VA = "0x6346690")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x63466F0", Offset = "0x63456F0", VA = "0x63466F0")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x6346750", Offset = "0x6345750", VA = "0x6346750")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x63467B0", Offset = "0x63457B0", VA = "0x63467B0")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x6346810", Offset = "0x6345810", VA = "0x6346810")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x6346870", Offset = "0x6345870", VA = "0x6346870")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x63468D0", Offset = "0x63458D0", VA = "0x63468D0")]
		[DebuggerStepThrough]
		public static v256 mm256_avg_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x6346930", Offset = "0x6345930", VA = "0x6346930")]
		[DebuggerStepThrough]
		public static v256 mm256_avg_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x6346990", Offset = "0x6345990", VA = "0x6346990")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x63469F0", Offset = "0x63459F0", VA = "0x63469F0")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x6346A50", Offset = "0x6345A50", VA = "0x6346A50")]
		[DebuggerStepThrough]
		public static v256 mm256_hadds_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x6346AB0", Offset = "0x6345AB0", VA = "0x6346AB0")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x6346B10", Offset = "0x6345B10", VA = "0x6346B10")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x6346B70", Offset = "0x6345B70", VA = "0x6346B70")]
		[DebuggerStepThrough]
		public static v256 mm256_hsubs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x6346BD0", Offset = "0x6345BD0", VA = "0x6346BD0")]
		[DebuggerStepThrough]
		public static v256 mm256_madd_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x6346C30", Offset = "0x6345C30", VA = "0x6346C30")]
		[DebuggerStepThrough]
		public static v256 mm256_maddubs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x6346C90", Offset = "0x6345C90", VA = "0x6346C90")]
		[DebuggerStepThrough]
		public static v256 mm256_mulhi_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC7")]
		[Address(RVA = "0x6346CF0", Offset = "0x6345CF0", VA = "0x6346CF0")]
		[DebuggerStepThrough]
		public static v256 mm256_mulhi_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x6346D50", Offset = "0x6345D50", VA = "0x6346D50")]
		[DebuggerStepThrough]
		public static v256 mm256_mullo_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC9")]
		[Address(RVA = "0x6346DB0", Offset = "0x6345DB0", VA = "0x6346DB0")]
		[DebuggerStepThrough]
		public static v256 mm256_mullo_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x6346E10", Offset = "0x6345E10", VA = "0x6346E10")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_epu32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x6346E70", Offset = "0x6345E70", VA = "0x6346E70")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x6346ED0", Offset = "0x6345ED0", VA = "0x6346ED0")]
		[DebuggerStepThrough]
		public static v256 mm256_sign_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x6346F30", Offset = "0x6345F30", VA = "0x6346F30")]
		[DebuggerStepThrough]
		public static v256 mm256_sign_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x6346F90", Offset = "0x6345F90", VA = "0x6346F90")]
		[DebuggerStepThrough]
		public static v256 mm256_sign_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x6346FF0", Offset = "0x6345FF0", VA = "0x6346FF0")]
		[DebuggerStepThrough]
		public static v256 mm256_mulhrs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD0")]
		[Address(RVA = "0x6347050", Offset = "0x6346050", VA = "0x6347050")]
		[DebuggerStepThrough]
		public static v256 mm256_sad_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x63470B0", Offset = "0x63460B0", VA = "0x63470B0")]
		[DebuggerStepThrough]
		public static v256 mm256_mpsadbw_epu8(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x6347130", Offset = "0x6346130", VA = "0x6347130")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_si256(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x6347190", Offset = "0x6346190", VA = "0x6347190")]
		[DebuggerStepThrough]
		public static v256 mm256_bslli_epi128(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x6347200", Offset = "0x6346200", VA = "0x6347200")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_si256(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x6347260", Offset = "0x6346260", VA = "0x6347260")]
		[DebuggerStepThrough]
		public static v256 mm256_bsrli_epi128(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x63472D0", Offset = "0x63462D0", VA = "0x63472D0")]
		[DebuggerStepThrough]
		public static v256 mm256_sll_epi16(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD7")]
		[Address(RVA = "0x6347340", Offset = "0x6346340", VA = "0x6347340")]
		[DebuggerStepThrough]
		public static v256 mm256_sll_epi32(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x63473B0", Offset = "0x63463B0", VA = "0x63473B0")]
		[DebuggerStepThrough]
		public static v256 mm256_sll_epi64(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x6347420", Offset = "0x6346420", VA = "0x6347420")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x6347480", Offset = "0x6346480", VA = "0x6347480")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x63474E0", Offset = "0x63464E0", VA = "0x63474E0")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_epi64(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x6347540", Offset = "0x6346540", VA = "0x6347540")]
		[DebuggerStepThrough]
		public static v256 mm256_sllv_epi32(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDD")]
		[Address(RVA = "0x63476E0", Offset = "0x63466E0", VA = "0x63476E0")]
		[DebuggerStepThrough]
		public static v256 mm256_sllv_epi64(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x6347660", Offset = "0x6346660", VA = "0x6347660")]
		[DebuggerStepThrough]
		public static v128 sllv_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x63477B0", Offset = "0x63467B0", VA = "0x63477B0")]
		[DebuggerStepThrough]
		public static v128 sllv_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BE0")]
		[Address(RVA = "0x6347810", Offset = "0x6346810", VA = "0x6347810")]
		[DebuggerStepThrough]
		public static v256 mm256_sra_epi16(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE1")]
		[Address(RVA = "0x6347880", Offset = "0x6346880", VA = "0x6347880")]
		[DebuggerStepThrough]
		public static v256 mm256_sra_epi32(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE2")]
		[Address(RVA = "0x63478F0", Offset = "0x63468F0", VA = "0x63478F0")]
		[DebuggerStepThrough]
		public static v256 mm256_srai_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x6347950", Offset = "0x6346950", VA = "0x6347950")]
		[DebuggerStepThrough]
		public static v256 mm256_srai_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x63479B0", Offset = "0x63469B0", VA = "0x63479B0")]
		[DebuggerStepThrough]
		public static v256 mm256_srav_epi32(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE5")]
		[Address(RVA = "0x6347A10", Offset = "0x6346A10", VA = "0x6347A10")]
		[DebuggerStepThrough]
		public static v128 srav_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x6347B80", Offset = "0x6346B80", VA = "0x6347B80")]
		[DebuggerStepThrough]
		public static v256 mm256_srl_epi16(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x6347BF0", Offset = "0x6346BF0", VA = "0x6347BF0")]
		[DebuggerStepThrough]
		public static v256 mm256_srl_epi32(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x6347C60", Offset = "0x6346C60", VA = "0x6347C60")]
		[DebuggerStepThrough]
		public static v256 mm256_srl_epi64(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x6347CD0", Offset = "0x6346CD0", VA = "0x6347CD0")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x6347D30", Offset = "0x6346D30", VA = "0x6347D30")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x6347D90", Offset = "0x6346D90", VA = "0x6347D90")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_epi64(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x6347DF0", Offset = "0x6346DF0", VA = "0x6347DF0")]
		[DebuggerStepThrough]
		public static v256 mm256_srlv_epi32(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BED")]
		[Address(RVA = "0x6347F90", Offset = "0x6346F90", VA = "0x6347F90")]
		[DebuggerStepThrough]
		public static v256 mm256_srlv_epi64(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x6347F10", Offset = "0x6346F10", VA = "0x6347F10")]
		[DebuggerStepThrough]
		public static v128 srlv_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BEF")]
		[Address(RVA = "0x6348060", Offset = "0x6347060", VA = "0x6348060")]
		[DebuggerStepThrough]
		public static v128 srlv_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x63480C0", Offset = "0x63470C0", VA = "0x63480C0")]
		[DebuggerStepThrough]
		public static v128 blend_epi32(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0x63480D0", Offset = "0x63470D0", VA = "0x63480D0")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_epi32(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x6348170", Offset = "0x6347170", VA = "0x6348170")]
		[DebuggerStepThrough]
		public static v256 mm256_alignr_epi8(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x63481E0", Offset = "0x63471E0", VA = "0x63481E0")]
		[DebuggerStepThrough]
		public static v256 mm256_blendv_epi8(v256 a, v256 b, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x6348270", Offset = "0x6347270", VA = "0x6348270")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_epi16(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x63482E0", Offset = "0x63472E0", VA = "0x63482E0")]
		[DebuggerStepThrough]
		public static v256 mm256_packs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x6348340", Offset = "0x6347340", VA = "0x6348340")]
		[DebuggerStepThrough]
		public static v256 mm256_packs_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x63483A0", Offset = "0x63473A0", VA = "0x63483A0")]
		[DebuggerStepThrough]
		public static v256 mm256_packus_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x6348400", Offset = "0x6347400", VA = "0x6348400")]
		[DebuggerStepThrough]
		public static v256 mm256_packus_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x6348460", Offset = "0x6347460", VA = "0x6348460")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x63484C0", Offset = "0x63474C0", VA = "0x63484C0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x6348520", Offset = "0x6347520", VA = "0x6348520")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFC")]
		[Address(RVA = "0x6348580", Offset = "0x6347580", VA = "0x6348580")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFD")]
		[Address(RVA = "0x63485E0", Offset = "0x63475E0", VA = "0x63485E0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x6348640", Offset = "0x6347640", VA = "0x6348640")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x63486A0", Offset = "0x63476A0", VA = "0x63486A0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C00")]
		[Address(RVA = "0x6348700", Offset = "0x6347700", VA = "0x6348700")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C01")]
		[Address(RVA = "0x6348760", Offset = "0x6347760", VA = "0x6348760")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C02")]
		[Address(RVA = "0x63487C0", Offset = "0x63477C0", VA = "0x63487C0")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x6348820", Offset = "0x6347820", VA = "0x6348820")]
		[DebuggerStepThrough]
		public static v256 mm256_shufflehi_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C04")]
		[Address(RVA = "0x6348880", Offset = "0x6347880", VA = "0x6348880")]
		[DebuggerStepThrough]
		public static v256 mm256_shufflelo_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C05")]
		[Address(RVA = "0x63488E0", Offset = "0x63478E0", VA = "0x63488E0")]
		[DebuggerStepThrough]
		public static v128 mm256_extracti128_si256(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x6348910", Offset = "0x6347910", VA = "0x6348910")]
		[DebuggerStepThrough]
		public static v256 mm256_inserti128_si256(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x6348950", Offset = "0x6347950", VA = "0x6348950")]
		[DebuggerStepThrough]
		public static v128 broadcastss_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x6348960", Offset = "0x6347960", VA = "0x6348960")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastss_ps(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x6348980", Offset = "0x6347980", VA = "0x6348980")]
		[DebuggerStepThrough]
		public static v128 broadcastsd_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0A")]
		[Address(RVA = "0x6348990", Offset = "0x6347990", VA = "0x6348990")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastsd_pd(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x63489B0", Offset = "0x63479B0", VA = "0x63489B0")]
		[DebuggerStepThrough]
		public static v128 broadcastb_epi8(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0C")]
		[Address(RVA = "0x63489D0", Offset = "0x63479D0", VA = "0x63489D0")]
		[DebuggerStepThrough]
		public static v128 broadcastw_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0D")]
		[Address(RVA = "0x63489F0", Offset = "0x63479F0", VA = "0x63489F0")]
		[DebuggerStepThrough]
		public static v128 broadcastd_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0E")]
		[Address(RVA = "0x6348A00", Offset = "0x6347A00", VA = "0x6348A00")]
		[DebuggerStepThrough]
		public static v128 broadcastq_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0F")]
		[Address(RVA = "0x6348A10", Offset = "0x6347A10", VA = "0x6348A10")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastb_epi8(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C10")]
		[Address(RVA = "0x6348A30", Offset = "0x6347A30", VA = "0x6348A30")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastw_epi16(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x6348A50", Offset = "0x6347A50", VA = "0x6348A50")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastd_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x6348A70", Offset = "0x6347A70", VA = "0x6348A70")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastq_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x6348A90", Offset = "0x6347A90", VA = "0x6348A90")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastsi128_si256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x6348AB0", Offset = "0x6347AB0", VA = "0x6348AB0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi8_epi16(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C15")]
		[Address(RVA = "0x6348BB0", Offset = "0x6347BB0", VA = "0x6348BB0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi8_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C16")]
		[Address(RVA = "0x6348C50", Offset = "0x6347C50", VA = "0x6348C50")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi8_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x6348CC0", Offset = "0x6347CC0", VA = "0x6348CC0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi16_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x6348D60", Offset = "0x6347D60", VA = "0x6348D60")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi16_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x6348DD0", Offset = "0x6347DD0", VA = "0x6348DD0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi32_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x6348E30", Offset = "0x6347E30", VA = "0x6348E30")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu8_epi16(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x6348F30", Offset = "0x6347F30", VA = "0x6348F30")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu8_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x6348FD0", Offset = "0x6347FD0", VA = "0x6348FD0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu8_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x6349030", Offset = "0x6348030", VA = "0x6349030")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu16_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x63490D0", Offset = "0x63480D0", VA = "0x63490D0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu16_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x6349130", Offset = "0x6348130", VA = "0x6349130")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu32_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x6349190", Offset = "0x6348190", VA = "0x6349190")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_epi32(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x6349210", Offset = "0x6348210", VA = "0x6349210")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_epi64(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x6349260", Offset = "0x6348260", VA = "0x6349260")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_epi32(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x63492C0", Offset = "0x63482C0", VA = "0x63492C0")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_epi64(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x6349300", Offset = "0x6348300", VA = "0x6349300")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_epi32(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x63493E0", Offset = "0x63483E0", VA = "0x63493E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_epi64(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x6349470", Offset = "0x6348470", VA = "0x6349470")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_epi32(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x6349520", Offset = "0x6348520", VA = "0x6349520")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_epi64(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x6349580", Offset = "0x6348580", VA = "0x6349580")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar8x32_epi32(v256 a, v256 idx)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x6349630", Offset = "0x6348630", VA = "0x6349630")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar8x32_ps(v256 a, v256 idx)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x6349710", Offset = "0x6348710", VA = "0x6349710")]
		[DebuggerStepThrough]
		public static v256 mm256_permute4x64_epi64(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x6349790", Offset = "0x6348790", VA = "0x6349790")]
		[DebuggerStepThrough]
		public static v256 mm256_permute4x64_pd(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x6349820", Offset = "0x6348820", VA = "0x6349820")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2x128_si256(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x63498C0", Offset = "0x63488C0", VA = "0x63498C0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_stream_load_si256(void* mem_addr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2E")]
		private unsafe static void EmulatedGather<T, U>(T* dptr, void* base_addr, long* indexPtr, int scale, int n, U* mask) where T : struct where U : struct, IComparable<U>
		{
		}

		[Token(Token = "0x6000C2F")]
		private unsafe static void EmulatedGather<T, U>(T* dptr, void* base_addr, int* indexPtr, int scale, int n, U* mask) where T : struct where U : struct, IComparable<U>
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x63498E0", Offset = "0x63488E0", VA = "0x63498E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_epi32(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x6349970", Offset = "0x6348970", VA = "0x6349970")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_pd(void* base_addr, v128 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C32")]
		[Address(RVA = "0x6349A00", Offset = "0x6348A00", VA = "0x6349A00")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_ps(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x6349A90", Offset = "0x6348A90", VA = "0x6349A90")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i64gather_pd(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C34")]
		[Address(RVA = "0x6349B20", Offset = "0x6348B20", VA = "0x6349B20")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_i64gather_ps(void* base_addr, v256 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x6349BA0", Offset = "0x6348BA0", VA = "0x6349BA0")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_pd(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x6349C20", Offset = "0x6348C20", VA = "0x6349C20")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_ps(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C37")]
		[Address(RVA = "0x6349CA0", Offset = "0x6348CA0", VA = "0x6349CA0")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_pd(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C38")]
		[Address(RVA = "0x6349D20", Offset = "0x6348D20", VA = "0x6349D20")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_ps(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C39")]
		[Address(RVA = "0x6349DA0", Offset = "0x6348DA0", VA = "0x6349DA0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_epi64(void* base_addr, v128 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x6349E30", Offset = "0x6348E30", VA = "0x6349E30")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_i64gather_epi32(void* base_addr, v256 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x6349EB0", Offset = "0x6348EB0", VA = "0x6349EB0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i64gather_epi64(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x6349F40", Offset = "0x6348F40", VA = "0x6349F40")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_epi32(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x6349FC0", Offset = "0x6348FC0", VA = "0x6349FC0")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_epi64(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x634A040", Offset = "0x6349040", VA = "0x634A040")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_epi32(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x634A0C0", Offset = "0x63490C0", VA = "0x634A0C0")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_epi64(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x634A140", Offset = "0x6349140", VA = "0x634A140")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_pd(v256 src, void* base_addr, v128 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x634A1F0", Offset = "0x63491F0", VA = "0x634A1F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_ps(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x634A2A0", Offset = "0x63492A0", VA = "0x634A2A0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i64gather_pd(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x634A350", Offset = "0x6349350", VA = "0x634A350")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_mask_i64gather_ps(v128 src, void* base_addr, v256 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x634A3E0", Offset = "0x63493E0", VA = "0x634A3E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_epi32(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x634A490", Offset = "0x6349490", VA = "0x634A490")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_epi64(v256 src, void* base_addr, v128 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x634A540", Offset = "0x6349540", VA = "0x634A540")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i64gather_epi64(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x634A5F0", Offset = "0x63495F0", VA = "0x634A5F0")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_mask_i64gather_epi32(v128 src, void* base_addr, v256 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x634A680", Offset = "0x6349680", VA = "0x634A680")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_pd(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x634A710", Offset = "0x6349710", VA = "0x634A710")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_ps(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x634A7A0", Offset = "0x63497A0", VA = "0x634A7A0")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_pd(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4B")]
		[Address(RVA = "0x634A830", Offset = "0x6349830", VA = "0x634A830")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_ps(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4C")]
		[Address(RVA = "0x634A8C0", Offset = "0x63498C0", VA = "0x634A8C0")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_epi32(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4D")]
		[Address(RVA = "0x634A950", Offset = "0x6349950", VA = "0x634A950")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_epi64(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4E")]
		[Address(RVA = "0x634A9E0", Offset = "0x63499E0", VA = "0x634A9E0")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_epi32(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4F")]
		[Address(RVA = "0x634AA70", Offset = "0x6349A70", VA = "0x634AA70")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_epi64(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}
	}

	[Token(Token = "0x200003E")]
	public static class Bmi1
	{
		[Token(Token = "0x17000043")]
		public static bool IsBmi1Supported
		{
			[Token(Token = "0x6000C50")]
			[Address(RVA = "0x634AB00", Offset = "0x6349B00", VA = "0x634AB00")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C51")]
		[Address(RVA = "0x634AB10", Offset = "0x6349B10", VA = "0x634AB10")]
		[DebuggerStepThrough]
		public static uint andn_u32(uint a, uint b)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C52")]
		[Address(RVA = "0x634AB20", Offset = "0x6349B20", VA = "0x634AB20")]
		[DebuggerStepThrough]
		public static ulong andn_u64(ulong a, ulong b)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C53")]
		[Address(RVA = "0x634AB30", Offset = "0x6349B30", VA = "0x634AB30")]
		[DebuggerStepThrough]
		public static uint bextr_u32(uint a, uint start, uint len)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C54")]
		[Address(RVA = "0x634AB60", Offset = "0x6349B60", VA = "0x634AB60")]
		[DebuggerStepThrough]
		public static ulong bextr_u64(ulong a, uint start, uint len)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C55")]
		[Address(RVA = "0x634AB90", Offset = "0x6349B90", VA = "0x634AB90")]
		[DebuggerStepThrough]
		public static uint bextr2_u32(uint a, uint control)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x634ABC0", Offset = "0x6349BC0", VA = "0x634ABC0")]
		[DebuggerStepThrough]
		public static ulong bextr2_u64(ulong a, ulong control)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x634AC00", Offset = "0x6349C00", VA = "0x634AC00")]
		[DebuggerStepThrough]
		public static uint blsi_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x634AC10", Offset = "0x6349C10", VA = "0x634AC10")]
		[DebuggerStepThrough]
		public static ulong blsi_u64(ulong a)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C59")]
		[Address(RVA = "0x634AC20", Offset = "0x6349C20", VA = "0x634AC20")]
		[DebuggerStepThrough]
		public static uint blsmsk_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C5A")]
		[Address(RVA = "0x634AC30", Offset = "0x6349C30", VA = "0x634AC30")]
		[DebuggerStepThrough]
		public static ulong blsmsk_u64(ulong a)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x634AC40", Offset = "0x6349C40", VA = "0x634AC40")]
		[DebuggerStepThrough]
		public static uint blsr_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x634AC50", Offset = "0x6349C50", VA = "0x634AC50")]
		[DebuggerStepThrough]
		public static ulong blsr_u64(ulong a)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x634AC60", Offset = "0x6349C60", VA = "0x634AC60")]
		[DebuggerStepThrough]
		public static uint tzcnt_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x634ACD0", Offset = "0x6349CD0", VA = "0x634ACD0")]
		[DebuggerStepThrough]
		public static ulong tzcnt_u64(ulong a)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x200003F")]
	public static class Bmi2
	{
		[Token(Token = "0x17000044")]
		public static bool IsBmi2Supported
		{
			[Token(Token = "0x6000C5F")]
			[Address(RVA = "0x634AD70", Offset = "0x6349D70", VA = "0x634AD70")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x634AD80", Offset = "0x6349D80", VA = "0x634AD80")]
		[DebuggerStepThrough]
		public static uint bzhi_u32(uint a, uint index)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x634ADA0", Offset = "0x6349DA0", VA = "0x634ADA0")]
		[DebuggerStepThrough]
		public static ulong bzhi_u64(ulong a, ulong index)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C62")]
		[Address(RVA = "0x634ADD0", Offset = "0x6349DD0", VA = "0x634ADD0")]
		[DebuggerStepThrough]
		public static uint mulx_u32(uint a, uint b, out uint hi)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x634ADF0", Offset = "0x6349DF0", VA = "0x634ADF0")]
		[DebuggerStepThrough]
		public static ulong mulx_u64(ulong a, ulong b, out ulong hi)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x634AE40", Offset = "0x6349E40", VA = "0x634AE40")]
		[DebuggerStepThrough]
		public static uint pdep_u32(uint a, uint mask)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x634AEA0", Offset = "0x6349EA0", VA = "0x634AEA0")]
		[DebuggerStepThrough]
		public static ulong pdep_u64(ulong a, ulong mask)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x634AF00", Offset = "0x6349F00", VA = "0x634AF00")]
		[DebuggerStepThrough]
		public static uint pext_u32(uint a, uint mask)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x634AF60", Offset = "0x6349F60", VA = "0x634AF60")]
		[DebuggerStepThrough]
		public static ulong pext_u64(ulong a, ulong mask)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x2000040")]
	[Flags]
	public enum MXCSRBits
	{
		[Token(Token = "0x400028E")]
		FlushToZero = 0x8000,
		[Token(Token = "0x400028F")]
		RoundingControlMask = 0x6000,
		[Token(Token = "0x4000290")]
		RoundToNearest = 0,
		[Token(Token = "0x4000291")]
		RoundDown = 0x2000,
		[Token(Token = "0x4000292")]
		RoundUp = 0x4000,
		[Token(Token = "0x4000293")]
		RoundTowardZero = RoundingControlMask,
		[Token(Token = "0x4000294")]
		PrecisionMask = 0x1000,
		[Token(Token = "0x4000295")]
		UnderflowMask = 0x800,
		[Token(Token = "0x4000296")]
		OverflowMask = 0x400,
		[Token(Token = "0x4000297")]
		DivideByZeroMask = 0x200,
		[Token(Token = "0x4000298")]
		DenormalOperationMask = 0x100,
		[Token(Token = "0x4000299")]
		InvalidOperationMask = 0x80,
		[Token(Token = "0x400029A")]
		ExceptionMask = PrecisionMask | UnderflowMask | OverflowMask | DivideByZeroMask | DenormalOperationMask | InvalidOperationMask,
		[Token(Token = "0x400029B")]
		DenormalsAreZeroes = 0x40,
		[Token(Token = "0x400029C")]
		PrecisionFlag = 0x20,
		[Token(Token = "0x400029D")]
		UnderflowFlag = 0x10,
		[Token(Token = "0x400029E")]
		OverflowFlag = 8,
		[Token(Token = "0x400029F")]
		DivideByZeroFlag = 4,
		[Token(Token = "0x40002A0")]
		DenormalFlag = 2,
		[Token(Token = "0x40002A1")]
		InvalidOperationFlag = 1,
		[Token(Token = "0x40002A2")]
		FlagMask = PrecisionFlag | UnderflowFlag | OverflowFlag | DivideByZeroFlag | DenormalFlag | InvalidOperationFlag
	}

	[Token(Token = "0x2000041")]
	[Flags]
	public enum RoundingMode
	{
		[Token(Token = "0x40002A4")]
		FROUND_TO_NEAREST_INT = 0,
		[Token(Token = "0x40002A5")]
		FROUND_TO_NEG_INF = 1,
		[Token(Token = "0x40002A6")]
		FROUND_TO_POS_INF = 2,
		[Token(Token = "0x40002A7")]
		FROUND_TO_ZERO = FROUND_TO_NEG_INF | FROUND_TO_POS_INF,
		[Token(Token = "0x40002A8")]
		FROUND_CUR_DIRECTION = 4,
		[Token(Token = "0x40002A9")]
		FROUND_RAISE_EXC = 0,
		[Token(Token = "0x40002AA")]
		FROUND_NO_EXC = 8,
		[Token(Token = "0x40002AB")]
		FROUND_NINT = 0,
		[Token(Token = "0x40002AC")]
		FROUND_FLOOR = FROUND_TO_NEG_INF,
		[Token(Token = "0x40002AD")]
		FROUND_CEIL = FROUND_TO_POS_INF,
		[Token(Token = "0x40002AE")]
		FROUND_TRUNC = FROUND_TO_ZERO,
		[Token(Token = "0x40002AF")]
		FROUND_RINT = FROUND_CUR_DIRECTION,
		[Token(Token = "0x40002B0")]
		FROUND_NEARBYINT = FROUND_CUR_DIRECTION | FROUND_NO_EXC,
		[Token(Token = "0x40002B1")]
		FROUND_NINT_NOEXC = FROUND_NO_EXC,
		[Token(Token = "0x40002B2")]
		FROUND_FLOOR_NOEXC = FROUND_TO_NEG_INF | FROUND_NO_EXC,
		[Token(Token = "0x40002B3")]
		FROUND_CEIL_NOEXC = FROUND_TO_POS_INF | FROUND_NO_EXC,
		[Token(Token = "0x40002B4")]
		FROUND_TRUNC_NOEXC = FROUND_TO_ZERO | FROUND_NO_EXC,
		[Token(Token = "0x40002B5")]
		FROUND_RINT_NOEXC = FROUND_NEARBYINT
	}

	[Token(Token = "0x2000042")]
	internal struct RoundingScope : IDisposable
	{
		[Token(Token = "0x40002B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private MXCSRBits OldBits;

		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x634AFD0", Offset = "0x6349FD0", VA = "0x634AFD0")]
		public RoundingScope(MXCSRBits roundingMode)
		{
		}

		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x634B000", Offset = "0x634A000", VA = "0x634B000", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000043")]
	public static class F16C
	{
		[Token(Token = "0x40002B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly ushort[] BaseTable;

		[Token(Token = "0x40002B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly sbyte[] ShiftTable;

		[Token(Token = "0x17000045")]
		public static bool IsF16CSupported
		{
			[Token(Token = "0x6000C6A")]
			[Address(RVA = "0x634B010", Offset = "0x634A010", VA = "0x634B010")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x634B020", Offset = "0x634A020", VA = "0x634B020")]
		[DebuggerStepThrough]
		private static uint HalfToFloat(ushort h)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x634B0A0", Offset = "0x634A0A0", VA = "0x634B0A0")]
		[DebuggerStepThrough]
		public static v128 cvtph_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C6D")]
		[Address(RVA = "0x634B2D0", Offset = "0x634A2D0", VA = "0x634B2D0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtph_ps(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x634B6F0", Offset = "0x634A6F0", VA = "0x634B6F0")]
		[DebuggerStepThrough]
		private static ushort FloatToHalf(uint f, int rounding)
		{
			return default(ushort);
		}

		[Token(Token = "0x6000C6F")]
		[Address(RVA = "0x634B8D0", Offset = "0x634A8D0", VA = "0x634B8D0")]
		[DebuggerStepThrough]
		public static v128 cvtps_ph(v128 a, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x634BA20", Offset = "0x634AA20", VA = "0x634BA20")]
		[DebuggerStepThrough]
		public static v128 mm256_cvtps_ph(v256 a, int rounding)
		{
			return default(v128);
		}
	}

	[Token(Token = "0x2000044")]
	public static class Fma
	{
		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x2000045")]
		private struct Union
		{
			[Token(Token = "0x40002B9")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public float f;

			[Token(Token = "0x40002BA")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint u;
		}

		[Token(Token = "0x17000046")]
		public static bool IsFmaSupported
		{
			[Token(Token = "0x6000C72")]
			[Address(RVA = "0x634BC80", Offset = "0x634AC80", VA = "0x634BC80")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C73")]
		[Address(RVA = "0x634BC90", Offset = "0x634AC90", VA = "0x634BC90")]
		[DebuggerStepThrough]
		private static float FmaHelper(float a, float b, float c)
		{
			return default(float);
		}

		[Token(Token = "0x6000C74")]
		[Address(RVA = "0x634BCB0", Offset = "0x634ACB0", VA = "0x634BCB0")]
		[DebuggerStepThrough]
		private static float FnmaHelper(float a, float b, float c)
		{
			return default(float);
		}

		[Token(Token = "0x6000C75")]
		[Address(RVA = "0x634BCD0", Offset = "0x634ACD0", VA = "0x634BCD0")]
		[DebuggerStepThrough]
		public static v128 fmadd_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C76")]
		[Address(RVA = "0x634BD20", Offset = "0x634AD20", VA = "0x634BD20")]
		[DebuggerStepThrough]
		public static v256 mm256_fmadd_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C77")]
		[Address(RVA = "0x634BD70", Offset = "0x634AD70", VA = "0x634BD70")]
		[DebuggerStepThrough]
		public static v128 fmadd_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C78")]
		[Address(RVA = "0x634BE20", Offset = "0x634AE20", VA = "0x634BE20")]
		[DebuggerStepThrough]
		public static v256 mm256_fmadd_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C79")]
		[Address(RVA = "0x634BEB0", Offset = "0x634AEB0", VA = "0x634BEB0")]
		[DebuggerStepThrough]
		public static v128 fmadd_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x634BF00", Offset = "0x634AF00", VA = "0x634BF00")]
		[DebuggerStepThrough]
		public static v128 fmadd_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x634BF40", Offset = "0x634AF40", VA = "0x634BF40")]
		[DebuggerStepThrough]
		public static v128 fmaddsub_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x634BF90", Offset = "0x634AF90", VA = "0x634BF90")]
		[DebuggerStepThrough]
		public static v256 mm256_fmaddsub_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x634BFE0", Offset = "0x634AFE0", VA = "0x634BFE0")]
		[DebuggerStepThrough]
		public static v128 fmaddsub_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x634C090", Offset = "0x634B090", VA = "0x634C090")]
		[DebuggerStepThrough]
		public static v256 mm256_fmaddsub_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x634C160", Offset = "0x634B160", VA = "0x634C160")]
		[DebuggerStepThrough]
		public static v128 fmsub_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x634C1B0", Offset = "0x634B1B0", VA = "0x634C1B0")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsub_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x634C200", Offset = "0x634B200", VA = "0x634C200")]
		[DebuggerStepThrough]
		public static v128 fmsub_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x634C2B0", Offset = "0x634B2B0", VA = "0x634C2B0")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsub_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x634C340", Offset = "0x634B340", VA = "0x634C340")]
		[DebuggerStepThrough]
		public static v128 fmsub_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C84")]
		[Address(RVA = "0x634C390", Offset = "0x634B390", VA = "0x634C390")]
		[DebuggerStepThrough]
		public static v128 fmsub_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x634C3E0", Offset = "0x634B3E0", VA = "0x634C3E0")]
		[DebuggerStepThrough]
		public static v128 fmsubadd_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x634C430", Offset = "0x634B430", VA = "0x634C430")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsubadd_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C87")]
		[Address(RVA = "0x634C480", Offset = "0x634B480", VA = "0x634C480")]
		[DebuggerStepThrough]
		public static v128 fmsubadd_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x634C530", Offset = "0x634B530", VA = "0x634C530")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsubadd_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x634C610", Offset = "0x634B610", VA = "0x634C610")]
		[DebuggerStepThrough]
		public static v128 fnmadd_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8A")]
		[Address(RVA = "0x634C660", Offset = "0x634B660", VA = "0x634C660")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmadd_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x634C6B0", Offset = "0x634B6B0", VA = "0x634C6B0")]
		[DebuggerStepThrough]
		public static v128 fnmadd_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x634C760", Offset = "0x634B760", VA = "0x634C760")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmadd_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C8D")]
		[Address(RVA = "0x634C7F0", Offset = "0x634B7F0", VA = "0x634C7F0")]
		[DebuggerStepThrough]
		public static v128 fnmadd_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8E")]
		[Address(RVA = "0x634C840", Offset = "0x634B840", VA = "0x634C840")]
		[DebuggerStepThrough]
		public static v128 fnmadd_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x634C880", Offset = "0x634B880", VA = "0x634C880")]
		[DebuggerStepThrough]
		public static v128 fnmsub_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x634C8D0", Offset = "0x634B8D0", VA = "0x634C8D0")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmsub_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x634C920", Offset = "0x634B920", VA = "0x634C920")]
		[DebuggerStepThrough]
		public static v128 fnmsub_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x634C9E0", Offset = "0x634B9E0", VA = "0x634C9E0")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmsub_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x634CA80", Offset = "0x634BA80", VA = "0x634CA80")]
		[DebuggerStepThrough]
		public static v128 fnmsub_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x634CAD0", Offset = "0x634BAD0", VA = "0x634CAD0")]
		[DebuggerStepThrough]
		public static v128 fnmsub_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}
	}

	[Token(Token = "0x2000046")]
	public static class Popcnt
	{
		[Token(Token = "0x17000047")]
		public static bool IsPopcntSupported
		{
			[Token(Token = "0x6000C95")]
			[Address(RVA = "0x634CB20", Offset = "0x634BB20", VA = "0x634CB20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C96")]
		[Address(RVA = "0x634CB80", Offset = "0x634BB80", VA = "0x634CB80")]
		[DebuggerStepThrough]
		public static int popcnt_u32(uint v)
		{
			return default(int);
		}

		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x634CC60", Offset = "0x634BC60", VA = "0x634CC60")]
		[DebuggerStepThrough]
		public static int popcnt_u64(ulong v)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000047")]
	public static class Sse
	{
		[Token(Token = "0x17000048")]
		public static bool IsSseSupported
		{
			[Token(Token = "0x6000C98")]
			[Address(RVA = "0x633F790", Offset = "0x633E790", VA = "0x633F790")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x634CCC0", Offset = "0x634BCC0", VA = "0x634CCC0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 load_ps(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x63430D0", Offset = "0x63420D0", VA = "0x63430D0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 loadu_ps(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x634CCD0", Offset = "0x634BCD0", VA = "0x634CCD0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void store_ps(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000C9C")]
		[Address(RVA = "0x63433E0", Offset = "0x63423E0", VA = "0x63433E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void storeu_ps(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000C9D")]
		[Address(RVA = "0x634CCE0", Offset = "0x634BCE0", VA = "0x634CCE0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void stream_ps(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000C9E")]
		[Address(RVA = "0x634CCF0", Offset = "0x634BCF0", VA = "0x634CCF0")]
		[DebuggerStepThrough]
		public static v128 cvtsi32_ss(v128 a, int b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x634CD10", Offset = "0x634BD10", VA = "0x634CD10")]
		[DebuggerStepThrough]
		public static v128 cvtsi64_ss(v128 a, long b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x634CD30", Offset = "0x634BD30", VA = "0x634CD30")]
		[DebuggerStepThrough]
		public static v128 add_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x633F840", Offset = "0x633E840", VA = "0x633F840")]
		[DebuggerStepThrough]
		public static v128 add_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x634CD60", Offset = "0x634BD60", VA = "0x634CD60")]
		[DebuggerStepThrough]
		public static v128 sub_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x6340670", Offset = "0x633F670", VA = "0x6340670")]
		[DebuggerStepThrough]
		public static v128 sub_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x634CD90", Offset = "0x634BD90", VA = "0x634CD90")]
		[DebuggerStepThrough]
		public static v128 mul_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA5")]
		[Address(RVA = "0x6340380", Offset = "0x633F380", VA = "0x6340380")]
		[DebuggerStepThrough]
		public static v128 mul_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x634CDC0", Offset = "0x634BDC0", VA = "0x634CDC0")]
		[DebuggerStepThrough]
		public static v128 div_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x633FD30", Offset = "0x633ED30", VA = "0x633FD30")]
		[DebuggerStepThrough]
		public static v128 div_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA8")]
		[Address(RVA = "0x634CDF0", Offset = "0x634BDF0", VA = "0x634CDF0")]
		[DebuggerStepThrough]
		public static v128 sqrt_ss(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA9")]
		[Address(RVA = "0x6344020", Offset = "0x6343020", VA = "0x6344020")]
		[DebuggerStepThrough]
		public static v128 sqrt_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAA")]
		[Address(RVA = "0x634CE70", Offset = "0x634BE70", VA = "0x634CE70")]
		[DebuggerStepThrough]
		public static v128 rcp_ss(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x6343900", Offset = "0x6342900", VA = "0x6343900")]
		[DebuggerStepThrough]
		public static v128 rcp_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x634CEA0", Offset = "0x634BEA0", VA = "0x634CEA0")]
		[DebuggerStepThrough]
		public static v128 rsqrt_ss(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAD")]
		[Address(RVA = "0x6343BF0", Offset = "0x6342BF0", VA = "0x6343BF0")]
		[DebuggerStepThrough]
		public static v128 rsqrt_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAE")]
		[Address(RVA = "0x634CF30", Offset = "0x634BF30", VA = "0x634CF30")]
		[DebuggerStepThrough]
		public static v128 min_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAF")]
		[Address(RVA = "0x6340200", Offset = "0x633F200", VA = "0x6340200")]
		[DebuggerStepThrough]
		public static v128 min_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x634CFB0", Offset = "0x634BFB0", VA = "0x634CFB0")]
		[DebuggerStepThrough]
		public static v128 max_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x6340040", Offset = "0x633F040", VA = "0x6340040")]
		[DebuggerStepThrough]
		public static v128 max_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x633F9E0", Offset = "0x633E9E0", VA = "0x633F9E0")]
		[DebuggerStepThrough]
		public static v128 and_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x633FA70", Offset = "0x633EA70", VA = "0x633FA70")]
		[DebuggerStepThrough]
		public static v128 andnot_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x6340460", Offset = "0x633F460", VA = "0x6340460")]
		[DebuggerStepThrough]
		public static v128 or_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x6340750", Offset = "0x633F750", VA = "0x6340750")]
		[DebuggerStepThrough]
		public static v128 xor_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x634D030", Offset = "0x634C030", VA = "0x634D030")]
		[DebuggerStepThrough]
		public static v128 cmpeq_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB7")]
		[Address(RVA = "0x6342120", Offset = "0x6341120", VA = "0x6342120")]
		[DebuggerStepThrough]
		public static v128 cmpeq_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x634D060", Offset = "0x634C060", VA = "0x634D060")]
		[DebuggerStepThrough]
		public static v128 cmplt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x6342190", Offset = "0x6341190", VA = "0x6342190")]
		[DebuggerStepThrough]
		public static v128 cmplt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x634D090", Offset = "0x634C090", VA = "0x634D090")]
		[DebuggerStepThrough]
		public static v128 cmple_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0x6342210", Offset = "0x6341210", VA = "0x6342210")]
		[DebuggerStepThrough]
		public static v128 cmple_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x634D0C0", Offset = "0x634C0C0", VA = "0x634D0C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpgt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBD")]
		[Address(RVA = "0x6342710", Offset = "0x6341710", VA = "0x6342710")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpgt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x634D0F0", Offset = "0x634C0F0", VA = "0x634D0F0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpge_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBF")]
		[Address(RVA = "0x6342690", Offset = "0x6341690", VA = "0x6342690")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpge_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC0")]
		[Address(RVA = "0x634D120", Offset = "0x634C120", VA = "0x634D120")]
		[DebuggerStepThrough]
		public static v128 cmpneq_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC1")]
		[Address(RVA = "0x6342350", Offset = "0x6341350", VA = "0x6342350")]
		[DebuggerStepThrough]
		public static v128 cmpneq_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC2")]
		[Address(RVA = "0x634D150", Offset = "0x634C150", VA = "0x634D150")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC3")]
		[Address(RVA = "0x63423C0", Offset = "0x63413C0", VA = "0x63423C0")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC4")]
		[Address(RVA = "0x634D180", Offset = "0x634C180", VA = "0x634D180")]
		[DebuggerStepThrough]
		public static v128 cmpnle_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x6342440", Offset = "0x6341440", VA = "0x6342440")]
		[DebuggerStepThrough]
		public static v128 cmpnle_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x634D1B0", Offset = "0x634C1B0", VA = "0x634D1B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpngt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x6342600", Offset = "0x6341600", VA = "0x6342600")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpngt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x634D1E0", Offset = "0x634C1E0", VA = "0x634D1E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpnge_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x6342580", Offset = "0x6341580", VA = "0x6342580")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpnge_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCA")]
		[Address(RVA = "0x634D210", Offset = "0x634C210", VA = "0x634D210")]
		[DebuggerStepThrough]
		public static v128 cmpord_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x63424B0", Offset = "0x63414B0", VA = "0x63424B0")]
		[DebuggerStepThrough]
		public static v128 cmpord_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCC")]
		[Address(RVA = "0x634D250", Offset = "0x634C250", VA = "0x634D250")]
		[DebuggerStepThrough]
		public static v128 cmpunord_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCD")]
		[Address(RVA = "0x6342280", Offset = "0x6341280", VA = "0x6342280")]
		[DebuggerStepThrough]
		public static v128 cmpunord_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCE")]
		[Address(RVA = "0x634D290", Offset = "0x634C290", VA = "0x634D290")]
		[DebuggerStepThrough]
		public static int comieq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CCF")]
		[Address(RVA = "0x634D2B0", Offset = "0x634C2B0", VA = "0x634D2B0")]
		[DebuggerStepThrough]
		public static int comilt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x634D2D0", Offset = "0x634C2D0", VA = "0x634D2D0")]
		[DebuggerStepThrough]
		public static int comile_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD1")]
		[Address(RVA = "0x634D2F0", Offset = "0x634C2F0", VA = "0x634D2F0")]
		[DebuggerStepThrough]
		public static int comigt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD2")]
		[Address(RVA = "0x634D310", Offset = "0x634C310", VA = "0x634D310")]
		[DebuggerStepThrough]
		public static int comige_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD3")]
		[Address(RVA = "0x634D330", Offset = "0x634C330", VA = "0x634D330")]
		[DebuggerStepThrough]
		public static int comineq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD4")]
		[Address(RVA = "0x634D350", Offset = "0x634C350", VA = "0x634D350")]
		[DebuggerStepThrough]
		public static int ucomieq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD5")]
		[Address(RVA = "0x634D370", Offset = "0x634C370", VA = "0x634D370")]
		[DebuggerStepThrough]
		public static int ucomilt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD6")]
		[Address(RVA = "0x634D390", Offset = "0x634C390", VA = "0x634D390")]
		[DebuggerStepThrough]
		public static int ucomile_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD7")]
		[Address(RVA = "0x634D3B0", Offset = "0x634C3B0", VA = "0x634D3B0")]
		[DebuggerStepThrough]
		public static int ucomigt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD8")]
		[Address(RVA = "0x634D3D0", Offset = "0x634C3D0", VA = "0x634D3D0")]
		[DebuggerStepThrough]
		public static int ucomige_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD9")]
		[Address(RVA = "0x634D3F0", Offset = "0x634C3F0", VA = "0x634D3F0")]
		[DebuggerStepThrough]
		public static int ucomineq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDA")]
		[Address(RVA = "0x634D410", Offset = "0x634C410", VA = "0x634D410")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static int cvtss_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDB")]
		[Address(RVA = "0x634D4D0", Offset = "0x634C4D0", VA = "0x634D4D0")]
		[DebuggerStepThrough]
		public static int cvt_ss2si(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDC")]
		[Address(RVA = "0x634D590", Offset = "0x634C590", VA = "0x634D590")]
		[DebuggerStepThrough]
		public static long cvtss_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000CDD")]
		[Address(RVA = "0x634D650", Offset = "0x634C650", VA = "0x634D650")]
		[DebuggerStepThrough]
		public static float cvtss_f32(v128 a)
		{
			return default(float);
		}

		[Token(Token = "0x6000CDE")]
		[Address(RVA = "0x634D660", Offset = "0x634C660", VA = "0x634D660")]
		[DebuggerStepThrough]
		public static int cvttss_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDF")]
		[Address(RVA = "0x634D6A0", Offset = "0x634C6A0", VA = "0x634D6A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static int cvtt_ss2si(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE0")]
		[Address(RVA = "0x634D6E0", Offset = "0x634C6E0", VA = "0x634D6E0")]
		[DebuggerStepThrough]
		public static long cvttss_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x634D720", Offset = "0x634C720", VA = "0x634D720")]
		[DebuggerStepThrough]
		public static v128 set_ss(float a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x634D730", Offset = "0x634C730", VA = "0x634D730")]
		[DebuggerStepThrough]
		public static v128 set1_ps(float a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x634D750", Offset = "0x634C750", VA = "0x634D750")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 set_ps1(float a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x634D770", Offset = "0x634C770", VA = "0x634D770")]
		[DebuggerStepThrough]
		public static v128 set_ps(float e3, float e2, float e1, float e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x634D790", Offset = "0x634C790", VA = "0x634D790")]
		[DebuggerStepThrough]
		public static v128 setr_ps(float e3, float e2, float e1, float e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE6")]
		[Address(RVA = "0x634D7B0", Offset = "0x634C7B0", VA = "0x634D7B0")]
		[DebuggerStepThrough]
		public static v128 move_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x634D7D0", Offset = "0x634C7D0", VA = "0x634D7D0")]
		public static int SHUFFLE(int d, int c, int b, int a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x6340590", Offset = "0x633F590", VA = "0x6340590")]
		[DebuggerStepThrough]
		public static v128 shuffle_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x6344490", Offset = "0x6343490", VA = "0x6344490")]
		[DebuggerStepThrough]
		public static v128 unpackhi_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x6344510", Offset = "0x6343510", VA = "0x6344510")]
		[DebuggerStepThrough]
		public static v128 unpacklo_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x634D7F0", Offset = "0x634C7F0", VA = "0x634D7F0")]
		[DebuggerStepThrough]
		public static v128 movehl_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x634D800", Offset = "0x634C800", VA = "0x634D800")]
		[DebuggerStepThrough]
		public static v128 movelh_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x6344CE0", Offset = "0x6343CE0", VA = "0x6344CE0")]
		[DebuggerStepThrough]
		public static int movemask_ps(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x634D810", Offset = "0x634C810", VA = "0x634D810")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static void TRANSPOSE4_PS(ref v128 row0, ref v128 row1, ref v128 row2, ref v128 row3)
		{
		}

		[Token(Token = "0x6000CEF")]
		[Address(RVA = "0x6345430", Offset = "0x6344430", VA = "0x6345430")]
		[DebuggerStepThrough]
		public static v128 setzero_ps()
		{
			return default(v128);
		}

		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x634D9D0", Offset = "0x634C9D0", VA = "0x634D9D0")]
		[DebuggerStepThrough]
		public unsafe static v128 loadu_si16(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CF1")]
		[Address(RVA = "0x634D9E0", Offset = "0x634C9E0", VA = "0x634D9E0")]
		public unsafe static void storeu_si16(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000CF2")]
		[Address(RVA = "0x634D9F0", Offset = "0x634C9F0", VA = "0x634D9F0")]
		[DebuggerStepThrough]
		public unsafe static v128 loadu_si64(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CF3")]
		[Address(RVA = "0x634DA00", Offset = "0x634CA00", VA = "0x634DA00")]
		[DebuggerStepThrough]
		public unsafe static void storeu_si64(void* mem_addr, v128 a)
		{
		}
	}

	[Token(Token = "0x2000048")]
	public static class Sse2
	{
		[Token(Token = "0x17000049")]
		public static bool IsSse2Supported
		{
			[Token(Token = "0x6000CF4")]
			[Address(RVA = "0x634DA10", Offset = "0x634CA10", VA = "0x634DA10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x634DA20", Offset = "0x634CA20", VA = "0x634DA20")]
		[DebuggerStepThrough]
		public static int SHUFFLE2(int x, int y)
		{
			return default(int);
		}

		[Token(Token = "0x6000CF6")]
		[Address(RVA = "0x634DA30", Offset = "0x634CA30", VA = "0x634DA30")]
		[DebuggerStepThrough]
		public unsafe static void stream_si32(int* mem_addr, int a)
		{
		}

		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0x634DA40", Offset = "0x634CA40", VA = "0x634DA40")]
		[DebuggerStepThrough]
		public unsafe static void stream_si64(long* mem_addr, long a)
		{
		}

		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x634DA50", Offset = "0x634CA50", VA = "0x634DA50")]
		[DebuggerStepThrough]
		public unsafe static void stream_pd(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0x634DA60", Offset = "0x634CA60", VA = "0x634DA60")]
		[DebuggerStepThrough]
		public unsafe static void stream_si128(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000CFA")]
		[Address(RVA = "0x634DA70", Offset = "0x634CA70", VA = "0x634DA70")]
		[DebuggerStepThrough]
		public static v128 add_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFB")]
		[Address(RVA = "0x634DB70", Offset = "0x634CB70", VA = "0x634DB70")]
		[DebuggerStepThrough]
		public static v128 add_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x634DC00", Offset = "0x634CC00", VA = "0x634DC00")]
		[DebuggerStepThrough]
		public static v128 add_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x634DC30", Offset = "0x634CC30", VA = "0x634DC30")]
		[DebuggerStepThrough]
		public static v128 add_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x634DC40", Offset = "0x634CC40", VA = "0x634DC40")]
		[DebuggerStepThrough]
		public static v128 adds_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x634DDE0", Offset = "0x634CDE0", VA = "0x634DDE0")]
		[DebuggerStepThrough]
		public static v128 adds_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x634DED0", Offset = "0x634CED0", VA = "0x634DED0")]
		[DebuggerStepThrough]
		public static v128 adds_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x634E070", Offset = "0x634D070", VA = "0x634E070")]
		[DebuggerStepThrough]
		public static v128 adds_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x634E160", Offset = "0x634D160", VA = "0x634E160")]
		[DebuggerStepThrough]
		public static v128 avg_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x634E2D0", Offset = "0x634D2D0", VA = "0x634E2D0")]
		[DebuggerStepThrough]
		public static v128 avg_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x634E3A0", Offset = "0x634D3A0", VA = "0x634E3A0")]
		[DebuggerStepThrough]
		public static v128 madd_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x634E450", Offset = "0x634D450", VA = "0x634E450")]
		[DebuggerStepThrough]
		public static v128 max_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D06")]
		[Address(RVA = "0x634E610", Offset = "0x634D610", VA = "0x634E610")]
		[DebuggerStepThrough]
		public static v128 max_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x634E940", Offset = "0x634D940", VA = "0x634E940")]
		[DebuggerStepThrough]
		public static v128 min_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x634EB00", Offset = "0x634DB00", VA = "0x634EB00")]
		[DebuggerStepThrough]
		public static v128 min_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x634EE30", Offset = "0x634DE30", VA = "0x634EE30")]
		[DebuggerStepThrough]
		public static v128 mulhi_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x634EF00", Offset = "0x634DF00", VA = "0x634EF00")]
		[DebuggerStepThrough]
		public static v128 mulhi_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x634EFD0", Offset = "0x634DFD0", VA = "0x634EFD0")]
		[DebuggerStepThrough]
		public static v128 mullo_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x634F070", Offset = "0x634E070", VA = "0x634F070")]
		[DebuggerStepThrough]
		public static v128 mul_epu32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x634F090", Offset = "0x634E090", VA = "0x634F090")]
		[DebuggerStepThrough]
		public static v128 sad_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x634F410", Offset = "0x634E410", VA = "0x634F410")]
		[DebuggerStepThrough]
		public static v128 sub_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x634F510", Offset = "0x634E510", VA = "0x634F510")]
		[DebuggerStepThrough]
		public static v128 sub_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x634F5A0", Offset = "0x634E5A0", VA = "0x634F5A0")]
		[DebuggerStepThrough]
		public static v128 sub_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x634F5F0", Offset = "0x634E5F0", VA = "0x634F5F0")]
		[DebuggerStepThrough]
		public static v128 sub_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x634F620", Offset = "0x634E620", VA = "0x634F620")]
		[DebuggerStepThrough]
		public static v128 subs_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x634F7C0", Offset = "0x634E7C0", VA = "0x634F7C0")]
		[DebuggerStepThrough]
		public static v128 subs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x634F8B0", Offset = "0x634E8B0", VA = "0x634F8B0")]
		[DebuggerStepThrough]
		public static v128 subs_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x634FA50", Offset = "0x634EA50", VA = "0x634FA50")]
		[DebuggerStepThrough]
		public static v128 subs_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x634FB40", Offset = "0x634EB40", VA = "0x634FB40")]
		[DebuggerStepThrough]
		public static v128 slli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x634FC30", Offset = "0x634EC30", VA = "0x634FC30")]
		[DebuggerStepThrough]
		public static v128 bslli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x634FC40", Offset = "0x634EC40", VA = "0x634FC40")]
		[DebuggerStepThrough]
		public static v128 bsrli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x634FD60", Offset = "0x634ED60", VA = "0x634FD60")]
		[DebuggerStepThrough]
		public static v128 slli_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1A")]
		[Address(RVA = "0x634FE00", Offset = "0x634EE00", VA = "0x634FE00")]
		[DebuggerStepThrough]
		public static v128 sll_epi16(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x634FEF0", Offset = "0x634EEF0", VA = "0x634FEF0")]
		[DebuggerStepThrough]
		public static v128 slli_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x634FFA0", Offset = "0x634EFA0", VA = "0x634FFA0")]
		[DebuggerStepThrough]
		public static v128 sll_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x6350060", Offset = "0x634F060", VA = "0x6350060")]
		[DebuggerStepThrough]
		public static v128 slli_epi64(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x63500F0", Offset = "0x634F0F0", VA = "0x63500F0")]
		[DebuggerStepThrough]
		public static v128 sll_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x6350180", Offset = "0x634F180", VA = "0x6350180")]
		[DebuggerStepThrough]
		public static v128 srai_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x6350270", Offset = "0x634F270", VA = "0x6350270")]
		[DebuggerStepThrough]
		public static v128 sra_epi16(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x6350360", Offset = "0x634F360", VA = "0x6350360")]
		[DebuggerStepThrough]
		public static v128 srai_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x6350410", Offset = "0x634F410", VA = "0x6350410")]
		[DebuggerStepThrough]
		public static v128 sra_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x63504C0", Offset = "0x634F4C0", VA = "0x63504C0")]
		[DebuggerStepThrough]
		public static v128 srli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x63504D0", Offset = "0x634F4D0", VA = "0x63504D0")]
		[DebuggerStepThrough]
		public static v128 srli_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x63505C0", Offset = "0x634F5C0", VA = "0x63505C0")]
		[DebuggerStepThrough]
		public static v128 srl_epi16(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x63506B0", Offset = "0x634F6B0", VA = "0x63506B0")]
		[DebuggerStepThrough]
		public static v128 srli_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x6350760", Offset = "0x634F760", VA = "0x6350760")]
		[DebuggerStepThrough]
		public static v128 srl_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x6350810", Offset = "0x634F810", VA = "0x6350810")]
		[DebuggerStepThrough]
		public static v128 srli_epi64(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x63508A0", Offset = "0x634F8A0", VA = "0x63508A0")]
		[DebuggerStepThrough]
		public static v128 srl_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2A")]
		[Address(RVA = "0x6350930", Offset = "0x634F930", VA = "0x6350930")]
		[DebuggerStepThrough]
		public static v128 and_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0x6350940", Offset = "0x634F940", VA = "0x6350940")]
		[DebuggerStepThrough]
		public static v128 andnot_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x6350960", Offset = "0x634F960", VA = "0x6350960")]
		[DebuggerStepThrough]
		public static v128 or_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x6350970", Offset = "0x634F970", VA = "0x6350970")]
		[DebuggerStepThrough]
		public static v128 xor_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x6350980", Offset = "0x634F980", VA = "0x6350980")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x6350AD0", Offset = "0x634FAD0", VA = "0x6350AD0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x6350BA0", Offset = "0x634FBA0", VA = "0x6350BA0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x6350C10", Offset = "0x634FC10", VA = "0x6350C10")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x6350D60", Offset = "0x634FD60", VA = "0x6350D60")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x6350E30", Offset = "0x634FE30", VA = "0x6350E30")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x6350EA0", Offset = "0x634FEA0", VA = "0x6350EA0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmplt_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x6350EC0", Offset = "0x634FEC0", VA = "0x6350EC0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmplt_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D36")]
		[Address(RVA = "0x6350F90", Offset = "0x634FF90", VA = "0x6350F90")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmplt_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x6351000", Offset = "0x6350000", VA = "0x6351000")]
		[DebuggerStepThrough]
		public static v128 cvtepi32_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x6351020", Offset = "0x6350020", VA = "0x6351020")]
		[DebuggerStepThrough]
		public static v128 cvtsi32_sd(v128 a, int b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D39")]
		[Address(RVA = "0x6351030", Offset = "0x6350030", VA = "0x6351030")]
		[DebuggerStepThrough]
		public static v128 cvtsi64_sd(v128 a, long b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3A")]
		[Address(RVA = "0x6351040", Offset = "0x6350040", VA = "0x6351040")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cvtsi64x_sd(v128 a, long b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x6351050", Offset = "0x6350050", VA = "0x6351050")]
		[DebuggerStepThrough]
		public static v128 cvtepi32_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3C")]
		[Address(RVA = "0x6351090", Offset = "0x6350090", VA = "0x6351090")]
		[DebuggerStepThrough]
		public static v128 cvtsi32_si128(int a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3D")]
		[Address(RVA = "0x63510A0", Offset = "0x63500A0", VA = "0x63510A0")]
		[DebuggerStepThrough]
		public static v128 cvtsi64_si128(long a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x63510B0", Offset = "0x63500B0", VA = "0x63510B0")]
		[DebuggerStepThrough]
		public static v128 cvtsi64x_si128(long a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x63510C0", Offset = "0x63500C0", VA = "0x63510C0")]
		[DebuggerStepThrough]
		public static int cvtsi128_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x63510D0", Offset = "0x63500D0", VA = "0x63510D0")]
		[DebuggerStepThrough]
		public static long cvtsi128_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x63510E0", Offset = "0x63500E0", VA = "0x63510E0")]
		[DebuggerStepThrough]
		public static long cvtsi128_si64x(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x63510F0", Offset = "0x63500F0", VA = "0x63510F0")]
		[DebuggerStepThrough]
		public static v128 set_epi64x(long e1, long e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x6351100", Offset = "0x6350100", VA = "0x6351100")]
		[DebuggerStepThrough]
		public static v128 set_epi32(int e3, int e2, int e1, int e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x6351120", Offset = "0x6350120", VA = "0x6351120")]
		[DebuggerStepThrough]
		public static v128 set_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x6351170", Offset = "0x6350170", VA = "0x6351170")]
		[DebuggerStepThrough]
		public static v128 set_epi8(sbyte e15_, sbyte e14_, sbyte e13_, sbyte e12_, sbyte e11_, sbyte e10_, sbyte e9_, sbyte e8_, sbyte e7_, sbyte e6_, sbyte e5_, sbyte e4_, sbyte e3_, sbyte e2_, sbyte e1_, sbyte e0_)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x6351240", Offset = "0x6350240", VA = "0x6351240")]
		[DebuggerStepThrough]
		public static v128 set1_epi64x(long a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x6351250", Offset = "0x6350250", VA = "0x6351250")]
		[DebuggerStepThrough]
		public static v128 set1_epi32(int a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x6351260", Offset = "0x6350260", VA = "0x6351260")]
		[DebuggerStepThrough]
		public static v128 set1_epi16(short a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x63512A0", Offset = "0x63502A0", VA = "0x63512A0")]
		[DebuggerStepThrough]
		public static v128 set1_epi8(sbyte a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x6351310", Offset = "0x6350310", VA = "0x6351310")]
		[DebuggerStepThrough]
		public static v128 setr_epi32(int e3, int e2, int e1, int e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x6351330", Offset = "0x6350330", VA = "0x6351330")]
		[DebuggerStepThrough]
		public static v128 setr_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x6351380", Offset = "0x6350380", VA = "0x6351380")]
		[DebuggerStepThrough]
		public static v128 setr_epi8(sbyte e15_, sbyte e14_, sbyte e13_, sbyte e12_, sbyte e11_, sbyte e10_, sbyte e9_, sbyte e8_, sbyte e7_, sbyte e6_, sbyte e5_, sbyte e4_, sbyte e3_, sbyte e2_, sbyte e1_, sbyte e0_)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x6351450", Offset = "0x6350450", VA = "0x6351450")]
		[DebuggerStepThrough]
		public static v128 setzero_si128()
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x6351460", Offset = "0x6350460", VA = "0x6351460")]
		[DebuggerStepThrough]
		public static v128 move_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x6351470", Offset = "0x6350470", VA = "0x6351470")]
		[DebuggerStepThrough]
		public static v128 packs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x63515A0", Offset = "0x63505A0", VA = "0x63515A0")]
		[DebuggerStepThrough]
		public static v128 packs_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x6351650", Offset = "0x6350650", VA = "0x6351650")]
		[DebuggerStepThrough]
		public static v128 packus_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x6351780", Offset = "0x6350780", VA = "0x6351780")]
		[DebuggerStepThrough]
		public static ushort extract_epi16(v128 a, int imm8)
		{
			return default(ushort);
		}

		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x63517A0", Offset = "0x63507A0", VA = "0x63517A0")]
		[DebuggerStepThrough]
		public static v128 insert_epi16(v128 a, int i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x63517C0", Offset = "0x63507C0", VA = "0x63517C0")]
		[DebuggerStepThrough]
		public static int movemask_epi8(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x6351890", Offset = "0x6350890", VA = "0x6351890")]
		[DebuggerStepThrough]
		public static v128 shuffle_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x63518F0", Offset = "0x63508F0", VA = "0x63518F0")]
		[DebuggerStepThrough]
		public static v128 shufflehi_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x6351960", Offset = "0x6350960", VA = "0x6351960")]
		[DebuggerStepThrough]
		public static v128 shufflelo_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x63519D0", Offset = "0x63509D0", VA = "0x63519D0")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x6351A80", Offset = "0x6350A80", VA = "0x6351A80")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5A")]
		[Address(RVA = "0x6351AF0", Offset = "0x6350AF0", VA = "0x6351AF0")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x6351B10", Offset = "0x6350B10", VA = "0x6351B10")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x6351B20", Offset = "0x6350B20", VA = "0x6351B20")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x6351BD0", Offset = "0x6350BD0", VA = "0x6351BD0")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0x6351C40", Offset = "0x6350C40", VA = "0x6351C40")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x6351C70", Offset = "0x6350C70", VA = "0x6351C70")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x6351C80", Offset = "0x6350C80", VA = "0x6351C80")]
		[DebuggerStepThrough]
		public static v128 add_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x6351CA0", Offset = "0x6350CA0", VA = "0x6351CA0")]
		[DebuggerStepThrough]
		public static v128 add_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x6351CD0", Offset = "0x6350CD0", VA = "0x6351CD0")]
		[DebuggerStepThrough]
		public static v128 div_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x6351CF0", Offset = "0x6350CF0", VA = "0x6351CF0")]
		[DebuggerStepThrough]
		public static v128 div_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x6351D20", Offset = "0x6350D20", VA = "0x6351D20")]
		[DebuggerStepThrough]
		public static v128 max_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x6351D90", Offset = "0x6350D90", VA = "0x6351D90")]
		[DebuggerStepThrough]
		public static v128 max_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x6351E20", Offset = "0x6350E20", VA = "0x6351E20")]
		[DebuggerStepThrough]
		public static v128 min_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x6351E90", Offset = "0x6350E90", VA = "0x6351E90")]
		[DebuggerStepThrough]
		public static v128 min_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D68")]
		[Address(RVA = "0x6351F20", Offset = "0x6350F20", VA = "0x6351F20")]
		[DebuggerStepThrough]
		public static v128 mul_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x6351F40", Offset = "0x6350F40", VA = "0x6351F40")]
		[DebuggerStepThrough]
		public static v128 mul_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x6351F70", Offset = "0x6350F70", VA = "0x6351F70")]
		[DebuggerStepThrough]
		public static v128 sqrt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x6352000", Offset = "0x6351000", VA = "0x6352000")]
		[DebuggerStepThrough]
		public static v128 sqrt_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x63520C0", Offset = "0x63510C0", VA = "0x63520C0")]
		[DebuggerStepThrough]
		public static v128 sub_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x63520E0", Offset = "0x63510E0", VA = "0x63520E0")]
		[DebuggerStepThrough]
		public static v128 sub_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x6352110", Offset = "0x6351110", VA = "0x6352110")]
		[DebuggerStepThrough]
		public static v128 and_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x6352120", Offset = "0x6351120", VA = "0x6352120")]
		[DebuggerStepThrough]
		public static v128 andnot_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D70")]
		[Address(RVA = "0x6352140", Offset = "0x6351140", VA = "0x6352140")]
		[DebuggerStepThrough]
		public static v128 or_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x6352150", Offset = "0x6351150", VA = "0x6352150")]
		[DebuggerStepThrough]
		public static v128 xor_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x6352160", Offset = "0x6351160", VA = "0x6352160")]
		[DebuggerStepThrough]
		public static v128 cmpeq_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x6352180", Offset = "0x6351180", VA = "0x6352180")]
		[DebuggerStepThrough]
		public static v128 cmplt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x63521A0", Offset = "0x63511A0", VA = "0x63521A0")]
		[DebuggerStepThrough]
		public static v128 cmple_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x63521C0", Offset = "0x63511C0", VA = "0x63521C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpgt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x63521E0", Offset = "0x63511E0", VA = "0x63521E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpge_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x6352200", Offset = "0x6351200", VA = "0x6352200")]
		[DebuggerStepThrough]
		public static v128 cmpord_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x6352240", Offset = "0x6351240", VA = "0x6352240")]
		[DebuggerStepThrough]
		public static v128 cmpunord_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x6352280", Offset = "0x6351280", VA = "0x6352280")]
		[DebuggerStepThrough]
		public static v128 cmpneq_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7A")]
		[Address(RVA = "0x63522A0", Offset = "0x63512A0", VA = "0x63522A0")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7B")]
		[Address(RVA = "0x63522C0", Offset = "0x63512C0", VA = "0x63522C0")]
		[DebuggerStepThrough]
		public static v128 cmpnle_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x63522E0", Offset = "0x63512E0", VA = "0x63522E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpngt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7D")]
		[Address(RVA = "0x6352300", Offset = "0x6351300", VA = "0x6352300")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpnge_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7E")]
		[Address(RVA = "0x6352320", Offset = "0x6351320", VA = "0x6352320")]
		[DebuggerStepThrough]
		public static v128 cmpeq_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7F")]
		[Address(RVA = "0x6352350", Offset = "0x6351350", VA = "0x6352350")]
		[DebuggerStepThrough]
		public static v128 cmplt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D80")]
		[Address(RVA = "0x6352380", Offset = "0x6351380", VA = "0x6352380")]
		[DebuggerStepThrough]
		public static v128 cmple_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D81")]
		[Address(RVA = "0x63523B0", Offset = "0x63513B0", VA = "0x63523B0")]
		[DebuggerStepThrough]
		public static v128 cmpgt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D82")]
		[Address(RVA = "0x63523E0", Offset = "0x63513E0", VA = "0x63523E0")]
		[DebuggerStepThrough]
		public static v128 cmpge_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D83")]
		[Address(RVA = "0x6352410", Offset = "0x6351410", VA = "0x6352410")]
		[DebuggerStepThrough]
		public static v128 cmpord_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x6352470", Offset = "0x6351470", VA = "0x6352470")]
		[DebuggerStepThrough]
		public static v128 cmpunord_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x63524E0", Offset = "0x63514E0", VA = "0x63524E0")]
		[DebuggerStepThrough]
		public static v128 cmpneq_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x6352510", Offset = "0x6351510", VA = "0x6352510")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x6352540", Offset = "0x6351540", VA = "0x6352540")]
		[DebuggerStepThrough]
		public static v128 cmpnle_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x6352570", Offset = "0x6351570", VA = "0x6352570")]
		[DebuggerStepThrough]
		public static v128 cmpngt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x63525A0", Offset = "0x63515A0", VA = "0x63525A0")]
		[DebuggerStepThrough]
		public static v128 cmpnge_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x63525D0", Offset = "0x63515D0", VA = "0x63525D0")]
		[DebuggerStepThrough]
		public static int comieq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8B")]
		[Address(RVA = "0x63525F0", Offset = "0x63515F0", VA = "0x63525F0")]
		[DebuggerStepThrough]
		public static int comilt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x6352610", Offset = "0x6351610", VA = "0x6352610")]
		[DebuggerStepThrough]
		public static int comile_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x6352630", Offset = "0x6351630", VA = "0x6352630")]
		[DebuggerStepThrough]
		public static int comigt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x6352650", Offset = "0x6351650", VA = "0x6352650")]
		[DebuggerStepThrough]
		public static int comige_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x6352670", Offset = "0x6351670", VA = "0x6352670")]
		[DebuggerStepThrough]
		public static int comineq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x6352690", Offset = "0x6351690", VA = "0x6352690")]
		[DebuggerStepThrough]
		public static int ucomieq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x63526B0", Offset = "0x63516B0", VA = "0x63526B0")]
		[DebuggerStepThrough]
		public static int ucomilt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x63526D0", Offset = "0x63516D0", VA = "0x63526D0")]
		[DebuggerStepThrough]
		public static int ucomile_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x63526F0", Offset = "0x63516F0", VA = "0x63526F0")]
		[DebuggerStepThrough]
		public static int ucomigt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D94")]
		[Address(RVA = "0x6352710", Offset = "0x6351710", VA = "0x6352710")]
		[DebuggerStepThrough]
		public static int ucomige_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D95")]
		[Address(RVA = "0x6352730", Offset = "0x6351730", VA = "0x6352730")]
		[DebuggerStepThrough]
		public static int ucomineq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x6352750", Offset = "0x6351750", VA = "0x6352750")]
		[DebuggerStepThrough]
		public static v128 cvtpd_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D97")]
		[Address(RVA = "0x6352780", Offset = "0x6351780", VA = "0x6352780")]
		[DebuggerStepThrough]
		public static v128 cvtps_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x63527A0", Offset = "0x63517A0", VA = "0x63527A0")]
		[DebuggerStepThrough]
		public static v128 cvtpd_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D99")]
		[Address(RVA = "0x6352950", Offset = "0x6351950", VA = "0x6352950")]
		[DebuggerStepThrough]
		public static int cvtsd_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000D9A")]
		[Address(RVA = "0x6352A50", Offset = "0x6351A50", VA = "0x6352A50")]
		[DebuggerStepThrough]
		public static long cvtsd_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D9B")]
		[Address(RVA = "0x6352B50", Offset = "0x6351B50", VA = "0x6352B50")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static long cvtsd_si64x(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D9C")]
		[Address(RVA = "0x6352C50", Offset = "0x6351C50", VA = "0x6352C50")]
		[DebuggerStepThrough]
		public static v128 cvtsd_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D9D")]
		[Address(RVA = "0x6352C80", Offset = "0x6351C80", VA = "0x6352C80")]
		[DebuggerStepThrough]
		public static double cvtsd_f64(v128 a)
		{
			return default(double);
		}

		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x6352C90", Offset = "0x6351C90", VA = "0x6352C90")]
		[DebuggerStepThrough]
		public static v128 cvtss_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D9F")]
		[Address(RVA = "0x6352CB0", Offset = "0x6351CB0", VA = "0x6352CB0")]
		[DebuggerStepThrough]
		public static v128 cvttpd_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x6352CD0", Offset = "0x6351CD0", VA = "0x6352CD0")]
		[DebuggerStepThrough]
		public static int cvttsd_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x6352CE0", Offset = "0x6351CE0", VA = "0x6352CE0")]
		[DebuggerStepThrough]
		public static long cvttsd_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x6352CF0", Offset = "0x6351CF0", VA = "0x6352CF0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static long cvttsd_si64x(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x6352D00", Offset = "0x6351D00", VA = "0x6352D00")]
		[DebuggerStepThrough]
		public static v128 cvtps_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA4")]
		[Address(RVA = "0x6353050", Offset = "0x6352050", VA = "0x6353050")]
		[DebuggerStepThrough]
		public static v128 cvttps_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x6353090", Offset = "0x6352090", VA = "0x6353090")]
		[DebuggerStepThrough]
		public static v128 set_sd(double a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x63530A0", Offset = "0x63520A0", VA = "0x63530A0")]
		[DebuggerStepThrough]
		public static v128 set1_pd(double a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x63530B0", Offset = "0x63520B0", VA = "0x63530B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 set_pd1(double a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x63530C0", Offset = "0x63520C0", VA = "0x63530C0")]
		[DebuggerStepThrough]
		public static v128 set_pd(double e1, double e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x63530D0", Offset = "0x63520D0", VA = "0x63530D0")]
		[DebuggerStepThrough]
		public static v128 setr_pd(double e1, double e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x63530E0", Offset = "0x63520E0", VA = "0x63530E0")]
		[DebuggerStepThrough]
		public static v128 unpackhi_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAB")]
		[Address(RVA = "0x63530F0", Offset = "0x63520F0", VA = "0x63530F0")]
		[DebuggerStepThrough]
		public static v128 unpacklo_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x6353100", Offset = "0x6352100", VA = "0x6353100")]
		[DebuggerStepThrough]
		public static int movemask_pd(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000DAD")]
		[Address(RVA = "0x6353110", Offset = "0x6352110", VA = "0x6353110")]
		[DebuggerStepThrough]
		public static v128 shuffle_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAE")]
		[Address(RVA = "0x6353140", Offset = "0x6352140", VA = "0x6353140")]
		[DebuggerStepThrough]
		public static v128 move_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAF")]
		[Address(RVA = "0x6353150", Offset = "0x6352150", VA = "0x6353150")]
		public unsafe static v128 loadu_si32(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB0")]
		[Address(RVA = "0x6353180", Offset = "0x6352180", VA = "0x6353180")]
		public unsafe static void storeu_si32(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x6353190", Offset = "0x6352190", VA = "0x6353190")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 load_si128(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB2")]
		[Address(RVA = "0x63531A0", Offset = "0x63521A0", VA = "0x63531A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 loadu_si128(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB3")]
		[Address(RVA = "0x63531B0", Offset = "0x63521B0", VA = "0x63531B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void store_si128(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000DB4")]
		[Address(RVA = "0x63531C0", Offset = "0x63521C0", VA = "0x63531C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void storeu_si128(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x63531D0", Offset = "0x63521D0", VA = "0x63531D0")]
		[DebuggerStepThrough]
		public unsafe static void clflush(void* ptr)
		{
		}
	}

	[Token(Token = "0x2000049")]
	public static class Sse3
	{
		[Token(Token = "0x1700004A")]
		public static bool IsSse3Supported
		{
			[Token(Token = "0x6000DB6")]
			[Address(RVA = "0x63531E0", Offset = "0x63521E0", VA = "0x63531E0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0x63531F0", Offset = "0x63521F0", VA = "0x63531F0")]
		[DebuggerStepThrough]
		public static v128 addsub_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x6353250", Offset = "0x6352250", VA = "0x6353250")]
		[DebuggerStepThrough]
		public static v128 addsub_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB9")]
		[Address(RVA = "0x6353280", Offset = "0x6352280", VA = "0x6353280")]
		[DebuggerStepThrough]
		public static v128 hadd_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBA")]
		[Address(RVA = "0x63532B0", Offset = "0x63522B0", VA = "0x63532B0")]
		[DebuggerStepThrough]
		public static v128 hadd_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBB")]
		[Address(RVA = "0x6353310", Offset = "0x6352310", VA = "0x6353310")]
		[DebuggerStepThrough]
		public static v128 hsub_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBC")]
		[Address(RVA = "0x6353340", Offset = "0x6352340", VA = "0x6353340")]
		[DebuggerStepThrough]
		public static v128 hsub_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBD")]
		[Address(RVA = "0x63533A0", Offset = "0x63523A0", VA = "0x63533A0")]
		[DebuggerStepThrough]
		public static v128 movedup_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x63533B0", Offset = "0x63523B0", VA = "0x63533B0")]
		[DebuggerStepThrough]
		public static v128 movehdup_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x63533E0", Offset = "0x63523E0", VA = "0x63533E0")]
		[DebuggerStepThrough]
		public static v128 moveldup_ps(v128 a)
		{
			return default(v128);
		}
	}

	[Token(Token = "0x200004A")]
	public static class Sse4_1
	{
		[Token(Token = "0x1700004B")]
		public static bool IsSse41Supported
		{
			[Token(Token = "0x6000DC0")]
			[Address(RVA = "0x6353400", Offset = "0x6352400", VA = "0x6353400")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x6353410", Offset = "0x6352410", VA = "0x6353410")]
		[DebuggerStepThrough]
		public unsafe static v128 stream_load_si128(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x6353420", Offset = "0x6352420", VA = "0x6353420")]
		[DebuggerStepThrough]
		public static v128 blend_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x6353470", Offset = "0x6352470", VA = "0x6353470")]
		[DebuggerStepThrough]
		public static v128 blend_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x6353500", Offset = "0x6352500", VA = "0x6353500")]
		[DebuggerStepThrough]
		public static v128 blendv_pd(v128 a, v128 b, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC5")]
		[Address(RVA = "0x6353560", Offset = "0x6352560", VA = "0x6353560")]
		[DebuggerStepThrough]
		public static v128 blendv_ps(v128 a, v128 b, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC6")]
		[Address(RVA = "0x63535E0", Offset = "0x63525E0", VA = "0x63535E0")]
		[DebuggerStepThrough]
		public static v128 blendv_epi8(v128 a, v128 b, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x6353750", Offset = "0x6352750", VA = "0x6353750")]
		[DebuggerStepThrough]
		public static v128 blend_epi16(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x6353840", Offset = "0x6352840", VA = "0x6353840")]
		[DebuggerStepThrough]
		public static v128 dp_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC9")]
		[Address(RVA = "0x63538B0", Offset = "0x63528B0", VA = "0x63538B0")]
		[DebuggerStepThrough]
		public static v128 dp_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x6353A30", Offset = "0x6352A30", VA = "0x6353A30")]
		[DebuggerStepThrough]
		public static int extract_ps(v128 a, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x6353A50", Offset = "0x6352A50", VA = "0x6353A50")]
		[DebuggerStepThrough]
		public static float extractf_ps(v128 a, int imm8)
		{
			return default(float);
		}

		[Token(Token = "0x6000DCC")]
		[Address(RVA = "0x6353A70", Offset = "0x6352A70", VA = "0x6353A70")]
		[DebuggerStepThrough]
		public static byte extract_epi8(v128 a, int imm8)
		{
			return default(byte);
		}

		[Token(Token = "0x6000DCD")]
		[Address(RVA = "0x6353A90", Offset = "0x6352A90", VA = "0x6353A90")]
		[DebuggerStepThrough]
		public static int extract_epi32(v128 a, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000DCE")]
		[Address(RVA = "0x6353AB0", Offset = "0x6352AB0", VA = "0x6353AB0")]
		[DebuggerStepThrough]
		public static long extract_epi64(v128 a, int imm8)
		{
			return default(long);
		}

		[Token(Token = "0x6000DCF")]
		[Address(RVA = "0x6353AD0", Offset = "0x6352AD0", VA = "0x6353AD0")]
		[DebuggerStepThrough]
		public static v128 insert_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x6353B70", Offset = "0x6352B70", VA = "0x6353B70")]
		[DebuggerStepThrough]
		public static v128 insert_epi8(v128 a, byte i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x6353B90", Offset = "0x6352B90", VA = "0x6353B90")]
		[DebuggerStepThrough]
		public static v128 insert_epi32(v128 a, int i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x6353BB0", Offset = "0x6352BB0", VA = "0x6353BB0")]
		[DebuggerStepThrough]
		public static v128 insert_epi64(v128 a, long i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x6353BD0", Offset = "0x6352BD0", VA = "0x6353BD0")]
		[DebuggerStepThrough]
		public static v128 max_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x6353F00", Offset = "0x6352F00", VA = "0x6353F00")]
		[DebuggerStepThrough]
		public static v128 max_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0x6354000", Offset = "0x6353000", VA = "0x6354000")]
		[DebuggerStepThrough]
		public static v128 max_epu32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x6354100", Offset = "0x6353100", VA = "0x6354100")]
		[DebuggerStepThrough]
		public static v128 max_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x63542C0", Offset = "0x63532C0", VA = "0x63542C0")]
		[DebuggerStepThrough]
		public static v128 min_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD8")]
		[Address(RVA = "0x63545F0", Offset = "0x63535F0", VA = "0x63545F0")]
		[DebuggerStepThrough]
		public static v128 min_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x63546F0", Offset = "0x63536F0", VA = "0x63546F0")]
		[DebuggerStepThrough]
		public static v128 min_epu32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x63547F0", Offset = "0x63537F0", VA = "0x63547F0")]
		[DebuggerStepThrough]
		public static v128 min_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDB")]
		[Address(RVA = "0x63549B0", Offset = "0x63539B0", VA = "0x63549B0")]
		[DebuggerStepThrough]
		public static v128 packus_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x6354AA0", Offset = "0x6353AA0", VA = "0x6354AA0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDD")]
		[Address(RVA = "0x6354AC0", Offset = "0x6353AC0", VA = "0x6354AC0")]
		[DebuggerStepThrough]
		public static v128 cvtepi8_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDE")]
		[Address(RVA = "0x6354B30", Offset = "0x6353B30", VA = "0x6354B30")]
		[DebuggerStepThrough]
		public static v128 cvtepi8_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDF")]
		[Address(RVA = "0x6354B70", Offset = "0x6353B70", VA = "0x6354B70")]
		[DebuggerStepThrough]
		public static v128 cvtepi8_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE0")]
		[Address(RVA = "0x6354B90", Offset = "0x6353B90", VA = "0x6354B90")]
		[DebuggerStepThrough]
		public static v128 cvtepi16_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE1")]
		[Address(RVA = "0x6354BD0", Offset = "0x6353BD0", VA = "0x6354BD0")]
		[DebuggerStepThrough]
		public static v128 cvtepi16_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE2")]
		[Address(RVA = "0x6354BF0", Offset = "0x6353BF0", VA = "0x6354BF0")]
		[DebuggerStepThrough]
		public static v128 cvtepi32_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x6354C10", Offset = "0x6353C10", VA = "0x6354C10")]
		[DebuggerStepThrough]
		public static v128 cvtepu8_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE4")]
		[Address(RVA = "0x6354C80", Offset = "0x6353C80", VA = "0x6354C80")]
		[DebuggerStepThrough]
		public static v128 cvtepu8_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x6354CC0", Offset = "0x6353CC0", VA = "0x6354CC0")]
		[DebuggerStepThrough]
		public static v128 cvtepu8_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x6354CE0", Offset = "0x6353CE0", VA = "0x6354CE0")]
		[DebuggerStepThrough]
		public static v128 cvtepu16_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE7")]
		[Address(RVA = "0x6354D20", Offset = "0x6353D20", VA = "0x6354D20")]
		[DebuggerStepThrough]
		public static v128 cvtepu16_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE8")]
		[Address(RVA = "0x6354D40", Offset = "0x6353D40", VA = "0x6354D40")]
		[DebuggerStepThrough]
		public static v128 cvtepu32_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE9")]
		[Address(RVA = "0x6354D60", Offset = "0x6353D60", VA = "0x6354D60")]
		[DebuggerStepThrough]
		public static v128 mul_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DEA")]
		[Address(RVA = "0x6354D80", Offset = "0x6353D80", VA = "0x6354D80")]
		[DebuggerStepThrough]
		public static v128 mullo_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DEB")]
		[Address(RVA = "0x6354DD0", Offset = "0x6353DD0", VA = "0x6354DD0")]
		[DebuggerStepThrough]
		public static int testz_si128(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000DEC")]
		[Address(RVA = "0x6354DE0", Offset = "0x6353DE0", VA = "0x6354DE0")]
		[DebuggerStepThrough]
		public static int testc_si128(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000DED")]
		[Address(RVA = "0x6354E00", Offset = "0x6353E00", VA = "0x6354E00")]
		[DebuggerStepThrough]
		public static int testnzc_si128(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000DEE")]
		[Address(RVA = "0x6354E30", Offset = "0x6353E30", VA = "0x6354E30")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static int test_all_zeros(v128 a, v128 mask)
		{
			return default(int);
		}

		[Token(Token = "0x6000DEF")]
		[Address(RVA = "0x6354E40", Offset = "0x6353E40", VA = "0x6354E40")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static int test_mix_ones_zeroes(v128 a, v128 mask)
		{
			return default(int);
		}

		[Token(Token = "0x6000DF0")]
		[Address(RVA = "0x6354E70", Offset = "0x6353E70", VA = "0x6354E70")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static int test_all_ones(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x6354EE0", Offset = "0x6353EE0", VA = "0x6354EE0")]
		private static double RoundDImpl(double d, int roundingMode)
		{
			return default(double);
		}

		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x63551C0", Offset = "0x63541C0", VA = "0x63551C0")]
		[DebuggerStepThrough]
		public static v128 round_pd(v128 a, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x6355200", Offset = "0x6354200", VA = "0x6355200")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x63552B0", Offset = "0x63542B0", VA = "0x63552B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF5")]
		[Address(RVA = "0x63553E0", Offset = "0x63543E0", VA = "0x63553E0")]
		[DebuggerStepThrough]
		public static v128 round_ps(v128 a, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF6")]
		[Address(RVA = "0x63554A0", Offset = "0x63544A0", VA = "0x63554A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x63555F0", Offset = "0x63545F0", VA = "0x63555F0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x6355850", Offset = "0x6354850", VA = "0x6355850")]
		[DebuggerStepThrough]
		public static v128 round_sd(v128 a, v128 b, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x6355870", Offset = "0x6354870", VA = "0x6355870")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x63558D0", Offset = "0x63548D0", VA = "0x63558D0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x6355980", Offset = "0x6354980", VA = "0x6355980")]
		[DebuggerStepThrough]
		public static v128 round_ss(v128 a, v128 b, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFC")]
		[Address(RVA = "0x63559C0", Offset = "0x63549C0", VA = "0x63559C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x6355A30", Offset = "0x6354A30", VA = "0x6355A30")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFE")]
		[Address(RVA = "0x6355AF0", Offset = "0x6354AF0", VA = "0x6355AF0")]
		[DebuggerStepThrough]
		public static v128 minpos_epu16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x6355B90", Offset = "0x6354B90", VA = "0x6355B90")]
		[DebuggerStepThrough]
		public static v128 mpsadbw_epu8(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x6356180", Offset = "0x6355180", VA = "0x6356180")]
		[DebuggerStepThrough]
		public static int MK_INSERTPS_NDX(int srcField, int dstField, int zeroMask)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200004B")]
	public static class Sse4_2
	{
		[Token(Token = "0x200004C")]
		[Flags]
		public enum SIDD
		{
			[Token(Token = "0x40002BD")]
			UBYTE_OPS = 0,
			[Token(Token = "0x40002BE")]
			UWORD_OPS = 1,
			[Token(Token = "0x40002BF")]
			SBYTE_OPS = 2,
			[Token(Token = "0x40002C0")]
			SWORD_OPS = UWORD_OPS | SBYTE_OPS,
			[Token(Token = "0x40002C1")]
			CMP_EQUAL_ANY = 0,
			[Token(Token = "0x40002C2")]
			CMP_RANGES = 4,
			[Token(Token = "0x40002C3")]
			CMP_EQUAL_EACH = 8,
			[Token(Token = "0x40002C4")]
			CMP_EQUAL_ORDERED = CMP_RANGES | CMP_EQUAL_EACH,
			[Token(Token = "0x40002C5")]
			POSITIVE_POLARITY = 0,
			[Token(Token = "0x40002C6")]
			NEGATIVE_POLARITY = 0x10,
			[Token(Token = "0x40002C7")]
			MASKED_POSITIVE_POLARITY = 0x20,
			[Token(Token = "0x40002C8")]
			MASKED_NEGATIVE_POLARITY = NEGATIVE_POLARITY | MASKED_POSITIVE_POLARITY,
			[Token(Token = "0x40002C9")]
			LEAST_SIGNIFICANT = 0,
			[Token(Token = "0x40002CA")]
			MOST_SIGNIFICANT = 0x40,
			[Token(Token = "0x40002CB")]
			BIT_MASK = 0,
			[Token(Token = "0x40002CC")]
			UNIT_MASK = MOST_SIGNIFICANT
		}

		[Token(Token = "0x200004D")]
		private struct StrBoolArray
		{
			[Token(Token = "0x40002CD")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public unsafe fixed ushort Bits[16];

			[Token(Token = "0x6000E1F")]
			[Address(RVA = "0x6357AA0", Offset = "0x6356AA0", VA = "0x6357AA0")]
			public void SetBit(int aindex, int bindex, bool val)
			{
			}

			[Token(Token = "0x6000E20")]
			[Address(RVA = "0x6357AC0", Offset = "0x6356AC0", VA = "0x6357AC0")]
			public bool GetBit(int aindex, int bindex)
			{
				return default(bool);
			}
		}

		[Token(Token = "0x40002BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly uint[] crctab;

		[Token(Token = "0x1700004C")]
		public static bool IsSse42Supported
		{
			[Token(Token = "0x6000E01")]
			[Address(RVA = "0x6356190", Offset = "0x6355190", VA = "0x6356190")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000E02")]
		private unsafe static v128 cmpistrm_emulation<T>(T* a, T* b, int len, int imm8, int allOnes, T allOnesT) where T : struct, IComparable<T>, IEquatable<T>
		{
			return default(v128);
		}

		[Token(Token = "0x6000E03")]
		private unsafe static v128 cmpestrm_emulation<T>(T* a, int alen, T* b, int blen, int len, int imm8, int allOnes, T allOnesT) where T : struct, IComparable<T>, IEquatable<T>
		{
			return default(v128);
		}

		[Token(Token = "0x6000E04")]
		private static v128 ComputeStrmOutput<T>(int len, int imm8, T allOnesT, int intRes2) where T : struct, IComparable<T>, IEquatable<T>
		{
			return default(v128);
		}

		[Token(Token = "0x6000E05")]
		private unsafe static int cmpistri_emulation<T>(T* a, T* b, int len, int imm8, int allOnes, T allOnesT) where T : struct, IComparable<T>, IEquatable<T>
		{
			return default(int);
		}

		[Token(Token = "0x6000E06")]
		private unsafe static int cmpestri_emulation<T>(T* a, int alen, T* b, int blen, int len, int imm8, int allOnes, T allOnesT) where T : struct, IComparable<T>, IEquatable<T>
		{
			return default(int);
		}

		[Token(Token = "0x6000E07")]
		[Address(RVA = "0x63561A0", Offset = "0x63551A0", VA = "0x63561A0")]
		private static int ComputeStriOutput(int len, int imm8, int intRes2)
		{
			return default(int);
		}

		[Token(Token = "0x6000E08")]
		private unsafe static int ComputeStringLength<T>(T* ptr, int max) where T : struct, IEquatable<T>
		{
			return default(int);
		}

		[Token(Token = "0x6000E09")]
		private unsafe static int ComputeStrCmpIntRes2<T>(T* a, int alen, T* b, int blen, int len, int imm8, int allOnes) where T : struct, IComparable<T>, IEquatable<T>
		{
			return default(int);
		}

		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x63561E0", Offset = "0x63551E0", VA = "0x63561E0")]
		[DebuggerStepThrough]
		public static v128 cmpistrm(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E0B")]
		[Address(RVA = "0x6356370", Offset = "0x6355370", VA = "0x6356370")]
		[DebuggerStepThrough]
		public static int cmpistri(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x6356500", Offset = "0x6355500", VA = "0x6356500")]
		[DebuggerStepThrough]
		public static v128 cmpestrm(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E0D")]
		[Address(RVA = "0x63566A0", Offset = "0x63556A0", VA = "0x63566A0")]
		[DebuggerStepThrough]
		public static int cmpestri(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x6356840", Offset = "0x6355840", VA = "0x6356840")]
		[DebuggerStepThrough]
		public static int cmpistrz(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x63568F0", Offset = "0x63558F0", VA = "0x63568F0")]
		[DebuggerStepThrough]
		public static int cmpistrc(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x6356970", Offset = "0x6355970", VA = "0x6356970")]
		[DebuggerStepThrough]
		public static int cmpistrs(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x6356A20", Offset = "0x6355A20", VA = "0x6356A20")]
		[DebuggerStepThrough]
		public static int cmpistro(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x6356C40", Offset = "0x6355C40", VA = "0x6356C40")]
		[DebuggerStepThrough]
		public static int cmpistra(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E13")]
		[Address(RVA = "0x6356D60", Offset = "0x6355D60", VA = "0x6356D60")]
		[DebuggerStepThrough]
		public static int cmpestrz(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E14")]
		[Address(RVA = "0x6356D80", Offset = "0x6355D80", VA = "0x6356D80")]
		[DebuggerStepThrough]
		public static int cmpestrc(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E15")]
		[Address(RVA = "0x6356F00", Offset = "0x6355F00", VA = "0x6356F00")]
		[DebuggerStepThrough]
		public static int cmpestrs(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E16")]
		[Address(RVA = "0x6356F20", Offset = "0x6355F20", VA = "0x6356F20")]
		[DebuggerStepThrough]
		public static int cmpestro(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E17")]
		[Address(RVA = "0x6357090", Offset = "0x6356090", VA = "0x6357090")]
		[DebuggerStepThrough]
		public static int cmpestra(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E18")]
		[Address(RVA = "0x6357140", Offset = "0x6356140", VA = "0x6357140")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi64(v128 val1, v128 val2)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x6357160", Offset = "0x6356160", VA = "0x6357160")]
		[DebuggerStepThrough]
		public static uint crc32_u32(uint crc, uint v)
		{
			return default(uint);
		}

		[Token(Token = "0x6000E1A")]
		[Address(RVA = "0x63573A0", Offset = "0x63563A0", VA = "0x63573A0")]
		[DebuggerStepThrough]
		public static uint crc32_u8(uint crc, byte v)
		{
			return default(uint);
		}

		[Token(Token = "0x6000E1B")]
		[Address(RVA = "0x6357440", Offset = "0x6356440", VA = "0x6357440")]
		[DebuggerStepThrough]
		public static uint crc32_u16(uint crc, ushort v)
		{
			return default(uint);
		}

		[Token(Token = "0x6000E1C")]
		[Address(RVA = "0x6357590", Offset = "0x6356590", VA = "0x6357590")]
		[DebuggerStepThrough]
		[Obsolete("Use the ulong version of this intrinsic instead.")]
		public static ulong crc32_u64(ulong crc_ul, long v)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x63575E0", Offset = "0x63565E0", VA = "0x63575E0")]
		[DebuggerStepThrough]
		public static ulong crc32_u64(ulong crc_ul, ulong v)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x200004F")]
	public static class Ssse3
	{
		[Token(Token = "0x1700004D")]
		public static bool IsSsse3Supported
		{
			[Token(Token = "0x6000E21")]
			[Address(RVA = "0x6357AD0", Offset = "0x6356AD0", VA = "0x6357AD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x6357AE0", Offset = "0x6356AE0", VA = "0x6357AE0")]
		[DebuggerStepThrough]
		public static v128 abs_epi8(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x6357D70", Offset = "0x6356D70", VA = "0x6357D70")]
		[DebuggerStepThrough]
		public static v128 abs_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x6357F70", Offset = "0x6356F70", VA = "0x6357F70")]
		[DebuggerStepThrough]
		public static v128 abs_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x6358050", Offset = "0x6357050", VA = "0x6358050")]
		[DebuggerStepThrough]
		public static v128 shuffle_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E26")]
		[Address(RVA = "0x6358380", Offset = "0x6357380", VA = "0x6358380")]
		[DebuggerStepThrough]
		public static v128 alignr_epi8(v128 a, v128 b, int count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x63584D0", Offset = "0x63574D0", VA = "0x63584D0")]
		[DebuggerStepThrough]
		public static v128 hadd_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E28")]
		[Address(RVA = "0x6358560", Offset = "0x6357560", VA = "0x6358560")]
		[DebuggerStepThrough]
		public static v128 hadds_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x6358650", Offset = "0x6357650", VA = "0x6358650")]
		[DebuggerStepThrough]
		public static v128 hadd_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x6358690", Offset = "0x6357690", VA = "0x6358690")]
		[DebuggerStepThrough]
		public static v128 hsub_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2B")]
		[Address(RVA = "0x6358720", Offset = "0x6357720", VA = "0x6358720")]
		[DebuggerStepThrough]
		public static v128 hsubs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2C")]
		[Address(RVA = "0x6358810", Offset = "0x6357810", VA = "0x6358810")]
		[DebuggerStepThrough]
		public static v128 hsub_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2D")]
		[Address(RVA = "0x6358850", Offset = "0x6357850", VA = "0x6358850")]
		[DebuggerStepThrough]
		public static v128 maddubs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2E")]
		[Address(RVA = "0x63589C0", Offset = "0x63579C0", VA = "0x63589C0")]
		[DebuggerStepThrough]
		public static v128 mulhrs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2F")]
		[Address(RVA = "0x6358AB0", Offset = "0x6357AB0", VA = "0x6358AB0")]
		[DebuggerStepThrough]
		public static v128 sign_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E30")]
		[Address(RVA = "0x6358E50", Offset = "0x6357E50", VA = "0x6358E50")]
		[DebuggerStepThrough]
		public static v128 sign_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x6359050", Offset = "0x6358050", VA = "0x6359050")]
		[DebuggerStepThrough]
		public static v128 sign_epi32(v128 a, v128 b)
		{
			return default(v128);
		}
	}

	[Token(Token = "0x2000050")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void DoSetCSRTrampoline_00000127_0024PostfixBurstDelegate(int bits);

	[Token(Token = "0x2000051")]
	internal static class DoSetCSRTrampoline_00000127_0024BurstDirectCall
	{
		[Token(Token = "0x40002CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000E36")]
		[Address(RVA = "0x6359260", Offset = "0x6358260", VA = "0x6359260")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000E37")]
		[Address(RVA = "0x63593C0", Offset = "0x63583C0", VA = "0x63593C0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x63593E0", Offset = "0x63583E0", VA = "0x63593E0")]
		public static void Invoke(int bits)
		{
		}
	}

	[Token(Token = "0x2000052")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate int DoGetCSRTrampoline_00000128_0024PostfixBurstDelegate();

	[Token(Token = "0x2000053")]
	internal static class DoGetCSRTrampoline_00000128_0024BurstDirectCall
	{
		[Token(Token = "0x40002D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000E3D")]
		[Address(RVA = "0x63595A0", Offset = "0x63585A0", VA = "0x63595A0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x6359700", Offset = "0x6358700", VA = "0x6359700")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x6359720", Offset = "0x6358720", VA = "0x6359720")]
		public static int Invoke()
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000040")]
	public static MXCSRBits MXCSR
	{
		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x633F760", Offset = "0x633E760", VA = "0x633F760")]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		get
		{
			return default(MXCSRBits);
		}
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x633F770", Offset = "0x633E770", VA = "0x633F770")]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		set
		{
		}
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x633F650", Offset = "0x633E650", VA = "0x633F650")]
	private unsafe static v128 GenericCSharpLoad(void* ptr)
	{
		return default(v128);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x633F660", Offset = "0x633E660", VA = "0x633F660")]
	private unsafe static void GenericCSharpStore(void* ptr, v128 val)
	{
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x633F670", Offset = "0x633E670", VA = "0x633F670")]
	private static sbyte Saturate_To_Int8(int val)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x633F690", Offset = "0x633E690", VA = "0x633F690")]
	private static byte Saturate_To_UnsignedInt8(int val)
	{
		return default(byte);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x633F6B0", Offset = "0x633E6B0", VA = "0x633F6B0")]
	private static short Saturate_To_Int16(int val)
	{
		return default(short);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x633F6D0", Offset = "0x633E6D0", VA = "0x633F6D0")]
	private static ushort Saturate_To_UnsignedInt16(int val)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x633F6F0", Offset = "0x633E6F0", VA = "0x633F6F0")]
	private static bool IsNaN(uint v)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x633F700", Offset = "0x633E700", VA = "0x633F700")]
	private static bool IsNaN(ulong v)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x633F720", Offset = "0x633E720", VA = "0x633F720")]
	private static void BurstIntrinsicSetCSRFromManaged(int _)
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x633F730", Offset = "0x633E730", VA = "0x633F730")]
	private static int BurstIntrinsicGetCSRFromManaged()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x633F740", Offset = "0x633E740", VA = "0x633F740")]
	internal static int getcsr_raw()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x633F750", Offset = "0x633E750", VA = "0x633F750")]
	internal static void setcsr_raw(int bits)
	{
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x633F630", Offset = "0x633E630", VA = "0x633F630")]
	[BurstCompile(CompileSynchronously = true)]
	[MonoPInvokeCallback(typeof(Unity_002EBurst_002EIntrinsics_002EDoSetCSRTrampoline_00000127_0024PostfixBurstDelegate))]
	private static void DoSetCSRTrampoline(int bits)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x633F640", Offset = "0x633E640", VA = "0x633F640")]
	[BurstCompile(CompileSynchronously = true)]
	[MonoPInvokeCallback(typeof(Unity_002EBurst_002EIntrinsics_002EDoGetCSRTrampoline_00000128_0024PostfixBurstDelegate))]
	private static int DoGetCSRTrampoline()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x633F780", Offset = "0x633E780", VA = "0x633F780")]
	[BurstCompile(CompileSynchronously = true)]
	internal static void DoSetCSRTrampoline_0024BurstManaged(int bits)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x633F7A0", Offset = "0x633E7A0", VA = "0x633F7A0")]
	[BurstCompile(CompileSynchronously = true)]
	internal static int DoGetCSRTrampoline_0024BurstManaged()
	{
		return default(int);
	}
}
