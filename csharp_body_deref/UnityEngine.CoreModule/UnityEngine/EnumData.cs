using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000161")]
internal struct EnumData
{
	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x0")]
	public Enum[] values;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x8")]
	public int[] flagValues;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x10")]
	public string[] displayNames;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x18")]
	public string[] names;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x20")]
	public string[] tooltip;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x28")]
	public bool flags;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x30")]
	public Type underlyingType;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x38")]
	public bool unsigned;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x39")]
	public bool serializable;
}
