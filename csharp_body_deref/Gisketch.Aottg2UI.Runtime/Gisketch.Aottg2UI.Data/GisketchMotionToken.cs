using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000056")]
public sealed class GisketchMotionToken
{
	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x18")]
	public string preset;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x39F0670", Offset = "0x39F0670", VA = "0x39F0670")]
	public GisketchMotionToken()
	{
	}
}
