using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000189")]
internal readonly struct AottgProfilePreset
{
	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Key;

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Sprite;

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x40E6820", Offset = "0x40E6820", VA = "0x40E6820")]
	public AottgProfilePreset(string key, string label, string sprite)
	{
	}
}
