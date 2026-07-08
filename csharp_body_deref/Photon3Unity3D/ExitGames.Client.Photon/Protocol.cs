using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000036")]
public class Protocol
{
	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Dictionary<Type, CustomType> TypeDict;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Dictionary<byte, CustomType> CodeDict;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x10")]
	private static IProtocol ProtocolDefault;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x18")]
	private static readonly float[] memFloatBlock;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte[] memDeserialize;

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x3B83220", Offset = "0x3B83220", VA = "0x3B83220")]
	public static bool TryRegisterType(Type type, byte typeCode, SerializeMethod serializeFunction, DeserializeMethod deserializeFunction)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x3B83480", Offset = "0x3B83480", VA = "0x3B83480")]
	public static bool TryRegisterType(Type type, byte typeCode, SerializeStreamMethod serializeFunction, DeserializeStreamMethod deserializeFunction)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x3B84320", Offset = "0x3B84320", VA = "0x3B84320")]
	[Obsolete]
	public static byte[] Serialize(object obj)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3B846E0", Offset = "0x3B846E0", VA = "0x3B846E0")]
	[Obsolete]
	public static object Deserialize(byte[] serializedData)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x3B848E0", Offset = "0x3B848E0", VA = "0x3B848E0")]
	public static void Serialize(short value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x3B84920", Offset = "0x3B84920", VA = "0x3B84920")]
	public static void Serialize(int value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x3B84990", Offset = "0x3B84990", VA = "0x3B84990")]
	public static void Serialize(float value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3B84BA0", Offset = "0x3B84BA0", VA = "0x3B84BA0")]
	public static void Deserialize(out int value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x3B84C20", Offset = "0x3B84C20", VA = "0x3B84C20")]
	public static void Deserialize(out short value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x3B84C70", Offset = "0x3B84C70", VA = "0x3B84C70")]
	public static void Deserialize(out float value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3B84E80", Offset = "0x3B84E80", VA = "0x3B84E80")]
	public Protocol()
	{
	}
}
