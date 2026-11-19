// ==================== AoTTG2 cross-reference ====================
// Type: Weather.SnowWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/SnowWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/SnowWeatherEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000033")]
internal class SnowWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x1700001C")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x57566E0", Offset = "0x57556E0", VA = "0x57566E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Weather/SnowWeatherEffect.c (Weather.SnowWeatherEffect$$get__positionOffset): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.upVector).x;
			uVar2 = (Vector3.upVector).y;
			UVar4.x = (float)uVar1 * 0.0;
			UVar4.y = (float)uVar2 * 0.0;
			UVar4.z = (Vector3.upVector).z * 0.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x5756730", Offset = "0x5755730", VA = "0x5756730", Slot = "8")]
	public override void Randomize()
	{
		// Lifted from source/cpp/Weather/SnowWeatherEffect.c (Weather.SnowWeatherEffect$$Randomize): clean
		return;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x5756740", Offset = "0x5755740", VA = "0x5756740", Slot = "10")]
	public override void SetLevel(float level)
	{
		// Lifted from source/cpp/Weather/SnowWeatherEffect.c (Weather.SnowWeatherEffect$$SetLevel): clean
		List<ParticleSystem> pSVar1;
		ParticleSystem.MinMaxCurve value;
		ParticleSystem.MinMaxCurve value_00;
		ParticleSystem pUVar2;
		float constant;
		ParticleSystem.EmissionModule UStack_60;
		ParticleSystem.MainModule UStack_58;
		ParticleSystem.MinMaxCurve UStack_50;
		ParticleSystem.MinMaxCurve UStack_30;

		this._level = level;
		if (level <= 0.0) {
			return;
		}
		this.SetActiveParticleSystem(0);
		pSVar1 = this._particleSystems;
		if ((pSVar1 != null) &&(pUVar2 = pSVar1.get_Item(0), pUVar2 != null)) {
			UStack_58 = pUVar2.main;
			pSVar1 = this._particleSystems;
			if ((pSVar1 != null) &&(pUVar2 = pSVar1.get_Item(0), pUVar2 != null)) {
				UStack_60 = pUVar2.emission;
				constant = this.ClampParticles(level * 200.0 + 100.0);
				UStack_30 = ((ParticleSystem.MinMaxCurve)constant);
				value.m_CurveMin = UStack_30.m_CurveMin;
				value.m_Mode = UStack_30.m_Mode;
				value.m_CurveMultiplier = UStack_30.m_CurveMultiplier;
				value.m_CurveMax = UStack_30.m_CurveMax;
				value.m_ConstantMin = UStack_30.m_ConstantMin;
				value.m_ConstantMax = UStack_30.m_ConstantMax;
				UStack_60.rateOverTime = value;
				UStack_50 = ((ParticleSystem.MinMaxCurve)25.0);
				value_00.m_CurveMin = UStack_50.m_CurveMin;
				value_00.m_Mode = UStack_50.m_Mode;
				value_00.m_CurveMultiplier = UStack_50.m_CurveMultiplier;
				value_00.m_CurveMax = UStack_50.m_CurveMax;
				value_00.m_ConstantMin = UStack_50.m_ConstantMin;
				value_00.m_ConstantMax = UStack_50.m_ConstantMax;
				UStack_58.startSize = value_00;
				this.SetActiveAudio(0, level * 0.25 + 0.25);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x57568C0", Offset = "0x57558C0", VA = "0x57568C0", Slot = "11")]
	public override void Setup(Transform parent)
	{
		// Lifted from source/cpp/Weather/SnowWeatherEffect.c (Weather.SnowWeatherEffect$$Setup): clean
		this.Setup(parent);
		return;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x57568D0", Offset = "0x57558D0", VA = "0x57568D0")]
	public SnowWeatherEffect()
	{
		// Lifted from source/cpp/Weather/SnowWeatherEffect.c (Weather.SnowWeatherEffect$$.ctor): clean
		base();
		return;
	}
}
