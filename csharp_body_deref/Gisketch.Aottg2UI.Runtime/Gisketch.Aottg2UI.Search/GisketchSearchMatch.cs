using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x200002E")]
public readonly struct GisketchSearchMatch
{
	[Token(Token = "0x40000DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly int Score;

	[Token(Token = "0x40000E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly int DisplayStart;

	[Token(Token = "0x40000E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly int DisplayLength;

	[Token(Token = "0x40000E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string HiddenText;

	[Token(Token = "0x40000E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly int[] DisplayIndices;

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x39E1780", Offset = "0x39E1780", VA = "0x39E1780")]
	public GisketchSearchMatch(int score, int displayStart, int displayLength, string hiddenText, [Optional] int[] displayIndices)
	{
	}
}
