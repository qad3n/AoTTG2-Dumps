// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.Intrinsics.X86
// Update status: NEW in this game update
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x2983740", Offset = "0x2981D40", VA = "0x182983740")]
		[DebuggerStepThrough]
		public static v256 mm256_add_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x29837D0", Offset = "0x2981DD0", VA = "0x1829837D0")]
		[DebuggerStepThrough]
		public static v256 mm256_add_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x2983890", Offset = "0x2981E90", VA = "0x182983890")]
		[DebuggerStepThrough]
		public static v256 mm256_addsub_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x2983920", Offset = "0x2981F20", VA = "0x182983920")]
		[DebuggerStepThrough]
		public static v256 mm256_addsub_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x297D360", Offset = "0x297B960", VA = "0x18297D360")]
		[DebuggerStepThrough]
		public static v256 mm256_and_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x29839B0", Offset = "0x2981FB0", VA = "0x1829839B0")]
		[DebuggerStepThrough]
		public static v256 mm256_and_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x297D3F0", Offset = "0x297B9F0", VA = "0x18297D3F0")]
		[DebuggerStepThrough]
		public static v256 mm256_andnot_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x29839E0", Offset = "0x2981FE0", VA = "0x1829839E0")]
		[DebuggerStepThrough]
		public static v256 mm256_andnot_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x2983A10", Offset = "0x2982010", VA = "0x182983A10")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x2983AB0", Offset = "0x29820B0", VA = "0x182983AB0")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x2983B50", Offset = "0x2982150", VA = "0x182983B50")]
		[DebuggerStepThrough]
		public static v256 mm256_blendv_pd(v256 a, v256 b, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x2983C10", Offset = "0x2982210", VA = "0x182983C10")]
		[DebuggerStepThrough]
		public static v256 mm256_blendv_ps(v256 a, v256 b, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x2984270", Offset = "0x2982870", VA = "0x182984270")]
		[DebuggerStepThrough]
		public static v256 mm256_div_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x2984300", Offset = "0x2982900", VA = "0x182984300")]
		[DebuggerStepThrough]
		public static v256 mm256_div_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x29843C0", Offset = "0x29829C0", VA = "0x1829843C0")]
		[DebuggerStepThrough]
		public static v256 mm256_dp_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x29845D0", Offset = "0x2982BD0", VA = "0x1829845D0")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x2984660", Offset = "0x2982C60", VA = "0x182984660")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x29846F0", Offset = "0x2982CF0", VA = "0x1829846F0")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x2984780", Offset = "0x2982D80", VA = "0x182984780")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x2984AB0", Offset = "0x29830B0", VA = "0x182984AB0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x2984B40", Offset = "0x2983140", VA = "0x182984B40")]
		[DebuggerStepThrough]
		public static v256 mm256_max_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x2984D10", Offset = "0x2983310", VA = "0x182984D10")]
		[DebuggerStepThrough]
		public static v256 mm256_min_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE1")]
		[Address(RVA = "0x2984DA0", Offset = "0x29833A0", VA = "0x182984DA0")]
		[DebuggerStepThrough]
		public static v256 mm256_min_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x29850B0", Offset = "0x29836B0", VA = "0x1829850B0")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x2985140", Offset = "0x2983740", VA = "0x182985140")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x297FCA0", Offset = "0x297E2A0", VA = "0x18297FCA0")]
		[DebuggerStepThrough]
		public static v256 mm256_or_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x2985200", Offset = "0x2983800", VA = "0x182985200")]
		[DebuggerStepThrough]
		public static v256 mm256_or_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x2985C30", Offset = "0x2984230", VA = "0x182985C30")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x2985CD0", Offset = "0x29842D0", VA = "0x182985CD0")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x2986040", Offset = "0x2984640", VA = "0x182986040")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x29860D0", Offset = "0x29846D0", VA = "0x1829860D0")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x2981DC0", Offset = "0x29803C0", VA = "0x182981DC0")]
		[DebuggerStepThrough]
		public static v256 mm256_xor_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x29866B0", Offset = "0x2984CB0", VA = "0x1829866B0")]
		[DebuggerStepThrough]
		public static v256 mm256_xor_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x29820C0", Offset = "0x29806C0", VA = "0x1829820C0")]
		[DebuggerStepThrough]
		public static v128 cmp_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x2983E30", Offset = "0x2982430", VA = "0x182983E30")]
		[DebuggerStepThrough]
		public static v256 mm256_cmp_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x2982810", Offset = "0x2980E10", VA = "0x182982810")]
		[DebuggerStepThrough]
		public static v128 cmp_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x2983ED0", Offset = "0x29824D0", VA = "0x182983ED0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmp_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x29835B0", Offset = "0x2981BB0", VA = "0x1829835B0")]
		[DebuggerStepThrough]
		public static v128 cmp_sd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x2983610", Offset = "0x2981C10", VA = "0x182983610")]
		[DebuggerStepThrough]
		public static v128 cmp_ss(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x2983F70", Offset = "0x2982570", VA = "0x182983F70")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi32_pd(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x2983FB0", Offset = "0x29825B0", VA = "0x182983FB0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi32_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x2984090", Offset = "0x2982690", VA = "0x182984090")]
		[DebuggerStepThrough]
		public static v128 mm256_cvtpd_ps(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x2984130", Offset = "0x2982730", VA = "0x182984130")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtps_epi32(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x29841A0", Offset = "0x29827A0", VA = "0x1829841A0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtps_pd(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x29841D0", Offset = "0x29827D0", VA = "0x1829841D0")]
		[DebuggerStepThrough]
		public static v128 mm256_cvttpd_epi32(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x2984020", Offset = "0x2982620", VA = "0x182984020")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v128 mm256_cvtpd_epi32(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x2984200", Offset = "0x2982800", VA = "0x182984200")]
		[DebuggerStepThrough]
		public static v256 mm256_cvttps_epi32(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		[DebuggerStepThrough]
		public static float mm256_cvtss_f32(v256 a)
		{
			return default(float);
		}

		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x2984480", Offset = "0x2982A80", VA = "0x182984480")]
		[DebuggerStepThrough]
		public static v128 mm256_extractf128_ps(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x2984480", Offset = "0x2982A80", VA = "0x182984480")]
		[DebuggerStepThrough]
		public static v128 mm256_extractf128_pd(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x2984480", Offset = "0x2982A80", VA = "0x182984480")]
		[DebuggerStepThrough]
		public static v128 mm256_extractf128_si256(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[DebuggerStepThrough]
		public static void mm256_zeroall()
		{
		}

		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[DebuggerStepThrough]
		public static void mm256_zeroupper()
		{
		}

		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x29867A0", Offset = "0x2984DA0", VA = "0x1829867A0")]
		[DebuggerStepThrough]
		public static v128 permutevar_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x2985300", Offset = "0x2983900", VA = "0x182985300")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x2986730", Offset = "0x2984D30", VA = "0x182986730")]
		[DebuggerStepThrough]
		public static v128 permute_ps(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x29802B0", Offset = "0x297E8B0", VA = "0x1829802B0")]
		[DebuggerStepThrough]
		public static v256 mm256_permute_ps(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x2986770", Offset = "0x2984D70", VA = "0x182986770")]
		[DebuggerStepThrough]
		public static v128 permutevar_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x29852A0", Offset = "0x29838A0", VA = "0x1829852A0")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x2985230", Offset = "0x2983830", VA = "0x182985230")]
		[DebuggerStepThrough]
		public static v256 mm256_permute_pd(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x2986700", Offset = "0x2984D00", VA = "0x182986700")]
		[DebuggerStepThrough]
		public static v128 permute_pd(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x2982070", Offset = "0x2980670", VA = "0x182982070")]
		private static v128 Select4(v256 src1, v256 src2, int control)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x297FF70", Offset = "0x297E570", VA = "0x18297FF70")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2f128_ps(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x297FF70", Offset = "0x297E570", VA = "0x18297FF70")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2f128_pd(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x297FF70", Offset = "0x297E570", VA = "0x18297FF70")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2f128_si256(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x297D840", Offset = "0x297BE40", VA = "0x18297D840")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_ss(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x297C3A0", Offset = "0x297A9A0", VA = "0x18297C3A0")]
		[DebuggerStepThrough]
		public unsafe static v128 broadcast_ss(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x297D880", Offset = "0x297BE80", VA = "0x18297D880")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_sd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x297D8A0", Offset = "0x297BEA0", VA = "0x18297D8A0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_ps(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x2983CD0", Offset = "0x29822D0", VA = "0x182983CD0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_broadcast_pd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x2984890", Offset = "0x2982E90", VA = "0x182984890")]
		[DebuggerStepThrough]
		public static v256 mm256_insertf128_ps(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x297E9E0", Offset = "0x297CFE0", VA = "0x18297E9E0")]
		[DebuggerStepThrough]
		public static v256 mm256_insertf128_pd(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x297E9E0", Offset = "0x297CFE0", VA = "0x18297E9E0")]
		[DebuggerStepThrough]
		public static v256 mm256_insertf128_si256(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_load_ps(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_store_ps(void* ptr, v256 val)
		{
		}

		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_load_pd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B17")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_store_pd(void* ptr, v256 a)
		{
		}

		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_loadu_pd(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_storeu_pd(void* ptr, v256 a)
		{
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_loadu_ps(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_storeu_ps(void* ptr, v256 a)
		{
		}

		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_load_si256(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_store_si256(void* ptr, v256 v)
		{
		}

		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_loadu_si256(void* ptr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B1F")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_storeu_si256(void* ptr, v256 v)
		{
		}

		[Token(Token = "0x6000B20")]
		[Address(RVA = "0x29848C0", Offset = "0x2982EC0", VA = "0x1829848C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static v256 mm256_loadu2_m128(void* hiaddr, void* loaddr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B21")]
		[Address(RVA = "0x29848C0", Offset = "0x2982EC0", VA = "0x1829848C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static v256 mm256_loadu2_m128d(void* hiaddr, void* loaddr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B22")]
		[Address(RVA = "0x29848C0", Offset = "0x2982EC0", VA = "0x1829848C0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static v256 mm256_loadu2_m128i(void* hiaddr, void* loaddr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B23")]
		[Address(RVA = "0x29858F0", Offset = "0x2983EF0", VA = "0x1829858F0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_m128(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B24")]
		[Address(RVA = "0x2986030", Offset = "0x2984630", VA = "0x182986030")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static void mm256_storeu2_m128(void* hiaddr, void* loaddr, v256 val)
		{
		}

		[Token(Token = "0x6000B25")]
		[Address(RVA = "0x2986030", Offset = "0x2984630", VA = "0x182986030")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static void mm256_storeu2_m128d(void* hiaddr, void* loaddr, v256 val)
		{
		}

		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x2986030", Offset = "0x2984630", VA = "0x182986030")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public unsafe static void mm256_storeu2_m128i(void* hiaddr, void* loaddr, v256 val)
		{
		}

		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x2983670", Offset = "0x2981C70", VA = "0x182983670")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_pd(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B28")]
		[Address(RVA = "0x29848E0", Offset = "0x2982EE0", VA = "0x1829848E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_pd(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B29")]
		[Address(RVA = "0x29836E0", Offset = "0x2981CE0", VA = "0x1829836E0")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_pd(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000B2A")]
		[Address(RVA = "0x2984A00", Offset = "0x2983000", VA = "0x182984A00")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_pd(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000B2B")]
		[Address(RVA = "0x29836A0", Offset = "0x2981CA0", VA = "0x1829836A0")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_ps(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0x2984950", Offset = "0x2982F50", VA = "0x182984950")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_ps(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x2983700", Offset = "0x2981D00", VA = "0x182983700")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_ps(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x2984A40", Offset = "0x2983040", VA = "0x182984A40")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_ps(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000B2F")]
		[Address(RVA = "0x2984F90", Offset = "0x2983590", VA = "0x182984F90")]
		[DebuggerStepThrough]
		public static v256 mm256_movehdup_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x2984FC0", Offset = "0x29835C0", VA = "0x182984FC0")]
		[DebuggerStepThrough]
		public static v256 mm256_moveldup_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x2984F70", Offset = "0x2983570", VA = "0x182984F70")]
		[DebuggerStepThrough]
		public static v256 mm256_movedup_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_lddqu_si256(void* mem_addr)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B33")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_stream_si256(void* mem_addr, v256 a)
		{
		}

		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_stream_pd(void* mem_addr, v256 a)
		{
		}

		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x2986020", Offset = "0x2984620", VA = "0x182986020")]
		[DebuggerStepThrough]
		public unsafe static void mm256_stream_ps(void* mem_addr, v256 a)
		{
		}

		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x29853B0", Offset = "0x29839B0", VA = "0x1829853B0")]
		[DebuggerStepThrough]
		public static v256 mm256_rcp_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x2985540", Offset = "0x2983B40", VA = "0x182985540")]
		[DebuggerStepThrough]
		public static v256 mm256_rsqrt_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B38")]
		[Address(RVA = "0x2985D80", Offset = "0x2984380", VA = "0x182985D80")]
		[DebuggerStepThrough]
		public static v256 mm256_sqrt_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x2985DF0", Offset = "0x29843F0", VA = "0x182985DF0")]
		[DebuggerStepThrough]
		public static v256 mm256_sqrt_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3A")]
		[Address(RVA = "0x2985440", Offset = "0x2983A40", VA = "0x182985440")]
		[DebuggerStepThrough]
		public static v256 mm256_round_pd(v256 a, int rounding)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x2983D10", Offset = "0x2982310", VA = "0x182983D10")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_ceil_pd(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x29844B0", Offset = "0x2982AB0", VA = "0x1829844B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_floor_pd(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x29854C0", Offset = "0x2983AC0", VA = "0x1829854C0")]
		[DebuggerStepThrough]
		public static v256 mm256_round_ps(v256 a, int rounding)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x2983DA0", Offset = "0x29823A0", VA = "0x182983DA0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_ceil_ps(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x2984540", Offset = "0x2982B40", VA = "0x182984540")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_floor_ps(v256 val)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B40")]
		[Address(RVA = "0x2981A60", Offset = "0x2980060", VA = "0x182981A60")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x2981CA0", Offset = "0x29802A0", VA = "0x182981CA0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_pd(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B42")]
		[Address(RVA = "0x29865F0", Offset = "0x2984BF0", VA = "0x1829865F0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_unpackhi_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x2986650", Offset = "0x2984C50", VA = "0x182986650")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_unpacklo_ps(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x2986580", Offset = "0x2984B80", VA = "0x182986580")]
		[DebuggerStepThrough]
		public static int mm256_testz_si256(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x2986230", Offset = "0x2984830", VA = "0x182986230")]
		[DebuggerStepThrough]
		public static int mm256_testc_si256(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x29863F0", Offset = "0x29849F0", VA = "0x1829863F0")]
		[DebuggerStepThrough]
		public static int mm256_testnzc_si256(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x29864F0", Offset = "0x2984AF0", VA = "0x1829864F0")]
		[DebuggerStepThrough]
		public static int mm256_testz_pd(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x2986190", Offset = "0x2984790", VA = "0x182986190")]
		[DebuggerStepThrough]
		public static int mm256_testc_pd(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x29862A0", Offset = "0x29848A0", VA = "0x1829862A0")]
		[DebuggerStepThrough]
		public static int mm256_testnzc_pd(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x2986930", Offset = "0x2984F30", VA = "0x182986930")]
		[DebuggerStepThrough]
		public static int testz_pd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4B")]
		[Address(RVA = "0x29867F0", Offset = "0x2984DF0", VA = "0x1829867F0")]
		[DebuggerStepThrough]
		public static int testc_pd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4C")]
		[Address(RVA = "0x2986860", Offset = "0x2984E60", VA = "0x182986860")]
		[DebuggerStepThrough]
		public static int testnzc_pd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4D")]
		[Address(RVA = "0x2986530", Offset = "0x2984B30", VA = "0x182986530")]
		[DebuggerStepThrough]
		public static int mm256_testz_ps(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4E")]
		[Address(RVA = "0x29861D0", Offset = "0x29847D0", VA = "0x1829861D0")]
		[DebuggerStepThrough]
		public static int mm256_testc_ps(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x2986330", Offset = "0x2984930", VA = "0x182986330")]
		[DebuggerStepThrough]
		public static int mm256_testnzc_ps(v256 a, v256 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B50")]
		[Address(RVA = "0x2986950", Offset = "0x2984F50", VA = "0x182986950")]
		[DebuggerStepThrough]
		public static int testz_ps(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B51")]
		[Address(RVA = "0x2986820", Offset = "0x2984E20", VA = "0x182986820")]
		[DebuggerStepThrough]
		public static int testc_ps(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B52")]
		[Address(RVA = "0x29868C0", Offset = "0x2984EC0", VA = "0x1829868C0")]
		[DebuggerStepThrough]
		public static int testnzc_ps(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x2984FF0", Offset = "0x29835F0", VA = "0x182984FF0")]
		[DebuggerStepThrough]
		public static int mm256_movemask_pd(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x2985040", Offset = "0x2983640", VA = "0x182985040")]
		[DebuggerStepThrough]
		public static int mm256_movemask_ps(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B55")]
		[Address(RVA = "0xE03E30", Offset = "0xE02430", VA = "0x180E03E30")]
		[DebuggerStepThrough]
		public static v256 mm256_setzero_pd()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B56")]
		[Address(RVA = "0xE03E30", Offset = "0xE02430", VA = "0x180E03E30")]
		[DebuggerStepThrough]
		public static v256 mm256_setzero_ps()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B57")]
		[Address(RVA = "0xE03E30", Offset = "0xE02430", VA = "0x180E03E30")]
		[DebuggerStepThrough]
		public static v256 mm256_setzero_si256()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B58")]
		[Address(RVA = "0x2985910", Offset = "0x2983F10", VA = "0x182985910")]
		[DebuggerStepThrough]
		public static v256 mm256_set_pd(double d, double c, double b, double a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B59")]
		[Address(RVA = "0x2985930", Offset = "0x2983F30", VA = "0x182985930")]
		[DebuggerStepThrough]
		public static v256 mm256_set_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5A")]
		[Address(RVA = "0x29857C0", Offset = "0x2983DC0", VA = "0x1829857C0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi8(byte e31_, byte e30_, byte e29_, byte e28_, byte e27_, byte e26_, byte e25_, byte e24_, byte e23_, byte e22_, byte e21_, byte e20_, byte e19_, byte e18_, byte e17_, byte e16_, byte e15_, byte e14_, byte e13_, byte e12_, byte e11_, byte e10_, byte e9_, byte e8_, byte e7_, byte e6_, byte e5_, byte e4_, byte e3_, byte e2_, byte e1_, byte e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x29856D0", Offset = "0x2983CD0", VA = "0x1829856D0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi16(short e15_, short e14_, short e13_, short e12_, short e11_, short e10_, short e9_, short e8_, short e7_, short e6_, short e5_, short e4_, short e3_, short e2_, short e1_, short e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x2985760", Offset = "0x2983D60", VA = "0x182985760")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x29857A0", Offset = "0x2983DA0", VA = "0x1829857A0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_epi64x(long e3, long e2, long e1, long e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x29858F0", Offset = "0x2983EF0", VA = "0x1829858F0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_m128d(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x29858F0", Offset = "0x2983EF0", VA = "0x1829858F0")]
		[DebuggerStepThrough]
		public static v256 mm256_set_m128i(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x2985BC0", Offset = "0x29841C0", VA = "0x182985BC0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_pd(double d, double c, double b, double a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x2985BE0", Offset = "0x29841E0", VA = "0x182985BE0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_ps(float e7, float e6, float e5, float e4, float e3, float e2, float e1, float e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x2985A70", Offset = "0x2984070", VA = "0x182985A70")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi8(byte e31_, byte e30_, byte e29_, byte e28_, byte e27_, byte e26_, byte e25_, byte e24_, byte e23_, byte e22_, byte e21_, byte e20_, byte e19_, byte e18_, byte e17_, byte e16_, byte e15_, byte e14_, byte e13_, byte e12_, byte e11_, byte e10_, byte e9_, byte e8_, byte e7_, byte e6_, byte e5_, byte e4_, byte e3_, byte e2_, byte e1_, byte e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x2985980", Offset = "0x2983F80", VA = "0x182985980")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi16(short e15_, short e14_, short e13_, short e12_, short e11_, short e10_, short e9_, short e8_, short e7_, short e6_, short e5_, short e4_, short e3_, short e2_, short e1_, short e0_)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x2985A10", Offset = "0x2984010", VA = "0x182985A10")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi32(int e7, int e6, int e5, int e4, int e3, int e2, int e1, int e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B65")]
		[Address(RVA = "0x2985A50", Offset = "0x2984050", VA = "0x182985A50")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_epi64x(long e3, long e2, long e1, long e0)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B66")]
		[Address(RVA = "0x2985BA0", Offset = "0x29841A0", VA = "0x182985BA0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_m128(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B67")]
		[Address(RVA = "0x2985BA0", Offset = "0x29841A0", VA = "0x182985BA0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_m128d(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B68")]
		[Address(RVA = "0x2985BA0", Offset = "0x29841A0", VA = "0x182985BA0")]
		[DebuggerStepThrough]
		public static v256 mm256_setr_m128i(v128 hi, v128 lo)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x29856B0", Offset = "0x2983CB0", VA = "0x1829856B0")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_pd(double a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x29856C0", Offset = "0x2983CC0", VA = "0x1829856C0")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_ps(float a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x2985640", Offset = "0x2983C40", VA = "0x182985640")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi8(byte a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x29855B0", Offset = "0x2983BB0", VA = "0x1829855B0")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi16(short a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x2985600", Offset = "0x2983C00", VA = "0x182985600")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi32(int a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x2985620", Offset = "0x2983C20", VA = "0x182985620")]
		[DebuggerStepThrough]
		public static v256 mm256_set1_epi64x(long a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public static v256 mm256_castpd_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public static v256 mm256_castps_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B71")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public static v256 mm256_castps_si256(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B72")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public static v256 mm256_castpd_si256(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B73")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public static v256 mm256_castsi256_ps(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B74")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
		[DebuggerStepThrough]
		public static v256 mm256_castsi256_pd(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B75")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[DebuggerStepThrough]
		public static v128 mm256_castps256_ps128(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B76")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[DebuggerStepThrough]
		public static v128 mm256_castpd256_pd128(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B77")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[DebuggerStepThrough]
		public static v128 mm256_castsi256_si128(v256 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000B78")]
		[Address(RVA = "0x2983CF0", Offset = "0x29822F0", VA = "0x182983CF0")]
		[DebuggerStepThrough]
		public static v256 mm256_castps128_ps256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x2983CF0", Offset = "0x29822F0", VA = "0x182983CF0")]
		[DebuggerStepThrough]
		public static v256 mm256_castpd128_pd256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x2983CF0", Offset = "0x29822F0", VA = "0x182983CF0")]
		[DebuggerStepThrough]
		public static v256 mm256_castsi128_si256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
		[DebuggerStepThrough]
		public static v128 undefined_ps()
		{
			return default(v128);
		}

		[Token(Token = "0x6000B7C")]
		[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v128 undefined_pd()
		{
			return default(v128);
		}

		[Token(Token = "0x6000B7D")]
		[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v128 undefined_si128()
		{
			return default(v128);
		}

		[Token(Token = "0x6000B7E")]
		[Address(RVA = "0xE03E30", Offset = "0xE02430", VA = "0x180E03E30")]
		[DebuggerStepThrough]
		public static v256 mm256_undefined_ps()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B7F")]
		[Address(RVA = "0xE03E30", Offset = "0xE02430", VA = "0x180E03E30")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_undefined_pd()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B80")]
		[Address(RVA = "0xE03E30", Offset = "0xE02430", VA = "0x180E03E30")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_undefined_si256()
		{
			return default(v256);
		}

		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x2983CF0", Offset = "0x29822F0", VA = "0x182983CF0")]
		[DebuggerStepThrough]
		public static v256 mm256_zextps128_ps256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x29866E0", Offset = "0x2984CE0", VA = "0x1829866E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_zextpd128_pd256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x29866E0", Offset = "0x2984CE0", VA = "0x1829866E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.AVX)]
		public static v256 mm256_zextsi128_si256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x2984870", Offset = "0x2982E70", VA = "0x182984870")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi8(v256 a, int i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B85")]
		[Address(RVA = "0x2984810", Offset = "0x2982E10", VA = "0x182984810")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi16(v256 a, int i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x2984830", Offset = "0x2982E30", VA = "0x182984830")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi32(v256 a, int i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x2984850", Offset = "0x2982E50", VA = "0x182984850")]
		[DebuggerStepThrough]
		public static v256 mm256_insert_epi64(v256 a, long i, int index)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x2984460", Offset = "0x2982A60", VA = "0x182984460")]
		[DebuggerStepThrough]
		public static int mm256_extract_epi32(v256 a, int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x2984470", Offset = "0x2982A70", VA = "0x182984470")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x297F790", Offset = "0x297DD90", VA = "0x18297F790")]
		[DebuggerStepThrough]
		public static int mm256_movemask_epi8(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x297E240", Offset = "0x297C840", VA = "0x18297E240")]
		[DebuggerStepThrough]
		public static int mm256_extract_epi8(v256 a, int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x297E230", Offset = "0x297C830", VA = "0x18297E230")]
		[DebuggerStepThrough]
		public static int mm256_extract_epi16(v256 a, int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x1B22320", Offset = "0x1B20920", VA = "0x181B22320")]
		[DebuggerStepThrough]
		public static double mm256_cvtsd_f64(v256 a)
		{
			return default(double);
		}

		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[DebuggerStepThrough]
		public static int mm256_cvtsi256_si32(v256 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[DebuggerStepThrough]
		public static long mm256_cvtsi256_si64(v256 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x297DBF0", Offset = "0x297C1F0", VA = "0x18297DBF0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B92")]
		[Address(RVA = "0x297DA40", Offset = "0x297C040", VA = "0x18297DA40")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x297DAD0", Offset = "0x297C0D0", VA = "0x18297DAD0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x297DB60", Offset = "0x297C160", VA = "0x18297DB60")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpeq_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x297DEA0", Offset = "0x297C4A0", VA = "0x18297DEA0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x297DC80", Offset = "0x297C280", VA = "0x18297DC80")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x297DD10", Offset = "0x297C310", VA = "0x18297DD10")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x297DDA0", Offset = "0x297C3A0", VA = "0x18297DDA0")]
		[DebuggerStepThrough]
		public static v256 mm256_cmpgt_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x297F1F0", Offset = "0x297D7F0", VA = "0x18297F1F0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x297F0D0", Offset = "0x297D6D0", VA = "0x18297F0D0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x297F160", Offset = "0x297D760", VA = "0x18297F160")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x297F3A0", Offset = "0x297D9A0", VA = "0x18297F3A0")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x297F280", Offset = "0x297D880", VA = "0x18297F280")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x297F310", Offset = "0x297D910", VA = "0x18297F310")]
		[DebuggerStepThrough]
		public static v256 mm256_max_epu32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x297F550", Offset = "0x297DB50", VA = "0x18297F550")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x297F430", Offset = "0x297DA30", VA = "0x18297F430")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x297F4C0", Offset = "0x297DAC0", VA = "0x18297F4C0")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x297F700", Offset = "0x297DD00", VA = "0x18297F700")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA3")]
		[Address(RVA = "0x297F5E0", Offset = "0x297DBE0", VA = "0x18297F5E0")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x297F670", Offset = "0x297DC70", VA = "0x18297F670")]
		[DebuggerStepThrough]
		public static v256 mm256_min_epu32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x297D360", Offset = "0x297B960", VA = "0x18297D360")]
		[DebuggerStepThrough]
		public static v256 mm256_and_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x297D3F0", Offset = "0x297B9F0", VA = "0x18297D3F0")]
		[DebuggerStepThrough]
		public static v256 mm256_andnot_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x297FCA0", Offset = "0x297E2A0", VA = "0x18297FCA0")]
		[DebuggerStepThrough]
		public static v256 mm256_or_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x2981DC0", Offset = "0x29803C0", VA = "0x182981DC0")]
		[DebuggerStepThrough]
		public static v256 mm256_xor_si256(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x297CDD0", Offset = "0x297B3D0", VA = "0x18297CDD0")]
		[DebuggerStepThrough]
		public static v256 mm256_abs_epi8(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x297CCF0", Offset = "0x297B2F0", VA = "0x18297CCF0")]
		[DebuggerStepThrough]
		public static v256 mm256_abs_epi16(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x297CD60", Offset = "0x297B360", VA = "0x18297CD60")]
		[DebuggerStepThrough]
		public static v256 mm256_abs_epi32(v256 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x297CFF0", Offset = "0x297B5F0", VA = "0x18297CFF0")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x297CE40", Offset = "0x297B440", VA = "0x18297CE40")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAE")]
		[Address(RVA = "0x297CED0", Offset = "0x297B4D0", VA = "0x18297CED0")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x297CF60", Offset = "0x297B560", VA = "0x18297CF60")]
		[DebuggerStepThrough]
		public static v256 mm256_add_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x297D110", Offset = "0x297B710", VA = "0x18297D110")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x297D080", Offset = "0x297B680", VA = "0x18297D080")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB2")]
		[Address(RVA = "0x297D230", Offset = "0x297B830", VA = "0x18297D230")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x297D1A0", Offset = "0x297B7A0", VA = "0x18297D1A0")]
		[DebuggerStepThrough]
		public static v256 mm256_adds_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x2981670", Offset = "0x297FC70", VA = "0x182981670")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x29814C0", Offset = "0x297FAC0", VA = "0x1829814C0")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x2981550", Offset = "0x297FB50", VA = "0x182981550")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x29815E0", Offset = "0x297FBE0", VA = "0x1829815E0")]
		[DebuggerStepThrough]
		public static v256 mm256_sub_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x2981790", Offset = "0x297FD90", VA = "0x182981790")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x2981700", Offset = "0x297FD00", VA = "0x182981700")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x29818B0", Offset = "0x297FEB0", VA = "0x1829818B0")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x2981820", Offset = "0x297FE20", VA = "0x182981820")]
		[DebuggerStepThrough]
		public static v256 mm256_subs_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x297D510", Offset = "0x297BB10", VA = "0x18297D510")]
		[DebuggerStepThrough]
		public static v256 mm256_avg_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x297D480", Offset = "0x297BA80", VA = "0x18297D480")]
		[DebuggerStepThrough]
		public static v256 mm256_avg_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x297E280", Offset = "0x297C880", VA = "0x18297E280")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x297E310", Offset = "0x297C910", VA = "0x18297E310")]
		[DebuggerStepThrough]
		public static v256 mm256_hadd_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x297E3A0", Offset = "0x297C9A0", VA = "0x18297E3A0")]
		[DebuggerStepThrough]
		public static v256 mm256_hadds_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x297E430", Offset = "0x297CA30", VA = "0x18297E430")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x297E4C0", Offset = "0x297CAC0", VA = "0x18297E4C0")]
		[DebuggerStepThrough]
		public static v256 mm256_hsub_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x297E550", Offset = "0x297CB50", VA = "0x18297E550")]
		[DebuggerStepThrough]
		public static v256 mm256_hsubs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x297EA20", Offset = "0x297D020", VA = "0x18297EA20")]
		[DebuggerStepThrough]
		public static v256 mm256_madd_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x297EAB0", Offset = "0x297D0B0", VA = "0x18297EAB0")]
		[DebuggerStepThrough]
		public static v256 mm256_maddubs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x297F9D0", Offset = "0x297DFD0", VA = "0x18297F9D0")]
		[DebuggerStepThrough]
		public static v256 mm256_mulhi_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC7")]
		[Address(RVA = "0x297FA60", Offset = "0x297E060", VA = "0x18297FA60")]
		[DebuggerStepThrough]
		public static v256 mm256_mulhi_epu16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x297FB80", Offset = "0x297E180", VA = "0x18297FB80")]
		[DebuggerStepThrough]
		public static v256 mm256_mullo_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BC9")]
		[Address(RVA = "0x297FC10", Offset = "0x297E210", VA = "0x18297FC10")]
		[DebuggerStepThrough]
		public static v256 mm256_mullo_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x297F940", Offset = "0x297DF40", VA = "0x18297F940")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_epu32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x297F8B0", Offset = "0x297DEB0", VA = "0x18297F8B0")]
		[DebuggerStepThrough]
		public static v256 mm256_mul_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x29805E0", Offset = "0x297EBE0", VA = "0x1829805E0")]
		[DebuggerStepThrough]
		public static v256 mm256_sign_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x29804C0", Offset = "0x297EAC0", VA = "0x1829804C0")]
		[DebuggerStepThrough]
		public static v256 mm256_sign_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x2980550", Offset = "0x297EB50", VA = "0x182980550")]
		[DebuggerStepThrough]
		public static v256 mm256_sign_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x297FAF0", Offset = "0x297E0F0", VA = "0x18297FAF0")]
		[DebuggerStepThrough]
		public static v256 mm256_mulhrs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD0")]
		[Address(RVA = "0x2980220", Offset = "0x297E820", VA = "0x182980220")]
		[DebuggerStepThrough]
		public static v256 mm256_sad_epu8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x297F810", Offset = "0x297DE10", VA = "0x18297F810")]
		[DebuggerStepThrough]
		public static v256 mm256_mpsadbw_epu8(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x29809A0", Offset = "0x297EFA0", VA = "0x1829809A0")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_si256(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x297D920", Offset = "0x297BF20", VA = "0x18297D920")]
		[DebuggerStepThrough]
		public static v256 mm256_bslli_epi128(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x2981290", Offset = "0x297F890", VA = "0x182981290")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_si256(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x297D9B0", Offset = "0x297BFB0", VA = "0x18297D9B0")]
		[DebuggerStepThrough]
		public static v256 mm256_bsrli_epi128(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x2980670", Offset = "0x297EC70", VA = "0x182980670")]
		[DebuggerStepThrough]
		public static v256 mm256_sll_epi16(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD7")]
		[Address(RVA = "0x2980700", Offset = "0x297ED00", VA = "0x182980700")]
		[DebuggerStepThrough]
		public static v256 mm256_sll_epi32(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x2980790", Offset = "0x297ED90", VA = "0x182980790")]
		[DebuggerStepThrough]
		public static v256 mm256_sll_epi64(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x2980820", Offset = "0x297EE20", VA = "0x182980820")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x29808A0", Offset = "0x297EEA0", VA = "0x1829808A0")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x2980920", Offset = "0x297EF20", VA = "0x182980920")]
		[DebuggerStepThrough]
		public static v256 mm256_slli_epi64(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x2980A20", Offset = "0x297F020", VA = "0x182980A20")]
		[DebuggerStepThrough]
		public static v256 mm256_sllv_epi32(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDD")]
		[Address(RVA = "0x2980B30", Offset = "0x297F130", VA = "0x182980B30")]
		[DebuggerStepThrough]
		public static v256 mm256_sllv_epi64(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x2981E50", Offset = "0x2980450", VA = "0x182981E50")]
		[DebuggerStepThrough]
		public static v128 sllv_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x2981EC0", Offset = "0x29804C0", VA = "0x182981EC0")]
		[DebuggerStepThrough]
		public static v128 sllv_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BE0")]
		[Address(RVA = "0x2980BD0", Offset = "0x297F1D0", VA = "0x182980BD0")]
		[DebuggerStepThrough]
		public static v256 mm256_sra_epi16(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE1")]
		[Address(RVA = "0x2980C60", Offset = "0x297F260", VA = "0x182980C60")]
		[DebuggerStepThrough]
		public static v256 mm256_sra_epi32(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE2")]
		[Address(RVA = "0x2980CF0", Offset = "0x297F2F0", VA = "0x182980CF0")]
		[DebuggerStepThrough]
		public static v256 mm256_srai_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x2980D70", Offset = "0x297F370", VA = "0x182980D70")]
		[DebuggerStepThrough]
		public static v256 mm256_srai_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x2980DF0", Offset = "0x297F3F0", VA = "0x182980DF0")]
		[DebuggerStepThrough]
		public static v256 mm256_srav_epi32(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE5")]
		[Address(RVA = "0x2981F10", Offset = "0x2980510", VA = "0x182981F10")]
		[DebuggerStepThrough]
		public static v128 srav_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x2980F60", Offset = "0x297F560", VA = "0x182980F60")]
		[DebuggerStepThrough]
		public static v256 mm256_srl_epi16(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x2980FF0", Offset = "0x297F5F0", VA = "0x182980FF0")]
		[DebuggerStepThrough]
		public static v256 mm256_srl_epi32(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x2981080", Offset = "0x297F680", VA = "0x182981080")]
		[DebuggerStepThrough]
		public static v256 mm256_srl_epi64(v256 a, v128 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x2981110", Offset = "0x297F710", VA = "0x182981110")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x2981190", Offset = "0x297F790", VA = "0x182981190")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x2981210", Offset = "0x297F810", VA = "0x182981210")]
		[DebuggerStepThrough]
		public static v256 mm256_srli_epi64(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x2981310", Offset = "0x297F910", VA = "0x182981310")]
		[DebuggerStepThrough]
		public static v256 mm256_srlv_epi32(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BED")]
		[Address(RVA = "0x2981420", Offset = "0x297FA20", VA = "0x182981420")]
		[DebuggerStepThrough]
		public static v256 mm256_srlv_epi64(v256 a, v256 count)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x2981FB0", Offset = "0x29805B0", VA = "0x182981FB0")]
		[DebuggerStepThrough]
		public static v128 srlv_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BEF")]
		[Address(RVA = "0x2982020", Offset = "0x2980620", VA = "0x182982020")]
		[DebuggerStepThrough]
		public static v128 srlv_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x297C310", Offset = "0x297A910", VA = "0x18297C310")]
		[DebuggerStepThrough]
		public static v128 blend_epi32(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0x297D640", Offset = "0x297BC40", VA = "0x18297D640")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_epi32(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x297D2C0", Offset = "0x297B8C0", VA = "0x18297D2C0")]
		[DebuggerStepThrough]
		public static v256 mm256_alignr_epi8(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x297D710", Offset = "0x297BD10", VA = "0x18297D710")]
		[DebuggerStepThrough]
		public static v256 mm256_blendv_epi8(v256 a, v256 b, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x297D5A0", Offset = "0x297BBA0", VA = "0x18297D5A0")]
		[DebuggerStepThrough]
		public static v256 mm256_blend_epi16(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x297FD30", Offset = "0x297E330", VA = "0x18297FD30")]
		[DebuggerStepThrough]
		public static v256 mm256_packs_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x297FDC0", Offset = "0x297E3C0", VA = "0x18297FDC0")]
		[DebuggerStepThrough]
		public static v256 mm256_packs_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x297FE50", Offset = "0x297E450", VA = "0x18297FE50")]
		[DebuggerStepThrough]
		public static v256 mm256_packus_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x297FEE0", Offset = "0x297E4E0", VA = "0x18297FEE0")]
		[DebuggerStepThrough]
		public static v256 mm256_packus_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x2981AF0", Offset = "0x29800F0", VA = "0x182981AF0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x2981940", Offset = "0x297FF40", VA = "0x182981940")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x29819D0", Offset = "0x297FFD0", VA = "0x1829819D0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFC")]
		[Address(RVA = "0x2981A60", Offset = "0x2980060", VA = "0x182981A60")]
		[DebuggerStepThrough]
		public static v256 mm256_unpackhi_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFD")]
		[Address(RVA = "0x2981D30", Offset = "0x2980330", VA = "0x182981D30")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x2981B80", Offset = "0x2980180", VA = "0x182981B80")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi16(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x2981C10", Offset = "0x2980210", VA = "0x182981C10")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi32(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C00")]
		[Address(RVA = "0x2981CA0", Offset = "0x29802A0", VA = "0x182981CA0")]
		[DebuggerStepThrough]
		public static v256 mm256_unpacklo_epi64(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C01")]
		[Address(RVA = "0x2980330", Offset = "0x297E930", VA = "0x182980330")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_epi8(v256 a, v256 b)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C02")]
		[Address(RVA = "0x29802B0", Offset = "0x297E8B0", VA = "0x1829802B0")]
		[DebuggerStepThrough]
		public static v256 mm256_shuffle_epi32(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x29803C0", Offset = "0x297E9C0", VA = "0x1829803C0")]
		[DebuggerStepThrough]
		public static v256 mm256_shufflehi_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C04")]
		[Address(RVA = "0x2980440", Offset = "0x297EA40", VA = "0x182980440")]
		[DebuggerStepThrough]
		public static v256 mm256_shufflelo_epi16(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C05")]
		[Address(RVA = "0x297E250", Offset = "0x297C850", VA = "0x18297E250")]
		[DebuggerStepThrough]
		public static v128 mm256_extracti128_si256(v256 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x297E9E0", Offset = "0x297CFE0", VA = "0x18297E9E0")]
		[DebuggerStepThrough]
		public static v256 mm256_inserti128_si256(v256 a, v128 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x297C3E0", Offset = "0x297A9E0", VA = "0x18297C3E0")]
		[DebuggerStepThrough]
		public static v128 broadcastss_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x297D8B0", Offset = "0x297BEB0", VA = "0x18297D8B0")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastss_ps(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x297C3D0", Offset = "0x297A9D0", VA = "0x18297C3D0")]
		[DebuggerStepThrough]
		public static v128 broadcastsd_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0A")]
		[Address(RVA = "0x297D880", Offset = "0x297BE80", VA = "0x18297D880")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastsd_pd(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x297C360", Offset = "0x297A960", VA = "0x18297C360")]
		[DebuggerStepThrough]
		public static v128 broadcastb_epi8(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0C")]
		[Address(RVA = "0x297C3F0", Offset = "0x297A9F0", VA = "0x18297C3F0")]
		[DebuggerStepThrough]
		public static v128 broadcastw_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0D")]
		[Address(RVA = "0x297C3A0", Offset = "0x297A9A0", VA = "0x18297C3A0")]
		[DebuggerStepThrough]
		public static v128 broadcastd_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0E")]
		[Address(RVA = "0x297C3C0", Offset = "0x297A9C0", VA = "0x18297C3C0")]
		[DebuggerStepThrough]
		public static v128 broadcastq_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C0F")]
		[Address(RVA = "0x297D7D0", Offset = "0x297BDD0", VA = "0x18297D7D0")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastb_epi8(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C10")]
		[Address(RVA = "0x297D8D0", Offset = "0x297BED0", VA = "0x18297D8D0")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastw_epi16(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x297D840", Offset = "0x297BE40", VA = "0x18297D840")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastd_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x297D860", Offset = "0x297BE60", VA = "0x18297D860")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastq_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x297D8A0", Offset = "0x297BEA0", VA = "0x18297D8A0")]
		[DebuggerStepThrough]
		public static v256 mm256_broadcastsi128_si256(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x297DFF0", Offset = "0x297C5F0", VA = "0x18297DFF0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi8_epi16(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C15")]
		[Address(RVA = "0x297E020", Offset = "0x297C620", VA = "0x18297E020")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi8_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C16")]
		[Address(RVA = "0x297E080", Offset = "0x297C680", VA = "0x18297E080")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi8_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x297DF30", Offset = "0x297C530", VA = "0x18297DF30")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi16_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x297DF80", Offset = "0x297C580", VA = "0x18297DF80")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi16_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x297DFC0", Offset = "0x297C5C0", VA = "0x18297DFC0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepi32_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x297E160", Offset = "0x297C760", VA = "0x18297E160")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu8_epi16(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x297E190", Offset = "0x297C790", VA = "0x18297E190")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu8_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x297E200", Offset = "0x297C800", VA = "0x18297E200")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu8_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x297E0C0", Offset = "0x297C6C0", VA = "0x18297E0C0")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu16_epi32(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x297E100", Offset = "0x297C700", VA = "0x18297E100")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu16_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x297E130", Offset = "0x297C730", VA = "0x18297E130")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtepu32_epi64(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x297CC40", Offset = "0x297B240", VA = "0x18297CC40")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_epi32(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x297CC80", Offset = "0x297B280", VA = "0x18297CC80")]
		[DebuggerStepThrough]
		public unsafe static v128 maskload_epi64(void* mem_addr, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x297CCB0", Offset = "0x297B2B0", VA = "0x18297CCB0")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_epi32(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x297CCD0", Offset = "0x297B2D0", VA = "0x18297CCD0")]
		[DebuggerStepThrough]
		public unsafe static void maskstore_epi64(void* mem_addr, v128 mask, v128 a)
		{
		}

		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x297EFA0", Offset = "0x297D5A0", VA = "0x18297EFA0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_epi32(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x297F020", Offset = "0x297D620", VA = "0x18297F020")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_maskload_epi64(void* mem_addr, v256 mask)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x297F070", Offset = "0x297D670", VA = "0x18297F070")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_epi32(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x297F090", Offset = "0x297D690", VA = "0x18297F090")]
		[DebuggerStepThrough]
		public unsafe static void mm256_maskstore_epi64(void* mem_addr, v256 mask, v256 a)
		{
		}

		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x29800F0", Offset = "0x297E6F0", VA = "0x1829800F0")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar8x32_epi32(v256 a, v256 idx)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x2980170", Offset = "0x297E770", VA = "0x182980170")]
		[DebuggerStepThrough]
		public static v256 mm256_permutevar8x32_ps(v256 a, v256 idx)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x2980010", Offset = "0x297E610", VA = "0x182980010")]
		[DebuggerStepThrough]
		public static v256 mm256_permute4x64_epi64(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x2980070", Offset = "0x297E670", VA = "0x182980070")]
		[DebuggerStepThrough]
		public static v256 mm256_permute4x64_pd(v256 a, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x297FF70", Offset = "0x297E570", VA = "0x18297FF70")]
		[DebuggerStepThrough]
		public static v256 mm256_permute2x128_si256(v256 a, v256 b, int imm8)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x180D5F0", Offset = "0x180BBF0", VA = "0x18180D5F0")]
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
		[Address(RVA = "0x297E5E0", Offset = "0x297CBE0", VA = "0x18297E5E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_epi32(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x297E6E0", Offset = "0x297CCE0", VA = "0x18297E6E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_pd(void* base_addr, v128 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C32")]
		[Address(RVA = "0x297E760", Offset = "0x297CD60", VA = "0x18297E760")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_ps(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x297E8E0", Offset = "0x297CEE0", VA = "0x18297E8E0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i64gather_pd(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C34")]
		[Address(RVA = "0x297E960", Offset = "0x297CF60", VA = "0x18297E960")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_i64gather_ps(void* base_addr, v256 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x297C520", Offset = "0x297AB20", VA = "0x18297C520")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_pd(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x297C5A0", Offset = "0x297ABA0", VA = "0x18297C5A0")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_ps(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C37")]
		[Address(RVA = "0x297C720", Offset = "0x297AD20", VA = "0x18297C720")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_pd(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C38")]
		[Address(RVA = "0x297C7A0", Offset = "0x297ADA0", VA = "0x18297C7A0")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_ps(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C39")]
		[Address(RVA = "0x297E660", Offset = "0x297CC60", VA = "0x18297E660")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i32gather_epi64(void* base_addr, v128 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x297E7E0", Offset = "0x297CDE0", VA = "0x18297E7E0")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_i64gather_epi32(void* base_addr, v256 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x297E860", Offset = "0x297CE60", VA = "0x18297E860")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_i64gather_epi64(void* base_addr, v256 vindex, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x297C420", Offset = "0x297AA20", VA = "0x18297C420")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_epi32(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x297C4A0", Offset = "0x297AAA0", VA = "0x18297C4A0")]
		[DebuggerStepThrough]
		public unsafe static v128 i32gather_epi64(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x297C620", Offset = "0x297AC20", VA = "0x18297C620")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_epi32(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x297C6A0", Offset = "0x297ACA0", VA = "0x18297C6A0")]
		[DebuggerStepThrough]
		public unsafe static v128 i64gather_epi64(void* base_addr, v128 vindex, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x297EC60", Offset = "0x297D260", VA = "0x18297EC60")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_pd(v256 src, void* base_addr, v128 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x297ECF0", Offset = "0x297D2F0", VA = "0x18297ECF0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_ps(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x297EE90", Offset = "0x297D490", VA = "0x18297EE90")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i64gather_pd(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x297EF20", Offset = "0x297D520", VA = "0x18297EF20")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_mask_i64gather_ps(v128 src, void* base_addr, v256 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x297EB40", Offset = "0x297D140", VA = "0x18297EB40")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_epi32(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x297EBD0", Offset = "0x297D1D0", VA = "0x18297EBD0")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i32gather_epi64(v256 src, void* base_addr, v128 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x297EE00", Offset = "0x297D400", VA = "0x18297EE00")]
		[DebuggerStepThrough]
		public unsafe static v256 mm256_mask_i64gather_epi64(v256 src, void* base_addr, v256 vindex, v256 mask, int scale)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x297ED80", Offset = "0x297D380", VA = "0x18297ED80")]
		[DebuggerStepThrough]
		public unsafe static v128 mm256_mask_i64gather_epi32(v128 src, void* base_addr, v256 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x297C920", Offset = "0x297AF20", VA = "0x18297C920")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_pd(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x297C9A0", Offset = "0x297AFA0", VA = "0x18297C9A0")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_ps(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x297CB30", Offset = "0x297B130", VA = "0x18297CB30")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_pd(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4B")]
		[Address(RVA = "0x297CBB0", Offset = "0x297B1B0", VA = "0x18297CBB0")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_ps(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4C")]
		[Address(RVA = "0x297C820", Offset = "0x297AE20", VA = "0x18297C820")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_epi32(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4D")]
		[Address(RVA = "0x297C8A0", Offset = "0x297AEA0", VA = "0x18297C8A0")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i32gather_epi64(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4E")]
		[Address(RVA = "0x297CA20", Offset = "0x297B020", VA = "0x18297CA20")]
		[DebuggerStepThrough]
		public unsafe static v128 mask_i64gather_epi32(v128 src, void* base_addr, v128 vindex, v128 mask, int scale)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C4F")]
		[Address(RVA = "0x297CAB0", Offset = "0x297B0B0", VA = "0x18297CAB0")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C51")]
		[Address(RVA = "0x2986980", Offset = "0x2984F80", VA = "0x182986980")]
		[DebuggerStepThrough]
		public static uint andn_u32(uint a, uint b)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C52")]
		[Address(RVA = "0x2986990", Offset = "0x2984F90", VA = "0x182986990")]
		[DebuggerStepThrough]
		public static ulong andn_u64(ulong a, ulong b)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C53")]
		[Address(RVA = "0x2986A20", Offset = "0x2985020", VA = "0x182986A20")]
		[DebuggerStepThrough]
		public static uint bextr_u32(uint a, uint start, uint len)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C54")]
		[Address(RVA = "0x2986A60", Offset = "0x2985060", VA = "0x182986A60")]
		[DebuggerStepThrough]
		public static ulong bextr_u64(ulong a, uint start, uint len)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C55")]
		[Address(RVA = "0x29869A0", Offset = "0x2984FA0", VA = "0x1829869A0")]
		[DebuggerStepThrough]
		public static uint bextr2_u32(uint a, uint control)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x29869E0", Offset = "0x2984FE0", VA = "0x1829869E0")]
		[DebuggerStepThrough]
		public static ulong bextr2_u64(ulong a, ulong control)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x2986AA0", Offset = "0x29850A0", VA = "0x182986AA0")]
		[DebuggerStepThrough]
		public static uint blsi_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x2986AB0", Offset = "0x29850B0", VA = "0x182986AB0")]
		[DebuggerStepThrough]
		public static ulong blsi_u64(ulong a)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C59")]
		[Address(RVA = "0x2986AC0", Offset = "0x29850C0", VA = "0x182986AC0")]
		[DebuggerStepThrough]
		public static uint blsmsk_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C5A")]
		[Address(RVA = "0x2986AD0", Offset = "0x29850D0", VA = "0x182986AD0")]
		[DebuggerStepThrough]
		public static ulong blsmsk_u64(ulong a)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x2986AE0", Offset = "0x29850E0", VA = "0x182986AE0")]
		[DebuggerStepThrough]
		public static uint blsr_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x2986AF0", Offset = "0x29850F0", VA = "0x182986AF0")]
		[DebuggerStepThrough]
		public static ulong blsr_u64(ulong a)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x2986B00", Offset = "0x2985100", VA = "0x182986B00")]
		[DebuggerStepThrough]
		public static uint tzcnt_u32(uint a)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x2986B50", Offset = "0x2985150", VA = "0x182986B50")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x2986BE0", Offset = "0x29851E0", VA = "0x182986BE0")]
		[DebuggerStepThrough]
		public static uint bzhi_u32(uint a, uint index)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x2986C00", Offset = "0x2985200", VA = "0x182986C00")]
		[DebuggerStepThrough]
		public static ulong bzhi_u64(ulong a, ulong index)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C62")]
		[Address(RVA = "0x2986C30", Offset = "0x2985230", VA = "0x182986C30")]
		[DebuggerStepThrough]
		public static uint mulx_u32(uint a, uint b, out uint hi)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x2986C50", Offset = "0x2985250", VA = "0x182986C50")]
		[DebuggerStepThrough]
		public static ulong mulx_u64(ulong a, ulong b, out ulong hi)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x2986CB0", Offset = "0x29852B0", VA = "0x182986CB0")]
		[DebuggerStepThrough]
		public static uint pdep_u32(uint a, uint mask)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x2986D30", Offset = "0x2985330", VA = "0x182986D30")]
		[DebuggerStepThrough]
		public static ulong pdep_u64(ulong a, ulong mask)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x2986DB0", Offset = "0x29853B0", VA = "0x182986DB0")]
		[DebuggerStepThrough]
		public static uint pext_u32(uint a, uint mask)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x2986E30", Offset = "0x2985430", VA = "0x182986E30")]
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
		[Address(RVA = "0x2988BB0", Offset = "0x29871B0", VA = "0x182988BB0")]
		public RoundingScope(MXCSRBits roundingMode)
		{
		}

		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x2988BA0", Offset = "0x29871A0", VA = "0x182988BA0", Slot = "4")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x29870D0", Offset = "0x29856D0", VA = "0x1829870D0")]
		[DebuggerStepThrough]
		private static uint HalfToFloat(ushort h)
		{
			return default(uint);
		}

		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x2987280", Offset = "0x2985880", VA = "0x182987280")]
		[DebuggerStepThrough]
		public static v128 cvtph_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C6D")]
		[Address(RVA = "0x2987410", Offset = "0x2985A10", VA = "0x182987410")]
		[DebuggerStepThrough]
		public static v256 mm256_cvtph_ps(v128 a)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x2986EB0", Offset = "0x29854B0", VA = "0x182986EB0")]
		[DebuggerStepThrough]
		private static ushort FloatToHalf(uint f, int rounding)
		{
			return default(ushort);
		}

		[Token(Token = "0x6000C6F")]
		[Address(RVA = "0x2987310", Offset = "0x2985910", VA = "0x182987310")]
		[DebuggerStepThrough]
		public static v128 cvtps_ph(v128 a, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x29874D0", Offset = "0x2985AD0", VA = "0x1829874D0")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C73")]
		[Address(RVA = "0x2987650", Offset = "0x2985C50", VA = "0x182987650")]
		[DebuggerStepThrough]
		private static float FmaHelper(float a, float b, float c)
		{
			return default(float);
		}

		[Token(Token = "0x6000C74")]
		[Address(RVA = "0x2987680", Offset = "0x2985C80", VA = "0x182987680")]
		[DebuggerStepThrough]
		private static float FnmaHelper(float a, float b, float c)
		{
			return default(float);
		}

		[Token(Token = "0x6000C75")]
		[Address(RVA = "0x29876B0", Offset = "0x2985CB0", VA = "0x1829876B0")]
		[DebuggerStepThrough]
		public static v128 fmadd_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C76")]
		[Address(RVA = "0x2987FB0", Offset = "0x29865B0", VA = "0x182987FB0")]
		[DebuggerStepThrough]
		public static v256 mm256_fmadd_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C77")]
		[Address(RVA = "0x2987700", Offset = "0x2985D00", VA = "0x182987700")]
		[DebuggerStepThrough]
		public static v128 fmadd_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C78")]
		[Address(RVA = "0x2988000", Offset = "0x2986600", VA = "0x182988000")]
		[DebuggerStepThrough]
		public static v256 mm256_fmadd_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C79")]
		[Address(RVA = "0x29877B0", Offset = "0x2985DB0", VA = "0x1829877B0")]
		[DebuggerStepThrough]
		public static v128 fmadd_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x2987800", Offset = "0x2985E00", VA = "0x182987800")]
		[DebuggerStepThrough]
		public static v128 fmadd_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x2987840", Offset = "0x2985E40", VA = "0x182987840")]
		[DebuggerStepThrough]
		public static v128 fmaddsub_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x2988160", Offset = "0x2986760", VA = "0x182988160")]
		[DebuggerStepThrough]
		public static v256 mm256_fmaddsub_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x2987890", Offset = "0x2985E90", VA = "0x182987890")]
		[DebuggerStepThrough]
		public static v128 fmaddsub_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x29881B0", Offset = "0x29867B0", VA = "0x1829881B0")]
		[DebuggerStepThrough]
		public static v256 mm256_fmaddsub_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x2987960", Offset = "0x2985F60", VA = "0x182987960")]
		[DebuggerStepThrough]
		public static v128 fmsub_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x2988330", Offset = "0x2986930", VA = "0x182988330")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsub_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x29879B0", Offset = "0x2985FB0", VA = "0x1829879B0")]
		[DebuggerStepThrough]
		public static v128 fmsub_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x2988380", Offset = "0x2986980", VA = "0x182988380")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsub_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x2987A80", Offset = "0x2986080", VA = "0x182987A80")]
		[DebuggerStepThrough]
		public static v128 fmsub_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C84")]
		[Address(RVA = "0x2987AD0", Offset = "0x29860D0", VA = "0x182987AD0")]
		[DebuggerStepThrough]
		public static v128 fmsub_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x2987B10", Offset = "0x2986110", VA = "0x182987B10")]
		[DebuggerStepThrough]
		public static v128 fmsubadd_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x2988520", Offset = "0x2986B20", VA = "0x182988520")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsubadd_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C87")]
		[Address(RVA = "0x2987B60", Offset = "0x2986160", VA = "0x182987B60")]
		[DebuggerStepThrough]
		public static v128 fmsubadd_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x2988570", Offset = "0x2986B70", VA = "0x182988570")]
		[DebuggerStepThrough]
		public static v256 mm256_fmsubadd_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x2987C20", Offset = "0x2986220", VA = "0x182987C20")]
		[DebuggerStepThrough]
		public static v128 fnmadd_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8A")]
		[Address(RVA = "0x29886F0", Offset = "0x2986CF0", VA = "0x1829886F0")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmadd_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x2987C70", Offset = "0x2986270", VA = "0x182987C70")]
		[DebuggerStepThrough]
		public static v128 fnmadd_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x2988740", Offset = "0x2986D40", VA = "0x182988740")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmadd_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C8D")]
		[Address(RVA = "0x2987D40", Offset = "0x2986340", VA = "0x182987D40")]
		[DebuggerStepThrough]
		public static v128 fnmadd_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8E")]
		[Address(RVA = "0x2987D90", Offset = "0x2986390", VA = "0x182987D90")]
		[DebuggerStepThrough]
		public static v128 fnmadd_ss(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x2987DD0", Offset = "0x29863D0", VA = "0x182987DD0")]
		[DebuggerStepThrough]
		public static v128 fnmsub_pd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x29888E0", Offset = "0x2986EE0", VA = "0x1829888E0")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmsub_pd(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x2987E20", Offset = "0x2986420", VA = "0x182987E20")]
		[DebuggerStepThrough]
		public static v128 fnmsub_ps(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x2988930", Offset = "0x2986F30", VA = "0x182988930")]
		[DebuggerStepThrough]
		public static v256 mm256_fnmsub_ps(v256 a, v256 b, v256 c)
		{
			return default(v256);
		}

		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x2987F10", Offset = "0x2986510", VA = "0x182987F10")]
		[DebuggerStepThrough]
		public static v128 fnmsub_sd(v128 a, v128 b, v128 c)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x2987F60", Offset = "0x2986560", VA = "0x182987F60")]
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
			[Address(RVA = "0x2988B00", Offset = "0x2987100", VA = "0x182988B00")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C96")]
		[Address(RVA = "0x2988B40", Offset = "0x2987140", VA = "0x182988B40")]
		[DebuggerStepThrough]
		public static int popcnt_u32(uint v)
		{
			return default(int);
		}

		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x2988B70", Offset = "0x2987170", VA = "0x182988B70")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 load_ps(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 loadu_ps(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void store_ps(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000C9C")]
		[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void storeu_ps(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000C9D")]
		[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void stream_ps(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000C9E")]
		[Address(RVA = "0x2989640", Offset = "0x2987C40", VA = "0x182989640")]
		[DebuggerStepThrough]
		public static v128 cvtsi32_ss(v128 a, int b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x2989660", Offset = "0x2987C60", VA = "0x182989660")]
		[DebuggerStepThrough]
		public static v128 cvtsi64_ss(v128 a, long b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x2988D30", Offset = "0x2987330", VA = "0x182988D30")]
		[DebuggerStepThrough]
		public static v128 add_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x2988CE0", Offset = "0x29872E0", VA = "0x182988CE0")]
		[DebuggerStepThrough]
		public static v128 add_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x298A100", Offset = "0x2988700", VA = "0x18298A100")]
		[DebuggerStepThrough]
		public static v128 sub_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x298A0B0", Offset = "0x29886B0", VA = "0x18298A0B0")]
		[DebuggerStepThrough]
		public static v128 sub_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x2989C20", Offset = "0x2988220", VA = "0x182989C20")]
		[DebuggerStepThrough]
		public static v128 mul_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA5")]
		[Address(RVA = "0x2989BD0", Offset = "0x29881D0", VA = "0x182989BD0")]
		[DebuggerStepThrough]
		public static v128 mul_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x2989870", Offset = "0x2987E70", VA = "0x182989870")]
		[DebuggerStepThrough]
		public static v128 div_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x2989820", Offset = "0x2987E20", VA = "0x182989820")]
		[DebuggerStepThrough]
		public static v128 div_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA8")]
		[Address(RVA = "0x298A030", Offset = "0x2988630", VA = "0x18298A030")]
		[DebuggerStepThrough]
		public static v128 sqrt_ss(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CA9")]
		[Address(RVA = "0x2989F40", Offset = "0x2988540", VA = "0x182989F40")]
		[DebuggerStepThrough]
		public static v128 sqrt_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAA")]
		[Address(RVA = "0x2989CB0", Offset = "0x29882B0", VA = "0x182989CB0")]
		[DebuggerStepThrough]
		public static v128 rcp_ss(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x2989C70", Offset = "0x2988270", VA = "0x182989C70")]
		[DebuggerStepThrough]
		public static v128 rcp_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x2989E00", Offset = "0x2988400", VA = "0x182989E00")]
		[DebuggerStepThrough]
		public static v128 rsqrt_ss(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAD")]
		[Address(RVA = "0x2989CD0", Offset = "0x29882D0", VA = "0x182989CD0")]
		[DebuggerStepThrough]
		public static v128 rsqrt_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAE")]
		[Address(RVA = "0x2989AD0", Offset = "0x29880D0", VA = "0x182989AD0")]
		[DebuggerStepThrough]
		public static v128 min_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CAF")]
		[Address(RVA = "0x2989A10", Offset = "0x2988010", VA = "0x182989A10")]
		[DebuggerStepThrough]
		public static v128 min_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x2989990", Offset = "0x2987F90", VA = "0x182989990")]
		[DebuggerStepThrough]
		public static v128 max_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x29898D0", Offset = "0x2987ED0", VA = "0x1829898D0")]
		[DebuggerStepThrough]
		public static v128 max_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x2988D50", Offset = "0x2987350", VA = "0x182988D50")]
		[DebuggerStepThrough]
		public static v128 and_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x2988D80", Offset = "0x2987380", VA = "0x182988D80")]
		[DebuggerStepThrough]
		public static v128 andnot_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x2989C40", Offset = "0x2988240", VA = "0x182989C40")]
		[DebuggerStepThrough]
		public static v128 or_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x298A160", Offset = "0x2988760", VA = "0x18298A160")]
		[DebuggerStepThrough]
		public static v128 xor_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x2988E30", Offset = "0x2987430", VA = "0x182988E30")]
		[DebuggerStepThrough]
		public static v128 cmpeq_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB7")]
		[Address(RVA = "0x2988DC0", Offset = "0x29873C0", VA = "0x182988DC0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x2989060", Offset = "0x2987660", VA = "0x182989060")]
		[DebuggerStepThrough]
		public static v128 cmplt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x2989000", Offset = "0x2987600", VA = "0x182989000")]
		[DebuggerStepThrough]
		public static v128 cmplt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x2988FE0", Offset = "0x29875E0", VA = "0x182988FE0")]
		[DebuggerStepThrough]
		public static v128 cmple_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0x2988F80", Offset = "0x2987580", VA = "0x182988F80")]
		[DebuggerStepThrough]
		public static v128 cmple_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x2988F50", Offset = "0x2987550", VA = "0x182988F50")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpgt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBD")]
		[Address(RVA = "0x2988EF0", Offset = "0x29874F0", VA = "0x182988EF0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpgt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x2988EC0", Offset = "0x29874C0", VA = "0x182988EC0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpge_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CBF")]
		[Address(RVA = "0x2988E60", Offset = "0x2987460", VA = "0x182988E60")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpge_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC0")]
		[Address(RVA = "0x29890F0", Offset = "0x29876F0", VA = "0x1829890F0")]
		[DebuggerStepThrough]
		public static v128 cmpneq_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC1")]
		[Address(RVA = "0x2989080", Offset = "0x2987680", VA = "0x182989080")]
		[DebuggerStepThrough]
		public static v128 cmpneq_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC2")]
		[Address(RVA = "0x2989320", Offset = "0x2987920", VA = "0x182989320")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC3")]
		[Address(RVA = "0x29892C0", Offset = "0x29878C0", VA = "0x1829892C0")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC4")]
		[Address(RVA = "0x29892A0", Offset = "0x29878A0", VA = "0x1829892A0")]
		[DebuggerStepThrough]
		public static v128 cmpnle_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x2989240", Offset = "0x2987840", VA = "0x182989240")]
		[DebuggerStepThrough]
		public static v128 cmpnle_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x2989210", Offset = "0x2987810", VA = "0x182989210")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpngt_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x29891B0", Offset = "0x29877B0", VA = "0x1829891B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpngt_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x2989180", Offset = "0x2987780", VA = "0x182989180")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpnge_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x2989120", Offset = "0x2987720", VA = "0x182989120")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpnge_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCA")]
		[Address(RVA = "0x29893F0", Offset = "0x29879F0", VA = "0x1829893F0")]
		[DebuggerStepThrough]
		public static v128 cmpord_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x2989340", Offset = "0x2987940", VA = "0x182989340")]
		[DebuggerStepThrough]
		public static v128 cmpord_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCC")]
		[Address(RVA = "0x29894E0", Offset = "0x2987AE0", VA = "0x1829894E0")]
		[DebuggerStepThrough]
		public static v128 cmpunord_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCD")]
		[Address(RVA = "0x2989430", Offset = "0x2987A30", VA = "0x182989430")]
		[DebuggerStepThrough]
		public static v128 cmpunord_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CCE")]
		[Address(RVA = "0x2989520", Offset = "0x2987B20", VA = "0x182989520")]
		[DebuggerStepThrough]
		public static int comieq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CCF")]
		[Address(RVA = "0x2989570", Offset = "0x2987B70", VA = "0x182989570")]
		[DebuggerStepThrough]
		public static int comilt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x2989560", Offset = "0x2987B60", VA = "0x182989560")]
		[DebuggerStepThrough]
		public static int comile_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD1")]
		[Address(RVA = "0x2989550", Offset = "0x2987B50", VA = "0x182989550")]
		[DebuggerStepThrough]
		public static int comigt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD2")]
		[Address(RVA = "0x2989540", Offset = "0x2987B40", VA = "0x182989540")]
		[DebuggerStepThrough]
		public static int comige_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD3")]
		[Address(RVA = "0x2989580", Offset = "0x2987B80", VA = "0x182989580")]
		[DebuggerStepThrough]
		public static int comineq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD4")]
		[Address(RVA = "0x2989520", Offset = "0x2987B20", VA = "0x182989520")]
		[DebuggerStepThrough]
		public static int ucomieq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD5")]
		[Address(RVA = "0x2989570", Offset = "0x2987B70", VA = "0x182989570")]
		[DebuggerStepThrough]
		public static int ucomilt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD6")]
		[Address(RVA = "0x2989560", Offset = "0x2987B60", VA = "0x182989560")]
		[DebuggerStepThrough]
		public static int ucomile_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD7")]
		[Address(RVA = "0x2989550", Offset = "0x2987B50", VA = "0x182989550")]
		[DebuggerStepThrough]
		public static int ucomigt_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD8")]
		[Address(RVA = "0x2989540", Offset = "0x2987B40", VA = "0x182989540")]
		[DebuggerStepThrough]
		public static int ucomige_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CD9")]
		[Address(RVA = "0x2989580", Offset = "0x2987B80", VA = "0x182989580")]
		[DebuggerStepThrough]
		public static int ucomineq_ss(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDA")]
		[Address(RVA = "0x29895A0", Offset = "0x2987BA0", VA = "0x1829895A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static int cvtss_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDB")]
		[Address(RVA = "0x29895A0", Offset = "0x2987BA0", VA = "0x1829895A0")]
		[DebuggerStepThrough]
		public static int cvt_ss2si(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDC")]
		[Address(RVA = "0x2989680", Offset = "0x2987C80", VA = "0x182989680")]
		[DebuggerStepThrough]
		public static long cvtss_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000CDD")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		[DebuggerStepThrough]
		public static float cvtss_f32(v128 a)
		{
			return default(float);
		}

		[Token(Token = "0x6000CDE")]
		[Address(RVA = "0x2989740", Offset = "0x2987D40", VA = "0x182989740")]
		[DebuggerStepThrough]
		public static int cvttss_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CDF")]
		[Address(RVA = "0x2989720", Offset = "0x2987D20", VA = "0x182989720")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static int cvtt_ss2si(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE0")]
		[Address(RVA = "0x29897B0", Offset = "0x2987DB0", VA = "0x1829897B0")]
		[DebuggerStepThrough]
		public static long cvttss_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x2989EC0", Offset = "0x29884C0", VA = "0x182989EC0")]
		[DebuggerStepThrough]
		public static v128 set_ss(float a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x2989E90", Offset = "0x2988490", VA = "0x182989E90")]
		[DebuggerStepThrough]
		public static v128 set1_ps(float a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x2989E90", Offset = "0x2988490", VA = "0x182989E90")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 set_ps1(float a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x2989EA0", Offset = "0x29884A0", VA = "0x182989EA0")]
		[DebuggerStepThrough]
		public static v128 set_ps(float e3, float e2, float e1, float e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x2989EE0", Offset = "0x29884E0", VA = "0x182989EE0")]
		[DebuggerStepThrough]
		public static v128 setr_ps(float e3, float e2, float e1, float e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE6")]
		[Address(RVA = "0x2989B50", Offset = "0x2988150", VA = "0x182989B50")]
		[DebuggerStepThrough]
		public static v128 move_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x2988BF0", Offset = "0x29871F0", VA = "0x182988BF0")]
		public static int SHUFFLE(int d, int c, int b, int a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x2989F00", Offset = "0x2988500", VA = "0x182989F00")]
		[DebuggerStepThrough]
		public static v128 shuffle_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x298A120", Offset = "0x2988720", VA = "0x18298A120")]
		[DebuggerStepThrough]
		public static v128 unpackhi_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x298A140", Offset = "0x2988740", VA = "0x18298A140")]
		[DebuggerStepThrough]
		public static v128 unpacklo_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x2989B60", Offset = "0x2988160", VA = "0x182989B60")]
		[DebuggerStepThrough]
		public static v128 movehl_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x2989B80", Offset = "0x2988180", VA = "0x182989B80")]
		[DebuggerStepThrough]
		public static v128 movelh_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x2989BA0", Offset = "0x29881A0", VA = "0x182989BA0")]
		[DebuggerStepThrough]
		public static int movemask_ps(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x2988C20", Offset = "0x2987220", VA = "0x182988C20")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static void TRANSPOSE4_PS(ref v128 row0, ref v128 row1, ref v128 row2, ref v128 row3)
		{
		}

		[Token(Token = "0x6000CEF")]
		[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
		[DebuggerStepThrough]
		public static v128 setzero_ps()
		{
			return default(v128);
		}

		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x2989890", Offset = "0x2987E90", VA = "0x182989890")]
		[DebuggerStepThrough]
		public unsafe static v128 loadu_si16(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CF1")]
		[Address(RVA = "0x1973B60", Offset = "0x1972160", VA = "0x181973B60")]
		public unsafe static void storeu_si16(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000CF2")]
		[Address(RVA = "0x29898B0", Offset = "0x2987EB0", VA = "0x1829898B0")]
		[DebuggerStepThrough]
		public unsafe static v128 loadu_si64(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CF3")]
		[Address(RVA = "0xBDB200", Offset = "0xBD9800", VA = "0x180BDB200")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x298C9B0", Offset = "0x298AFB0", VA = "0x18298C9B0")]
		[DebuggerStepThrough]
		public static int SHUFFLE2(int x, int y)
		{
			return default(int);
		}

		[Token(Token = "0x6000CF6")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[DebuggerStepThrough]
		public unsafe static void stream_si32(int* mem_addr, int a)
		{
		}

		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		[DebuggerStepThrough]
		public unsafe static void stream_si64(long* mem_addr, long a)
		{
		}

		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x298FD70", Offset = "0x298E370", VA = "0x18298FD70")]
		[DebuggerStepThrough]
		public unsafe static void stream_pd(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0x298FD70", Offset = "0x298E370", VA = "0x18298FD70")]
		[DebuggerStepThrough]
		public unsafe static void stream_si128(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000CFA")]
		[Address(RVA = "0x298CA90", Offset = "0x298B090", VA = "0x18298CA90")]
		[DebuggerStepThrough]
		public static v128 add_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFB")]
		[Address(RVA = "0x298C9C0", Offset = "0x298AFC0", VA = "0x18298C9C0")]
		[DebuggerStepThrough]
		public static v128 add_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x298CA40", Offset = "0x298B040", VA = "0x18298CA40")]
		[DebuggerStepThrough]
		public static v128 add_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x298CA70", Offset = "0x298B070", VA = "0x18298CA70")]
		[DebuggerStepThrough]
		public static v128 add_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x298CB90", Offset = "0x298B190", VA = "0x18298CB90")]
		[DebuggerStepThrough]
		public static v128 adds_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x298CB40", Offset = "0x298B140", VA = "0x18298CB40")]
		[DebuggerStepThrough]
		public static v128 adds_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x298CC30", Offset = "0x298B230", VA = "0x18298CC30")]
		[DebuggerStepThrough]
		public static v128 adds_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x298CBE0", Offset = "0x298B1E0", VA = "0x18298CBE0")]
		[DebuggerStepThrough]
		public static v128 adds_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x298CD80", Offset = "0x298B380", VA = "0x18298CD80")]
		[DebuggerStepThrough]
		public static v128 avg_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x298CCC0", Offset = "0x298B2C0", VA = "0x18298CCC0")]
		[DebuggerStepThrough]
		public static v128 avg_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x298DF70", Offset = "0x298C570", VA = "0x18298DF70")]
		[DebuggerStepThrough]
		public static v128 madd_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x298E010", Offset = "0x298C610", VA = "0x18298E010")]
		[DebuggerStepThrough]
		public static v128 max_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D06")]
		[Address(RVA = "0x298E090", Offset = "0x298C690", VA = "0x18298E090")]
		[DebuggerStepThrough]
		public static v128 max_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x298E220", Offset = "0x298C820", VA = "0x18298E220")]
		[DebuggerStepThrough]
		public static v128 min_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x298E2A0", Offset = "0x298C8A0", VA = "0x18298E2A0")]
		[DebuggerStepThrough]
		public static v128 min_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x298E550", Offset = "0x298CB50", VA = "0x18298E550")]
		[DebuggerStepThrough]
		public static v128 mulhi_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x298E610", Offset = "0x298CC10", VA = "0x18298E610")]
		[DebuggerStepThrough]
		public static v128 mulhi_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x298E6D0", Offset = "0x298CCD0", VA = "0x18298E6D0")]
		[DebuggerStepThrough]
		public static v128 mullo_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x298E4E0", Offset = "0x298CAE0", VA = "0x18298E4E0")]
		[DebuggerStepThrough]
		public static v128 mul_epu32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x298E8E0", Offset = "0x298CEE0", VA = "0x18298E8E0")]
		[DebuggerStepThrough]
		public static v128 sad_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x298FE50", Offset = "0x298E450", VA = "0x18298FE50")]
		[DebuggerStepThrough]
		public static v128 sub_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x298FD90", Offset = "0x298E390", VA = "0x18298FD90")]
		[DebuggerStepThrough]
		public static v128 sub_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x298FE00", Offset = "0x298E400", VA = "0x18298FE00")]
		[DebuggerStepThrough]
		public static v128 sub_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x298FE30", Offset = "0x298E430", VA = "0x18298FE30")]
		[DebuggerStepThrough]
		public static v128 sub_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x298FF50", Offset = "0x298E550", VA = "0x18298FF50")]
		[DebuggerStepThrough]
		public static v128 subs_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x298FF00", Offset = "0x298E500", VA = "0x18298FF00")]
		[DebuggerStepThrough]
		public static v128 subs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x298FFF0", Offset = "0x298E5F0", VA = "0x18298FFF0")]
		[DebuggerStepThrough]
		public static v128 subs_epu8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x298FFA0", Offset = "0x298E5A0", VA = "0x18298FFA0")]
		[DebuggerStepThrough]
		public static v128 subs_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x298F220", Offset = "0x298D820", VA = "0x18298F220")]
		[DebuggerStepThrough]
		public static v128 slli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x298CE20", Offset = "0x298B420", VA = "0x18298CE20")]
		[DebuggerStepThrough]
		public static v128 bslli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x298CED0", Offset = "0x298B4D0", VA = "0x18298CED0")]
		[DebuggerStepThrough]
		public static v128 bsrli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x298F030", Offset = "0x298D630", VA = "0x18298F030")]
		[DebuggerStepThrough]
		public static v128 slli_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1A")]
		[Address(RVA = "0x298EDD0", Offset = "0x298D3D0", VA = "0x18298EDD0")]
		[DebuggerStepThrough]
		public static v128 sll_epi16(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x298F0C0", Offset = "0x298D6C0", VA = "0x18298F0C0")]
		[DebuggerStepThrough]
		public static v128 slli_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x298EED0", Offset = "0x298D4D0", VA = "0x18298EED0")]
		[DebuggerStepThrough]
		public static v128 sll_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x298F180", Offset = "0x298D780", VA = "0x18298F180")]
		[DebuggerStepThrough]
		public static v128 slli_epi64(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x298EF90", Offset = "0x298D590", VA = "0x18298EF90")]
		[DebuggerStepThrough]
		public static v128 sll_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x298F5D0", Offset = "0x298DBD0", VA = "0x18298F5D0")]
		[DebuggerStepThrough]
		public static v128 srai_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x298F420", Offset = "0x298DA20", VA = "0x18298F420")]
		[DebuggerStepThrough]
		public static v128 sra_epi16(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x298F6D0", Offset = "0x298DCD0", VA = "0x18298F6D0")]
		[DebuggerStepThrough]
		public static v128 srai_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x298F520", Offset = "0x298DB20", VA = "0x18298F520")]
		[DebuggerStepThrough]
		public static v128 sra_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x298FCA0", Offset = "0x298E2A0", VA = "0x18298FCA0")]
		[DebuggerStepThrough]
		public static v128 srli_si128(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x298FA10", Offset = "0x298E010", VA = "0x18298FA10")]
		[DebuggerStepThrough]
		public static v128 srli_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x298F780", Offset = "0x298DD80", VA = "0x18298F780")]
		[DebuggerStepThrough]
		public static v128 srl_epi16(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x298FB30", Offset = "0x298E130", VA = "0x18298FB30")]
		[DebuggerStepThrough]
		public static v128 srli_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x298F8A0", Offset = "0x298DEA0", VA = "0x18298F8A0")]
		[DebuggerStepThrough]
		public static v128 srl_epi32(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x298FBF0", Offset = "0x298E1F0", VA = "0x18298FBF0")]
		[DebuggerStepThrough]
		public static v128 srli_epi64(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x298F960", Offset = "0x298DF60", VA = "0x18298F960")]
		[DebuggerStepThrough]
		public static v128 srl_epi64(v128 a, v128 count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2A")]
		[Address(RVA = "0x298CC80", Offset = "0x298B280", VA = "0x18298CC80")]
		[DebuggerStepThrough]
		public static v128 and_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0x298CCA0", Offset = "0x298B2A0", VA = "0x18298CCA0")]
		[DebuggerStepThrough]
		public static v128 andnot_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x298E770", Offset = "0x298CD70", VA = "0x18298E770")]
		[DebuggerStepThrough]
		public static v128 or_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x2990240", Offset = "0x298E840", VA = "0x182990240")]
		[DebuggerStepThrough]
		public static v128 xor_si128(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x298D0D0", Offset = "0x298B6D0", VA = "0x18298D0D0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x298CFA0", Offset = "0x298B5A0", VA = "0x18298CFA0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x298D070", Offset = "0x298B670", VA = "0x18298D070")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x298D340", Offset = "0x298B940", VA = "0x18298D340")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x298D210", Offset = "0x298B810", VA = "0x18298D210")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x298D2E0", Offset = "0x298B8E0", VA = "0x18298D2E0")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x298D5A0", Offset = "0x298BBA0", VA = "0x18298D5A0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmplt_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x298D450", Offset = "0x298BA50", VA = "0x18298D450")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmplt_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D36")]
		[Address(RVA = "0x298D530", Offset = "0x298BB30", VA = "0x18298D530")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmplt_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x298DAE0", Offset = "0x298C0E0", VA = "0x18298DAE0")]
		[DebuggerStepThrough]
		public static v128 cvtepi32_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x298DD70", Offset = "0x298C370", VA = "0x18298DD70")]
		[DebuggerStepThrough]
		public static v128 cvtsi32_sd(v128 a, int b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D39")]
		[Address(RVA = "0x298DDA0", Offset = "0x298C3A0", VA = "0x18298DDA0")]
		[DebuggerStepThrough]
		public static v128 cvtsi64_sd(v128 a, long b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3A")]
		[Address(RVA = "0x298DDD0", Offset = "0x298C3D0", VA = "0x18298DDD0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cvtsi64x_sd(v128 a, long b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x298DB00", Offset = "0x298C100", VA = "0x18298DB00")]
		[DebuggerStepThrough]
		public static v128 cvtepi32_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3C")]
		[Address(RVA = "0x298DD90", Offset = "0x298C390", VA = "0x18298DD90")]
		[DebuggerStepThrough]
		public static v128 cvtsi32_si128(int a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3D")]
		[Address(RVA = "0x298DDC0", Offset = "0x298C3C0", VA = "0x18298DDC0")]
		[DebuggerStepThrough]
		public static v128 cvtsi64_si128(long a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x298DDF0", Offset = "0x298C3F0", VA = "0x18298DDF0")]
		[DebuggerStepThrough]
		public static v128 cvtsi64x_si128(long a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[DebuggerStepThrough]
		public static int cvtsi128_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[DebuggerStepThrough]
		public static long cvtsi128_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D41")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[DebuggerStepThrough]
		public static long cvtsi128_si64x(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x298EB00", Offset = "0x298D100", VA = "0x18298EB00")]
		[DebuggerStepThrough]
		public static v128 set_epi64x(long e1, long e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x298EAE0", Offset = "0x298D0E0", VA = "0x18298EAE0")]
		[DebuggerStepThrough]
		public static v128 set_epi32(int e3, int e2, int e1, int e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x298EAA0", Offset = "0x298D0A0", VA = "0x18298EAA0")]
		[DebuggerStepThrough]
		public static v128 set_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x298EB10", Offset = "0x298D110", VA = "0x18298EB10")]
		[DebuggerStepThrough]
		public static v128 set_epi8(sbyte e15_, sbyte e14_, sbyte e13_, sbyte e12_, sbyte e11_, sbyte e10_, sbyte e9_, sbyte e8_, sbyte e7_, sbyte e6_, sbyte e5_, sbyte e4_, sbyte e3_, sbyte e2_, sbyte e1_, sbyte e0_)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x298EA50", Offset = "0x298D050", VA = "0x18298EA50")]
		[DebuggerStepThrough]
		public static v128 set1_epi64x(long a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x298EA40", Offset = "0x298D040", VA = "0x18298EA40")]
		[DebuggerStepThrough]
		public static v128 set1_epi32(int a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x298EA10", Offset = "0x298D010", VA = "0x18298EA10")]
		[DebuggerStepThrough]
		public static v128 set1_epi16(short a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x298EA60", Offset = "0x298D060", VA = "0x18298EA60")]
		[DebuggerStepThrough]
		public static v128 set1_epi8(sbyte a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x298EBF0", Offset = "0x298D1F0", VA = "0x18298EBF0")]
		[DebuggerStepThrough]
		public static v128 setr_epi32(int e3, int e2, int e1, int e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x298EBB0", Offset = "0x298D1B0", VA = "0x18298EBB0")]
		[DebuggerStepThrough]
		public static v128 setr_epi16(short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x298EC10", Offset = "0x298D210", VA = "0x18298EC10")]
		[DebuggerStepThrough]
		public static v128 setr_epi8(sbyte e15_, sbyte e14_, sbyte e13_, sbyte e12_, sbyte e11_, sbyte e10_, sbyte e9_, sbyte e8_, sbyte e7_, sbyte e6_, sbyte e5_, sbyte e4_, sbyte e3_, sbyte e2_, sbyte e1_, sbyte e0_)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
		[DebuggerStepThrough]
		public static v128 setzero_si128()
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x29898B0", Offset = "0x2987EB0", VA = "0x1829898B0")]
		[DebuggerStepThrough]
		public static v128 move_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x298E790", Offset = "0x298CD90", VA = "0x18298E790")]
		[DebuggerStepThrough]
		public static v128 packs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x298E800", Offset = "0x298CE00", VA = "0x18298E800")]
		[DebuggerStepThrough]
		public static v128 packs_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x298E870", Offset = "0x298CE70", VA = "0x18298E870")]
		[DebuggerStepThrough]
		public static v128 packus_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x298DEE0", Offset = "0x298C4E0", VA = "0x18298DEE0")]
		[DebuggerStepThrough]
		public static ushort extract_epi16(v128 a, int imm8)
		{
			return default(ushort);
		}

		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x298DEF0", Offset = "0x298C4F0", VA = "0x18298DEF0")]
		[DebuggerStepThrough]
		public static v128 insert_epi16(v128 a, int i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x298E450", Offset = "0x298CA50", VA = "0x18298E450")]
		[DebuggerStepThrough]
		public static int movemask_epi8(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x298ECA0", Offset = "0x298D2A0", VA = "0x18298ECA0")]
		[DebuggerStepThrough]
		public static v128 shuffle_epi32(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x298ED20", Offset = "0x298D320", VA = "0x18298ED20")]
		[DebuggerStepThrough]
		public static v128 shufflehi_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x298ED80", Offset = "0x298D380", VA = "0x18298ED80")]
		[DebuggerStepThrough]
		public static v128 shufflelo_epi16(v128 a, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x29900C0", Offset = "0x298E6C0", VA = "0x1829900C0")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x2990040", Offset = "0x298E640", VA = "0x182990040")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5A")]
		[Address(RVA = "0x298A120", Offset = "0x2988720", VA = "0x18298A120")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x29900A0", Offset = "0x298E6A0", VA = "0x1829900A0")]
		[DebuggerStepThrough]
		public static v128 unpackhi_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x29901B0", Offset = "0x298E7B0", VA = "0x1829901B0")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x2990140", Offset = "0x298E740", VA = "0x182990140")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0x298A140", Offset = "0x2988740", VA = "0x18298A140")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x2990190", Offset = "0x298E790", VA = "0x182990190")]
		[DebuggerStepThrough]
		public static v128 unpacklo_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x298CB20", Offset = "0x298B120", VA = "0x18298CB20")]
		[DebuggerStepThrough]
		public static v128 add_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x298CAF0", Offset = "0x298B0F0", VA = "0x18298CAF0")]
		[DebuggerStepThrough]
		public static v128 add_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x298DEC0", Offset = "0x298C4C0", VA = "0x18298DEC0")]
		[DebuggerStepThrough]
		public static v128 div_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x298DE90", Offset = "0x298C490", VA = "0x18298DE90")]
		[DebuggerStepThrough]
		public static v128 div_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x298E1A0", Offset = "0x298C7A0", VA = "0x18298E1A0")]
		[DebuggerStepThrough]
		public static v128 max_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x298E110", Offset = "0x298C710", VA = "0x18298E110")]
		[DebuggerStepThrough]
		public static v128 max_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x298E3B0", Offset = "0x298C9B0", VA = "0x18298E3B0")]
		[DebuggerStepThrough]
		public static v128 min_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x298E320", Offset = "0x298C920", VA = "0x18298E320")]
		[DebuggerStepThrough]
		public static v128 min_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D68")]
		[Address(RVA = "0x298E530", Offset = "0x298CB30", VA = "0x18298E530")]
		[DebuggerStepThrough]
		public static v128 mul_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x298E500", Offset = "0x298CB00", VA = "0x18298E500")]
		[DebuggerStepThrough]
		public static v128 mul_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x298F390", Offset = "0x298D990", VA = "0x18298F390")]
		[DebuggerStepThrough]
		public static v128 sqrt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x298F2E0", Offset = "0x298D8E0", VA = "0x18298F2E0")]
		[DebuggerStepThrough]
		public static v128 sqrt_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x298FEE0", Offset = "0x298E4E0", VA = "0x18298FEE0")]
		[DebuggerStepThrough]
		public static v128 sub_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x298FEB0", Offset = "0x298E4B0", VA = "0x18298FEB0")]
		[DebuggerStepThrough]
		public static v128 sub_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x298CC80", Offset = "0x298B280", VA = "0x18298CC80")]
		[DebuggerStepThrough]
		public static v128 and_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x298CCA0", Offset = "0x298B2A0", VA = "0x18298CCA0")]
		[DebuggerStepThrough]
		public static v128 andnot_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D70")]
		[Address(RVA = "0x298E770", Offset = "0x298CD70", VA = "0x18298E770")]
		[DebuggerStepThrough]
		public static v128 or_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x2990240", Offset = "0x298E840", VA = "0x182990240")]
		[DebuggerStepThrough]
		public static v128 xor_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x298D180", Offset = "0x298B780", VA = "0x18298D180")]
		[DebuggerStepThrough]
		public static v128 cmpeq_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x298D660", Offset = "0x298BC60", VA = "0x18298D660")]
		[DebuggerStepThrough]
		public static v128 cmplt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x298D430", Offset = "0x298BA30", VA = "0x18298D430")]
		[DebuggerStepThrough]
		public static v128 cmple_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x298D3E0", Offset = "0x298B9E0", VA = "0x18298D3E0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpgt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x298D1F0", Offset = "0x298B7F0", VA = "0x18298D1F0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpge_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x298D8E0", Offset = "0x298BEE0", VA = "0x18298D8E0")]
		[DebuggerStepThrough]
		public static v128 cmpord_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x298D9F0", Offset = "0x298BFF0", VA = "0x18298D9F0")]
		[DebuggerStepThrough]
		public static v128 cmpunord_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x298D6C0", Offset = "0x298BCC0", VA = "0x18298D6C0")]
		[DebuggerStepThrough]
		public static v128 cmpneq_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7A")]
		[Address(RVA = "0x298D820", Offset = "0x298BE20", VA = "0x18298D820")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7B")]
		[Address(RVA = "0x298D7D0", Offset = "0x298BDD0", VA = "0x18298D7D0")]
		[DebuggerStepThrough]
		public static v128 cmpnle_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x298D780", Offset = "0x298BD80", VA = "0x18298D780")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpngt_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7D")]
		[Address(RVA = "0x298D730", Offset = "0x298BD30", VA = "0x18298D730")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 cmpnge_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7E")]
		[Address(RVA = "0x298D140", Offset = "0x298B740", VA = "0x18298D140")]
		[DebuggerStepThrough]
		public static v128 cmpeq_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D7F")]
		[Address(RVA = "0x298D630", Offset = "0x298BC30", VA = "0x18298D630")]
		[DebuggerStepThrough]
		public static v128 cmplt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D80")]
		[Address(RVA = "0x298D400", Offset = "0x298BA00", VA = "0x18298D400")]
		[DebuggerStepThrough]
		public static v128 cmple_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D81")]
		[Address(RVA = "0x298D3B0", Offset = "0x298B9B0", VA = "0x18298D3B0")]
		[DebuggerStepThrough]
		public static v128 cmpgt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D82")]
		[Address(RVA = "0x298D1C0", Offset = "0x298B7C0", VA = "0x18298D1C0")]
		[DebuggerStepThrough]
		public static v128 cmpge_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D83")]
		[Address(RVA = "0x298D840", Offset = "0x298BE40", VA = "0x18298D840")]
		[DebuggerStepThrough]
		public static v128 cmpord_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x298D950", Offset = "0x298BF50", VA = "0x18298D950")]
		[DebuggerStepThrough]
		public static v128 cmpunord_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x298D680", Offset = "0x298BC80", VA = "0x18298D680")]
		[DebuggerStepThrough]
		public static v128 cmpneq_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x298D7F0", Offset = "0x298BDF0", VA = "0x18298D7F0")]
		[DebuggerStepThrough]
		public static v128 cmpnlt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x298D7A0", Offset = "0x298BDA0", VA = "0x18298D7A0")]
		[DebuggerStepThrough]
		public static v128 cmpnle_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x298D750", Offset = "0x298BD50", VA = "0x18298D750")]
		[DebuggerStepThrough]
		public static v128 cmpngt_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x298D700", Offset = "0x298BD00", VA = "0x18298D700")]
		[DebuggerStepThrough]
		public static v128 cmpnge_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x298DA60", Offset = "0x298C060", VA = "0x18298DA60")]
		[DebuggerStepThrough]
		public static int comieq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8B")]
		[Address(RVA = "0x298DAB0", Offset = "0x298C0B0", VA = "0x18298DAB0")]
		[DebuggerStepThrough]
		public static int comilt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x298DAA0", Offset = "0x298C0A0", VA = "0x18298DAA0")]
		[DebuggerStepThrough]
		public static int comile_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x298DA90", Offset = "0x298C090", VA = "0x18298DA90")]
		[DebuggerStepThrough]
		public static int comigt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x298DA80", Offset = "0x298C080", VA = "0x18298DA80")]
		[DebuggerStepThrough]
		public static int comige_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x298DAC0", Offset = "0x298C0C0", VA = "0x18298DAC0")]
		[DebuggerStepThrough]
		public static int comineq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x298DA60", Offset = "0x298C060", VA = "0x18298DA60")]
		[DebuggerStepThrough]
		public static int ucomieq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x298DAB0", Offset = "0x298C0B0", VA = "0x18298DAB0")]
		[DebuggerStepThrough]
		public static int ucomilt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x298DAA0", Offset = "0x298C0A0", VA = "0x18298DAA0")]
		[DebuggerStepThrough]
		public static int ucomile_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x298DA90", Offset = "0x298C090", VA = "0x18298DA90")]
		[DebuggerStepThrough]
		public static int ucomigt_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D94")]
		[Address(RVA = "0x298DA80", Offset = "0x298C080", VA = "0x18298DA80")]
		[DebuggerStepThrough]
		public static int ucomige_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D95")]
		[Address(RVA = "0x298DAC0", Offset = "0x298C0C0", VA = "0x18298DAC0")]
		[DebuggerStepThrough]
		public static int ucomineq_sd(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x298DBB0", Offset = "0x298C1B0", VA = "0x18298DBB0")]
		[DebuggerStepThrough]
		public static v128 cvtpd_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D97")]
		[Address(RVA = "0x298DC90", Offset = "0x298C290", VA = "0x18298DC90")]
		[DebuggerStepThrough]
		public static v128 cvtps_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x298DB30", Offset = "0x298C130", VA = "0x18298DB30")]
		[DebuggerStepThrough]
		public static v128 cvtpd_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D99")]
		[Address(RVA = "0x298DCB0", Offset = "0x298C2B0", VA = "0x18298DCB0")]
		[DebuggerStepThrough]
		public static int cvtsd_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000D9A")]
		[Address(RVA = "0x298DD00", Offset = "0x298C300", VA = "0x18298DD00")]
		[DebuggerStepThrough]
		public static long cvtsd_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D9B")]
		[Address(RVA = "0x298DD00", Offset = "0x298C300", VA = "0x18298DD00")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static long cvtsd_si64x(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000D9C")]
		[Address(RVA = "0x298DD50", Offset = "0x298C350", VA = "0x18298DD50")]
		[DebuggerStepThrough]
		public static v128 cvtsd_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D9D")]
		[Address(RVA = "0x1B22320", Offset = "0x1B20920", VA = "0x181B22320")]
		[DebuggerStepThrough]
		public static double cvtsd_f64(v128 a)
		{
			return default(double);
		}

		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x298DE10", Offset = "0x298C410", VA = "0x18298DE10")]
		[DebuggerStepThrough]
		public static v128 cvtss_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000D9F")]
		[Address(RVA = "0x298DE30", Offset = "0x298C430", VA = "0x18298DE30")]
		[DebuggerStepThrough]
		public static v128 cvttpd_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x298DE70", Offset = "0x298C470", VA = "0x18298DE70")]
		[DebuggerStepThrough]
		public static int cvttsd_si32(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x298DE80", Offset = "0x298C480", VA = "0x18298DE80")]
		[DebuggerStepThrough]
		public static long cvttsd_si64(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x298DE80", Offset = "0x298C480", VA = "0x18298DE80")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static long cvttsd_si64x(v128 a)
		{
			return default(long);
		}

		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x298DBE0", Offset = "0x298C1E0", VA = "0x18298DBE0")]
		[DebuggerStepThrough]
		public static v128 cvtps_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA4")]
		[Address(RVA = "0x298DE50", Offset = "0x298C450", VA = "0x18298DE50")]
		[DebuggerStepThrough]
		public static v128 cvttps_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x298EBA0", Offset = "0x298D1A0", VA = "0x18298EBA0")]
		[DebuggerStepThrough]
		public static v128 set_sd(double a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x298EA90", Offset = "0x298D090", VA = "0x18298EA90")]
		[DebuggerStepThrough]
		public static v128 set1_pd(double a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x298EA90", Offset = "0x298D090", VA = "0x18298EA90")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public static v128 set_pd1(double a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x298EB90", Offset = "0x298D190", VA = "0x18298EB90")]
		[DebuggerStepThrough]
		public static v128 set_pd(double e1, double e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x298EC90", Offset = "0x298D290", VA = "0x18298EC90")]
		[DebuggerStepThrough]
		public static v128 setr_pd(double e1, double e0)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x29900A0", Offset = "0x298E6A0", VA = "0x1829900A0")]
		[DebuggerStepThrough]
		public static v128 unpackhi_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAB")]
		[Address(RVA = "0x2990190", Offset = "0x298E790", VA = "0x182990190")]
		[DebuggerStepThrough]
		public static v128 unpacklo_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x298E4C0", Offset = "0x298CAC0", VA = "0x18298E4C0")]
		[DebuggerStepThrough]
		public static int movemask_pd(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000DAD")]
		[Address(RVA = "0x298ECF0", Offset = "0x298D2F0", VA = "0x18298ECF0")]
		[DebuggerStepThrough]
		public static v128 shuffle_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAE")]
		[Address(RVA = "0x298E430", Offset = "0x298CA30", VA = "0x18298E430")]
		[DebuggerStepThrough]
		public static v128 move_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DAF")]
		[Address(RVA = "0x298DF40", Offset = "0x298C540", VA = "0x18298DF40")]
		public unsafe static v128 loadu_si32(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB0")]
		[Address(RVA = "0x1973B70", Offset = "0x1972170", VA = "0x181973B70")]
		public unsafe static void storeu_si32(void* mem_addr, v128 a)
		{
		}

		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x298DF10", Offset = "0x298C510", VA = "0x18298DF10")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 load_si128(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB2")]
		[Address(RVA = "0x298DF10", Offset = "0x298C510", VA = "0x18298DF10")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static v128 loadu_si128(void* ptr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB3")]
		[Address(RVA = "0x298FD70", Offset = "0x298E370", VA = "0x18298FD70")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void store_si128(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000DB4")]
		[Address(RVA = "0x298FD70", Offset = "0x298E370", VA = "0x18298FD70")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		public unsafe static void storeu_si128(void* ptr, v128 val)
		{
		}

		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0x2990290", Offset = "0x298E890", VA = "0x182990290")]
		[DebuggerStepThrough]
		public static v128 addsub_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x2990260", Offset = "0x298E860", VA = "0x182990260")]
		[DebuggerStepThrough]
		public static v128 addsub_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DB9")]
		[Address(RVA = "0x29902E0", Offset = "0x298E8E0", VA = "0x1829902E0")]
		[DebuggerStepThrough]
		public static v128 hadd_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBA")]
		[Address(RVA = "0x2990310", Offset = "0x298E910", VA = "0x182990310")]
		[DebuggerStepThrough]
		public static v128 hadd_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBB")]
		[Address(RVA = "0x2990360", Offset = "0x298E960", VA = "0x182990360")]
		[DebuggerStepThrough]
		public static v128 hsub_pd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBC")]
		[Address(RVA = "0x2990390", Offset = "0x298E990", VA = "0x182990390")]
		[DebuggerStepThrough]
		public static v128 hsub_ps(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBD")]
		[Address(RVA = "0x29903E0", Offset = "0x298E9E0", VA = "0x1829903E0")]
		[DebuggerStepThrough]
		public static v128 movedup_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x29903F0", Offset = "0x298E9F0", VA = "0x1829903F0")]
		[DebuggerStepThrough]
		public static v128 movehdup_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x2990410", Offset = "0x298EA10", VA = "0x182990410")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x298DF10", Offset = "0x298C510", VA = "0x18298DF10")]
		[DebuggerStepThrough]
		public unsafe static v128 stream_load_si128(void* mem_addr)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x2990660", Offset = "0x298EC60", VA = "0x182990660")]
		[DebuggerStepThrough]
		public static v128 blend_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x29906A0", Offset = "0x298ECA0", VA = "0x1829906A0")]
		[DebuggerStepThrough]
		public static v128 blend_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x2990780", Offset = "0x298ED80", VA = "0x182990780")]
		[DebuggerStepThrough]
		public static v128 blendv_pd(v128 a, v128 b, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC5")]
		[Address(RVA = "0x29907C0", Offset = "0x298EDC0", VA = "0x1829907C0")]
		[DebuggerStepThrough]
		public static v128 blendv_ps(v128 a, v128 b, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC6")]
		[Address(RVA = "0x2990700", Offset = "0x298ED00", VA = "0x182990700")]
		[DebuggerStepThrough]
		public static v128 blendv_epi8(v128 a, v128 b, v128 mask)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x29905B0", Offset = "0x298EBB0", VA = "0x1829905B0")]
		[DebuggerStepThrough]
		public static v128 blend_epi16(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x2990C60", Offset = "0x298F260", VA = "0x182990C60")]
		[DebuggerStepThrough]
		public static v128 dp_pd(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DC9")]
		[Address(RVA = "0x2990CC0", Offset = "0x298F2C0", VA = "0x182990CC0")]
		[DebuggerStepThrough]
		public static v128 dp_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x2990D80", Offset = "0x298F380", VA = "0x182990D80")]
		[DebuggerStepThrough]
		public static int extract_ps(v128 a, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x2990DB0", Offset = "0x298F3B0", VA = "0x182990DB0")]
		[DebuggerStepThrough]
		public static float extractf_ps(v128 a, int imm8)
		{
			return default(float);
		}

		[Token(Token = "0x6000DCC")]
		[Address(RVA = "0x2990DA0", Offset = "0x298F3A0", VA = "0x182990DA0")]
		[DebuggerStepThrough]
		public static byte extract_epi8(v128 a, int imm8)
		{
			return default(byte);
		}

		[Token(Token = "0x6000DCD")]
		[Address(RVA = "0x2990D80", Offset = "0x298F380", VA = "0x182990D80")]
		[DebuggerStepThrough]
		public static int extract_epi32(v128 a, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000DCE")]
		[Address(RVA = "0x2990D90", Offset = "0x298F390", VA = "0x182990D90")]
		[DebuggerStepThrough]
		public static long extract_epi64(v128 a, int imm8)
		{
			return default(long);
		}

		[Token(Token = "0x6000DCF")]
		[Address(RVA = "0x2990FE0", Offset = "0x298F5E0", VA = "0x182990FE0")]
		[DebuggerStepThrough]
		public static v128 insert_ps(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x2990FC0", Offset = "0x298F5C0", VA = "0x182990FC0")]
		[DebuggerStepThrough]
		public static v128 insert_epi8(v128 a, byte i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD1")]
		[Address(RVA = "0x2990F80", Offset = "0x298F580", VA = "0x182990F80")]
		[DebuggerStepThrough]
		public static v128 insert_epi32(v128 a, int i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x2990FA0", Offset = "0x298F5A0", VA = "0x182990FA0")]
		[DebuggerStepThrough]
		public static v128 insert_epi64(v128 a, long i, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x29910B0", Offset = "0x298F6B0", VA = "0x1829910B0")]
		[DebuggerStepThrough]
		public static v128 max_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x2991030", Offset = "0x298F630", VA = "0x182991030")]
		[DebuggerStepThrough]
		public static v128 max_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD5")]
		[Address(RVA = "0x29911B0", Offset = "0x298F7B0", VA = "0x1829911B0")]
		[DebuggerStepThrough]
		public static v128 max_epu32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x2991130", Offset = "0x298F730", VA = "0x182991130")]
		[DebuggerStepThrough]
		public static v128 max_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x29912B0", Offset = "0x298F8B0", VA = "0x1829912B0")]
		[DebuggerStepThrough]
		public static v128 min_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD8")]
		[Address(RVA = "0x2991230", Offset = "0x298F830", VA = "0x182991230")]
		[DebuggerStepThrough]
		public static v128 min_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x29913B0", Offset = "0x298F9B0", VA = "0x1829913B0")]
		[DebuggerStepThrough]
		public static v128 min_epu32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x2991330", Offset = "0x298F930", VA = "0x182991330")]
		[DebuggerStepThrough]
		public static v128 min_epu16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDB")]
		[Address(RVA = "0x2991670", Offset = "0x298FC70", VA = "0x182991670")]
		[DebuggerStepThrough]
		public static v128 packus_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x29909E0", Offset = "0x298EFE0", VA = "0x1829909E0")]
		[DebuggerStepThrough]
		public static v128 cmpeq_epi64(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDD")]
		[Address(RVA = "0x2990A90", Offset = "0x298F090", VA = "0x182990A90")]
		[DebuggerStepThrough]
		public static v128 cvtepi8_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDE")]
		[Address(RVA = "0x2990AE0", Offset = "0x298F0E0", VA = "0x182990AE0")]
		[DebuggerStepThrough]
		public static v128 cvtepi8_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DDF")]
		[Address(RVA = "0x2990B10", Offset = "0x298F110", VA = "0x182990B10")]
		[DebuggerStepThrough]
		public static v128 cvtepi8_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE0")]
		[Address(RVA = "0x2990A10", Offset = "0x298F010", VA = "0x182990A10")]
		[DebuggerStepThrough]
		public static v128 cvtepi16_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE1")]
		[Address(RVA = "0x2990A40", Offset = "0x298F040", VA = "0x182990A40")]
		[DebuggerStepThrough]
		public static v128 cvtepi16_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE2")]
		[Address(RVA = "0x2990A70", Offset = "0x298F070", VA = "0x182990A70")]
		[DebuggerStepThrough]
		public static v128 cvtepi32_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x2990BB0", Offset = "0x298F1B0", VA = "0x182990BB0")]
		[DebuggerStepThrough]
		public static v128 cvtepu8_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE4")]
		[Address(RVA = "0x2990C00", Offset = "0x298F200", VA = "0x182990C00")]
		[DebuggerStepThrough]
		public static v128 cvtepu8_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x2990C40", Offset = "0x298F240", VA = "0x182990C40")]
		[DebuggerStepThrough]
		public static v128 cvtepu8_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x2990B40", Offset = "0x298F140", VA = "0x182990B40")]
		[DebuggerStepThrough]
		public static v128 cvtepu16_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE7")]
		[Address(RVA = "0x2990B70", Offset = "0x298F170", VA = "0x182990B70")]
		[DebuggerStepThrough]
		public static v128 cvtepu16_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE8")]
		[Address(RVA = "0x2990B90", Offset = "0x298F190", VA = "0x182990B90")]
		[DebuggerStepThrough]
		public static v128 cvtepu32_epi64(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DE9")]
		[Address(RVA = "0x2991600", Offset = "0x298FC00", VA = "0x182991600")]
		[DebuggerStepThrough]
		public static v128 mul_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DEA")]
		[Address(RVA = "0x2991630", Offset = "0x298FC30", VA = "0x182991630")]
		[DebuggerStepThrough]
		public static v128 mullo_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DEB")]
		[Address(RVA = "0x2991A00", Offset = "0x2990000", VA = "0x182991A00")]
		[DebuggerStepThrough]
		public static int testz_si128(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000DEC")]
		[Address(RVA = "0x2991970", Offset = "0x298FF70", VA = "0x182991970")]
		[DebuggerStepThrough]
		public static int testc_si128(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000DED")]
		[Address(RVA = "0x29919A0", Offset = "0x298FFA0", VA = "0x1829919A0")]
		[DebuggerStepThrough]
		public static int testnzc_si128(v128 a, v128 b)
		{
			return default(int);
		}

		[Token(Token = "0x6000DEE")]
		[Address(RVA = "0x2991900", Offset = "0x298FF00", VA = "0x182991900")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static int test_all_zeros(v128 a, v128 mask)
		{
			return default(int);
		}

		[Token(Token = "0x6000DEF")]
		[Address(RVA = "0x2991920", Offset = "0x298FF20", VA = "0x182991920")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static int test_mix_ones_zeroes(v128 a, v128 mask)
		{
			return default(int);
		}

		[Token(Token = "0x6000DF0")]
		[Address(RVA = "0x29918B0", Offset = "0x298FEB0", VA = "0x1829918B0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static int test_all_ones(v128 a)
		{
			return default(int);
		}

		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x2990440", Offset = "0x298EA40", VA = "0x182990440")]
		private static double RoundDImpl(double d, int roundingMode)
		{
			return default(double);
		}

		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x2991710", Offset = "0x298FD10", VA = "0x182991710")]
		[DebuggerStepThrough]
		public static v128 round_pd(v128 a, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x2990DC0", Offset = "0x298F3C0", VA = "0x182990DC0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x2990820", Offset = "0x298EE20", VA = "0x182990820")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_pd(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF5")]
		[Address(RVA = "0x2991770", Offset = "0x298FD70", VA = "0x182991770")]
		[DebuggerStepThrough]
		public static v128 round_ps(v128 a, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF6")]
		[Address(RVA = "0x2990E20", Offset = "0x298F420", VA = "0x182990E20")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x2990880", Offset = "0x298EE80", VA = "0x182990880")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_ps(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x2991820", Offset = "0x298FE20", VA = "0x182991820")]
		[DebuggerStepThrough]
		public static v128 round_sd(v128 a, v128 b, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x2990EF0", Offset = "0x298F4F0", VA = "0x182990EF0")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x2990950", Offset = "0x298EF50", VA = "0x182990950")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_sd(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x2991870", Offset = "0x298FE70", VA = "0x182991870")]
		[DebuggerStepThrough]
		public static v128 round_ss(v128 a, v128 b, int rounding)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFC")]
		[Address(RVA = "0x2990F30", Offset = "0x298F530", VA = "0x182990F30")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 floor_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x2990990", Offset = "0x298EF90", VA = "0x182990990")]
		[DebuggerStepThrough]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE4)]
		public static v128 ceil_ss(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFE")]
		[Address(RVA = "0x2991430", Offset = "0x298FA30", VA = "0x182991430")]
		[DebuggerStepThrough]
		public static v128 minpos_epu16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x2991510", Offset = "0x298FB10", VA = "0x182991510")]
		[DebuggerStepThrough]
		public static v128 mpsadbw_epu8(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x2990430", Offset = "0x298EA30", VA = "0x182990430")]
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
			[Address(RVA = "0x2993BB0", Offset = "0x29921B0", VA = "0x182993BB0")]
			public void SetBit(int aindex, int bindex, bool val)
			{
			}

			[Token(Token = "0x6000E20")]
			[Address(RVA = "0x2993B80", Offset = "0x2992180", VA = "0x182993B80")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
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
		[Address(RVA = "0x2991A20", Offset = "0x2990020", VA = "0x182991A20")]
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
		[Address(RVA = "0x29929E0", Offset = "0x2990FE0", VA = "0x1829929E0")]
		[DebuggerStepThrough]
		public static v128 cmpistrm(v128 a, v128 b, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E0B")]
		[Address(RVA = "0x2992820", Offset = "0x2990E20", VA = "0x182992820")]
		[DebuggerStepThrough]
		public static int cmpistri(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x2992090", Offset = "0x2990690", VA = "0x182992090")]
		[DebuggerStepThrough]
		public static v128 cmpestrm(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E0D")]
		[Address(RVA = "0x2991EC0", Offset = "0x29904C0", VA = "0x182991EC0")]
		[DebuggerStepThrough]
		public static int cmpestri(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x2992EB0", Offset = "0x29914B0", VA = "0x182992EB0")]
		[DebuggerStepThrough]
		public static int cmpistrz(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x2992610", Offset = "0x2990C10", VA = "0x182992610")]
		[DebuggerStepThrough]
		public static int cmpistrc(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x2992DE0", Offset = "0x29913E0", VA = "0x182992DE0")]
		[DebuggerStepThrough]
		public static int cmpistrs(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x2992B90", Offset = "0x2991190", VA = "0x182992B90")]
		[DebuggerStepThrough]
		public static int cmpistro(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x29924E0", Offset = "0x2990AE0", VA = "0x1829924E0")]
		[DebuggerStepThrough]
		public static int cmpistra(v128 a, v128 b, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E13")]
		[Address(RVA = "0x2992480", Offset = "0x2990A80", VA = "0x182992480")]
		[DebuggerStepThrough]
		public static int cmpestrz(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E14")]
		[Address(RVA = "0x2991D20", Offset = "0x2990320", VA = "0x182991D20")]
		[DebuggerStepThrough]
		public static int cmpestrc(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E15")]
		[Address(RVA = "0x2992450", Offset = "0x2990A50", VA = "0x182992450")]
		[DebuggerStepThrough]
		public static int cmpestrs(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E16")]
		[Address(RVA = "0x2992290", Offset = "0x2990890", VA = "0x182992290")]
		[DebuggerStepThrough]
		public static int cmpestro(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E17")]
		[Address(RVA = "0x2991B00", Offset = "0x2990100", VA = "0x182991B00")]
		[DebuggerStepThrough]
		public static int cmpestra(v128 a, int la, v128 b, int lb, int imm8)
		{
			return default(int);
		}

		[Token(Token = "0x6000E18")]
		[Address(RVA = "0x29924B0", Offset = "0x2990AB0", VA = "0x1829924B0")]
		[DebuggerStepThrough]
		public static v128 cmpgt_epi64(v128 val1, v128 val2)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x2992FF0", Offset = "0x29915F0", VA = "0x182992FF0")]
		[DebuggerStepThrough]
		public static uint crc32_u32(uint crc, uint v)
		{
			return default(uint);
		}

		[Token(Token = "0x6000E1A")]
		[Address(RVA = "0x2993270", Offset = "0x2991870", VA = "0x182993270")]
		[DebuggerStepThrough]
		public static uint crc32_u8(uint crc, byte v)
		{
			return default(uint);
		}

		[Token(Token = "0x6000E1B")]
		[Address(RVA = "0x2992F80", Offset = "0x2991580", VA = "0x182992F80")]
		[DebuggerStepThrough]
		public static uint crc32_u16(uint crc, ushort v)
		{
			return default(uint);
		}

		[Token(Token = "0x6000E1C")]
		[Address(RVA = "0x2993080", Offset = "0x2991680", VA = "0x182993080")]
		[DebuggerStepThrough]
		[Obsolete("Use the ulong version of this intrinsic instead.")]
		public static ulong crc32_u64(ulong crc_ul, long v)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x2993190", Offset = "0x2991790", VA = "0x182993190")]
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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x2993400", Offset = "0x2991A00", VA = "0x182993400")]
		[DebuggerStepThrough]
		public static v128 abs_epi8(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x2993300", Offset = "0x2991900", VA = "0x182993300")]
		[DebuggerStepThrough]
		public static v128 abs_epi16(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x2993370", Offset = "0x2991970", VA = "0x182993370")]
		[DebuggerStepThrough]
		public static v128 abs_epi32(v128 a)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x2993890", Offset = "0x2991E90", VA = "0x182993890")]
		[DebuggerStepThrough]
		public static v128 shuffle_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E26")]
		[Address(RVA = "0x2993470", Offset = "0x2991A70", VA = "0x182993470")]
		[DebuggerStepThrough]
		public static v128 alignr_epi8(v128 a, v128 b, int count)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x29934F0", Offset = "0x2991AF0", VA = "0x1829934F0")]
		[DebuggerStepThrough]
		public static v128 hadd_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E28")]
		[Address(RVA = "0x29935A0", Offset = "0x2991BA0", VA = "0x1829935A0")]
		[DebuggerStepThrough]
		public static v128 hadds_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x2993570", Offset = "0x2991B70", VA = "0x182993570")]
		[DebuggerStepThrough]
		public static v128 hadd_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x2993620", Offset = "0x2991C20", VA = "0x182993620")]
		[DebuggerStepThrough]
		public static v128 hsub_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2B")]
		[Address(RVA = "0x29936C0", Offset = "0x2991CC0", VA = "0x1829936C0")]
		[DebuggerStepThrough]
		public static v128 hsubs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2C")]
		[Address(RVA = "0x2993690", Offset = "0x2991C90", VA = "0x182993690")]
		[DebuggerStepThrough]
		public static v128 hsub_epi32(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2D")]
		[Address(RVA = "0x2993740", Offset = "0x2991D40", VA = "0x182993740")]
		[DebuggerStepThrough]
		public static v128 maddubs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2E")]
		[Address(RVA = "0x29937B0", Offset = "0x2991DB0", VA = "0x1829937B0")]
		[DebuggerStepThrough]
		public static v128 mulhrs_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E2F")]
		[Address(RVA = "0x2993AD0", Offset = "0x29920D0", VA = "0x182993AD0")]
		[DebuggerStepThrough]
		public static v128 sign_epi8(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E30")]
		[Address(RVA = "0x2993930", Offset = "0x2991F30", VA = "0x182993930")]
		[DebuggerStepThrough]
		public static v128 sign_epi16(v128 a, v128 b)
		{
			return default(v128);
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x2993A50", Offset = "0x2992050", VA = "0x182993A50")]
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
		[Address(RVA = "0x298C4E0", Offset = "0x298AAE0", VA = "0x18298C4E0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000E37")]
		[Address(RVA = "0x298C660", Offset = "0x298AC60", VA = "0x18298C660")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x298C7D0", Offset = "0x298ADD0", VA = "0x18298C7D0")]
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
		[Address(RVA = "0x298C000", Offset = "0x298A600", VA = "0x18298C000")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x298C180", Offset = "0x298A780", VA = "0x18298C180")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x298C2F0", Offset = "0x298A8F0", VA = "0x18298C2F0")]
		public static int Invoke()
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000040")]
	public static MXCSRBits MXCSR
	{
		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x298B980", Offset = "0x2989F80", VA = "0x18298B980")]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		get
		{
			return default(MXCSRBits);
		}
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x298B990", Offset = "0x2989F90", VA = "0x18298B990")]
		[BurstTargetCpu(BurstTargetCpu.X64_SSE2)]
		set
		{
		}
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	private unsafe static v128 GenericCSharpLoad(void* ptr)
	{
		return default(v128);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
	private unsafe static void GenericCSharpStore(void* ptr, v128 val)
	{
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x298B9F0", Offset = "0x2989FF0", VA = "0x18298B9F0")]
	private static sbyte Saturate_To_Int8(int val)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x298BA30", Offset = "0x298A030", VA = "0x18298BA30")]
	private static byte Saturate_To_UnsignedInt8(int val)
	{
		return default(byte);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x298B9D0", Offset = "0x2989FD0", VA = "0x18298B9D0")]
	private static short Saturate_To_Int16(int val)
	{
		return default(short);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x298BA10", Offset = "0x298A010", VA = "0x18298BA10")]
	private static ushort Saturate_To_UnsignedInt16(int val)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x298B9A0", Offset = "0x2989FA0", VA = "0x18298B9A0")]
	private static bool IsNaN(uint v)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x298B9B0", Offset = "0x2989FB0", VA = "0x18298B9B0")]
	private static bool IsNaN(ulong v)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void BurstIntrinsicSetCSRFromManaged(int _)
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	private static int BurstIntrinsicGetCSRFromManaged()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x298B980", Offset = "0x2989F80", VA = "0x18298B980")]
	internal static int getcsr_raw()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x298B990", Offset = "0x2989F90", VA = "0x18298B990")]
	internal static void setcsr_raw(int bits)
	{
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x298B990", Offset = "0x2989F90", VA = "0x18298B990")]
	[BurstCompile(CompileSynchronously = true)]
	[MonoPInvokeCallback(typeof(Unity_002EBurst_002EIntrinsics_002EDoSetCSRTrampoline_00000127_0024PostfixBurstDelegate))]
	private static void DoSetCSRTrampoline(int bits)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x298B980", Offset = "0x2989F80", VA = "0x18298B980")]
	[BurstCompile(CompileSynchronously = true)]
	[MonoPInvokeCallback(typeof(Unity_002EBurst_002EIntrinsics_002EDoGetCSRTrampoline_00000128_0024PostfixBurstDelegate))]
	private static int DoGetCSRTrampoline()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x7C0280", Offset = "0x7BE880", VA = "0x1807C0280")]
	[BurstCompile(CompileSynchronously = true)]
	internal static void DoSetCSRTrampoline_0024BurstManaged(int bits)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0xB62B40", Offset = "0xB61140", VA = "0x180B62B40")]
	[BurstCompile(CompileSynchronously = true)]
	internal static int DoGetCSRTrampoline_0024BurstManaged()
	{
		return default(int);
	}
}
