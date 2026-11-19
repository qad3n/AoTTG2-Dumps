// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.Protocol
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x5668080", Offset = "0x5667080", VA = "0x5668080")]
	public static bool TryRegisterType(Type type, byte typeCode, SerializeMethod serializeFunction, DeserializeMethod deserializeFunction)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x56682F0", Offset = "0x56672F0", VA = "0x56682F0")]
	public static bool TryRegisterType(Type type, byte typeCode, SerializeStreamMethod serializeFunction, DeserializeStreamMethod deserializeFunction)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x5669190", Offset = "0x5668190", VA = "0x5669190")]
	[Obsolete]
	public static byte[] Serialize(object obj)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x5669550", Offset = "0x5668550", VA = "0x5669550")]
	[Obsolete]
	public static object Deserialize(byte[] serializedData)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x5669750", Offset = "0x5668750", VA = "0x5669750")]
	public static void Serialize(short value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x5669790", Offset = "0x5668790", VA = "0x5669790")]
	public static void Serialize(int value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x5669800", Offset = "0x5668800", VA = "0x5669800")]
	public static void Serialize(float value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x56699F0", Offset = "0x56689F0", VA = "0x56699F0")]
	public static void Deserialize(out int value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5669A70", Offset = "0x5668A70", VA = "0x5669A70")]
	public static void Deserialize(out short value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5669AC0", Offset = "0x5668AC0", VA = "0x5669AC0")]
	public static void Deserialize(out float value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x5669C80", Offset = "0x5668C80", VA = "0x5669C80")]
	public Protocol()
	{
	}
}
