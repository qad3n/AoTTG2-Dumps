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
		[Address(RVA = "0x3B84FF0", Offset = "0x3B84FF0", VA = "0x3B84FF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x3B85020", Offset = "0x3B85020", VA = "0x3B85020", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3B85030", Offset = "0x3B85030", VA = "0x3B85030")]
	private bool SerializeCustom(StreamBuffer dout, object serObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3B85680", Offset = "0x3B85680", VA = "0x3B85680")]
	private object DeserializeCustom(StreamBuffer din, byte customTypeCode, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3B859A0", Offset = "0x3B859A0", VA = "0x3B859A0")]
	private Type GetTypeOfCode(byte typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3B85D30", Offset = "0x3B85D30", VA = "0x3B85D30")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3B86010", Offset = "0x3B86010", VA = "0x3B86010")]
	private Array CreateArrayByType(byte arrayType, short length)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3B86030", Offset = "0x3B86030", VA = "0x3B86030")]
	public void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3B86070", Offset = "0x3B86070", VA = "0x3B86070", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3B86340", Offset = "0x3B86340", VA = "0x3B86340", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3B865F0", Offset = "0x3B865F0", VA = "0x3B865F0", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3B867F0", Offset = "0x3B867F0", VA = "0x3B867F0", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3B868B0", Offset = "0x3B868B0", VA = "0x3B868B0", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3B86B30", Offset = "0x3B86B30", VA = "0x3B86B30", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3B86C70", Offset = "0x3B86C70", VA = "0x3B86C70", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3B86CD0", Offset = "0x3B86CD0", VA = "0x3B86CD0", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3B860D0", Offset = "0x3B860D0", VA = "0x3B860D0")]
	[Obsolete("Use ParameterDictionary instead of Dictionary<byte, object>.")]
	private void SerializeParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3B863A0", Offset = "0x3B863A0", VA = "0x3B863A0")]
	private void SerializeParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x3B869D0", Offset = "0x3B869D0", VA = "0x3B869D0")]
	private Dictionary<byte, object> DeserializeParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3B866A0", Offset = "0x3B866A0", VA = "0x3B866A0")]
	private ParameterDictionary DeserializeParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3B86DF0", Offset = "0x3B86DF0", VA = "0x3B86DF0", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3B87720", Offset = "0x3B87720", VA = "0x3B87720")]
	private void SerializeByte(StreamBuffer dout, byte serObject, bool setType)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3B87760", Offset = "0x3B87760", VA = "0x3B87760")]
	private void SerializeBoolean(StreamBuffer dout, bool serObject, bool setType)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3B88E60", Offset = "0x3B88E60", VA = "0x3B88E60", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3B854C0", Offset = "0x3B854C0", VA = "0x3B854C0")]
	public void SerializeLengthAsShort(StreamBuffer dout, int serObject, string type)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3B877A0", Offset = "0x3B877A0", VA = "0x3B877A0")]
	private void SerializeInteger(StreamBuffer dout, int serObject, bool setType)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3B87920", Offset = "0x3B87920", VA = "0x3B87920")]
	private void SerializeLong(StreamBuffer dout, long serObject, bool setType)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3B87B40", Offset = "0x3B87B40", VA = "0x3B87B40")]
	private void SerializeFloat(StreamBuffer dout, float serObject, bool setType)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3B87E80", Offset = "0x3B87E80", VA = "0x3B87E80")]
	private void SerializeDouble(StreamBuffer dout, double serObject, bool setType)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x3B88FA0", Offset = "0x3B88FA0", VA = "0x3B88FA0", Slot = "8")]
	public override void SerializeString(StreamBuffer stream, string value, bool setType)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x3B88710", Offset = "0x3B88710", VA = "0x3B88710")]
	private void SerializeArray(StreamBuffer dout, Array serObject, bool setType)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3B882E0", Offset = "0x3B882E0", VA = "0x3B882E0")]
	private void SerializeByteArray(StreamBuffer dout, byte[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x3B88DE0", Offset = "0x3B88DE0", VA = "0x3B88DE0")]
	private void SerializeByteArraySegment(StreamBuffer dout, byte[] serObject, int offset, int count, bool setType)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3B88580", Offset = "0x3B88580", VA = "0x3B88580")]
	private void SerializeIntArrayOptimized(StreamBuffer inWriter, int[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3B89AE0", Offset = "0x3B89AE0", VA = "0x3B89AE0")]
	private void SerializeStringArray(StreamBuffer dout, string[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x3B88340", Offset = "0x3B88340", VA = "0x3B88340")]
	private void SerializeObjectArray(StreamBuffer dout, IList objects, bool setType)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x3B880A0", Offset = "0x3B880A0", VA = "0x3B880A0")]
	private void SerializeHashTable(StreamBuffer dout, Hashtable serObject, bool setType)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x3B88D60", Offset = "0x3B88D60", VA = "0x3B88D60")]
	private void SerializeDictionary(StreamBuffer dout, IDictionary serObject, bool setType)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x3B89BA0", Offset = "0x3B89BA0", VA = "0x3B89BA0")]
	private void SerializeDictionaryHeader(StreamBuffer writer, Type dictType)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x3B89120", Offset = "0x3B89120", VA = "0x3B89120")]
	private void SerializeDictionaryHeader(StreamBuffer writer, object dict, out bool setKeyType, out bool setValueType)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x3B89390", Offset = "0x3B89390", VA = "0x3B89390")]
	private void SerializeDictionaryElements(StreamBuffer writer, object dict, bool setKeyType, bool setValueType)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x3B89BC0", Offset = "0x3B89BC0", VA = "0x3B89BC0", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x3B8B900", Offset = "0x3B8B900", VA = "0x3B8B900", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x3B8AB50", Offset = "0x3B8AB50", VA = "0x3B8AB50")]
	private bool DeserializeBoolean(StreamBuffer din)
	{
		return default(bool);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x3B8B920", Offset = "0x3B8B920", VA = "0x3B8B920", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x3B8A060", Offset = "0x3B8A060", VA = "0x3B8A060")]
	private int DeserializeInteger(StreamBuffer din)
	{
		return default(int);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x3B8AB70", Offset = "0x3B8AB70", VA = "0x3B8AB70")]
	private long DeserializeLong(StreamBuffer din)
	{
		return default(long);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3B8ADA0", Offset = "0x3B8ADA0", VA = "0x3B8ADA0")]
	private float DeserializeFloat(StreamBuffer din)
	{
		return default(float);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3B8AF30", Offset = "0x3B8AF30", VA = "0x3B8AF30")]
	private double DeserializeDouble(StreamBuffer din)
	{
		return default(double);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x3B8A200", Offset = "0x3B8A200", VA = "0x3B8A200")]
	private string DeserializeString(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3B8B120", Offset = "0x3B8B120", VA = "0x3B8B120")]
	private Array DeserializeArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3B8A3E0", Offset = "0x3B8A3E0", VA = "0x3B8A3E0")]
	private byte[] DeserializeByteArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3B8A460", Offset = "0x3B8A460", VA = "0x3B8A460")]
	private int[] DeserializeIntArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x3B8A310", Offset = "0x3B8A310", VA = "0x3B8A310")]
	private string[] DeserializeStringArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x3B8B7B0", Offset = "0x3B8B7B0", VA = "0x3B8B7B0")]
	private object[] DeserializeObjectArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x3B8A520", Offset = "0x3B8A520", VA = "0x3B8A520")]
	private Hashtable DeserializeHashTable(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x3B8A690", Offset = "0x3B8A690", VA = "0x3B8A690")]
	private IDictionary DeserializeDictionary(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3B8BA60", Offset = "0x3B8BA60", VA = "0x3B8BA60")]
	private bool DeserializeDictionaryArray(StreamBuffer din, short size, out Array arrayResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3B8BE00", Offset = "0x3B8BE00", VA = "0x3B8BE00")]
	private Type DeserializeDictionaryType(StreamBuffer reader, out byte keyTypeCode, out byte valTypeCode)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x3B84520", Offset = "0x3B84520", VA = "0x3B84520")]
	public Protocol16()
	{
	}
}
