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
		[Address(RVA = "0x56705A0", Offset = "0x566F5A0", VA = "0x56705A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x56705D0", Offset = "0x566F5D0", VA = "0x56705D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x56705E0", Offset = "0x566F5E0", VA = "0x56705E0", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x56706A0", Offset = "0x566F6A0", VA = "0x56706A0", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x5670780", Offset = "0x566F780", VA = "0x5670780", Slot = "8")]
	public override void SerializeString(StreamBuffer dout, string serObject, bool setType)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x56708D0", Offset = "0x566F8D0", VA = "0x56708D0", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x56711B0", Offset = "0x56701B0", VA = "0x56711B0", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x5671270", Offset = "0x5670270", VA = "0x5671270", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x56712B0", Offset = "0x56702B0", VA = "0x56712B0")]
	private static Type GetAllowedDictionaryKeyTypes(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x5671460", Offset = "0x5670460", VA = "0x5671460")]
	private static Type GetClrArrayType(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x5671670", Offset = "0x5670670", VA = "0x5671670")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x5671C60", Offset = "0x5670C60", VA = "0x5671C60")]
	private GpType GetCodeOfTypeCode(TypeCode type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x5671C80", Offset = "0x5670C80", VA = "0x5671C80")]
	private object Read(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x56708E0", Offset = "0x566F8E0", VA = "0x56708E0")]
	private object Read(StreamBuffer stream, byte gpType, [Optional][DefaultParameterValue(0)] DeserializationFlags flags, [Optional] ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x5671FE0", Offset = "0x5670FE0", VA = "0x5671FE0")]
	internal bool ReadBoolean(StreamBuffer stream)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x5671290", Offset = "0x5670290", VA = "0x5671290")]
	internal byte ReadByte(StreamBuffer stream)
	{
		return default(byte);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x5671210", Offset = "0x5670210", VA = "0x5671210")]
	internal short ReadInt16(StreamBuffer stream)
	{
		return default(short);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x5673720", Offset = "0x5672720", VA = "0x5673720")]
	internal ushort ReadUShort(StreamBuffer stream)
	{
		return default(ushort);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x5673780", Offset = "0x5672780", VA = "0x5673780")]
	internal int ReadInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x5673820", Offset = "0x5672820", VA = "0x5673820")]
	internal long ReadInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x5672000", Offset = "0x5671000", VA = "0x5672000")]
	internal float ReadSingle(StreamBuffer stream)
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x5672040", Offset = "0x5671040", VA = "0x5672040")]
	internal double ReadDouble(StreamBuffer stream)
	{
		return default(double);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x5673950", Offset = "0x5672950", VA = "0x5673950")]
	internal ByteArraySlice ReadNonAllocByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x5672980", Offset = "0x5671980", VA = "0x5672980")]
	internal byte[] ReadByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x5671CD0", Offset = "0x5670CD0", VA = "0x5671CD0")]
	public object ReadCustomType(StreamBuffer stream, byte gpType = 0)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x5673CE0", Offset = "0x5672CE0", VA = "0x5673CE0", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x56740A0", Offset = "0x56730A0", VA = "0x56740A0")]
	[Obsolete("Use ParameterDictionary instead.")]
	private Dictionary<byte, object> ReadParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x5674310", Offset = "0x5673310", VA = "0x5674310")]
	private ParameterDictionary ReadParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x5672250", Offset = "0x5671250", VA = "0x5672250")]
	public Hashtable ReadHashtable(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x5674570", Offset = "0x5673570", VA = "0x5674570")]
	public int[] ReadIntArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x5674610", Offset = "0x5673610", VA = "0x5674610", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x56746B0", Offset = "0x56736B0", VA = "0x56746B0", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x5674820", Offset = "0x5673820", VA = "0x5674820", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x5672080", Offset = "0x5671080", VA = "0x5672080")]
	internal string ReadString(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x5672FE0", Offset = "0x5671FE0", VA = "0x5672FE0")]
	private object ReadCustomTypeArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x5674980", Offset = "0x5673980", VA = "0x5674980")]
	private Type ReadDictionaryType(StreamBuffer stream, out GpType keyReadType, out GpType valueReadType)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x5674C40", Offset = "0x5673C40", VA = "0x5674C40")]
	private Type ReadDictionaryType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x5674E80", Offset = "0x5673E80", VA = "0x5674E80")]
	private Type GetDictArrayType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x5672470", Offset = "0x5671470", VA = "0x5672470")]
	private IDictionary ReadDictionary(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x5674F80", Offset = "0x5673F80", VA = "0x5674F80")]
	private bool ReadDictionaryElements(StreamBuffer stream, GpType keyReadType, GpType valueReadType, IDictionary dictionary, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5672550", Offset = "0x5671550", VA = "0x5672550")]
	private object[] ReadObjectArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x5675300", Offset = "0x5674300", VA = "0x5675300")]
	private StructWrapper[] ReadWrapperArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x5672690", Offset = "0x5671690", VA = "0x5672690")]
	private bool[] ReadBooleanArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x56729F0", Offset = "0x56719F0", VA = "0x56729F0")]
	internal short[] ReadInt16Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x5672B70", Offset = "0x5671B70", VA = "0x5672B70")]
	private float[] ReadSingleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x5672AE0", Offset = "0x5671AE0", VA = "0x5672AE0")]
	private double[] ReadDoubleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5672C00", Offset = "0x5671C00", VA = "0x5672C00")]
	internal string[] ReadStringArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x5672CB0", Offset = "0x5671CB0", VA = "0x5672CB0")]
	private Hashtable[] ReadHashtableArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x5672DD0", Offset = "0x5671DD0", VA = "0x5672DD0")]
	private IDictionary[] ReadDictionaryArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x56735E0", Offset = "0x56725E0", VA = "0x56735E0")]
	private Array ReadArrayInArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x5672110", Offset = "0x5671110", VA = "0x5672110")]
	internal int ReadInt1(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x5672150", Offset = "0x5671150", VA = "0x5672150")]
	internal int ReadInt2(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x5672210", Offset = "0x5671210", VA = "0x5672210")]
	internal int ReadCompressedInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x56739B0", Offset = "0x56729B0", VA = "0x56739B0")]
	private uint ReadCompressedUInt32(StreamBuffer stream)
	{
		return default(uint);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x5672230", Offset = "0x5671230", VA = "0x5672230")]
	internal long ReadCompressedInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x5675540", Offset = "0x5674540", VA = "0x5675540")]
	private ulong ReadCompressedUInt64(StreamBuffer stream)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x56734B0", Offset = "0x56724B0", VA = "0x56734B0")]
	internal int[] ReadCompressedInt32Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x5673540", Offset = "0x5672540", VA = "0x5673540")]
	internal long[] ReadCompressedInt64Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x5675530", Offset = "0x5674530", VA = "0x5675530")]
	private int DecodeZigZag32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x5675780", Offset = "0x5674780", VA = "0x5675780")]
	private long DecodeZigZag64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x5670640", Offset = "0x566F640", VA = "0x5670640")]
	internal void Write(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x5675790", Offset = "0x5674790", VA = "0x5675790")]
	private void Write(StreamBuffer stream, object value, GpType gpType, bool writeType)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x5678660", Offset = "0x5677660", VA = "0x5678660", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x56788C0", Offset = "0x56778C0", VA = "0x56788C0")]
	private void WriteParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x56786C0", Offset = "0x56776C0", VA = "0x56786C0")]
	private void WriteParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x5677770", Offset = "0x5676770", VA = "0x5677770")]
	private void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x5678AE0", Offset = "0x5677AE0", VA = "0x5678AE0", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x5678B40", Offset = "0x5677B40", VA = "0x5678B40", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x5678BA0", Offset = "0x5677BA0", VA = "0x5678BA0", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x5676520", Offset = "0x5675520", VA = "0x5676520")]
	internal void WriteByte(StreamBuffer stream, byte value, bool writeType)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x56764F0", Offset = "0x56754F0", VA = "0x56764F0")]
	internal void WriteBoolean(StreamBuffer stream, bool value, bool writeType)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x5678C50", Offset = "0x5677C50", VA = "0x5678C50")]
	internal void WriteUShort(StreamBuffer stream, ushort value)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x5670710", Offset = "0x566F710", VA = "0x5670710")]
	internal void WriteInt16(StreamBuffer stream, short value, bool writeType)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x5676900", Offset = "0x5675900", VA = "0x5676900")]
	internal void WriteDouble(StreamBuffer stream, double value, bool writeType)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x56767C0", Offset = "0x56757C0", VA = "0x56767C0")]
	internal void WriteSingle(StreamBuffer stream, float value, bool writeType)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5670790", Offset = "0x566F790", VA = "0x5670790")]
	internal void WriteString(StreamBuffer stream, string value, bool writeType)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x5677370", Offset = "0x5676370", VA = "0x5677370")]
	private void WriteHashtable(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x56777B0", Offset = "0x56767B0", VA = "0x56777B0")]
	internal void WriteByteArray(StreamBuffer stream, byte[] value, bool writeType)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x56763F0", Offset = "0x56753F0", VA = "0x56763F0")]
	private void WriteArraySegmentByte(StreamBuffer stream, ArraySegment<byte> seg, bool writeType)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x5676380", Offset = "0x5675380", VA = "0x5676380")]
	private void WriteByteArraySlice(StreamBuffer stream, ByteArraySlice buffer, bool writeType)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x5677630", Offset = "0x5676630", VA = "0x5677630")]
	internal void WriteInt32ArrayCompressed(StreamBuffer stream, int[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x56776D0", Offset = "0x56766D0", VA = "0x56776D0")]
	private void WriteInt64ArrayCompressed(StreamBuffer stream, long[] values, bool setType)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x5677E00", Offset = "0x5676E00", VA = "0x5677E00")]
	internal void WriteBoolArray(StreamBuffer stream, bool[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x5677D60", Offset = "0x5676D60", VA = "0x5677D60")]
	internal void WriteInt16Array(StreamBuffer stream, short[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5677BE0", Offset = "0x5676BE0", VA = "0x5677BE0")]
	internal void WriteSingleArray(StreamBuffer stream, float[] values, bool setType)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x5677B50", Offset = "0x5676B50", VA = "0x5677B50")]
	internal void WriteDoubleArray(StreamBuffer stream, double[] values, bool setType)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x5678500", Offset = "0x5677500", VA = "0x5678500")]
	internal void WriteStringArray(StreamBuffer stream, object value0, bool writeType)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x5678C80", Offset = "0x5677C80", VA = "0x5678C80")]
	private void WriteObjectArray(StreamBuffer stream, object array, bool writeType)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x5677810", Offset = "0x5676810", VA = "0x5677810")]
	private void WriteObjectArray(StreamBuffer stream, IList array, bool writeType)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x5677170", Offset = "0x5676170", VA = "0x5677170")]
	private void WriteArrayInArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x5678D00", Offset = "0x5677D00", VA = "0x5678D00")]
	private void WriteCustomTypeBody(CustomType customType, StreamBuffer stream, object value)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x5676A40", Offset = "0x5675A40", VA = "0x5676A40")]
	private void WriteCustomType(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5676C50", Offset = "0x5675C50", VA = "0x5676C50")]
	private void WriteCustomTypeArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5679150", Offset = "0x5678150", VA = "0x5679150")]
	private bool WriteArrayHeader(StreamBuffer stream, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5679210", Offset = "0x5678210", VA = "0x5679210")]
	private void WriteDictionaryElements(StreamBuffer stream, IDictionary dictionary, GpType keyWriteType, GpType valueWriteType)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x56772A0", Offset = "0x56762A0", VA = "0x56772A0")]
	private void WriteDictionary(StreamBuffer stream, object dict, bool setType)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x56796C0", Offset = "0x56786C0", VA = "0x56796C0")]
	private void WriteDictionaryHeader(StreamBuffer stream, Type type, out GpType keyWriteType, out GpType valueWriteType)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x5679A40", Offset = "0x5678A40", VA = "0x5679A40")]
	private bool WriteArrayType(StreamBuffer stream, Type type, out GpType writeType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x5677C70", Offset = "0x5676C70", VA = "0x5677C70")]
	private void WriteHashtableArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x5677A50", Offset = "0x5676A50", VA = "0x5677A50")]
	private void WriteDictionaryArray(StreamBuffer stream, IDictionary[] dictArray, bool writeType)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x5678C70", Offset = "0x5677C70", VA = "0x5678C70")]
	private void WriteIntLength(StreamBuffer stream, int value)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x5679F60", Offset = "0x5678F60", VA = "0x5679F60")]
	private void WriteVarInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x5676570", Offset = "0x5675570", VA = "0x5676570")]
	private void WriteCompressedInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x5676690", Offset = "0x5675690", VA = "0x5676690")]
	private void WriteCompressedInt64(StreamBuffer stream, long value, bool writeType)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x5679E30", Offset = "0x5678E30", VA = "0x5679E30")]
	private void WriteCompressedUInt32(StreamBuffer stream, uint value)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x56790E0", Offset = "0x56780E0", VA = "0x56790E0")]
	private int WriteCompressedUInt32(byte[] buffer, uint value)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x5679F90", Offset = "0x5678F90", VA = "0x5679F90")]
	private void WriteCompressedUInt64(StreamBuffer stream, ulong value)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x5679F70", Offset = "0x5678F70", VA = "0x5679F70")]
	private uint EncodeZigZag32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x5679F80", Offset = "0x5678F80", VA = "0x5679F80")]
	private ulong EncodeZigZag64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x567A120", Offset = "0x5679120", VA = "0x567A120")]
	public Protocol18()
	{
	}
}
