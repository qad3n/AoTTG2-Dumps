// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestructionDust
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapDestructionDust.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003F6")]
internal static class MapDestructionDust
{
	[Token(Token = "0x4001464")]
	private const float MinRadius = 0.75f;

	[Token(Token = "0x4001465")]
	private const float SoundPitch = 0.85f;

	[Token(Token = "0x4001466")]
	private const float MinLifetime = 3f;

	[Token(Token = "0x4001467")]
	[FieldOffset(Offset = "0x0")]
	private static Material _material;

	[Token(Token = "0x4001468")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _sound;

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x58888E0", Offset = "0x58878E0", VA = "0x58888E0")]
	private static void LoadAssets()
	{
		// Lifted from source/cpp/Map/MapDestructionDust.c (Map.MapDestructionDust$$LoadAssets): clean
		bool bVar2;
		Material pUVar3;
		AudioClip pUVar4;

		pUVar3 = MapDestructionDust._material;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			pUVar3 = Resources.Load<Material>("Effects/Materials/Smoke1Mat");
			MapDestructionDust._material = pUVar3;
		}
		pUVar4 = MapDestructionDust._sound;
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			pUVar4 = Resources.Load<AudioClip>("Effects/Sounds/Boom1Sound");
			MapDestructionDust._sound = pUVar4;
			return;
		}
		return;
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x58811E0", Offset = "0x58801E0", VA = "0x58811E0")]
	public static void Spawn(Bounds objectBounds, Vector3 impact, float hitRadius)
	{
		// Lifted from source/cpp/Map/MapDestructionDust.c (Map.MapDestructionDust$$Spawn): 56 lines keep C-only constructs
		uint uVar1;
		AudioClip pUVar3;
		ParticleSystem.MinMaxCurve value;
		ParticleSystem.MinMaxCurve value_00;
		ParticleSystem.MinMaxCurve value_01;
		ParticleSystem.MinMaxCurve value_02;
		ParticleSystem.MinMaxCurve value_03;
		ParticleSystem.MinMaxCurve value_04;
		ParticleSystem.MinMaxCurve value_05;
		ParticleSystem.MinMaxCurve value_06;
		ParticleSystem.MinMaxGradient value_07;
		ParticleSystem.MinMaxGradient value_08;
		byte[] auVar4 = new byte[16];
		bool bVar5;
		Object obj;
		Transform __this;
		ParticleSystem __this_00;
		ParticleSystem.Burst[] bursts;
		Gradient __this_01;
		GradientColorKey[] colorKeys;
		GradientAlphaKey[] alphaKeys;
		AnimationCurve curve;
		ParticleSystemRenderer __this_02;
		AudioSource __this_03;
		String* ppSVar6;
		ulong in_XMM0_Qb;
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		float fVar10;
		float fVar11;
		float fVar14;
		float fVar15;
		float fVar16;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		float fVar17;
		Color color;
		Color col;
		Color col_00;
		Vector3 value_09;
		Vector3 value_10;
		float local_2a8;
		float fStack_2a4;
		float fStack_2a0;
		float fStack_29c;
		ParticleSystem.ColorOverLifetimeModule local_298;
		ParticleSystem.EmissionModule local_290;
		float local_288;
		float local_284;
		GradientAlphaKey local_280;
		GradientAlphaKey local_278;
		GradientAlphaKey local_270;
		ParticleSystem.LimitVelocityOverLifetimeModule local_268;
		ParticleSystem.SizeOverLifetimeModule local_260;
		ParticleSystem.ShapeModule local_258;
		ParticleSystem.MainModule local_250;
		GradientColorKey local_248;
		GradientColorKey local_228;
		ParticleSystem.Burst local_208;
		ParticleSystem.MinMaxCurve local_1c8;
		ParticleSystem.MinMaxCurve local_1a8;
		ParticleSystem.MinMaxCurve local_188;
		ParticleSystem.MinMaxCurve local_168;
		ParticleSystem.MinMaxCurve local_148;
		ulong local_128;
		ulong uStack_120;
		byte[] local_118 = new byte[8];
		ulong uStack_110;
		byte[] local_108 = new byte[8];
		ulong uStack_100;
		ParticleSystem.MinMaxCurve local_f8;
		ParticleSystem.MinMaxCurve local_d8;
		ParticleSystem.MinMaxCurve local_b8;
		ParticleSystem.MinMaxGradient local_98;
		ParticleSystem.MinMaxGradient local_60;

		if (Il2CppMethodInitialized_07545a13 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem) ;
			ppSVar6 = &"Map destruction dust";
			Il2CppMethodInitialized_07545a13 = true;
		}
		local_250.m_ParticleSystem =(ParticleSystem.MainModule)null;
		local_290.m_ParticleSystem =(ParticleSystem.EmissionModule)null;
		local_258.m_ParticleSystem =(ParticleSystem.ShapeModule)null;
		local_298.m_ParticleSystem =(ParticleSystem.ColorOverLifetimeModule)null;
		local_260.m_ParticleSystem =(ParticleSystem.SizeOverLifetimeModule)null;
		local_268.m_ParticleSystem =(ParticleSystem.LimitVelocityOverLifetimeModule)null;
		MapDestructionDust.LoadAssets();
		local_128._0_4_ = (Vector3.oneVector).x;
		local_128._4_4_ = (Vector3.oneVector).y;
		uStack_120 = 0;
		if (hitRadius <= 0.75) {
			hitRadius = 0.75;
		}
		fVar10 = (Vector3.oneVector).z * hitRadius;
		local_284 = objectBounds.m_Center.z;
		local_288 = objectBounds.m_Extents.z;
		local_108._0_4_ = objectBounds.m_Center.x;
		local_108._4_4_ = objectBounds.m_Center.y;
		uStack_100 = 0;
		local_118._0_4_ = objectBounds.m_Extents.x;
		local_118._4_4_ = objectBounds.m_Extents.y;
		uStack_110 = 0;
		obj = new GameObject("Map destruction dust");
		if ((obj != null) &&(__this = obj.transform, __this != null)) {
			fVar17 = (fVar10 + fVar10) * 0.5;
			fVar10 = impact.z - fVar17;
			if (fVar10 <= local_284 - local_288) {
				fVar10 = local_284 - local_288;
			}
			fVar17 = fVar17 + impact.z;
			if (local_284 + local_288 <= fVar17) {
				fVar17 = local_284 + local_288;
			}
			fVar11 = (hitRadius * (float)local_128 + hitRadius * (float)local_128) * 0.5;
			fVar14 = (hitRadius * local_128._4_4_ + hitRadius * local_128._4_4_) * 0.5;
			fVar15 = (hitRadius * (float)uStack_120 + hitRadius * (float)uStack_120) * 0.0;
			fVar16 = (hitRadius * uStack_120._4_4_ + hitRadius * uStack_120._4_4_) * 0.0;
			local_2a8 = impact.x;
			fStack_2a4 = impact.y;
			fStack_2a0 = (float)in_XMM0_Qb;
			fStack_29c = (float)((ulong)in_XMM0_Qb >> 0x20);
			auVar7._0_4_ = local_2a8 - fVar11;
			auVar7._4_4_ = fStack_2a4 - fVar14;
			auVar7._8_4_ = fStack_2a0 - fVar15;
			auVar7._12_4_ = fStack_29c - fVar16;
			auVar8._4_4_ = (float)local_108._4_4_ - (float)local_118._4_4_;
			auVar8._0_4_ = (float)local_108._0_4_ - (float)local_118._0_4_;
			auVar8._8_4_ = (float)uStack_100 - (float)uStack_110;
			auVar8._12_4_ = uStack_100._4_4_ - uStack_110._4_4_;
			auVar8 = maxps(auVar7, auVar8);
			auVar12._0_4_ = fVar11 + local_2a8;
			auVar12._4_4_ = fVar14 + fStack_2a4;
			auVar12._8_4_ = fVar15 + fStack_2a0;
			auVar12._12_4_ = fVar16 + fStack_29c;
			auVar13._4_4_ = (float)local_108._4_4_ + (float)local_118._4_4_;
			auVar13._0_4_ = (float)local_108._0_4_ + (float)local_118._0_4_;
			auVar13._8_4_ = (float)uStack_100 + (float)uStack_110;
			auVar13._12_4_ = uStack_100._4_4_ + uStack_110._4_4_;
			auVar13 = minps(auVar12, auVar13);
			fVar11 = (auVar13._0_4_ - auVar8._0_4_) * 0.5;
			fVar14 = (auVar13._4_4_ - auVar8._4_4_) * 0.5;
			fVar17 = (fVar17 - fVar10) * 0.5;
			value_09.x = auVar8._0_4_ + fVar11;
			value_09.y = auVar8._4_4_ + fVar14;
			value_09.z = fVar10 + fVar17;
			__this.position = value_09;
			__this_00 = obj.AddComponent<ParticleSystem>();
			if (__this_00 != null) {
				fVar10 = fVar11;
				if (fVar11 <= fVar17) {
					fVar10 = fVar17;
				}
				if (fVar10 <= 0.75) {
					fVar10 = 0.75;
				}
				__this_00.Stop(true, 0);
				local_250 = __this_00.main;
				local_250.loop = false;
				local_250.playOnAwake = false;
				local_250.duration = 0.15;
				local_148.m_CurveMax = null;
				local_148.m_ConstantMin = 0.0;
				local_148.m_ConstantMax = 0.0;
				local_148.m_Mode = 0;
				local_148.m_CurveMultiplier = 0.0;
				local_148.m_CurveMin = null;
				local_148 = new ParticleSystem.MinMaxCurve(0.8, 2.2);
				value.m_CurveMin = local_148.m_CurveMin;
				value.m_Mode = local_148.m_Mode;
				value.m_CurveMultiplier = local_148.m_CurveMultiplier;
				value.m_CurveMax = local_148.m_CurveMax;
				value.m_ConstantMin = local_148.m_ConstantMin;
				value.m_ConstantMax = local_148.m_ConstantMax;
				local_250.startLifetime = value;
				local_168.m_CurveMax = null;
				local_168.m_ConstantMin = 0.0;
				local_168.m_ConstantMax = 0.0;
				local_168.m_Mode = 0;
				local_168.m_CurveMultiplier = 0.0;
				local_168.m_CurveMin = null;
				local_168 = new ParticleSystem.MinMaxCurve(fVar10 * 0.65, fVar10 * 1.2);
				value_00.m_CurveMin = local_168.m_CurveMin;
				value_00.m_Mode = local_168.m_Mode;
				value_00.m_CurveMultiplier = local_168.m_CurveMultiplier;
				value_00.m_CurveMax = local_168.m_CurveMax;
				value_00.m_ConstantMin = local_168.m_ConstantMin;
				value_00.m_ConstantMax = local_168.m_ConstantMax;
				local_250.startSize = value_00;
				local_188.m_CurveMax = null;
				local_188.m_ConstantMin = 0.0;
				local_188.m_ConstantMax = 0.0;
				local_188.m_Mode = 0;
				local_188.m_CurveMultiplier = 0.0;
				local_188.m_CurveMin = null;
				local_188 = new ParticleSystem.MinMaxCurve(fVar10 * 1.2, fVar10 * 2.4);
				value_01.m_CurveMin = local_188.m_CurveMin;
				value_01.m_Mode = local_188.m_Mode;
				value_01.m_CurveMultiplier = local_188.m_CurveMultiplier;
				value_01.m_CurveMax = local_188.m_CurveMax;
				value_01.m_ConstantMin = local_188.m_ConstantMin;
				value_01.m_ConstantMax = local_188.m_ConstantMax;
				local_250.startSpeed = value_01;
				local_1a8.m_CurveMax = null;
				local_1a8.m_ConstantMin = 0.0;
				local_1a8.m_ConstantMax = 0.0;
				local_1a8.m_Mode = 0;
				local_1a8.m_CurveMultiplier = 0.0;
				local_1a8.m_CurveMin = null;
				local_1a8 = new ParticleSystem.MinMaxCurve(-3.1415927, 3.1415927);
				value_02.m_CurveMin = local_1a8.m_CurveMin;
				value_02.m_Mode = local_1a8.m_Mode;
				value_02.m_CurveMultiplier = local_1a8.m_CurveMultiplier;
				value_02.m_CurveMax = local_1a8.m_CurveMax;
				value_02.m_ConstantMin = local_1a8.m_ConstantMin;
				value_02.m_ConstantMax = local_1a8.m_ConstantMax;
				local_250.startRotation = value_02;
				color.b = 1.0;
				color.a = 0.75;
				color.r = 1.0;
				color.g = 1.0;
				local_60 = ((ParticleSystem.MinMaxGradient)color);
				value_07.m_GradientMin = local_60.m_GradientMin;
				value_07.m_Mode = local_60.m_Mode;
				value_07._4_4_ = local_60._4_4_;
				value_07.m_GradientMax = local_60.m_GradientMax;
				value_07.m_ColorMin.r = local_60.m_ColorMin.r;
				value_07.m_ColorMin.g = local_60.m_ColorMin.g;
				value_07.m_ColorMin.b = local_60.m_ColorMin.b;
				value_07.m_ColorMin.a = local_60.m_ColorMin.a;
				value_07.m_ColorMax.r = local_60.m_ColorMax.r;
				value_07.m_ColorMax.g = local_60.m_ColorMax.g;
				value_07.m_ColorMax.b = local_60.m_ColorMax.b;
				value_07.m_ColorMax.a = local_60.m_ColorMax.a;
				local_250.startColor = value_07;
				local_b8 = ((ParticleSystem.MinMaxCurve)0.08);
				value_03.m_CurveMin = local_b8.m_CurveMin;
				value_03.m_Mode = local_b8.m_Mode;
				value_03.m_CurveMultiplier = local_b8.m_CurveMultiplier;
				value_03.m_CurveMax = local_b8.m_CurveMax;
				value_03.m_ConstantMin = local_b8.m_ConstantMin;
				value_03.m_ConstantMax = local_b8.m_ConstantMax;
				local_250.gravityModifier = value_03;
				local_250.maxParticles = 0x40;
				local_250.simulationSpace = 1;
				local_290 = __this_00.emission;
				local_d8 = ((ParticleSystem.MinMaxCurve)0.0);
				value_04.m_CurveMin = local_d8.m_CurveMin;
				value_04.m_Mode = local_d8.m_Mode;
				value_04.m_CurveMultiplier = local_d8.m_CurveMultiplier;
				value_04.m_CurveMax = local_d8.m_CurveMax;
				value_04.m_ConstantMin = local_d8.m_ConstantMin;
				value_04.m_ConstantMax = local_d8.m_ConstantMax;
				local_290.rateOverTime = value_04;
				bursts = (ParticleSystem.Burst[])new ParticleSystem.Burst[1];
				local_208.m_Count.m_ConstantMin = 0.0;
				local_208.m_Count.m_ConstantMax = 0.0;
				local_208.m_RepeatCount = 0;
				local_208.m_RepeatInterval = 0.0;
				local_208.m_Count.m_CurveMin = 0;
				local_208.m_Count.m_CurveMax = 0;
				local_208.m_Time = 0.0;
				local_208._4_4_ = 0;
				local_208.m_Count.m_Mode = 0;
				local_208.m_Count.m_CurveMultiplier = 0.0;
				local_208.m_InvProbability = 0.0;
				local_208._52_4_ = 0;
				local_208 = new ParticleSystem.Burst(0.0, 0x40);
				if (bursts != null) {
					if ((int)bursts.Length != 0) {
						bursts[0].m_InvProbability = local_208.m_InvProbability;
						*(uint)&bursts[0].field_0x34 = local_208._52_4_;
						bursts[0].m_Count.m_ConstantMin = local_208.m_Count.m_ConstantMin;
						bursts[0].m_Count.m_ConstantMax = local_208.m_Count.m_ConstantMax;
						bursts[0].m_RepeatCount = local_208.m_RepeatCount;
						bursts[0].m_RepeatInterval = local_208.m_RepeatInterval;
						bursts[0].m_Count.m_CurveMin = local_208.m_Count.m_CurveMin;
						bursts[0].m_Count.m_CurveMax = local_208.m_Count.m_CurveMax;
						bursts[0].m_Time = local_208.m_Time;
						*(uint)&bursts[0].field_0x4 = local_208._4_4_;
						bursts[0].m_Count.m_Mode = local_208.m_Count.m_Mode;
						bursts[0].m_Count.m_CurveMultiplier = local_208.m_Count.m_CurveMultiplier;
						local_290.SetBursts(bursts);
						local_258 = __this_00.shape;
						local_258.shapeType = 0;
						local_258.radius = 1.0;
						local_258.radiusThickness = 1.0;
						auVar9._4_4_ = fVar10 * 0.2;
						auVar9._0_4_ = 0x3e800000;
						auVar9._8_8_ = 0;
						auVar4._4_4_ = fVar14;
						auVar4._0_4_ = fVar11;
						auVar4._8_4_ = (auVar13._8_4_ - auVar8._8_4_) * 0.0;
						auVar4._12_4_ = (auVar13._12_4_ - auVar8._12_4_) * 0.0;
						auVar8 = maxps(auVar9, auVar4);
						fVar11 = 0.25;
						if (0.25 <= fVar17) {
							fVar11 = fVar17;
						}
						value_10._0_8_ = auVar8._0_8_;
						value_10.z = fVar11;
						local_258.scale = value_10;
						local_298 = __this_00.colorOverLifetime;
						local_298.enabled = true;
						__this_01 = new Gradient();
						colorKeys = (GradientColorKey[])new GradientColorKey[2];
						local_228.color.r = 0.0;
						local_228.color.g = 0.0;
						local_228.color.b = 0.0;
						local_228.color.a = 0.0;
						local_228.time = 0.0;
						col.b = 1.0;
						col.a = 1.0;
						col.r = 1.0;
						col.g = 1.0;
						local_228 = new GradientColorKey(col, 0.0);
						if (colorKeys == null) goto label_05981dc8;
						if ((int)colorKeys.Length != 0) {
							colorKeys[0].time = local_228.time;
							colorKeys[0].color.r = local_228.color.r;
							colorKeys[0].color.g = local_228.color.g;
							colorKeys[0].color.b = local_228.color.b;
							colorKeys[0].color.a = local_228.color.a;
							local_248.color.r = 0.0;
							local_248.color.g = 0.0;
							local_248.color.b = 0.0;
							local_248.color.a = 0.0;
							local_248.time = 0.0;
							col_00.b = 1.0;
							col_00.a = 1.0;
							col_00.r = 1.0;
							col_00.g = 1.0;
							local_248 = new GradientColorKey(col_00, 1.0);
							if ((colorKeys.Length & 0xfffffffe) != 0) {
								colorKeys[1].time = local_248.time;
								colorKeys[1].color.r = local_248.color.r;
								colorKeys[1].color.g = local_248.color.g;
								colorKeys[1].color.b = local_248.color.b;
								colorKeys[1].color.a = local_248.color.a;
								alphaKeys = (GradientAlphaKey[])new GradientAlphaKey[3];
								local_270.alpha = 0.0;
								local_270.time = 0.0;
								local_270 = new GradientAlphaKey(0.0, 0.0);
								if (alphaKeys == null) goto label_05981dc8;
								if ((int)alphaKeys.Length != 0) {
									alphaKeys[0] = local_270;
									local_278.alpha = 0.0;
									local_278.time = 0.0;
									local_278 = new GradientAlphaKey(1.0, 0.08);
									if ((alphaKeys.Length & 0xfffffffe) != 0) {
										alphaKeys[1] = local_278;
										local_280.alpha = 0.0;
										local_280.time = 0.0;
										local_280 = new GradientAlphaKey(0.0, 1.0);
										if (2 < (uint)alphaKeys.Length) {
											alphaKeys[2] = local_280;
											if (__this_01 != null) {
												__this_01.SetKeys(colorKeys, alphaKeys);
												local_98 = ((ParticleSystem.MinMaxGradient)__this_01);
												value_08.m_GradientMin = local_98.m_GradientMin;
												value_08.m_Mode = local_98.m_Mode;
												value_08._4_4_ = local_98._4_4_;
												value_08.m_GradientMax = local_98.m_GradientMax;
												value_08.m_ColorMin.r = local_98.m_ColorMin.r;
												value_08.m_ColorMin.g = local_98.m_ColorMin.g;
												value_08.m_ColorMin.b = local_98.m_ColorMin.b;
												value_08.m_ColorMin.a = local_98.m_ColorMin.a;
												value_08.m_ColorMax.r = local_98.m_ColorMax.r;
												value_08.m_ColorMax.g = local_98.m_ColorMax.g;
												value_08.m_ColorMax.b = local_98.m_ColorMax.b;
												value_08.m_ColorMax.a = local_98.m_ColorMax.a;
												local_298.color = value_08;
												local_260 = __this_00.sizeOverLifetime;
												local_260.enabled = true;
												curve = AnimationCurve.Linear(0.0, 0.6, 1.0, 2.0);
												local_1c8.m_CurveMax = null;
												local_1c8.m_ConstantMin = 0.0;
												local_1c8.m_ConstantMax = 0.0;
												local_1c8.m_Mode = 0;
												local_1c8.m_CurveMultiplier = 0.0;
												local_1c8.m_CurveMin = null;
												local_1c8 = new ParticleSystem.MinMaxCurve(1.0, curve);
												value_05.m_CurveMin = local_1c8.m_CurveMin;
												value_05.m_Mode = local_1c8.m_Mode;
												value_05.m_CurveMultiplier = local_1c8.m_CurveMultiplier;
												value_05.m_CurveMax = local_1c8.m_CurveMax;
												value_05.m_ConstantMin = local_1c8.m_ConstantMin;
												value_05.m_ConstantMax = local_1c8.m_ConstantMax;
												local_260.size = value_05;
												local_268 = __this_00.limitVelocityOverLifetime;
												local_268.enabled = true;
												local_f8 = ((ParticleSystem.MinMaxCurve)fVar10 * 0.5);
												value_06.m_CurveMin = local_f8.m_CurveMin;
												value_06.m_Mode = local_f8.m_Mode;
												value_06.m_CurveMultiplier = local_f8.m_CurveMultiplier;
												value_06.m_CurveMax = local_f8.m_CurveMax;
												value_06.m_ConstantMin = local_f8.m_ConstantMin;
												value_06.m_ConstantMax = local_f8.m_ConstantMax;
												local_268.limit = value_06;
												local_268.dampen = 0.3;
												__this_02 = obj.GetComponent<ParticleSystemRenderer>();
												if (__this_02 != null) {
													__this_02.sharedMaterial = MapDestructionDust._material;
													__this_02.shadowCastingMode = 0;
													__this_02.receiveShadows = false;
													__this_00.Play();
													pUVar3 = MapDestructionDust._sound;
													bVar5 = ((Object)pUVar3 != null);
													if (!bVar5) {
														fVar10 = 3.0;
														uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x05981d97: ;
														if (uVar1 == 0) {
														}
														Object.Destroy(obj, fVar10);
														return;
													}
													__this_03 = obj.AddComponent<AudioSource>();
													if (__this_03 != null) {
														__this_03.clip = MapDestructionDust._sound;
														__this_03.spatialBlend = 1.0;
														__this_03.rolloffMode = 1;
														__this_03.minDistance = fVar10 * 3.0;
														__this_03.maxDistance = 350.0;
														__this_03.volume = 0.8;
														__this_03.pitch = 0.85;
														__this_03.dopplerLevel = 0.0;
														__this_03.Play();
														pUVar3 = MapDestructionDust._sound;
														if (pUVar3 != null) {
															fVar10 = pUVar3.length;
															fVar17 = fVar10 / 0.85 + 0.1;
															fVar10 = 3.0;
															if (3.0 <= fVar17) {
																fVar10 = fVar17;
															}
															uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
															goto joined_r0x05981d97;
														}
													}
												}
											}
											goto label_05981dc8;
										}
									}
								}
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05981dc8: ;
		throw new NullReferenceException();
	}
}
