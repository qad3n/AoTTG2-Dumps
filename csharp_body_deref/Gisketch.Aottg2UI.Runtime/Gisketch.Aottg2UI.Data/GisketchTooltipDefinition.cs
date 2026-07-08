using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004B")]
public sealed class GisketchTooltipDefinition
{
	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x18")]
	public string text;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x20")]
	public string textKey;

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x39F0530", Offset = "0x39F0530", VA = "0x39F0530")]
	public GisketchTooltipDefinition()
	{
	}
}
