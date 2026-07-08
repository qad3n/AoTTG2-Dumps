using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000053")]
public sealed class GisketchColorToken
{
	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x18")]
	public string value;

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x39F0640", Offset = "0x39F0640", VA = "0x39F0640")]
	public GisketchColorToken()
	{
	}
}
