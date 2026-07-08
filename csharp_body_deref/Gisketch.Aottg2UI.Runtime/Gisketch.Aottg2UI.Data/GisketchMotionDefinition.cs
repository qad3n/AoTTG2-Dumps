using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004F")]
public sealed class GisketchMotionDefinition
{
	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x10")]
	public string preset;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x18")]
	public string group;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x24")]
	public float delay;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x28")]
	public float stagger;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x2C")]
	public int order;

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x39F0560", Offset = "0x39F0560", VA = "0x39F0560")]
	public GisketchMotionDefinition()
	{
	}
}
