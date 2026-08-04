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
	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x0")]
	public static List<List<LightningParticle>> LightningPool;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x6C")]
	protected float _lightningWaitTime;

	[Token(Token = "0x4000101")]
	private const int MaxLightningParticles = 4;

	[Token(Token = "0x17000022")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x3F6CCD0", Offset = "0x3F6CCD0", VA = "0x3F6CCD0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x3F6CD20", Offset = "0x3F6CD20", VA = "0x3F6CD20")]
	public static void OnFinishInit()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x3F6D370", Offset = "0x3F6D370", VA = "0x3F6D370", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3F6D380", Offset = "0x3F6D380", VA = "0x3F6D380", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x3F6D390", Offset = "0x3F6D390", VA = "0x3F6D390", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x3F6D3D0", Offset = "0x3F6D3D0", VA = "0x3F6D3D0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3F6D450", Offset = "0x3F6D450", VA = "0x3F6D450")]
	protected void CreateLightning()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x3F6D950", Offset = "0x3F6D950", VA = "0x3F6D950")]
	public ThunderWeatherEffect()
	{
	}
}
