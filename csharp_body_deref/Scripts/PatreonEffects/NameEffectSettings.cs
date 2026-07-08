using System;
using Il2CppDummyDll;
using UnityEngine;

namespace PatreonEffects;

[Serializable]
[Token(Token = "0x20000F0")]
public class NameEffectSettings
{
	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x10")]
	public Color gradientA;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x20")]
	public Color gradientB;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x30")]
	public Color gradientC;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x40")]
	public Color gradientD;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x50")]
	public int effectMode;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x54")]
	public float gradientScale;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x58")]
	public float gradientSpeed;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x5C")]
	public float glow;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x60")]
	public float scanlineStrength;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x64")]
	public float scanlineDensity;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x68")]
	public float scanlineSpeed;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x6C")]
	public float flickerStrength;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x70")]
	public float flickerSpeed;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x74")]
	public float softness;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x78")]
	public Vector2 popShadowOffset;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x80")]
	public Vector2 popExtrusionOffset;

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x3F33C70", Offset = "0x3F33C70", VA = "0x3F33C70")]
	public NameEffectSettings()
	{
	}
}
