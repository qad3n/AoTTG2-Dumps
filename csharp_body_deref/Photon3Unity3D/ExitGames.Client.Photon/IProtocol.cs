// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.IProtocol
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000016")]
public abstract class IProtocol
{
	[Token(Token = "0x2000017")]
	public enum DeserializationFlags
	{
		[Token(Token = "0x4000082")]
		None,
		[Token(Token = "0x4000083")]
		AllowPooledByteArray,
		[Token(Token = "0x4000084")]
		WrapIncomingStructs
	}

	[Token(Token = "0x4000080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly ByteArraySlicePool ByteArraySlicePool;

	[Token(Token = "0x17000027")]
	public abstract string ProtocolType
	{
		[Token(Token = "0x60000B5")]
		get;
	}

	[Token(Token = "0x17000028")]
	public abstract byte[] VersionBytes
	{
		[Token(Token = "0x60000B6")]
		get;
	}

	[Token(Token = "0x60000B7")]
	public abstract void Serialize(StreamBuffer dout, object serObject, bool setType);

	[Token(Token = "0x60000B8")]
	public abstract void SerializeShort(StreamBuffer dout, short serObject, bool setType);

	[Token(Token = "0x60000B9")]
	public abstract void SerializeString(StreamBuffer dout, string serObject, bool setType);

	[Token(Token = "0x60000BA")]
	public abstract void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType);

	[Token(Token = "0x60000BB")]
	[Obsolete("Use ParameterDictionary instead.")]
	public abstract void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType);

	[Token(Token = "0x60000BC")]
	public abstract void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType);

	[Token(Token = "0x60000BD")]
	public abstract void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType);

	[Token(Token = "0x60000BE")]
	public abstract object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None);

	[Token(Token = "0x60000BF")]
	public abstract short DeserializeShort(StreamBuffer din);

	[Token(Token = "0x60000C0")]
	public abstract byte DeserializeByte(StreamBuffer din);

	[Token(Token = "0x60000C1")]
	public abstract EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None);

	[Token(Token = "0x60000C2")]
	public abstract OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags = DeserializationFlags.None);

	[Token(Token = "0x60000C3")]
	public abstract OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None);

	[Token(Token = "0x60000C4")]
	public abstract DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream);

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x3E6C7D0", Offset = "0x3E6C7D0", VA = "0x3E6C7D0")]
	public byte[] Serialize(object obj)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3E6C850", Offset = "0x3E6C850", VA = "0x3E6C850")]
	public object Deserialize(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3E6C8A0", Offset = "0x3E6C8A0", VA = "0x3E6C8A0")]
	public object Deserialize(byte[] serializedData)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3E6C920", Offset = "0x3E6C920", VA = "0x3E6C920")]
	public object DeserializeMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3E6C970", Offset = "0x3E6C970", VA = "0x3E6C970")]
	internal void SerializeMessage(StreamBuffer ms, object msg)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3E6C990", Offset = "0x3E6C990", VA = "0x3E6C990")]
	protected IProtocol()
	{
	}
}
