using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004D")]
public sealed class GisketchStepperStepDefinition
{
	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x20")]
	public string titleKey;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x28")]
	public string text;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x30")]
	public string textKey;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition[] children;

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x39F0550", Offset = "0x39F0550", VA = "0x39F0550")]
	public GisketchStepperStepDefinition()
	{
	}
}
