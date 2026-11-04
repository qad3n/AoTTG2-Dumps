// ==================== AoTTG2 cross-reference ====================
// Type: Weather.ThunderWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/ThunderWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/ThunderWeatherEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000035")]
internal class ThunderWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x0")]
	public static List<List<LightningParticle>> LightningPool;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x70")]
	protected float _lightningWaitTime;

	[Token(Token = "0x400010C")]
	private const int MaxLightningParticles = 4;

	[Token(Token = "0x17000024")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x1DA1240", Offset = "0x1D9F840", VA = "0x181DA1240", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x1DAF9B0", Offset = "0x1DADFB0", VA = "0x181DAF9B0")]
	public static void OnFinishInit()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x1DAE3A0", Offset = "0x1DAC9A0", VA = "0x181DAE3A0", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x1DAFED0", Offset = "0x1DAE4D0", VA = "0x181DAFED0", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x1DAF930", Offset = "0x1DADF30", VA = "0x181DAF930")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x1DAF440", Offset = "0x1DADA40", VA = "0x181DAF440")]
	protected void CreateLightning()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x1DAFFB0", Offset = "0x1DAE5B0", VA = "0x181DAFFB0")]
	public ThunderWeatherEffect()
	{
	}
}
