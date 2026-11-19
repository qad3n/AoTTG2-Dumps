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

[Token(Token = "0x2000034")]
internal class ThunderWeatherEffect : BaseWeatherEffect
{
	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	public static List<List<LightningParticle>> LightningPool;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x6C")]
	protected float _lightningWaitTime;

	[Token(Token = "0x4000113")]
	private const int MaxLightningParticles = 4;

	[Token(Token = "0x1700001D")]
	protected override Vector3 _positionOffset
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x57568E0", Offset = "0x57558E0", VA = "0x57568E0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x5756930", Offset = "0x5755930", VA = "0x5756930")]
	public static void OnFinishInit()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x5756F60", Offset = "0x5755F60", VA = "0x5756F60", Slot = "8")]
	public override void Randomize()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x5756F70", Offset = "0x5755F70", VA = "0x5756F70", Slot = "11")]
	public override void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x5756F80", Offset = "0x5755F80", VA = "0x5756F80", Slot = "10")]
	public override void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x5756FC0", Offset = "0x5755FC0", VA = "0x5756FC0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x5757040", Offset = "0x5756040", VA = "0x5757040")]
	protected void CreateLightning()
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x5757560", Offset = "0x5756560", VA = "0x5757560")]
	public ThunderWeatherEffect()
	{
	}
}
