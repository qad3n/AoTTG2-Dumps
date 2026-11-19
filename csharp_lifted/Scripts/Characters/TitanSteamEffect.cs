// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanSteamEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanSteamEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000732")]
internal static class TitanSteamEffect
{
	[Token(Token = "0x400242B")]
	public const float WispLifetime = 1.3f;

	[Token(Token = "0x400242C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color SteamColor;

	[Token(Token = "0x60045D7")]
	[Address(RVA = "0x5B60BB0", Offset = "0x5B5FBB0", VA = "0x5B60BB0")]
	public static void ConfigureRegrowth(ParticleSystem particles, float titanSize)
	{
		// Lifted from source/cpp/Characters/TitanSteamEffect.c (Characters.TitanSteamEffect$$ConfigureRegrowth): 1 lines keep C-only constructs
		uint uVar1;
		ParticleSystem.MinMaxCurve value;
		ParticleSystem.MinMaxCurve value_00;
		ParticleSystem.MinMaxCurve value_01;
		ParticleSystem.MinMaxGradient value_02;
		Color color;
		ParticleSystem.NoiseModule local_c0;
		ParticleSystem.ShapeModule local_b8;
		ParticleSystem.MainModule local_b0;
		ParticleSystem.MinMaxCurve local_a8;
		ParticleSystem.MinMaxCurve local_88;
		ParticleSystem.MinMaxCurve local_68;
		ParticleSystem.MinMaxGradient local_48;

		if (Il2CppMethodInitialized_07547899 == false) {
			Il2CppMethodInitialized_07547899 = true;
			uVar1 = (typeof(TitanSteamEffect)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSteamEffect)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			TitanSteamEffect.Prepare(particles);
		}
		else {
			TitanSteamEffect.Prepare(particles);
		}
		if (particles == null) {
			throw new NullReferenceException();
		}
		local_b0 = particles.main;
		local_b0.playOnAwake = false;
		color.b = 1.0;
		color.a = 0.4;
		color.r = 1.0;
		color.g = 1.0;
		local_48 = ((ParticleSystem.MinMaxGradient)color);
		value_02.m_GradientMin = local_48.m_GradientMin;
		value_02.m_Mode = local_48.m_Mode;
		value_02._4_4_ = local_48._4_4_;
		value_02.m_GradientMax = local_48.m_GradientMax;
		value_02.m_ColorMin.r = local_48.m_ColorMin.r;
		value_02.m_ColorMin.g = local_48.m_ColorMin.g;
		value_02.m_ColorMin.b = local_48.m_ColorMin.b;
		value_02.m_ColorMin.a = local_48.m_ColorMin.a;
		value_02.m_ColorMax.r = local_48.m_ColorMax.r;
		value_02.m_ColorMax.g = local_48.m_ColorMax.g;
		value_02.m_ColorMax.b = local_48.m_ColorMax.b;
		value_02.m_ColorMax.a = local_48.m_ColorMax.a;
		local_b0.startColor = value_02;
		local_68 = ((ParticleSystem.MinMaxCurve)titanSize * 3.0);
		value.m_CurveMin = local_68.m_CurveMin;
		value.m_Mode = local_68.m_Mode;
		value.m_CurveMultiplier = local_68.m_CurveMultiplier;
		value.m_CurveMax = local_68.m_CurveMax;
		value.m_ConstantMin = local_68.m_ConstantMin;
		value.m_ConstantMax = local_68.m_ConstantMax;
		local_b0.startSize = value;
		local_88 = ((ParticleSystem.MinMaxCurve)titanSize * 5.0);
		value_00.m_CurveMin = local_88.m_CurveMin;
		value_00.m_Mode = local_88.m_Mode;
		value_00.m_CurveMultiplier = local_88.m_CurveMultiplier;
		value_00.m_CurveMax = local_88.m_CurveMax;
		value_00.m_ConstantMin = local_88.m_ConstantMin;
		value_00.m_ConstantMax = local_88.m_ConstantMax;
		local_b0.startSpeed = value_00;
		local_b0.scalingMode = 2;
		local_b0.simulationSpace = 1;
		local_b8 = particles.shape;
		local_b8.shapeType = 4;
		local_c0 = particles.noise;
		local_a8 = ((ParticleSystem.MinMaxCurve)titanSize * 0.5);
		value_01.m_CurveMin = local_a8.m_CurveMin;
		value_01.m_Mode = local_a8.m_Mode;
		value_01.m_CurveMultiplier = local_a8.m_CurveMultiplier;
		value_01.m_CurveMax = local_a8.m_CurveMax;
		value_01.m_ConstantMin = local_a8.m_ConstantMin;
		value_01.m_ConstantMax = local_a8.m_ConstantMax;
		local_c0.strength = value_01;
		return;
	}

	[Token(Token = "0x60045D8")]
	[Address(RVA = "0x5B60EE0", Offset = "0x5B5FEE0", VA = "0x5B60EE0")]
	public static void Configure(ParticleSystem particles, float worldSize, bool plume, float rate)
	{
		// Lifted from source/cpp/Characters/TitanSteamEffect.c (Characters.TitanSteamEffect$$Configure): 60 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		ParticleSystem.MinMaxCurve value;
		ParticleSystem.MinMaxCurve value_00;
		ParticleSystem.MinMaxCurve value_01;
		ParticleSystem.MinMaxCurve value_02;
		ParticleSystem.MinMaxCurve value_03;
		ParticleSystem.MinMaxCurve value_04;
		ParticleSystem.MinMaxCurve value_05;
		ParticleSystem.MinMaxCurve value_06;
		ParticleSystem.MinMaxCurve value_07;
		ParticleSystem.MinMaxCurve value_08;
		ParticleSystem.MinMaxCurve value_09;
		ParticleSystem.MinMaxCurve value_10;
		ParticleSystem.MinMaxGradient value_11;
		ParticleSystem.MinMaxGradient value_12;
		Gradient __this;
		GradientColorKey[] colorKeys;
		GradientAlphaKey[] alphaKeys;
		AnimationCurve curve;
		Il2CppClass pIVar3;
		undefined7 in_register_00000031;
		MethodInfo pMVar4;
		float fVar5;
		float fVar6;
		Color color;
		Color col;
		GradientAlphaKey local_130;
		float local_124;
		float local_120;
		float local_11c;
		ParticleSystem.MinMaxCurve local_118;
		ParticleSystem.EmissionModule local_f8;
		ParticleSystem.ColorOverLifetimeModule local_f0;
		ParticleSystem.MinMaxGradient local_e8;
		byte[] local_a8 = new byte[16];
		AnimationCurve local_98;
		ulong uStack_90;
		byte[] local_88 = new byte[16];
		ulong local_78;
		ulong uStack_70;
		GradientAlphaKey local_68;
		GradientAlphaKey local_60;
		ParticleSystem.RotationOverLifetimeModule local_58;
		ParticleSystem.SizeOverLifetimeModule local_50;
		ParticleSystem.NoiseModule local_48;
		ParticleSystem.VelocityOverLifetimeModule local_40;
		ParticleSystem.MainModule local_38;

		pMVar4 = (MethodInfo)CONCAT71(in_register_00000031, plume);
		local_11c = rate;
		local_40.m_ParticleSystem =(ParticleSystem.VelocityOverLifetimeModule)null;
		local_48.m_ParticleSystem =(ParticleSystem.NoiseModule)null;
		local_f0.m_ParticleSystem =(ParticleSystem.ColorOverLifetimeModule)null;
		local_50.m_ParticleSystem =(ParticleSystem.SizeOverLifetimeModule)null;
		local_58.m_ParticleSystem =(ParticleSystem.RotationOverLifetimeModule)null;
		local_f8.m_ParticleSystem =(ParticleSystem.EmissionModule)null;
		TitanSteamEffect.Prepare(particles);
		if (particles != null) {
			local_38 = particles.main;
			local_38.playOnAwake = false;
			local_38.loop = true;
			local_38.stopAction = 0;
			local_e8.m_GradientMax = null;
			local_e8.m_ColorMin.r = 0.0;
			local_e8.m_ColorMin.g = 0.0;
			local_e8.m_Mode = 0;
			local_e8._4_4_ = 0;
			local_e8.m_GradientMin = null;
			if (plume) {
				fVar6 = 1.1;
				fVar5 = 1.8;
				local_120 = 0.115;
			}
			else {
				fVar5 = 1.3;
				fVar6 = 0.7;
				local_120 = 0.05;
			}
			if (worldSize <= 0.001) {
				worldSize = 0.001;
			}
			if (plume) {
				local_124 = 0.2;
			}
			else {
				local_124 = 0.09;
			}
			local_e8 = new ParticleSystem.MinMaxCurve(fVar6, fVar5);
			value.m_CurveMin = (AnimationCurve)local_e8.m_GradientMin;
			value.m_Mode = local_e8.m_Mode;
			value.m_CurveMultiplier = (float)local_e8._4_4_;
			value.m_CurveMax = (AnimationCurve)local_e8.m_GradientMax;
			value.m_ConstantMin = local_e8.m_ColorMin.r;
			value.m_ConstantMax = local_e8.m_ColorMin.g;
			local_38.startLifetime = value;
			local_118.m_CurveMax = null;
			local_118.m_ConstantMin = 0.0;
			local_118.m_ConstantMax = 0.0;
			local_118.m_Mode = 0;
			local_118.m_CurveMultiplier = 0.0;
			local_118.m_CurveMin = null;
			local_118 = new ParticleSystem.MinMaxCurve(local_120 * worldSize, local_124 * worldSize);
			value_00.m_CurveMin = local_118.m_CurveMin;
			value_00.m_Mode = local_118.m_Mode;
			value_00.m_CurveMultiplier = local_118.m_CurveMultiplier;
			value_00.m_CurveMax = local_118.m_CurveMax;
			value_00.m_ConstantMin = local_118.m_ConstantMin;
			value_00.m_ConstantMax = local_118.m_ConstantMax;
			local_38.startSize = value_00;
			ParticleSystem.MinMaxCurve.op_Implicit((ParticleSystem.MinMaxCurve)local_88, 0.0);
			value_01.m_CurveMin = (AnimationCurve)local_88._8_8_;
			value_01.m_Mode = local_88._0_4_;
			value_01.m_CurveMultiplier = (float)local_88._4_4_;
			value_01.m_CurveMax = local_78;
			value_01.m_ConstantMin = (float)uStack_70;
			value_01.m_ConstantMax = uStack_70._4_4_;
			local_38.startSpeed = value_01;
			color.b = 1.0;
			color.a = 1.0;
			color.r = 1.0;
			color.g = 1.0;
			local_e8 = ((ParticleSystem.MinMaxGradient)color);
			value_11.m_GradientMin = local_e8.m_GradientMin;
			value_11.m_Mode = local_e8.m_Mode;
			value_11._4_4_ = local_e8._4_4_;
			value_11.m_GradientMax = local_e8.m_GradientMax;
			value_11.m_ColorMin.r = local_e8.m_ColorMin.r;
			value_11.m_ColorMin.g = local_e8.m_ColorMin.g;
			value_11.m_ColorMin.b = local_e8.m_ColorMin.b;
			value_11.m_ColorMin.a = local_e8.m_ColorMin.a;
			value_11.m_ColorMax.r = local_e8.m_ColorMax.r;
			value_11.m_ColorMax.g = local_e8.m_ColorMax.g;
			value_11.m_ColorMax.b = local_e8.m_ColorMax.b;
			value_11.m_ColorMax.a = local_e8.m_ColorMax.a;
			local_38.startColor = value_11;
			local_98 = null;
			uStack_90._0_4_ = 0.0;
			uStack_90._4_4_ = 0.0;
			local_a8._0_4_ = 0;
			local_a8._4_4_ = 0.0;
			local_a8._8_8_ = null;
			local_a8 = new ParticleSystem.MinMaxCurve(-3.1415927, 3.1415927);
			value_02.m_CurveMin = (AnimationCurve)local_a8._8_8_;
			value_02.m_Mode = local_a8._0_4_;
			value_02.m_CurveMultiplier = (float)local_a8._4_4_;
			value_02.m_CurveMax = local_98;
			value_02.m_ConstantMin = (float)uStack_90;
			value_02.m_ConstantMax = uStack_90._4_4_;
			local_38.startRotation = value_02;
			local_38.scalingMode = 2;
			local_38.simulationSpace = 1;
			fVar5 = fVar5 * local_11c;
			fVar6 = ceilf(fVar5);
			local_38.maxParticles = (int)fVar6 + 8;
			local_40 = particles.velocityOverLifetime;
			local_40.enabled = true;
			local_40.space = 1;
			local_e8 = ((ParticleSystem.MinMaxCurve)0.0);
			value_03.m_CurveMin = (AnimationCurve)local_e8.m_GradientMin;
			value_03.m_Mode = local_e8.m_Mode;
			value_03.m_CurveMultiplier = (float)local_e8._4_4_;
			value_03.m_CurveMax = (AnimationCurve)local_e8.m_GradientMax;
			value_03.m_ConstantMin = local_e8.m_ColorMin.r;
			value_03.m_ConstantMax = local_e8.m_ColorMin.g;
			local_40.x = value_03;
			if (plume) {
				fVar6 = worldSize * 0.09;
				fVar5 = 0.018;
			}
			else {
				fVar6 = worldSize * 0.06;
				fVar5 = 0.009;
			}
			local_e8 = ((ParticleSystem.MinMaxCurve)fVar6);
			value_04.m_CurveMin = (AnimationCurve)local_e8.m_GradientMin;
			value_04.m_Mode = local_e8.m_Mode;
			value_04.m_CurveMultiplier = (float)local_e8._4_4_;
			value_04.m_CurveMax = (AnimationCurve)local_e8.m_GradientMax;
			value_04.m_ConstantMin = local_e8.m_ColorMin.r;
			value_04.m_ConstantMax = local_e8.m_ColorMin.g;
			local_40.y = value_04;
			local_118 = ((ParticleSystem.MinMaxCurve)0.0);
			value_05.m_CurveMin = local_118.m_CurveMin;
			value_05.m_Mode = local_118.m_Mode;
			value_05.m_CurveMultiplier = local_118.m_CurveMultiplier;
			value_05.m_CurveMax = local_118.m_CurveMax;
			value_05.m_ConstantMin = local_118.m_ConstantMin;
			value_05.m_ConstantMax = local_118.m_ConstantMax;
			local_40.z = value_05;
			local_48 = particles.noise;
			local_48.enabled = true;
			local_e8 = ((ParticleSystem.MinMaxCurve)fVar5 * worldSize);
			value_06.m_CurveMin = (AnimationCurve)local_e8.m_GradientMin;
			value_06.m_Mode = local_e8.m_Mode;
			value_06.m_CurveMultiplier = (float)local_e8._4_4_;
			value_06.m_CurveMax = (AnimationCurve)local_e8.m_GradientMax;
			value_06.m_ConstantMin = local_e8.m_ColorMin.r;
			value_06.m_ConstantMax = local_e8.m_ColorMin.g;
			local_48.strength = value_06;
			local_48.frequency = 8.0 / worldSize;
			local_118 = ((ParticleSystem.MinMaxCurve)0.3);
			value_07.m_CurveMin = local_118.m_CurveMin;
			value_07.m_Mode = local_118.m_Mode;
			value_07.m_CurveMultiplier = local_118.m_CurveMultiplier;
			value_07.m_CurveMax = local_118.m_CurveMax;
			value_07.m_ConstantMin = local_118.m_ConstantMin;
			value_07.m_ConstantMax = local_118.m_ConstantMax;
			local_48.scrollSpeed = value_07;
			local_48.damping = false;
			local_48.octaveCount = 2;
			local_f0 = particles.colorOverLifetime;
			local_f0.enabled = true;
			__this = new Gradient();
			colorKeys = (GradientColorKey[])new GradientColorKey[2];
			local_88._0_4_ = 0;
			local_88._4_4_ = 0.0;
			local_88._8_8_ = null;
			local_78 = (AnimationCurve)((ulong)local_78._4_4_ << 0x20);
			col.b = 1.0;
			col.a = 1.0;
			col.r = 1.0;
			col.g = 1.0;
			local_88 = new GradientColorKey(col, 0.38) ;
			if (colorKeys != null) {
				if ((int)colorKeys.Length != 0) {
					colorKeys[0].time = (float)local_78;
					colorKeys[0].color.r = (float)local_88._0_4_;
					colorKeys[0].color.g = (float)local_88._4_4_;
					colorKeys[0].color.b = (float)local_88._8_4_;
					colorKeys[0].color.a = (float)local_88._12_4_;
					local_a8._0_4_ = 0;
					local_a8._4_4_ = 0.0;
					local_a8._8_8_ = null;
					local_98 = (AnimationCurve)((ulong)local_98 & 0xffffffff00000000);
					local_a8 = new GradientColorKey((UnityEngine_Color_o) *(Color)typeof(TitanSteamEffect).static_fields, 1.0);
					if ((colorKeys.Length & 0xfffffffe) != 0) {
						colorKeys[1].time = local_98._0_4_;
						colorKeys[1].color.r = (float)local_a8._0_4_;
						colorKeys[1].color.g = (float)local_a8._4_4_;
						colorKeys[1].color.b = (float)local_a8._8_4_;
						colorKeys[1].color.a = (float)local_a8._12_4_;
						alphaKeys = (GradientAlphaKey[])new GradientAlphaKey[4];
						local_130.alpha = 0.0;
						local_130.time = 0.0;
						local_130 = new GradientAlphaKey(0.0, 0.0);
						if (alphaKeys == null) goto label_05c61931;
						if ((int)alphaKeys.Length != 0) {
							alphaKeys[0] = local_130;
							if (plume) {
								fVar6 = 0.28;
							}
							else {
								fVar6 = 0.35;
							}
							local_130.alpha = 0.0;
							local_130.time = 0.0;
							local_130 = new GradientAlphaKey(fVar6, 0.2);
							if ((alphaKeys.Length & 0xfffffffe) != 0) {
								alphaKeys[1] = local_130;
								local_60.alpha = 0.0;
								local_60.time = 0.0;
								local_60 = new GradientAlphaKey(0.1, 0.6);
								if (2 < (uint)alphaKeys.Length) {
									alphaKeys[2] = local_60;
									local_68.alpha = 0.0;
									local_68.time = 0.0;
									local_68 = new GradientAlphaKey(0.0, 1.0);
									if ((alphaKeys.Length & 0xfffffffc) != 0) {
										alphaKeys[3] = local_68;
										if (__this != null) {
											__this.SetKeys(colorKeys, alphaKeys);
											local_e8 = ((ParticleSystem.MinMaxGradient)__this);
											value_12.m_GradientMin = local_e8.m_GradientMin;
											value_12.m_Mode = local_e8.m_Mode;
											value_12._4_4_ = local_e8._4_4_;
											value_12.m_GradientMax = local_e8.m_GradientMax;
											value_12.m_ColorMin.r = local_e8.m_ColorMin.r;
											value_12.m_ColorMin.g = local_e8.m_ColorMin.g;
											value_12.m_ColorMin.b = local_e8.m_ColorMin.b;
											value_12.m_ColorMin.a = local_e8.m_ColorMin.a;
											value_12.m_ColorMax.r = local_e8.m_ColorMax.r;
											value_12.m_ColorMax.g = local_e8.m_ColorMax.g;
											value_12.m_ColorMax.b = local_e8.m_ColorMax.b;
											value_12.m_ColorMax.a = local_e8.m_ColorMax.a;
											local_f0.color = value_12;
											local_50 = particles.sizeOverLifetime;
											local_50.enabled = true;
											curve = AnimationCurve.Linear(0.0, 0.55, 1.0, 1.7);
											local_118.m_CurveMax = null;
											local_118.m_ConstantMin = 0.0;
											local_118.m_ConstantMax = 0.0;
											local_118.m_Mode = 0;
											local_118.m_CurveMultiplier = 0.0;
											local_118.m_CurveMin = null;
											local_118 = new ParticleSystem.MinMaxCurve(1.0, curve);
											value_08.m_CurveMin = local_118.m_CurveMin;
											value_08.m_Mode = local_118.m_Mode;
											value_08.m_CurveMultiplier = local_118.m_CurveMultiplier;
											value_08.m_CurveMax = local_118.m_CurveMax;
											value_08.m_ConstantMin = local_118.m_ConstantMin;
											value_08.m_ConstantMax = local_118.m_ConstantMax;
											local_50.size = value_08;
											local_58 = particles.rotationOverLifetime;
											local_58.enabled = true;
											local_78 = null;
											uStack_70._0_4_ = 0.0;
											uStack_70._4_4_ = 0.0;
											local_88._0_4_ = 0;
											local_88._4_4_ = 0.0;
											local_88._8_8_ = null;
											local_88 = new ParticleSystem.MinMaxCurve(-0.873, 0.873);
											value_09.m_CurveMin = (AnimationCurve)local_88._8_8_;
											value_09.m_Mode = local_88._0_4_;
											value_09.m_CurveMultiplier = (float)local_88._4_4_;
											value_09.m_CurveMax = local_78;
											value_09.m_ConstantMin = (float)uStack_70;
											value_09.m_ConstantMax = uStack_70._4_4_;
											local_58.z = value_09;
											local_f8 = particles.emission;
											ParticleSystem.MinMaxCurve.op_Implicit((ParticleSystem.MinMaxCurve)local_a8, local_11c);
											value_10.m_CurveMin = (AnimationCurve)local_a8._8_8_;
											value_10.m_Mode = local_a8._0_4_;
											value_10.m_CurveMultiplier = (float)local_a8._4_4_;
											value_10.m_CurveMax = local_98;
											value_10.m_ConstantMin = (float)uStack_90;
											value_10.m_ConstantMax = uStack_90._4_4_;
											local_f8.rateOverTime = value_10;
											pMVar4 = MethodInfo_System_Array_Empty_ParticleSystem_Burst;
											if ((MethodInfo_System_Array_Empty_ParticleSystem_Burst.field7_0x38).methodMetadataHandle == null) {
												il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_ParticleSystem_Burst);
												pIVar3 = *(Il2CppClass*)((long)(pMVar4.field7_0x38).methodMetadataHandle + 0x10);
												bVar1 = (pIVar3._2).bitflags1;
											}
											else {
												pIVar3 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_ParticleSystem_Burst.field7_0x38). methodMetadataHandle + 0x10);
												bVar1 = (pIVar3._2).bitflags1;
											}
											if ((bVar1 & 1) == 0) {
												pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
												uVar2 = (pIVar3._2).cctor_finished_or_no_cctor;
											}
											else {
												uVar2 = (pIVar3._2).cctor_finished_or_no_cctor;
											}
											if (uVar2 == 0) {
												pIVar3 = (pMVar4.field7_0x38).rgctx_data[2].klass;
												bVar1 = (pIVar3._2).bitflags1;
											}
											else {
												pIVar3 = (pMVar4.field7_0x38).rgctx_data[2].klass;
												bVar1 = (pIVar3._2).bitflags1;
											}
											if ((bVar1 & 1) == 0) {
												pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
											}
											local_f8.SetBursts(*(ParticleSystem.Burst[]*)pIVar3.static_fields);
											local_f8.enabled = true;
											return;
										}
										goto label_05c61931;
									}
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05c61931: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045D9")]
	[Address(RVA = "0x5B60DD0", Offset = "0x5B5FDD0", VA = "0x5B60DD0")]
	private static void Prepare(ParticleSystem particles)
	{
		// Lifted from source/cpp/Characters/TitanSteamEffect.c (Characters.TitanSteamEffect$$Prepare): clean
		ParticleSystem __this;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		GameObject __this_00;
		uint uVar4;

		if (particles != null) {
			pSVar3 = particles.GetComponentsInChildren<ParticleSystem>(true);
			if (pSVar3 != null) {
				uVar2 = (uint)pSVar3.Length;
				if (0 < (int)uVar2) {
					uVar4 = 0;
					do {
						if (uVar2 <= uVar4) {
							throw new IndexOutOfRangeException();
						}
						__this = (ParticleSystem)pSVar3[(int)uVar4];
						if (__this == null) goto label_05c60ebd;
						__this.Stop(true, 0);
						bVar1 = ((Object)__this != (Object)particles);
						if (bVar1) {
							__this_00 = __this.gameObject;
							if (__this_00 == null) goto label_05c60ebd;
							__this_00.SetActive(false);
						}
						uVar4 = uVar4 + 1;
						uVar2 = (uint)pSVar3.Length;
					} while ((int)uVar4 < (int)uVar2);
				}
				return;
			}
		}
	label_05c60ebd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045DA")]
	[Address(RVA = "0x5B61940", Offset = "0x5B60940", VA = "0x5B61940")]
	public static void SetSurface(ParticleSystem particles, Mesh mesh)
	{
		// Lifted from source/cpp/Characters/TitanSteamEffect.c (Characters.TitanSteamEffect$$SetSurface): clean
		ParticleSystem.ShapeModule local_18;

		if (particles == null) {
			throw new NullReferenceException();
		}
		local_18 = particles.shape;
		local_18.enabled = true;
		local_18.shapeType = 6;
		local_18.mesh = mesh;
		local_18.meshShapeType = 2;
		local_18.useMeshColors = false;
		local_18.useMeshMaterialIndex = false;
		local_18.position = (Vector3)(Vector3.zeroVector);
		local_18.rotation = (Vector3)(Vector3.zeroVector);
		local_18.scale = (Vector3)(Vector3.oneVector);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/TitanSteamEffect.c.

	// Characters.TitanSteamEffect$$.cctor: clean
	static TitanSteamEffect()
	{

		(TitanSteamEffect.SteamColor).r = 0.86;
		(TitanSteamEffect.SteamColor).g = 0.88;
		(TitanSteamEffect.SteamColor).b = 0.9;
		(TitanSteamEffect.SteamColor).a = 1.0;
		return;
	}
}
