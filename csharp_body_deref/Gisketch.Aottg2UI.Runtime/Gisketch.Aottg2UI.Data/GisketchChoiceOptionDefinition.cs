using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004C")]
public sealed class GisketchChoiceOptionDefinition
{
	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x10")]
	public string value;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x18")]
	public string text;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x20")]
	public string textKey;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x28")]
	public bool enabled;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x30")]
	public string tooltip;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x38")]
	public string tooltipKey;

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x39F0540", Offset = "0x39F0540", VA = "0x39F0540")]
	public GisketchChoiceOptionDefinition()
	{
	}
}
