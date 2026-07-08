using Il2CppDummyDll;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x20000F3")]
public struct ResolvedNameEffect
{
	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x0")]
	public bool Enabled;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x4")]
	public NameEffectType Type;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x8")]
	public Color ColorA;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x18")]
	public Color ColorB;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x28")]
	public Color ColorC;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x38")]
	public Color ColorD;
}
