using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000074")]
public readonly struct GisketchGridPickerItem
{
	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string Key;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string Sprite;

	[Token(Token = "0x400025C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Keywords;

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x39FA980", Offset = "0x39FA980", VA = "0x39FA980")]
	public GisketchGridPickerItem(string key, string label, string sprite, [Optional] string keywords)
	{
	}
}
