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
	[Address(RVA = "0x1CE7A20", Offset = "0x1CE6020", VA = "0x181CE7A20")]
	public static bool TryRegisterType(Type type, byte typeCode, SerializeMethod serializeFunction, DeserializeMethod deserializeFunction)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x1CE7C10", Offset = "0x1CE6210", VA = "0x181CE7C10")]
	public static bool TryRegisterType(Type type, byte typeCode, SerializeStreamMethod serializeFunction, DeserializeStreamMethod deserializeFunction)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x1CE77D0", Offset = "0x1CE5DD0", VA = "0x181CE77D0")]
	[Obsolete]
	public static byte[] Serialize(object obj)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x1CE7380", Offset = "0x1CE5980", VA = "0x181CE7380")]
	[Obsolete]
	public static object Deserialize(byte[] serializedData)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x1CE7780", Offset = "0x1CE5D80", VA = "0x181CE7780")]
	public static void Serialize(short value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x1CE79A0", Offset = "0x1CE5FA0", VA = "0x181CE79A0")]
	public static void Serialize(int value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x1CE7550", Offset = "0x1CE5B50", VA = "0x181CE7550")]
	public static void Serialize(float value, byte[] target, ref int targetOffset)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x1CE72E0", Offset = "0x1CE58E0", VA = "0x181CE72E0")]
	public static void Deserialize(out int value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x1CE7070", Offset = "0x1CE5670", VA = "0x181CE7070")]
	public static void Deserialize(out short value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x1CE70D0", Offset = "0x1CE56D0", VA = "0x181CE70D0")]
	public static void Deserialize(out float value, byte[] source, ref int offset)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Protocol()
	{
	}
}
