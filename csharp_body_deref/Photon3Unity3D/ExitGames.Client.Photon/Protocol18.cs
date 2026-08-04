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
		[Address(RVA = "0x3E81A70", Offset = "0x3E81A70", VA = "0x3E81A70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x3E81AA0", Offset = "0x3E81AA0", VA = "0x3E81AA0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x3E81AB0", Offset = "0x3E81AB0", VA = "0x3E81AB0", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x3E81B70", Offset = "0x3E81B70", VA = "0x3E81B70", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x3E81C30", Offset = "0x3E81C30", VA = "0x3E81C30", Slot = "8")]
	public override void SerializeString(StreamBuffer dout, string serObject, bool setType)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x3E81D90", Offset = "0x3E81D90", VA = "0x3E81D90", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x3E829B0", Offset = "0x3E829B0", VA = "0x3E829B0", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x3E82A70", Offset = "0x3E82A70", VA = "0x3E82A70", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x3E82AB0", Offset = "0x3E82AB0", VA = "0x3E82AB0")]
	private static Type GetAllowedDictionaryKeyTypes(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x3E82C60", Offset = "0x3E82C60", VA = "0x3E82C60")]
	private static Type GetClrArrayType(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x3E82F30", Offset = "0x3E82F30", VA = "0x3E82F30")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x3E83520", Offset = "0x3E83520", VA = "0x3E83520")]
	private GpType GetCodeOfTypeCode(TypeCode type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x3E83540", Offset = "0x3E83540", VA = "0x3E83540")]
	private object Read(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x3E81DA0", Offset = "0x3E81DA0", VA = "0x3E81DA0")]
	private object Read(StreamBuffer stream, byte gpType, [Optional][DefaultParameterValue(0)] DeserializationFlags flags, [Optional] ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x3E838B0", Offset = "0x3E838B0", VA = "0x3E838B0")]
	internal bool ReadBoolean(StreamBuffer stream)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3E82A90", Offset = "0x3E82A90", VA = "0x3E82A90")]
	internal byte ReadByte(StreamBuffer stream)
	{
		return default(byte);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x3E82A10", Offset = "0x3E82A10", VA = "0x3E82A10")]
	internal short ReadInt16(StreamBuffer stream)
	{
		return default(short);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x3E84F30", Offset = "0x3E84F30", VA = "0x3E84F30")]
	internal ushort ReadUShort(StreamBuffer stream)
	{
		return default(ushort);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x3E84F90", Offset = "0x3E84F90", VA = "0x3E84F90")]
	internal int ReadInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x3E85030", Offset = "0x3E85030", VA = "0x3E85030")]
	internal long ReadInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x3E838D0", Offset = "0x3E838D0", VA = "0x3E838D0")]
	internal float ReadSingle(StreamBuffer stream)
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x3E83910", Offset = "0x3E83910", VA = "0x3E83910")]
	internal double ReadDouble(StreamBuffer stream)
	{
		return default(double);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x3E85160", Offset = "0x3E85160", VA = "0x3E85160")]
	internal ByteArraySlice ReadNonAllocByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x3E84190", Offset = "0x3E84190", VA = "0x3E84190")]
	internal byte[] ReadByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3E83590", Offset = "0x3E83590", VA = "0x3E83590")]
	public object ReadCustomType(StreamBuffer stream, byte gpType = 0)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3E85480", Offset = "0x3E85480", VA = "0x3E85480", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3E85840", Offset = "0x3E85840", VA = "0x3E85840")]
	[Obsolete("Use ParameterDictionary instead.")]
	private Dictionary<byte, object> ReadParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x3E85AD0", Offset = "0x3E85AD0", VA = "0x3E85AD0")]
	private ParameterDictionary ReadParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x3E83AC0", Offset = "0x3E83AC0", VA = "0x3E83AC0")]
	public Hashtable ReadHashtable(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x3E85D20", Offset = "0x3E85D20", VA = "0x3E85D20")]
	public int[] ReadIntArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3E85DC0", Offset = "0x3E85DC0", VA = "0x3E85DC0", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3E85E60", Offset = "0x3E85E60", VA = "0x3E85E60", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x3E85FD0", Offset = "0x3E85FD0", VA = "0x3E85FD0", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x3E83950", Offset = "0x3E83950", VA = "0x3E83950")]
	internal string ReadString(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x3E847F0", Offset = "0x3E847F0", VA = "0x3E847F0")]
	private object ReadCustomTypeArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x3E86130", Offset = "0x3E86130", VA = "0x3E86130")]
	private Type ReadDictionaryType(StreamBuffer stream, out GpType keyReadType, out GpType valueReadType)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x3E863E0", Offset = "0x3E863E0", VA = "0x3E863E0")]
	private Type ReadDictionaryType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x3E86620", Offset = "0x3E86620", VA = "0x3E86620")]
	private Type GetDictArrayType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x3E83D20", Offset = "0x3E83D20", VA = "0x3E83D20")]
	private IDictionary ReadDictionary(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x3E86730", Offset = "0x3E86730", VA = "0x3E86730")]
	private bool ReadDictionaryElements(StreamBuffer stream, GpType keyReadType, GpType valueReadType, IDictionary dictionary, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x3E83E00", Offset = "0x3E83E00", VA = "0x3E83E00")]
	private object[] ReadObjectArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x3E86A10", Offset = "0x3E86A10", VA = "0x3E86A10")]
	private StructWrapper[] ReadWrapperArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x3E83F40", Offset = "0x3E83F40", VA = "0x3E83F40")]
	private bool[] ReadBooleanArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x3E84200", Offset = "0x3E84200", VA = "0x3E84200")]
	internal short[] ReadInt16Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x3E84390", Offset = "0x3E84390", VA = "0x3E84390")]
	private float[] ReadSingleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3E84300", Offset = "0x3E84300", VA = "0x3E84300")]
	private double[] ReadDoubleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x3E84420", Offset = "0x3E84420", VA = "0x3E84420")]
	internal string[] ReadStringArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x3E844D0", Offset = "0x3E844D0", VA = "0x3E844D0")]
	private Hashtable[] ReadHashtableArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x3E845F0", Offset = "0x3E845F0", VA = "0x3E845F0")]
	private IDictionary[] ReadDictionaryArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x3E84DF0", Offset = "0x3E84DF0", VA = "0x3E84DF0")]
	private Array ReadArrayInArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x3E839E0", Offset = "0x3E839E0", VA = "0x3E839E0")]
	internal int ReadInt1(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x3E83A10", Offset = "0x3E83A10", VA = "0x3E83A10")]
	internal int ReadInt2(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x3E83A80", Offset = "0x3E83A80", VA = "0x3E83A80")]
	internal int ReadCompressedInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x3E851C0", Offset = "0x3E851C0", VA = "0x3E851C0")]
	private uint ReadCompressedUInt32(StreamBuffer stream)
	{
		return default(uint);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x3E83AA0", Offset = "0x3E83AA0", VA = "0x3E83AA0")]
	internal long ReadCompressedInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x3E86C50", Offset = "0x3E86C50", VA = "0x3E86C50")]
	private ulong ReadCompressedUInt64(StreamBuffer stream)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x3E84CC0", Offset = "0x3E84CC0", VA = "0x3E84CC0")]
	internal int[] ReadCompressedInt32Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x3E84D50", Offset = "0x3E84D50", VA = "0x3E84D50")]
	internal long[] ReadCompressedInt64Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x3E86C40", Offset = "0x3E86C40", VA = "0x3E86C40")]
	private int DecodeZigZag32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x3E86D30", Offset = "0x3E86D30", VA = "0x3E86D30")]
	private long DecodeZigZag64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x3E81B10", Offset = "0x3E81B10", VA = "0x3E81B10")]
	internal void Write(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x3E86D50", Offset = "0x3E86D50", VA = "0x3E86D50")]
	private void Write(StreamBuffer stream, object value, GpType gpType, bool writeType)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x3E89860", Offset = "0x3E89860", VA = "0x3E89860", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x3E89AD0", Offset = "0x3E89AD0", VA = "0x3E89AD0")]
	private void WriteParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x3E898C0", Offset = "0x3E898C0", VA = "0x3E898C0")]
	private void WriteParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x3E88DB0", Offset = "0x3E88DB0", VA = "0x3E88DB0")]
	private void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x3E89D20", Offset = "0x3E89D20", VA = "0x3E89D20", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x3E89D80", Offset = "0x3E89D80", VA = "0x3E89D80", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x3E89DE0", Offset = "0x3E89DE0", VA = "0x3E89DE0", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x3E87AD0", Offset = "0x3E87AD0", VA = "0x3E87AD0")]
	internal void WriteByte(StreamBuffer stream, byte value, bool writeType)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x3E87AA0", Offset = "0x3E87AA0", VA = "0x3E87AA0")]
	internal void WriteBoolean(StreamBuffer stream, bool value, bool writeType)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3E89E90", Offset = "0x3E89E90", VA = "0x3E89E90")]
	internal void WriteUShort(StreamBuffer stream, ushort value)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x3E81BD0", Offset = "0x3E81BD0", VA = "0x3E81BD0")]
	internal void WriteInt16(StreamBuffer stream, short value, bool writeType)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x3E87EB0", Offset = "0x3E87EB0", VA = "0x3E87EB0")]
	internal void WriteDouble(StreamBuffer stream, double value, bool writeType)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x3E87D50", Offset = "0x3E87D50", VA = "0x3E87D50")]
	internal void WriteSingle(StreamBuffer stream, float value, bool writeType)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3E81C40", Offset = "0x3E81C40", VA = "0x3E81C40")]
	internal void WriteString(StreamBuffer stream, string value, bool writeType)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x3E88980", Offset = "0x3E88980", VA = "0x3E88980")]
	private void WriteHashtable(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x3E88DF0", Offset = "0x3E88DF0", VA = "0x3E88DF0")]
	internal void WriteByteArray(StreamBuffer stream, byte[] value, bool writeType)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x3E879A0", Offset = "0x3E879A0", VA = "0x3E879A0")]
	private void WriteArraySegmentByte(StreamBuffer stream, ArraySegment<byte> seg, bool writeType)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x3E87930", Offset = "0x3E87930", VA = "0x3E87930")]
	private void WriteByteArraySlice(StreamBuffer stream, ByteArraySlice buffer, bool writeType)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x3E88C70", Offset = "0x3E88C70", VA = "0x3E88C70")]
	internal void WriteInt32ArrayCompressed(StreamBuffer stream, int[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3E88D10", Offset = "0x3E88D10", VA = "0x3E88D10")]
	private void WriteInt64ArrayCompressed(StreamBuffer stream, long[] values, bool setType)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3E89440", Offset = "0x3E89440", VA = "0x3E89440")]
	internal void WriteBoolArray(StreamBuffer stream, bool[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3E893A0", Offset = "0x3E893A0", VA = "0x3E893A0")]
	internal void WriteInt16Array(StreamBuffer stream, short[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3E89220", Offset = "0x3E89220", VA = "0x3E89220")]
	internal void WriteSingleArray(StreamBuffer stream, float[] values, bool setType)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3E89190", Offset = "0x3E89190", VA = "0x3E89190")]
	internal void WriteDoubleArray(StreamBuffer stream, double[] values, bool setType)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3E896E0", Offset = "0x3E896E0", VA = "0x3E896E0")]
	internal void WriteStringArray(StreamBuffer stream, object value0, bool writeType)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3E89EC0", Offset = "0x3E89EC0", VA = "0x3E89EC0")]
	private void WriteObjectArray(StreamBuffer stream, object array, bool writeType)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3E88E50", Offset = "0x3E88E50", VA = "0x3E88E50")]
	private void WriteObjectArray(StreamBuffer stream, IList array, bool writeType)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x3E88780", Offset = "0x3E88780", VA = "0x3E88780")]
	private void WriteArrayInArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x3E89F40", Offset = "0x3E89F40", VA = "0x3E89F40")]
	private void WriteCustomTypeBody(CustomType customType, StreamBuffer stream, object value)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3E88010", Offset = "0x3E88010", VA = "0x3E88010")]
	private void WriteCustomType(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x3E88210", Offset = "0x3E88210", VA = "0x3E88210")]
	private void WriteCustomTypeArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x3E8A370", Offset = "0x3E8A370", VA = "0x3E8A370")]
	private bool WriteArrayHeader(StreamBuffer stream, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x3E8A420", Offset = "0x3E8A420", VA = "0x3E8A420")]
	private void WriteDictionaryElements(StreamBuffer stream, IDictionary dictionary, GpType keyWriteType, GpType valueWriteType)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x3E888B0", Offset = "0x3E888B0", VA = "0x3E888B0")]
	private void WriteDictionary(StreamBuffer stream, object dict, bool setType)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3E8A910", Offset = "0x3E8A910", VA = "0x3E8A910")]
	private void WriteDictionaryHeader(StreamBuffer stream, Type type, out GpType keyWriteType, out GpType valueWriteType)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3E8AC80", Offset = "0x3E8AC80", VA = "0x3E8AC80")]
	private bool WriteArrayType(StreamBuffer stream, Type type, out GpType writeType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3E892B0", Offset = "0x3E892B0", VA = "0x3E892B0")]
	private void WriteHashtableArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3E89090", Offset = "0x3E89090", VA = "0x3E89090")]
	private void WriteDictionaryArray(StreamBuffer stream, IDictionary[] dictArray, bool writeType)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x3E89EB0", Offset = "0x3E89EB0", VA = "0x3E89EB0")]
	private void WriteIntLength(StreamBuffer stream, int value)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x3E8B1C0", Offset = "0x3E8B1C0", VA = "0x3E8B1C0")]
	private void WriteVarInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3E87B20", Offset = "0x3E87B20", VA = "0x3E87B20")]
	private void WriteCompressedInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x3E87C30", Offset = "0x3E87C30", VA = "0x3E87C30")]
	private void WriteCompressedInt64(StreamBuffer stream, long value, bool writeType)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x3E8B080", Offset = "0x3E8B080", VA = "0x3E8B080")]
	private void WriteCompressedUInt32(StreamBuffer stream, uint value)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x3E8A310", Offset = "0x3E8A310", VA = "0x3E8A310")]
	private int WriteCompressedUInt32(byte[] buffer, uint value)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x3E8B1F0", Offset = "0x3E8B1F0", VA = "0x3E8B1F0")]
	private void WriteCompressedUInt64(StreamBuffer stream, ulong value)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x3E8B1D0", Offset = "0x3E8B1D0", VA = "0x3E8B1D0")]
	private uint EncodeZigZag32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x3E8B1E0", Offset = "0x3E8B1E0", VA = "0x3E8B1E0")]
	private ulong EncodeZigZag64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x3E8B3A0", Offset = "0x3E8B3A0", VA = "0x3E8B3A0")]
	public Protocol18()
	{
	}
}
