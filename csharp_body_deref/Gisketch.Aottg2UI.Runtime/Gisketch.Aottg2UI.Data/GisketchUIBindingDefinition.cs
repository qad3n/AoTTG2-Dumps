using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000050")]
public sealed class GisketchUIBindingDefinition
{
	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x10")]
	public string text;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x18")]
	public string sprite;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x20")]
	public string visible;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x28")]
	public string enabled;

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x39F0570", Offset = "0x39F0570", VA = "0x39F0570")]
	public GisketchUIBindingDefinition()
	{
	}
}
