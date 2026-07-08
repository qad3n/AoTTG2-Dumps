using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000051")]
public sealed class GisketchLength
{
	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x10")]
	public float value;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x18")]
	public string unit;

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x39E9FD0", Offset = "0x39E9FD0", VA = "0x39E9FD0")]
	public GisketchLength()
	{
	}
}
