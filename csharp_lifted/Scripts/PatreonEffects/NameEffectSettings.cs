// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace PatreonEffects;

[Serializable]
[Token(Token = "0x2000086")]
public class NameEffectSettings
{
	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x10")]
	public Color gradientA;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x20")]
	public Color gradientB;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x30")]
	public Color gradientC;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x40")]
	public Color gradientD;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x50")]
	public int effectMode;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x54")]
	public float gradientScale;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x58")]
	public float gradientSpeed;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x5C")]
	public float glow;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x60")]
	public float scanlineStrength;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x64")]
	public float scanlineDensity;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x68")]
	public float scanlineSpeed;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x6C")]
	public float flickerStrength;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x70")]
	public float flickerSpeed;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x74")]
	public float softness;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x78")]
	public Vector2 popShadowOffset;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x80")]
	public Vector2 popExtrusionOffset;

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x58C2110", Offset = "0x58C1110", VA = "0x58C2110")]
	public NameEffectSettings()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectSettings.c (PatreonEffects.NameEffectSettings$$.ctor): clean
		this.gradientA.r = 0.78;
		this.gradientA.g = 1.0;
		this.gradientA.b = 0.9;
		this.gradientA.a = 1.0;
		this.gradientB.r = 0.64;
		this.gradientB.g = 0.95;
		this.gradientB.b = 1.0;
		this.gradientB.a = 1.0;
		this.gradientC.r = 0.86;
		this.gradientC.g = 0.76;
		this.gradientC.b = 1.0;
		this.gradientC.a = 1.0;
		this.gradientD.r = 1.0;
		this.gradientD.g = 0.96;
		this.gradientD.b = 0.82;
		this.gradientD.a = 1.0;
		this.gradientScale = 2.8;
		this.gradientSpeed = 0.16;
		this.glow = 1.35;
		this.scanlineStrength = 0.12;
		this.scanlineDensity = 180.0;
		this.scanlineSpeed = 0.18;
		this.flickerStrength = 0.05;
		this.flickerSpeed = 18.0;
		this.softness = 1.0;
		this.popShadowOffset = (Vector2)0xbfc0000000000000;
		this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		base();
		return;
	}
}
