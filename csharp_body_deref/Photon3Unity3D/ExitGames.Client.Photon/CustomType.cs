using System;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000035")]
internal class CustomType
{
	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x10")]
	public readonly byte Code;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x18")]
	public readonly Type Type;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x20")]
	public readonly SerializeMethod SerializeFunction;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x28")]
	public readonly DeserializeMethod DeserializeFunction;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x30")]
	public readonly SerializeStreamMethod SerializeStreamFunction;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x38")]
	public readonly DeserializeStreamMethod DeserializeStreamFunction;

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x3B84260", Offset = "0x3B84260", VA = "0x3B84260")]
	public CustomType(Type type, byte code, SerializeMethod serializeFunction, DeserializeMethod deserializeFunction)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x3B842C0", Offset = "0x3B842C0", VA = "0x3B842C0")]
	public CustomType(Type type, byte code, SerializeStreamMethod serializeFunction, DeserializeStreamMethod deserializeFunction)
	{
	}
}
