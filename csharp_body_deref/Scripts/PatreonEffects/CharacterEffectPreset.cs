using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x20000EA")]
public struct CharacterEffectPreset
{
	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x0")]
	public int StyleMode;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x4")]
	public float GlowIntensity;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x8")]
	public float OutlineThickness;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0xC")]
	public float OutlinePower;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x10")]
	public float PulseSpeed;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x14")]
	public float PulseAmount;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x18")]
	public float FlowSpeed;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x1C")]
	public float FlowStrength;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x20")]
	public float TexturePreserve;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x24")]
	public float EmissionFromTexture;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x28")]
	public float DetailScale;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x2C")]
	public float DetailSpeed;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x30")]
	public float SecondaryScroll;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x34")]
	public float EdgeSpark;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x38")]
	public float StyleStrength;
}
