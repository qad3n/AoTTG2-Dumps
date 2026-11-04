// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace PatreonEffects;

[Serializable]
[Token(Token = "0x2000112")]
public class NameEffectSettings
{
	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x10")]
	public Color gradientA;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x20")]
	public Color gradientB;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x30")]
	public Color gradientC;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x40")]
	public Color gradientD;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x50")]
	public int effectMode;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x54")]
	public float gradientScale;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x58")]
	public float gradientSpeed;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x5C")]
	public float glow;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x60")]
	public float scanlineStrength;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x64")]
	public float scanlineDensity;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x68")]
	public float scanlineSpeed;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x6C")]
	public float flickerStrength;

	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x70")]
	public float flickerSpeed;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x74")]
	public float softness;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x78")]
	public Vector2 popShadowOffset;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x80")]
	public Vector2 popExtrusionOffset;

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x20CBCE0", Offset = "0x20CA2E0", VA = "0x1820CBCE0")]
	public NameEffectSettings()
	{
	}
}
