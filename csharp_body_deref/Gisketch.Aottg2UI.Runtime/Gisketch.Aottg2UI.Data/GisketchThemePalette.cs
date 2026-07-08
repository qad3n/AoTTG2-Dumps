using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000054")]
public sealed class GisketchThemePalette
{
	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x18")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x39F0650", Offset = "0x39F0650", VA = "0x39F0650")]
	public GisketchThemePalette()
	{
	}
}
