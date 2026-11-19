// ==================== AoTTG2 cross-reference ====================
// Type: Weather.RainWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/RainWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/RainWeatherEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000032")]
internal class RainWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x1700001B")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x5755FD0", Offset = "0x5754FD0", VA = "0x5755FD0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Weather/RainWeatherEffect.c (Weather.RainWeatherEffect$$get__positionOffset): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.upVector).x;
			uVar2 = (Vector3.upVector).y;
			UVar4.x = (float)uVar1 * 30.0;
			UVar4.y = (float)uVar2 * 30.0;
			UVar4.z = (Vector3.upVector).z * 30.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x5756020", Offset = "0x5755020", VA = "0x5756020", Slot = "8")]
	public override void Randomize()
	{
		// Lifted from source/cpp/Weather/RainWeatherEffect.c (Weather.RainWeatherEffect$$Randomize): 25 lines keep C-only constructs
		float fVar1;
		List<ParticleSystem> __this_00;
		object __this_01;
		bool bVar3;
		Transform pUVar4;
		Transform pUVar5;
		float fVar6;
		float angle;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar7;
		Vector3 point;
		Vector3 axis;
		System_Collections_Generic_List_Enumerator_object__o SStack_88;
		byte[] auStack_70 = new byte[16];
		Component pUStack_60;
		byte[] auStack_58 = new byte[16];
		ulong uStack_48;

		SStack_88._list = null;
		SStack_88._index = 0;
		SStack_88._version = 0;
		SStack_88._current = null;
		fVar6 = Random.Range(0.0, 20.0);
		fVar6 = Random.Range(-fVar6, fVar6);
		__this_00 = this._particleSystems;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_70.GetEnumerator((List<object>)__this_00);
		SStack_88._current = (object)pUStack_60;
		SStack_88._list = (List<T>)auStack_70._0_8_;
		SStack_88._index = auStack_70._8_4_;
		SStack_88._version = auStack_70._12_4_;
		auStack_70._0_8_ = null;
		auStack_70._8_8_ = &SStack_88;
		while(true) {
			bVar3 = SStack_88.MoveNext();
			__this_01 = SStack_88._current;
			if (!bVar3) {
				SStack_88.Dispose();
				return;
			}
			if ((Component)SStack_88._current == null) {
				throw new NullReferenceException();
			}
			pUVar4 = SStack_88._current.transform;
			UVar7 = this.get__positionOffset();
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			pUVar4.localPosition = UVar7;
			pUVar4 = __this_01.transform;
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			pUVar4.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
			pUVar5 = __this_01.transform;
			pUVar4 = this._transform;
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			UVar7 = pUVar4.position;
			auStack_58._8_4_ = extraout_XMM0_Dc;
			auStack_58._0_8_ = UVar7._0_8_;
			auStack_58._12_4_ = extraout_XMM0_Dd;
			if (pUVar5 == null) {
				throw new NullReferenceException();
			}
			UVar7.x = (float)auStack_58._0_4_;
			UVar7.y = (float)auStack_58._4_4_;
			pUVar5.RotateAround(UVar7, (Vector3)(Vector3.forwardVector), fVar6);
			pUVar5 = __this_01.transform;
			pUVar4 = this._transform;
			if (pUVar4 == null) {
				throw new NullReferenceException();
			}
			UVar7 = pUVar4.position;
			point.z = UVar7.z;
			auStack_58._8_4_ = extraout_XMM0_Dc_00;
			auStack_58._0_8_ = UVar7._0_8_;
			auStack_58._12_4_ = extraout_XMM0_Dd_00;
			uStack_48._0_4_ = (Vector3.upVector).x;
			uStack_48._4_4_ = (Vector3.upVector).y;
			fVar1 = (Vector3.upVector).z;
			angle = Random.Range(0.0, 360.0);
			if (pUVar5 == null) break;
			point.x = (float)auStack_58._0_4_;
			point.y = (float)auStack_58._4_4_;
			axis.z = fVar1;
			axis.x = (float)(undefined4)uStack_48;
			axis.y = (float)uStack_48._4_4_;
			pUVar5.RotateAround(point, axis, angle);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x57563B0", Offset = "0x57553B0", VA = "0x57563B0", Slot = "10")]
	public override void SetLevel(float level)
	{
		// Lifted from source/cpp/Weather/RainWeatherEffect.c (Weather.RainWeatherEffect$$SetLevel): clean
		List<ParticleSystem> pSVar1;
		ParticleSystem.MinMaxCurve value;
		ParticleSystem.MinMaxCurve value_00;
		ParticleSystem.MinMaxCurve value_01;
		ParticleSystem.MinMaxCurve value_02;
		ParticleSystem pUVar2;
		int iVar5;
		float fVar6;
		float fVar7;
		ParticleSystem.EmissionModule UStack_60;
		ParticleSystem.MainModule UStack_58;
		ParticleSystem.MinMaxCurve UStack_50;
		ParticleSystem.MinMaxCurve UStack_30;

		this._level = level;
		if (0.0 < level) {
			if (0.5 <= level) {
				this.SetActiveParticleSystem(1);
				pSVar1 = this._particleSystems;
				if (pSVar1 == null) goto label_058566b9;
				pUVar2 = pSVar1.get_Item(1);
				if (pUVar2 == null) goto label_058566b9;
				UStack_58 = pUVar2.main;
				pSVar1 = this._particleSystems;
				if (pSVar1 == null) goto label_058566b9;
				pUVar2 = pSVar1.get_Item(1);
				if (pUVar2 == null) goto label_058566b9;
				fVar6 = level + -0.5 + level + -0.5;
				UStack_60 = pUVar2.emission;
				fVar7 = this.ClampParticles(fVar6 * 150.0 + 100.0);
				UStack_30 = ((ParticleSystem.MinMaxCurve)fVar7);
				value_01.m_CurveMin = UStack_30.m_CurveMin;
				value_01.m_Mode = UStack_30.m_Mode;
				value_01.m_CurveMultiplier = UStack_30.m_CurveMultiplier;
				value_01.m_CurveMax = UStack_30.m_CurveMax;
				value_01.m_ConstantMin = UStack_30.m_ConstantMin;
				value_01.m_ConstantMax = UStack_30.m_ConstantMax;
				UStack_60.rateOverTime = value_01;
				UStack_50 = ((ParticleSystem.MinMaxCurve)fVar6 * 10.0 + 50.0) ;
				value_02.m_CurveMin = UStack_50.m_CurveMin;
				value_02.m_Mode = UStack_50.m_Mode;
				value_02.m_CurveMultiplier = UStack_50.m_CurveMultiplier;
				value_02.m_CurveMax = UStack_50.m_CurveMax;
				value_02.m_ConstantMin = UStack_50.m_ConstantMin;
				value_02.m_ConstantMax = UStack_50.m_ConstantMax;
				UStack_58.startSize = value_02;
				iVar5 = 1;
			}
			else {
				this.SetActiveParticleSystem(0);
				pSVar1 = this._particleSystems;
				if (pSVar1 == null) {
	label_058566b9: ;
					throw new NullReferenceException();
				}
				pUVar2 = pSVar1.get_Item(0);
				if (pUVar2 == null) goto label_058566b9;
				UStack_58 = pUVar2.main;
				pSVar1 = this._particleSystems;
				if (pSVar1 == null) goto label_058566b9;
				pUVar2 = pSVar1.get_Item(0);
				if (pUVar2 == null) goto label_058566b9;
				fVar6 = level + level;
				UStack_60 = pUVar2.emission;
				fVar7 = this.ClampParticles(fVar6 * 150.0 + 50.0);
				UStack_30 = ((ParticleSystem.MinMaxCurve)fVar7);
				value.m_CurveMin = UStack_30.m_CurveMin;
				value.m_Mode = UStack_30.m_Mode;
				value.m_CurveMultiplier = UStack_30.m_CurveMultiplier;
				value.m_CurveMax = UStack_30.m_CurveMax;
				value.m_ConstantMin = UStack_30.m_ConstantMin;
				value.m_ConstantMax = UStack_30.m_ConstantMax;
				UStack_60.rateOverTime = value;
				UStack_50 = ((ParticleSystem.MinMaxCurve)fVar6 * 30.0 + 30.0) ;
				value_00.m_CurveMin = UStack_50.m_CurveMin;
				value_00.m_Mode = UStack_50.m_Mode;
				value_00.m_CurveMultiplier = UStack_50.m_CurveMultiplier;
				value_00.m_CurveMax = UStack_50.m_CurveMax;
				value_00.m_ConstantMin = UStack_50.m_ConstantMin;
				value_00.m_ConstantMax = UStack_50.m_ConstantMax;
				UStack_58.startSize = value_00;
				iVar5 = 0;
			}
			this.SetActiveAudio(iVar5, fVar6 * 0.25 + 0.25);
		}
		return;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x57566C0", Offset = "0x57556C0", VA = "0x57566C0", Slot = "11")]
	public override void Setup(Transform parent)
	{
		// Lifted from source/cpp/Weather/RainWeatherEffect.c (Weather.RainWeatherEffect$$Setup): clean
		this.Setup(parent);
		return;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x57566D0", Offset = "0x57556D0", VA = "0x57566D0")]
	public RainWeatherEffect()
	{
		// Lifted from source/cpp/Weather/RainWeatherEffect.c (Weather.RainWeatherEffect$$.ctor): clean
		base();
		return;
	}
}
