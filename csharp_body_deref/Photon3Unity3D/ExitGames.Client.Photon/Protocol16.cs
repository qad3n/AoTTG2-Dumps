// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.Protocol16
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000037")]
public class Protocol16 : IProtocol
{
	[Token(Token = "0x2000038")]
	public enum GpType : byte
	{
		[Token(Token = "0x400019D")]
		Unknown = 0,
		[Token(Token = "0x400019E")]
		Array = 121,
		[Token(Token = "0x400019F")]
		Boolean = 111,
		[Token(Token = "0x40001A0")]
		Byte = 98,
		[Token(Token = "0x40001A1")]
		ByteArray = 120,
		[Token(Token = "0x40001A2")]
		ObjectArray = 122,
		[Token(Token = "0x40001A3")]
		Short = 107,
		[Token(Token = "0x40001A4")]
		Float = 102,
		[Token(Token = "0x40001A5")]
		Dictionary = 68,
		[Token(Token = "0x40001A6")]
		Double = 100,
		[Token(Token = "0x40001A7")]
		Hashtable = 104,
		[Token(Token = "0x40001A8")]
		Integer = 105,
		[Token(Token = "0x40001A9")]
		IntegerArray = 110,
		[Token(Token = "0x40001AA")]
		Long = 108,
		[Token(Token = "0x40001AB")]
		String = 115,
		[Token(Token = "0x40001AC")]
		StringArray = 97,
		[Token(Token = "0x40001AD")]
		Custom = 99,
		[Token(Token = "0x40001AE")]
		Null = 42,
		[Token(Token = "0x40001AF")]
		EventData = 101,
		[Token(Token = "0x40001B0")]
		OperationRequest = 113,
		[Token(Token = "0x40001B1")]
		OperationResponse = 112
	}

	[Token(Token = "0x4000190")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly byte[] versionBytes;

	[Token(Token = "0x4000191")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly byte[] memShort;

	[Token(Token = "0x4000192")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly long[] memLongBlock;

	[Token(Token = "0x4000193")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly byte[] memLongBlockBytes;

	[Token(Token = "0x4000194")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly float[] memFloatBlock;

	[Token(Token = "0x4000195")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly byte[] memFloatBlockBytes;

	[Token(Token = "0x4000196")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly double[] memDoubleBlock;

	[Token(Token = "0x4000197")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly byte[] memDoubleBlockBytes;

	[Token(Token = "0x4000198")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly byte[] memInteger;

	[Token(Token = "0x4000199")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly byte[] memLong;

	[Token(Token = "0x400019A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly byte[] memFloat;

	[Token(Token = "0x400019B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly byte[] memDouble;

	[Token(Token = "0x1700008E")]
	public override string ProtocolType
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x3E7A940", Offset = "0x3E7A940", VA = "0x3E7A940", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x3E7A970", Offset = "0x3E7A970", VA = "0x3E7A970", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3E7A980", Offset = "0x3E7A980", VA = "0x3E7A980")]
	private bool SerializeCustom(StreamBuffer dout, object serObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3E7AFD0", Offset = "0x3E7AFD0", VA = "0x3E7AFD0")]
	private object DeserializeCustom(StreamBuffer din, byte customTypeCode, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3E7B2F0", Offset = "0x3E7B2F0", VA = "0x3E7B2F0")]
	private Type GetTypeOfCode(byte typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3E7B680", Offset = "0x3E7B680", VA = "0x3E7B680")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3E7B960", Offset = "0x3E7B960", VA = "0x3E7B960")]
	private Array CreateArrayByType(byte arrayType, short length)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3E7B980", Offset = "0x3E7B980", VA = "0x3E7B980")]
	public void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3E7B9C0", Offset = "0x3E7B9C0", VA = "0x3E7B9C0", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3E7BC90", Offset = "0x3E7BC90", VA = "0x3E7BC90", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3E7BF40", Offset = "0x3E7BF40", VA = "0x3E7BF40", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3E7C140", Offset = "0x3E7C140", VA = "0x3E7C140", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3E7C200", Offset = "0x3E7C200", VA = "0x3E7C200", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3E7C480", Offset = "0x3E7C480", VA = "0x3E7C480", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3E7C5C0", Offset = "0x3E7C5C0", VA = "0x3E7C5C0", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3E7C620", Offset = "0x3E7C620", VA = "0x3E7C620", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3E7BA20", Offset = "0x3E7BA20", VA = "0x3E7BA20")]
	[Obsolete("Use ParameterDictionary instead of Dictionary<byte, object>.")]
	private void SerializeParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3E7BCF0", Offset = "0x3E7BCF0", VA = "0x3E7BCF0")]
	private void SerializeParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x3E7C320", Offset = "0x3E7C320", VA = "0x3E7C320")]
	private Dictionary<byte, object> DeserializeParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3E7BFF0", Offset = "0x3E7BFF0", VA = "0x3E7BFF0")]
	private ParameterDictionary DeserializeParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3E7C740", Offset = "0x3E7C740", VA = "0x3E7C740", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3E7D070", Offset = "0x3E7D070", VA = "0x3E7D070")]
	private void SerializeByte(StreamBuffer dout, byte serObject, bool setType)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3E7D0B0", Offset = "0x3E7D0B0", VA = "0x3E7D0B0")]
	private void SerializeBoolean(StreamBuffer dout, bool serObject, bool setType)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3E7E7B0", Offset = "0x3E7E7B0", VA = "0x3E7E7B0", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3E7AE10", Offset = "0x3E7AE10", VA = "0x3E7AE10")]
	public void SerializeLengthAsShort(StreamBuffer dout, int serObject, string type)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3E7D0F0", Offset = "0x3E7D0F0", VA = "0x3E7D0F0")]
	private void SerializeInteger(StreamBuffer dout, int serObject, bool setType)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3E7D270", Offset = "0x3E7D270", VA = "0x3E7D270")]
	private void SerializeLong(StreamBuffer dout, long serObject, bool setType)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3E7D490", Offset = "0x3E7D490", VA = "0x3E7D490")]
	private void SerializeFloat(StreamBuffer dout, float serObject, bool setType)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3E7D7D0", Offset = "0x3E7D7D0", VA = "0x3E7D7D0")]
	private void SerializeDouble(StreamBuffer dout, double serObject, bool setType)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x3E7E8F0", Offset = "0x3E7E8F0", VA = "0x3E7E8F0", Slot = "8")]
	public override void SerializeString(StreamBuffer stream, string value, bool setType)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x3E7E060", Offset = "0x3E7E060", VA = "0x3E7E060")]
	private void SerializeArray(StreamBuffer dout, Array serObject, bool setType)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3E7DC30", Offset = "0x3E7DC30", VA = "0x3E7DC30")]
	private void SerializeByteArray(StreamBuffer dout, byte[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x3E7E730", Offset = "0x3E7E730", VA = "0x3E7E730")]
	private void SerializeByteArraySegment(StreamBuffer dout, byte[] serObject, int offset, int count, bool setType)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3E7DED0", Offset = "0x3E7DED0", VA = "0x3E7DED0")]
	private void SerializeIntArrayOptimized(StreamBuffer inWriter, int[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3E7F430", Offset = "0x3E7F430", VA = "0x3E7F430")]
	private void SerializeStringArray(StreamBuffer dout, string[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x3E7DC90", Offset = "0x3E7DC90", VA = "0x3E7DC90")]
	private void SerializeObjectArray(StreamBuffer dout, IList objects, bool setType)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x3E7D9F0", Offset = "0x3E7D9F0", VA = "0x3E7D9F0")]
	private void SerializeHashTable(StreamBuffer dout, Hashtable serObject, bool setType)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x3E7E6B0", Offset = "0x3E7E6B0", VA = "0x3E7E6B0")]
	private void SerializeDictionary(StreamBuffer dout, IDictionary serObject, bool setType)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x3E7F4F0", Offset = "0x3E7F4F0", VA = "0x3E7F4F0")]
	private void SerializeDictionaryHeader(StreamBuffer writer, Type dictType)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x3E7EA70", Offset = "0x3E7EA70", VA = "0x3E7EA70")]
	private void SerializeDictionaryHeader(StreamBuffer writer, object dict, out bool setKeyType, out bool setValueType)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x3E7ECE0", Offset = "0x3E7ECE0", VA = "0x3E7ECE0")]
	private void SerializeDictionaryElements(StreamBuffer writer, object dict, bool setKeyType, bool setValueType)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x3E7F510", Offset = "0x3E7F510", VA = "0x3E7F510", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x3E81250", Offset = "0x3E81250", VA = "0x3E81250", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x3E804A0", Offset = "0x3E804A0", VA = "0x3E804A0")]
	private bool DeserializeBoolean(StreamBuffer din)
	{
		return default(bool);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x3E81270", Offset = "0x3E81270", VA = "0x3E81270", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x3E7F9B0", Offset = "0x3E7F9B0", VA = "0x3E7F9B0")]
	private int DeserializeInteger(StreamBuffer din)
	{
		return default(int);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x3E804C0", Offset = "0x3E804C0", VA = "0x3E804C0")]
	private long DeserializeLong(StreamBuffer din)
	{
		return default(long);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3E806F0", Offset = "0x3E806F0", VA = "0x3E806F0")]
	private float DeserializeFloat(StreamBuffer din)
	{
		return default(float);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3E80880", Offset = "0x3E80880", VA = "0x3E80880")]
	private double DeserializeDouble(StreamBuffer din)
	{
		return default(double);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x3E7FB50", Offset = "0x3E7FB50", VA = "0x3E7FB50")]
	private string DeserializeString(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3E80A70", Offset = "0x3E80A70", VA = "0x3E80A70")]
	private Array DeserializeArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3E7FD30", Offset = "0x3E7FD30", VA = "0x3E7FD30")]
	private byte[] DeserializeByteArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3E7FDB0", Offset = "0x3E7FDB0", VA = "0x3E7FDB0")]
	private int[] DeserializeIntArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x3E7FC60", Offset = "0x3E7FC60", VA = "0x3E7FC60")]
	private string[] DeserializeStringArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x3E81100", Offset = "0x3E81100", VA = "0x3E81100")]
	private object[] DeserializeObjectArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x3E7FE70", Offset = "0x3E7FE70", VA = "0x3E7FE70")]
	private Hashtable DeserializeHashTable(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x3E7FFE0", Offset = "0x3E7FFE0", VA = "0x3E7FFE0")]
	private IDictionary DeserializeDictionary(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3E813B0", Offset = "0x3E813B0", VA = "0x3E813B0")]
	private bool DeserializeDictionaryArray(StreamBuffer din, short size, out Array arrayResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3E81750", Offset = "0x3E81750", VA = "0x3E81750")]
	private Type DeserializeDictionaryType(StreamBuffer reader, out byte keyTypeCode, out byte valTypeCode)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x3E79E70", Offset = "0x3E79E70", VA = "0x3E79E70")]
	public Protocol16()
	{
	}
}
