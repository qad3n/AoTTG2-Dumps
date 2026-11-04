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
		[Address(RVA = "0x1CDBAA0", Offset = "0x1CDA0A0", VA = "0x181CDBAA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x1CD8760", Offset = "0x1CD6D60", VA = "0x181CD8760")]
	private bool SerializeCustom(StreamBuffer dout, object serObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x1CD4EF0", Offset = "0x1CD34F0", VA = "0x181CD4EF0")]
	private object DeserializeCustom(StreamBuffer din, byte customTypeCode, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x1CD7A90", Offset = "0x1CD6090", VA = "0x181CD7A90")]
	private Type GetTypeOfCode(byte typeCode)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x1CD7730", Offset = "0x1CD5D30", VA = "0x181CD7730")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x1CD4640", Offset = "0x1CD2C40", VA = "0x181CD4640")]
	private Array CreateArrayByType(byte arrayType, short length)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x1CDA4E0", Offset = "0x1CD8AE0", VA = "0x181CDA4E0")]
	public void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x1CDA480", Offset = "0x1CD8A80", VA = "0x181CDA480", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x1CDA420", Offset = "0x1CD8A20", VA = "0x181CDA420", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x1CD6750", Offset = "0x1CD4D50", VA = "0x181CD6750", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x1CDA520", Offset = "0x1CD8B20", VA = "0x181CDA520", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x1CD5A90", Offset = "0x1CD4090", VA = "0x181CD5A90", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x1CD6800", Offset = "0x1CD4E00", VA = "0x181CD6800", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x1CD9570", Offset = "0x1CD7B70", VA = "0x181CD9570", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x1CD5EF0", Offset = "0x1CD44F0", VA = "0x181CD5EF0", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x1CDA7E0", Offset = "0x1CD8DE0", VA = "0x181CDA7E0")]
	[Obsolete("Use ParameterDictionary instead of Dictionary<byte, object>.")]
	private void SerializeParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x1CDA600", Offset = "0x1CD8C00", VA = "0x181CDA600")]
	private void SerializeParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x1CD6A60", Offset = "0x1CD5060", VA = "0x181CD6A60")]
	private Dictionary<byte, object> DeserializeParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x1CD6950", Offset = "0x1CD4F50", VA = "0x181CD6950")]
	private ParameterDictionary DeserializeParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x1CDADB0", Offset = "0x1CD93B0", VA = "0x181CDADB0", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x1CD8710", Offset = "0x1CD6D10", VA = "0x181CD8710")]
	private void SerializeByte(StreamBuffer dout, byte serObject, bool setType)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x1CD8580", Offset = "0x1CD6B80", VA = "0x181CD8580")]
	private void SerializeBoolean(StreamBuffer dout, bool serObject, bool setType)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x1CDAA00", Offset = "0x1CD9000", VA = "0x181CDAA00", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x1CD9E20", Offset = "0x1CD8420", VA = "0x181CD9E20")]
	public void SerializeLengthAsShort(StreamBuffer dout, int serObject, string type)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x1CD9CB0", Offset = "0x1CD82B0", VA = "0x181CD9CB0")]
	private void SerializeInteger(StreamBuffer dout, int serObject, bool setType)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x1CD9FB0", Offset = "0x1CD85B0", VA = "0x181CD9FB0")]
	private void SerializeLong(StreamBuffer dout, long serObject, bool setType)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x1CD95E0", Offset = "0x1CD7BE0", VA = "0x181CD95E0")]
	private void SerializeFloat(StreamBuffer dout, float serObject, bool setType)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x1CD92E0", Offset = "0x1CD78E0", VA = "0x181CD92E0")]
	private void SerializeDouble(StreamBuffer dout, double serObject, bool setType)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x1CDAC00", Offset = "0x1CD9200", VA = "0x181CDAC00", Slot = "8")]
	public override void SerializeString(StreamBuffer stream, string value, bool setType)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x1CD7F20", Offset = "0x1CD6520", VA = "0x181CD7F20")]
	private void SerializeArray(StreamBuffer dout, Array serObject, bool setType)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x1CD8680", Offset = "0x1CD6C80", VA = "0x181CD8680")]
	private void SerializeByteArray(StreamBuffer dout, byte[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x1CD85D0", Offset = "0x1CD6BD0", VA = "0x181CD85D0")]
	private void SerializeByteArraySegment(StreamBuffer dout, byte[] serObject, int offset, int count, bool setType)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x1CD9B10", Offset = "0x1CD8110", VA = "0x181CD9B10")]
	private void SerializeIntArrayOptimized(StreamBuffer inWriter, int[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x1CDAB40", Offset = "0x1CD9140", VA = "0x181CDAB40")]
	private void SerializeStringArray(StreamBuffer dout, string[] serObject, bool setType)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x1CDA230", Offset = "0x1CD8830", VA = "0x181CDA230")]
	private void SerializeObjectArray(StreamBuffer dout, IList objects, bool setType)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x1CD9920", Offset = "0x1CD7F20", VA = "0x181CD9920")]
	private void SerializeHashTable(StreamBuffer dout, Hashtable serObject, bool setType)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x1CD9240", Offset = "0x1CD7840", VA = "0x181CD9240")]
	private void SerializeDictionary(StreamBuffer dout, IDictionary serObject, bool setType)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x1CD8F00", Offset = "0x1CD7500", VA = "0x181CD8F00")]
	private void SerializeDictionaryHeader(StreamBuffer writer, Type dictType)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x1CD8F30", Offset = "0x1CD7530", VA = "0x181CD8F30")]
	private void SerializeDictionaryHeader(StreamBuffer writer, object dict, out bool setKeyType, out bool setValueType)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x1CD8BE0", Offset = "0x1CD71E0", VA = "0x181CD8BE0")]
	private void SerializeDictionaryElements(StreamBuffer writer, object dict, bool setKeyType, bool setValueType)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x1CD6E90", Offset = "0x1CD5490", VA = "0x181CD6E90", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x1CD4ED0", Offset = "0x1CD34D0", VA = "0x181CD4ED0", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x1CD4E00", Offset = "0x1CD3400", VA = "0x181CD4E00")]
	private bool DeserializeBoolean(StreamBuffer din)
	{
		return default(bool);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x1CD6B90", Offset = "0x1CD5190", VA = "0x181CD6B90", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x1CD6340", Offset = "0x1CD4940", VA = "0x181CD6340")]
	private int DeserializeInteger(StreamBuffer din)
	{
		return default(int);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x1CD6470", Offset = "0x1CD4A70", VA = "0x181CD6470")]
	private long DeserializeLong(StreamBuffer din)
	{
		return default(long);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x1CD5FD0", Offset = "0x1CD45D0", VA = "0x181CD5FD0")]
	private float DeserializeFloat(StreamBuffer din)
	{
		return default(float);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x1CD5CB0", Offset = "0x1CD42B0", VA = "0x181CD5CB0")]
	private double DeserializeDouble(StreamBuffer din)
	{
		return default(double);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x1CD6D70", Offset = "0x1CD5370", VA = "0x181CD6D70")]
	private string DeserializeString(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x1CD4670", Offset = "0x1CD2C70", VA = "0x181CD4670")]
	private Array DeserializeArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x1CD4E30", Offset = "0x1CD3430", VA = "0x181CD4E30")]
	private byte[] DeserializeByteArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x1CD62A0", Offset = "0x1CD48A0", VA = "0x181CD62A0")]
	private int[] DeserializeIntArray(StreamBuffer din, int size = -1)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x1CD6CA0", Offset = "0x1CD52A0", VA = "0x181CD6CA0")]
	private string[] DeserializeStringArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x1CD6620", Offset = "0x1CD4C20", VA = "0x181CD6620")]
	private object[] DeserializeObjectArray(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x1CD6170", Offset = "0x1CD4770", VA = "0x181CD6170")]
	private Hashtable DeserializeHashTable(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x1CD56D0", Offset = "0x1CD3CD0", VA = "0x181CD56D0")]
	private IDictionary DeserializeDictionary(StreamBuffer din)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x1CD51E0", Offset = "0x1CD37E0", VA = "0x181CD51E0")]
	private bool DeserializeDictionaryArray(StreamBuffer din, short size, out Array arrayResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x1CD5420", Offset = "0x1CD3A20", VA = "0x181CD5420")]
	private Type DeserializeDictionaryType(StreamBuffer reader, out byte keyTypeCode, out byte valTypeCode)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x1CDB8D0", Offset = "0x1CD9ED0", VA = "0x181CDB8D0")]
	public Protocol16()
	{
	}
}
