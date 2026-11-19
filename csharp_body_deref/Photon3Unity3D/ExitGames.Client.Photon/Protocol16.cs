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
		[Address(RVA = "0x5669DF0", Offset = "0x5668DF0", VA = "0x5669DF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x5669E20", Offset = "0x5668E20", VA = "0x5669E20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x5669E30", Offset = "0x5668E30", VA = "0x5669E30")]
	private bool SerializeCustom(StreamBuffer dout, object serObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x566A420", Offset = "0x5669420", VA = "0x566A420")]
	private object DeserializeCustom(StreamBuffer din, byte customTypeCode, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x566A720", Offset = "0x5669720", VA = "0x566A720")]
	private Type GetTypeOfCode(byte typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x566A9E0", Offset = "0x56699E0", VA = "0x566A9E0")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x566ACC0", Offset = "0x5669CC0", VA = "0x566ACC0")]
	private Array CreateArrayByType(byte arrayType, short length)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x566ACE0", Offset = "0x5669CE0", VA = "0x566ACE0")]
	public void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x566AD20", Offset = "0x5669D20", VA = "0x566AD20", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x566AFB0", Offset = "0x5669FB0", VA = "0x566AFB0", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x566B250", Offset = "0x566A250", VA = "0x566B250", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x566B450", Offset = "0x566A450", VA = "0x566B450", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x566B510", Offset = "0x566A510", VA = "0x566B510", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x566B790", Offset = "0x566A790", VA = "0x566B790", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x566B8D0", Offset = "0x566A8D0", VA = "0x566B8D0", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x566B930", Offset = "0x566A930", VA = "0x566B930", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x566AD80", Offset = "0x5669D80", VA = "0x566AD80")]
	[Obsolete("Use ParameterDictionary instead of Dictionary<byte, object>.")]
	private void SerializeParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x566B010", Offset = "0x566A010", VA = "0x566B010")]
	private void SerializeParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x566B630", Offset = "0x566A630", VA = "0x566B630")]
	private Dictionary<byte, object> DeserializeParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x566B300", Offset = "0x566A300", VA = "0x566B300")]
	private ParameterDictionary DeserializeParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x566BA50", Offset = "0x566AA50", VA = "0x566BA50", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x566C270", Offset = "0x566B270", VA = "0x566C270")]
	private void SerializeByte(StreamBuffer dout, byte serObject, bool setType)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x566C2B0", Offset = "0x566B2B0", VA = "0x566C2B0")]
	private void SerializeBoolean(StreamBuffer dout, bool serObject, bool setType)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x566D800", Offset = "0x566C800", VA = "0x566D800", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x566A280", Offset = "0x5669280", VA = "0x566A280")]
	public void SerializeLengthAsShort(StreamBuffer dout, int serObject, string type)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x566C2F0", Offset = "0x566B2F0", VA = "0x566C2F0")]
	private void SerializeInteger(StreamBuffer dout, int serObject, bool setType)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x566C430", Offset = "0x566B430", VA = "0x566C430")]
	private void SerializeLong(StreamBuffer dout, long serObject, bool setType)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x566C600", Offset = "0x566B600", VA = "0x566C600")]
	private void SerializeFloat(StreamBuffer dout, float serObject, bool setType)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x566C8C0", Offset = "0x566B8C0", VA = "0x566C8C0")]
	private void SerializeDouble(StreamBuffer dout, double serObject, bool setType)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x566D920", Offset = "0x566C920", VA = "0x566D920", Slot = "8")]
	public override void SerializeString(StreamBuffer stream, string value, bool setType)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x566D0E0", Offset = "0x566C0E0", VA = "0x566D0E0")]
	private void SerializeArray(StreamBuffer dout, Array serObject, bool setType)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x566CCB0", Offset = "0x566BCB0", VA = "0x566CCB0")]
	private void SerializeByteArray(StreamBuffer dout, byte[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x566D780", Offset = "0x566C780", VA = "0x566D780")]
	private void SerializeByteArraySegment(StreamBuffer dout, byte[] serObject, int offset, int count, bool setType)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x566CF50", Offset = "0x566BF50", VA = "0x566CF50")]
	private void SerializeIntArrayOptimized(StreamBuffer inWriter, int[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x566E240", Offset = "0x566D240", VA = "0x566E240")]
	private void SerializeStringArray(StreamBuffer dout, string[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x566CD10", Offset = "0x566BD10", VA = "0x566CD10")]
	private void SerializeObjectArray(StreamBuffer dout, IList objects, bool setType)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x566CA90", Offset = "0x566BA90", VA = "0x566CA90")]
	private void SerializeHashTable(StreamBuffer dout, Hashtable serObject, bool setType)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x566D700", Offset = "0x566C700", VA = "0x566D700")]
	private void SerializeDictionary(StreamBuffer dout, IDictionary serObject, bool setType)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x566E300", Offset = "0x566D300", VA = "0x566E300")]
	private void SerializeDictionaryHeader(StreamBuffer writer, Type dictType)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x566DA90", Offset = "0x566CA90", VA = "0x566DA90")]
	private void SerializeDictionaryHeader(StreamBuffer writer, object dict, out bool setKeyType, out bool setValueType)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x566DD10", Offset = "0x566CD10", VA = "0x566DD10")]
	private void SerializeDictionaryElements(StreamBuffer writer, object dict, bool setKeyType, bool setValueType)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x566E320", Offset = "0x566D320", VA = "0x566E320", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x566FE90", Offset = "0x566EE90", VA = "0x566FE90", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x566F1E0", Offset = "0x566E1E0", VA = "0x566F1E0")]
	private bool DeserializeBoolean(StreamBuffer din)
	{
		return default(bool);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x566FEB0", Offset = "0x566EEB0", VA = "0x566FEB0", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x566E750", Offset = "0x566D750", VA = "0x566E750")]
	private int DeserializeInteger(StreamBuffer din)
	{
		return default(int);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x566F200", Offset = "0x566E200", VA = "0x566F200")]
	private long DeserializeLong(StreamBuffer din)
	{
		return default(long);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x566F3D0", Offset = "0x566E3D0", VA = "0x566F3D0")]
	private float DeserializeFloat(StreamBuffer din)
	{
		return default(float);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x566F510", Offset = "0x566E510", VA = "0x566F510")]
	private double DeserializeDouble(StreamBuffer din)
	{
		return default(double);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x566E880", Offset = "0x566D880", VA = "0x566E880")]
	private string DeserializeString(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x566F6A0", Offset = "0x566E6A0", VA = "0x566F6A0")]
	private Array DeserializeArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x566EA60", Offset = "0x566DA60", VA = "0x566EA60")]
	private byte[] DeserializeByteArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x566EAE0", Offset = "0x566DAE0", VA = "0x566EAE0")]
	private int[] DeserializeIntArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x566E990", Offset = "0x566D990", VA = "0x566E990")]
	private string[] DeserializeStringArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x566FD40", Offset = "0x566ED40", VA = "0x566FD40")]
	private object[] DeserializeObjectArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x566EB90", Offset = "0x566DB90", VA = "0x566EB90")]
	private Hashtable DeserializeHashTable(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x566ECF0", Offset = "0x566DCF0", VA = "0x566ECF0")]
	private IDictionary DeserializeDictionary(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x566FFC0", Offset = "0x566EFC0", VA = "0x566FFC0")]
	private bool DeserializeDictionaryArray(StreamBuffer din, short size, out Array arrayResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x5670290", Offset = "0x566F290", VA = "0x5670290")]
	private Type DeserializeDictionaryType(StreamBuffer reader, out byte keyTypeCode, out byte valTypeCode)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x5669390", Offset = "0x5668390", VA = "0x5669390")]
	public Protocol16()
	{
	}
}
