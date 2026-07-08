using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000171")]
internal struct AottgGuildPresetDefinition
{
	[Token(Token = "0x4000864")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000865")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000866")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly AottgGuildPresetKind Kind;

	[Token(Token = "0x4000867")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Sprite;

	[Token(Token = "0x4000868")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly float ImageScale;

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x40E8810", Offset = "0x40E8810", VA = "0x40E8810")]
	public AottgGuildPresetDefinition(string id, string label, AottgGuildPresetKind kind, [Optional] string sprite, float imageScale = 1f)
	{
	}
}
