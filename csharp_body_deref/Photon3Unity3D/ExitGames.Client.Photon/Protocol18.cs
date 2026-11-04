// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.Protocol18
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon.StructWrapping;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200003A")]
public class Protocol18 : IProtocol
{
	[Token(Token = "0x200003B")]
	public enum GpType : byte
	{
		[Token(Token = "0x40001BA")]
		Unknown = 0,
		[Token(Token = "0x40001BB")]
		Boolean = 2,
		[Token(Token = "0x40001BC")]
		Byte = 3,
		[Token(Token = "0x40001BD")]
		Short = 4,
		[Token(Token = "0x40001BE")]
		Float = 5,
		[Token(Token = "0x40001BF")]
		Double = 6,
		[Token(Token = "0x40001C0")]
		String = 7,
		[Token(Token = "0x40001C1")]
		Null = 8,
		[Token(Token = "0x40001C2")]
		CompressedInt = 9,
		[Token(Token = "0x40001C3")]
		CompressedLong = 10,
		[Token(Token = "0x40001C4")]
		Int1 = 11,
		[Token(Token = "0x40001C5")]
		Int1_ = 12,
		[Token(Token = "0x40001C6")]
		Int2 = 13,
		[Token(Token = "0x40001C7")]
		Int2_ = 14,
		[Token(Token = "0x40001C8")]
		L1 = 15,
		[Token(Token = "0x40001C9")]
		L1_ = 16,
		[Token(Token = "0x40001CA")]
		L2 = 17,
		[Token(Token = "0x40001CB")]
		L2_ = 18,
		[Token(Token = "0x40001CC")]
		Custom = 19,
		[Token(Token = "0x40001CD")]
		CustomTypeSlim = 128,
		[Token(Token = "0x40001CE")]
		Dictionary = 20,
		[Token(Token = "0x40001CF")]
		Hashtable = 21,
		[Token(Token = "0x40001D0")]
		ObjectArray = 23,
		[Token(Token = "0x40001D1")]
		OperationRequest = 24,
		[Token(Token = "0x40001D2")]
		OperationResponse = 25,
		[Token(Token = "0x40001D3")]
		EventData = 26,
		[Token(Token = "0x40001D4")]
		BooleanFalse = 27,
		[Token(Token = "0x40001D5")]
		BooleanTrue = 28,
		[Token(Token = "0x40001D6")]
		ShortZero = 29,
		[Token(Token = "0x40001D7")]
		IntZero = 30,
		[Token(Token = "0x40001D8")]
		LongZero = 31,
		[Token(Token = "0x40001D9")]
		FloatZero = 32,
		[Token(Token = "0x40001DA")]
		DoubleZero = 33,
		[Token(Token = "0x40001DB")]
		ByteZero = 34,
		[Token(Token = "0x40001DC")]
		Array = 64,
		[Token(Token = "0x40001DD")]
		BooleanArray = 66,
		[Token(Token = "0x40001DE")]
		ByteArray = 67,
		[Token(Token = "0x40001DF")]
		ShortArray = 68,
		[Token(Token = "0x40001E0")]
		DoubleArray = 70,
		[Token(Token = "0x40001E1")]
		FloatArray = 69,
		[Token(Token = "0x40001E2")]
		StringArray = 71,
		[Token(Token = "0x40001E3")]
		HashtableArray = 85,
		[Token(Token = "0x40001E4")]
		DictionaryArray = 84,
		[Token(Token = "0x40001E5")]
		CustomTypeArray = 83,
		[Token(Token = "0x40001E6")]
		CompressedIntArray = 73,
		[Token(Token = "0x40001E7")]
		CompressedLongArray = 74
	}

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly byte[] versionBytes;

	[Token(Token = "0x40001B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly byte[] boolMasks;

	[Token(Token = "0x40001B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly double[] memDoubleBlock;

	[Token(Token = "0x40001B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float[] memFloatBlock;

	[Token(Token = "0x40001B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly byte[] memCustomTypeBodyLengthSerialized;

	[Token(Token = "0x40001B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly byte[] memCompressedUInt32;

	[Token(Token = "0x40001B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] memCompressedUInt64;

	[Token(Token = "0x17000090")]
	public override string ProtocolType
	{
		[Token(Token = "0x600023A")]
		[Address(RVA = "0x1CE7040", Offset = "0x1CE5640", VA = "0x181CE7040", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x1CE19D0", Offset = "0x1CDFFD0", VA = "0x181CE19D0", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x1CE1950", Offset = "0x1CDFF50", VA = "0x181CE1950", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x1CE19C0", Offset = "0x1CDFFC0", VA = "0x181CE19C0", Slot = "8")]
	public override void SerializeString(StreamBuffer dout, string serObject, bool setType)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x1CDC240", Offset = "0x1CDA840", VA = "0x181CDC240", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x1CDC1D0", Offset = "0x1CDA7D0", VA = "0x181CDC1D0", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x1CD4ED0", Offset = "0x1CD34D0", VA = "0x181CD4ED0", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x1CDC290", Offset = "0x1CDA890", VA = "0x181CDC290")]
	private static Type GetAllowedDictionaryKeyTypes(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x1CDC400", Offset = "0x1CDAA00", VA = "0x181CDC400")]
	private static Type GetClrArrayType(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x1CDC8D0", Offset = "0x1CDAED0", VA = "0x181CDC8D0")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x1CDC850", Offset = "0x1CDAE50", VA = "0x181CDC850")]
	private GpType GetCodeOfTypeCode(TypeCode type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x1CE16E0", Offset = "0x1CDFCE0", VA = "0x181CE16E0")]
	private object Read(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x1CE0310", Offset = "0x1CDE910", VA = "0x181CE0310")]
	private object Read(StreamBuffer stream, byte gpType, [Optional][DefaultParameterValue(0)] DeserializationFlags flags, [Optional] ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x1CD4E00", Offset = "0x1CD3400", VA = "0x181CD4E00")]
	internal bool ReadBoolean(StreamBuffer stream)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x1CD4ED0", Offset = "0x1CD34D0", VA = "0x181CD4ED0")]
	internal byte ReadByte(StreamBuffer stream)
	{
		return default(byte);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x1CDC1D0", Offset = "0x1CDA7D0", VA = "0x181CDC1D0")]
	internal short ReadInt16(StreamBuffer stream)
	{
		return default(short);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x1CDC1D0", Offset = "0x1CDA7D0", VA = "0x181CDC1D0")]
	internal ushort ReadUShort(StreamBuffer stream)
	{
		return default(ushort);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x1CDF650", Offset = "0x1CDDC50", VA = "0x181CDF650")]
	internal int ReadInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x1CDF700", Offset = "0x1CDDD00", VA = "0x181CDF700")]
	internal long ReadInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x1CDFEB0", Offset = "0x1CDE4B0", VA = "0x181CDFEB0")]
	internal float ReadSingle(StreamBuffer stream)
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x1CDF110", Offset = "0x1CDD710", VA = "0x181CDF110")]
	internal double ReadDouble(StreamBuffer stream)
	{
		return default(double);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x1CDF9D0", Offset = "0x1CDDFD0", VA = "0x181CDF9D0")]
	internal ByteArraySlice ReadNonAllocByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x1CDD510", Offset = "0x1CDBB10", VA = "0x181CDD510")]
	internal byte[] ReadByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x1CDE120", Offset = "0x1CDC720", VA = "0x181CDE120")]
	public object ReadCustomType(StreamBuffer stream, byte gpType = 0)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x1CDBD40", Offset = "0x1CDA340", VA = "0x181CDBD40", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x1CDFCB0", Offset = "0x1CDE2B0", VA = "0x181CDFCB0")]
	[Obsolete("Use ParameterDictionary instead.")]
	private Dictionary<byte, object> ReadParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x1CDFB80", Offset = "0x1CDE180", VA = "0x181CDFB80")]
	private ParameterDictionary ReadParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x1CDF270", Offset = "0x1CDD870", VA = "0x181CDF270")]
	public Hashtable ReadHashtable(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x1CDF870", Offset = "0x1CDDE70", VA = "0x181CDF870")]
	public int[] ReadIntArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x1CDBFA0", Offset = "0x1CDA5A0", VA = "0x181CDBFA0", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x1CDC040", Offset = "0x1CDA640", VA = "0x181CDC040", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x1CDBB00", Offset = "0x1CDA100", VA = "0x181CDBB00", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x1CE0060", Offset = "0x1CDE660", VA = "0x181CE0060")]
	internal string ReadString(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x1CDDBD0", Offset = "0x1CDC1D0", VA = "0x181CDDBD0")]
	private object ReadCustomTypeArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x1CDEB70", Offset = "0x1CDD170", VA = "0x181CDEB70")]
	private Type ReadDictionaryType(StreamBuffer stream, out GpType keyReadType, out GpType valueReadType)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x1CDE910", Offset = "0x1CDCF10", VA = "0x181CDE910")]
	private Type ReadDictionaryType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x1CDD0D0", Offset = "0x1CDB6D0", VA = "0x181CDD0D0")]
	private Type GetDictArrayType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x1CDEE40", Offset = "0x1CDD440", VA = "0x181CDEE40")]
	private IDictionary ReadDictionary(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x1CDE7A0", Offset = "0x1CDCDA0", VA = "0x181CDE7A0")]
	private bool ReadDictionaryElements(StreamBuffer stream, GpType keyReadType, GpType valueReadType, IDictionary dictionary, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x1CDFA50", Offset = "0x1CDE050", VA = "0x181CDFA50")]
	private object[] ReadObjectArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x1CE0110", Offset = "0x1CDE710", VA = "0x181CE0110")]
	private StructWrapper[] ReadWrapperArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x1CDD300", Offset = "0x1CDB900", VA = "0x181CDD300")]
	private bool[] ReadBooleanArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x1CDF420", Offset = "0x1CDDA20", VA = "0x181CDF420")]
	internal short[] ReadInt16Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x1CDFE00", Offset = "0x1CDE400", VA = "0x181CDFE00")]
	private float[] ReadSingleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x1CDF060", Offset = "0x1CDD660", VA = "0x181CDF060")]
	private double[] ReadDoubleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x1CDFF00", Offset = "0x1CDE500", VA = "0x181CDFF00")]
	internal string[] ReadStringArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x1CDF160", Offset = "0x1CDD760", VA = "0x181CDF160")]
	private Hashtable[] ReadHashtableArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x1CDE470", Offset = "0x1CDCA70", VA = "0x181CDE470")]
	private IDictionary[] ReadDictionaryArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x1CDD1C0", Offset = "0x1CDB7C0", VA = "0x181CDD1C0")]
	private Array ReadArrayInArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x1CDF530", Offset = "0x1CDDB30", VA = "0x181CDF530")]
	internal int ReadInt1(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x1CDF570", Offset = "0x1CDDB70", VA = "0x181CDF570")]
	internal int ReadInt2(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x1CDD660", Offset = "0x1CDBC60", VA = "0x181CDD660")]
	internal int ReadCompressedInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x1CDD830", Offset = "0x1CDBE30", VA = "0x181CDD830")]
	private uint ReadCompressedUInt32(StreamBuffer stream)
	{
		return default(uint);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x1CDD730", Offset = "0x1CDBD30", VA = "0x181CDD730")]
	internal long ReadCompressedInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x1CDDAE0", Offset = "0x1CDC0E0", VA = "0x181CDDAE0")]
	private ulong ReadCompressedUInt64(StreamBuffer stream)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x1CDD5A0", Offset = "0x1CDBBA0", VA = "0x181CDD5A0")]
	internal int[] ReadCompressedInt32Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x1CDD680", Offset = "0x1CDBC80", VA = "0x181CDD680")]
	internal long[] ReadCompressedInt64Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x1CDBAD0", Offset = "0x1CDA0D0", VA = "0x181CDBAD0")]
	private int DecodeZigZag32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x1CDBAE0", Offset = "0x1CDA0E0", VA = "0x181CDBAE0")]
	private long DecodeZigZag64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x1CE19D0", Offset = "0x1CDFFD0", VA = "0x181CE19D0")]
	internal void Write(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x1CE5A10", Offset = "0x1CE4010", VA = "0x181CE5A10")]
	private void Write(StreamBuffer stream, object value, GpType gpType, bool writeType)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x1CE1740", Offset = "0x1CDFD40", VA = "0x181CE1740", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x1CE52C0", Offset = "0x1CE38C0", VA = "0x181CE52C0")]
	private void WriteParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x1CE50E0", Offset = "0x1CE36E0", VA = "0x181CE50E0")]
	private void WriteParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x1CDA4E0", Offset = "0x1CD8AE0", VA = "0x181CDA4E0")]
	private void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x1CE17B0", Offset = "0x1CDFDB0", VA = "0x181CE17B0", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x1CE1810", Offset = "0x1CDFE10", VA = "0x181CE1810", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x1CE1870", Offset = "0x1CDFE70", VA = "0x181CE1870", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x1CE2440", Offset = "0x1CE0A40", VA = "0x181CE2440")]
	internal void WriteByte(StreamBuffer stream, byte value, bool writeType)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x1CE22F0", Offset = "0x1CE08F0", VA = "0x181CE22F0")]
	internal void WriteBoolean(StreamBuffer stream, bool value, bool writeType)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x1CE59D0", Offset = "0x1CE3FD0", VA = "0x181CE59D0")]
	internal void WriteUShort(StreamBuffer stream, ushort value)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x1CE1950", Offset = "0x1CDFF50", VA = "0x181CE1950")]
	internal void WriteInt16(StreamBuffer stream, short value, bool writeType)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x1CE4800", Offset = "0x1CE2E00", VA = "0x181CE4800")]
	internal void WriteDouble(StreamBuffer stream, double value, bool writeType)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x1CE5590", Offset = "0x1CE3B90", VA = "0x181CE5590")]
	internal void WriteSingle(StreamBuffer stream, float value, bool writeType)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x1CE5860", Offset = "0x1CE3E60", VA = "0x181CE5860")]
	internal void WriteString(StreamBuffer stream, string value, bool writeType)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x1CE4A50", Offset = "0x1CE3050", VA = "0x181CE4A50")]
	private void WriteHashtable(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x1CE23C0", Offset = "0x1CE09C0", VA = "0x181CE23C0")]
	internal void WriteByteArray(StreamBuffer stream, byte[] value, bool writeType)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x1CE1C00", Offset = "0x1CE0200", VA = "0x181CE1C00")]
	private void WriteArraySegmentByte(StreamBuffer stream, ArraySegment<byte> seg, bool writeType)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x1CE2340", Offset = "0x1CE0940", VA = "0x181CE2340")]
	private void WriteByteArraySlice(StreamBuffer stream, ByteArraySlice buffer, bool writeType)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x1CE4D00", Offset = "0x1CE3300", VA = "0x181CE4D00")]
	internal void WriteInt32ArrayCompressed(StreamBuffer stream, int[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x1CE4DB0", Offset = "0x1CE33B0", VA = "0x181CE4DB0")]
	private void WriteInt64ArrayCompressed(StreamBuffer stream, long[] values, bool setType)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x1CE2090", Offset = "0x1CE0690", VA = "0x181CE2090")]
	internal void WriteBoolArray(StreamBuffer stream, bool[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x1CE4C60", Offset = "0x1CE3260", VA = "0x181CE4C60")]
	internal void WriteInt16Array(StreamBuffer stream, short[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x1CE54E0", Offset = "0x1CE3AE0", VA = "0x181CE54E0")]
	internal void WriteSingleArray(StreamBuffer stream, float[] values, bool setType)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x1CE4750", Offset = "0x1CE2D50", VA = "0x181CE4750")]
	internal void WriteDoubleArray(StreamBuffer stream, double[] values, bool setType)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x1CE56D0", Offset = "0x1CE3CD0", VA = "0x181CE56D0")]
	internal void WriteStringArray(StreamBuffer stream, object value0, bool writeType)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x1CE5050", Offset = "0x1CE3650", VA = "0x181CE5050")]
	private void WriteObjectArray(StreamBuffer stream, object array, bool writeType)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x1CE4E70", Offset = "0x1CE3470", VA = "0x181CE4E70")]
	private void WriteObjectArray(StreamBuffer stream, IList array, bool writeType)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x1CE1B10", Offset = "0x1CE0110", VA = "0x181CE1B10")]
	private void WriteArrayInArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x1CE3250", Offset = "0x1CE1850", VA = "0x181CE3250")]
	private void WriteCustomTypeBody(CustomType customType, StreamBuffer stream, object value)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x1CE3650", Offset = "0x1CE1C50", VA = "0x181CE3650")]
	private void WriteCustomType(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x1CE2A80", Offset = "0x1CE1080", VA = "0x181CE2A80")]
	private void WriteCustomTypeArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x1CE1A30", Offset = "0x1CE0030", VA = "0x181CE1A30")]
	private bool WriteArrayHeader(StreamBuffer stream, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x1CE3D60", Offset = "0x1CE2360", VA = "0x181CE3D60")]
	private void WriteDictionaryElements(StreamBuffer stream, IDictionary dictionary, GpType keyWriteType, GpType valueWriteType)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x1CE4660", Offset = "0x1CE2C60", VA = "0x181CE4660")]
	private void WriteDictionary(StreamBuffer stream, object dict, bool setType)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x1CE3FF0", Offset = "0x1CE25F0", VA = "0x181CE3FF0")]
	private void WriteDictionaryHeader(StreamBuffer stream, Type type, out GpType keyWriteType, out GpType valueWriteType)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x1CE1CE0", Offset = "0x1CE02E0", VA = "0x181CE1CE0")]
	private bool WriteArrayType(StreamBuffer stream, Type type, out GpType writeType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x1CE4940", Offset = "0x1CE2F40", VA = "0x181CE4940")]
	private void WriteHashtableArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x1CE3C40", Offset = "0x1CE2240", VA = "0x181CE3C40")]
	private void WriteDictionaryArray(StreamBuffer stream, IDictionary[] dictArray, bool writeType)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x1CE4E60", Offset = "0x1CE3460", VA = "0x181CE4E60")]
	private void WriteIntLength(StreamBuffer stream, int value)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x1CE5A00", Offset = "0x1CE4000", VA = "0x181CE5A00")]
	private void WriteVarInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x1CE24A0", Offset = "0x1CE0AA0", VA = "0x181CE24A0")]
	private void WriteCompressedInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x1CE2610", Offset = "0x1CE0C10", VA = "0x181CE2610")]
	private void WriteCompressedInt64(StreamBuffer stream, long value, bool writeType)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x1CE27F0", Offset = "0x1CE0DF0", VA = "0x181CE27F0")]
	private void WriteCompressedUInt32(StreamBuffer stream, uint value)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x1CE2780", Offset = "0x1CE0D80", VA = "0x181CE2780")]
	private int WriteCompressedUInt32(byte[] buffer, uint value)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x1CE2930", Offset = "0x1CE0F30", VA = "0x181CE2930")]
	private void WriteCompressedUInt64(StreamBuffer stream, ulong value)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x1CDC260", Offset = "0x1CDA860", VA = "0x181CDC260")]
	private uint EncodeZigZag32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x1CDC270", Offset = "0x1CDA870", VA = "0x181CDC270")]
	private ulong EncodeZigZag64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x1CE6EF0", Offset = "0x1CE54F0", VA = "0x181CE6EF0")]
	public Protocol18()
	{
	}
}
