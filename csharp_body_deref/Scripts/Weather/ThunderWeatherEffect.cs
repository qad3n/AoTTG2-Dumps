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
		[Address(RVA = "0x3C77380", Offset = "0x3C77380", VA = "0x3C77380", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x3C773D0", Offset = "0x3C773D0", VA = "0x3C773D0")]
	public static void OnFinishInit()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x3C77A20", Offset = "0x3C77A20", VA = "0x3C77A20", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3C77A30", Offset = "0x3C77A30", VA = "0x3C77A30", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x3C77A40", Offset = "0x3C77A40", VA = "0x3C77A40", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x3C77A80", Offset = "0x3C77A80", VA = "0x3C77A80")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3C77B00", Offset = "0x3C77B00", VA = "0x3C77B00")]
	protected void CreateLightning()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x3C78000", Offset = "0x3C78000", VA = "0x3C78000")]
	public ThunderWeatherEffect()
	{
	}
}
