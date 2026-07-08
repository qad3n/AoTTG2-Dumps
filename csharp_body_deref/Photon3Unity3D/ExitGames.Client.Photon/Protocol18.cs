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
		[Address(RVA = "0x3B8C120", Offset = "0x3B8C120", VA = "0x3B8C120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public override byte[] VersionBytes
	{
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x3B8C150", Offset = "0x3B8C150", VA = "0x3B8C150", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x3B8C160", Offset = "0x3B8C160", VA = "0x3B8C160", Slot = "6")]
	public override void Serialize(StreamBuffer dout, object serObject, bool setType)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x3B8C220", Offset = "0x3B8C220", VA = "0x3B8C220", Slot = "7")]
	public override void SerializeShort(StreamBuffer dout, short serObject, bool setType)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x3B8C2E0", Offset = "0x3B8C2E0", VA = "0x3B8C2E0", Slot = "8")]
	public override void SerializeString(StreamBuffer dout, string serObject, bool setType)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x3B8C440", Offset = "0x3B8C440", VA = "0x3B8C440", Slot = "13")]
	public override object Deserialize(StreamBuffer din, byte type, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x3B8D060", Offset = "0x3B8D060", VA = "0x3B8D060", Slot = "14")]
	public override short DeserializeShort(StreamBuffer din)
	{
		return default(short);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x3B8D120", Offset = "0x3B8D120", VA = "0x3B8D120", Slot = "15")]
	public override byte DeserializeByte(StreamBuffer din)
	{
		return default(byte);
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x3B8D160", Offset = "0x3B8D160", VA = "0x3B8D160")]
	private static Type GetAllowedDictionaryKeyTypes(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x3B8D310", Offset = "0x3B8D310", VA = "0x3B8D310")]
	private static Type GetClrArrayType(GpType gpType)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x3B8D5E0", Offset = "0x3B8D5E0", VA = "0x3B8D5E0")]
	private GpType GetCodeOfType(Type type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x3B8DBD0", Offset = "0x3B8DBD0", VA = "0x3B8DBD0")]
	private GpType GetCodeOfTypeCode(TypeCode type)
	{
		return default(GpType);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x3B8DBF0", Offset = "0x3B8DBF0", VA = "0x3B8DBF0")]
	private object Read(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x3B8C450", Offset = "0x3B8C450", VA = "0x3B8C450")]
	private object Read(StreamBuffer stream, byte gpType, [Optional][DefaultParameterValue(0)] DeserializationFlags flags, [Optional] ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x3B8DF60", Offset = "0x3B8DF60", VA = "0x3B8DF60")]
	internal bool ReadBoolean(StreamBuffer stream)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3B8D140", Offset = "0x3B8D140", VA = "0x3B8D140")]
	internal byte ReadByte(StreamBuffer stream)
	{
		return default(byte);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x3B8D0C0", Offset = "0x3B8D0C0", VA = "0x3B8D0C0")]
	internal short ReadInt16(StreamBuffer stream)
	{
		return default(short);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x3B8F5E0", Offset = "0x3B8F5E0", VA = "0x3B8F5E0")]
	internal ushort ReadUShort(StreamBuffer stream)
	{
		return default(ushort);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x3B8F640", Offset = "0x3B8F640", VA = "0x3B8F640")]
	internal int ReadInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x3B8F6E0", Offset = "0x3B8F6E0", VA = "0x3B8F6E0")]
	internal long ReadInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x3B8DF80", Offset = "0x3B8DF80", VA = "0x3B8DF80")]
	internal float ReadSingle(StreamBuffer stream)
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x3B8DFC0", Offset = "0x3B8DFC0", VA = "0x3B8DFC0")]
	internal double ReadDouble(StreamBuffer stream)
	{
		return default(double);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x3B8F810", Offset = "0x3B8F810", VA = "0x3B8F810")]
	internal ByteArraySlice ReadNonAllocByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x3B8E840", Offset = "0x3B8E840", VA = "0x3B8E840")]
	internal byte[] ReadByteArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3B8DC40", Offset = "0x3B8DC40", VA = "0x3B8DC40")]
	public object ReadCustomType(StreamBuffer stream, byte gpType = 0)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3B8FB30", Offset = "0x3B8FB30", VA = "0x3B8FB30", Slot = "16")]
	public override EventData DeserializeEventData(StreamBuffer din, [Optional] EventData target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3B8FEF0", Offset = "0x3B8FEF0", VA = "0x3B8FEF0")]
	[Obsolete("Use ParameterDictionary instead.")]
	private Dictionary<byte, object> ReadParameterTable(StreamBuffer stream, [Optional] Dictionary<byte, object> target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x3B90180", Offset = "0x3B90180", VA = "0x3B90180")]
	private ParameterDictionary ReadParameterDictionary(StreamBuffer stream, [Optional] ParameterDictionary target, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x3B8E170", Offset = "0x3B8E170", VA = "0x3B8E170")]
	public Hashtable ReadHashtable(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x3B903D0", Offset = "0x3B903D0", VA = "0x3B903D0")]
	public int[] ReadIntArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3B90470", Offset = "0x3B90470", VA = "0x3B90470", Slot = "17")]
	public override OperationRequest DeserializeOperationRequest(StreamBuffer din, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3B90510", Offset = "0x3B90510", VA = "0x3B90510", Slot = "18")]
	public override OperationResponse DeserializeOperationResponse(StreamBuffer stream, DeserializationFlags flags = DeserializationFlags.None)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x3B90680", Offset = "0x3B90680", VA = "0x3B90680", Slot = "19")]
	public override DisconnectMessage DeserializeDisconnectMessage(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x3B8E000", Offset = "0x3B8E000", VA = "0x3B8E000")]
	internal string ReadString(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x3B8EEA0", Offset = "0x3B8EEA0", VA = "0x3B8EEA0")]
	private object ReadCustomTypeArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x3B907E0", Offset = "0x3B907E0", VA = "0x3B907E0")]
	private Type ReadDictionaryType(StreamBuffer stream, out GpType keyReadType, out GpType valueReadType)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x3B90A90", Offset = "0x3B90A90", VA = "0x3B90A90")]
	private Type ReadDictionaryType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x3B90CD0", Offset = "0x3B90CD0", VA = "0x3B90CD0")]
	private Type GetDictArrayType(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x3B8E3D0", Offset = "0x3B8E3D0", VA = "0x3B8E3D0")]
	private IDictionary ReadDictionary(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x3B90DE0", Offset = "0x3B90DE0", VA = "0x3B90DE0")]
	private bool ReadDictionaryElements(StreamBuffer stream, GpType keyReadType, GpType valueReadType, IDictionary dictionary, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x3B8E4B0", Offset = "0x3B8E4B0", VA = "0x3B8E4B0")]
	private object[] ReadObjectArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x3B910C0", Offset = "0x3B910C0", VA = "0x3B910C0")]
	private StructWrapper[] ReadWrapperArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x3B8E5F0", Offset = "0x3B8E5F0", VA = "0x3B8E5F0")]
	private bool[] ReadBooleanArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x3B8E8B0", Offset = "0x3B8E8B0", VA = "0x3B8E8B0")]
	internal short[] ReadInt16Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x3B8EA40", Offset = "0x3B8EA40", VA = "0x3B8EA40")]
	private float[] ReadSingleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3B8E9B0", Offset = "0x3B8E9B0", VA = "0x3B8E9B0")]
	private double[] ReadDoubleArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x3B8EAD0", Offset = "0x3B8EAD0", VA = "0x3B8EAD0")]
	internal string[] ReadStringArray(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x3B8EB80", Offset = "0x3B8EB80", VA = "0x3B8EB80")]
	private Hashtable[] ReadHashtableArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x3B8ECA0", Offset = "0x3B8ECA0", VA = "0x3B8ECA0")]
	private IDictionary[] ReadDictionaryArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x3B8F4A0", Offset = "0x3B8F4A0", VA = "0x3B8F4A0")]
	private Array ReadArrayInArray(StreamBuffer stream, DeserializationFlags flags, ParameterDictionary parameters)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x3B8E090", Offset = "0x3B8E090", VA = "0x3B8E090")]
	internal int ReadInt1(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x3B8E0C0", Offset = "0x3B8E0C0", VA = "0x3B8E0C0")]
	internal int ReadInt2(StreamBuffer stream, bool signNegative)
	{
		return default(int);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x3B8E130", Offset = "0x3B8E130", VA = "0x3B8E130")]
	internal int ReadCompressedInt32(StreamBuffer stream)
	{
		return default(int);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x3B8F870", Offset = "0x3B8F870", VA = "0x3B8F870")]
	private uint ReadCompressedUInt32(StreamBuffer stream)
	{
		return default(uint);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x3B8E150", Offset = "0x3B8E150", VA = "0x3B8E150")]
	internal long ReadCompressedInt64(StreamBuffer stream)
	{
		return default(long);
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x3B91300", Offset = "0x3B91300", VA = "0x3B91300")]
	private ulong ReadCompressedUInt64(StreamBuffer stream)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x3B8F370", Offset = "0x3B8F370", VA = "0x3B8F370")]
	internal int[] ReadCompressedInt32Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x3B8F400", Offset = "0x3B8F400", VA = "0x3B8F400")]
	internal long[] ReadCompressedInt64Array(StreamBuffer stream)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x3B912F0", Offset = "0x3B912F0", VA = "0x3B912F0")]
	private int DecodeZigZag32(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x3B913E0", Offset = "0x3B913E0", VA = "0x3B913E0")]
	private long DecodeZigZag64(ulong value)
	{
		return default(long);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x3B8C1C0", Offset = "0x3B8C1C0", VA = "0x3B8C1C0")]
	internal void Write(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x3B91400", Offset = "0x3B91400", VA = "0x3B91400")]
	private void Write(StreamBuffer stream, object value, GpType gpType, bool writeType)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x3B93F10", Offset = "0x3B93F10", VA = "0x3B93F10", Slot = "9")]
	public override void SerializeEventData(StreamBuffer stream, EventData serObject, bool setType)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x3B94180", Offset = "0x3B94180", VA = "0x3B94180")]
	private void WriteParameterTable(StreamBuffer stream, Dictionary<byte, object> parameters)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x3B93F70", Offset = "0x3B93F70", VA = "0x3B93F70")]
	private void WriteParameterTable(StreamBuffer stream, ParameterDictionary parameters)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x3B93460", Offset = "0x3B93460", VA = "0x3B93460")]
	private void SerializeOperationRequest(StreamBuffer stream, OperationRequest operation, bool setType)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x3B943D0", Offset = "0x3B943D0", VA = "0x3B943D0", Slot = "10")]
	[Obsolete("Use ParameterDictionary instead.")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, Dictionary<byte, object> parameters, bool setType)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x3B94430", Offset = "0x3B94430", VA = "0x3B94430", Slot = "11")]
	public override void SerializeOperationRequest(StreamBuffer stream, byte operationCode, ParameterDictionary parameters, bool setType)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x3B94490", Offset = "0x3B94490", VA = "0x3B94490", Slot = "12")]
	public override void SerializeOperationResponse(StreamBuffer stream, OperationResponse serObject, bool setType)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x3B92180", Offset = "0x3B92180", VA = "0x3B92180")]
	internal void WriteByte(StreamBuffer stream, byte value, bool writeType)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x3B92150", Offset = "0x3B92150", VA = "0x3B92150")]
	internal void WriteBoolean(StreamBuffer stream, bool value, bool writeType)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3B94540", Offset = "0x3B94540", VA = "0x3B94540")]
	internal void WriteUShort(StreamBuffer stream, ushort value)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x3B8C280", Offset = "0x3B8C280", VA = "0x3B8C280")]
	internal void WriteInt16(StreamBuffer stream, short value, bool writeType)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x3B92560", Offset = "0x3B92560", VA = "0x3B92560")]
	internal void WriteDouble(StreamBuffer stream, double value, bool writeType)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x3B92400", Offset = "0x3B92400", VA = "0x3B92400")]
	internal void WriteSingle(StreamBuffer stream, float value, bool writeType)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3B8C2F0", Offset = "0x3B8C2F0", VA = "0x3B8C2F0")]
	internal void WriteString(StreamBuffer stream, string value, bool writeType)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x3B93030", Offset = "0x3B93030", VA = "0x3B93030")]
	private void WriteHashtable(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x3B934A0", Offset = "0x3B934A0", VA = "0x3B934A0")]
	internal void WriteByteArray(StreamBuffer stream, byte[] value, bool writeType)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x3B92050", Offset = "0x3B92050", VA = "0x3B92050")]
	private void WriteArraySegmentByte(StreamBuffer stream, ArraySegment<byte> seg, bool writeType)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x3B91FE0", Offset = "0x3B91FE0", VA = "0x3B91FE0")]
	private void WriteByteArraySlice(StreamBuffer stream, ByteArraySlice buffer, bool writeType)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x3B93320", Offset = "0x3B93320", VA = "0x3B93320")]
	internal void WriteInt32ArrayCompressed(StreamBuffer stream, int[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3B933C0", Offset = "0x3B933C0", VA = "0x3B933C0")]
	private void WriteInt64ArrayCompressed(StreamBuffer stream, long[] values, bool setType)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3B93AF0", Offset = "0x3B93AF0", VA = "0x3B93AF0")]
	internal void WriteBoolArray(StreamBuffer stream, bool[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3B93A50", Offset = "0x3B93A50", VA = "0x3B93A50")]
	internal void WriteInt16Array(StreamBuffer stream, short[] value, bool writeType)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3B938D0", Offset = "0x3B938D0", VA = "0x3B938D0")]
	internal void WriteSingleArray(StreamBuffer stream, float[] values, bool setType)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3B93840", Offset = "0x3B93840", VA = "0x3B93840")]
	internal void WriteDoubleArray(StreamBuffer stream, double[] values, bool setType)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3B93D90", Offset = "0x3B93D90", VA = "0x3B93D90")]
	internal void WriteStringArray(StreamBuffer stream, object value0, bool writeType)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3B94570", Offset = "0x3B94570", VA = "0x3B94570")]
	private void WriteObjectArray(StreamBuffer stream, object array, bool writeType)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3B93500", Offset = "0x3B93500", VA = "0x3B93500")]
	private void WriteObjectArray(StreamBuffer stream, IList array, bool writeType)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x3B92E30", Offset = "0x3B92E30", VA = "0x3B92E30")]
	private void WriteArrayInArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x3B945F0", Offset = "0x3B945F0", VA = "0x3B945F0")]
	private void WriteCustomTypeBody(CustomType customType, StreamBuffer stream, object value)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3B926C0", Offset = "0x3B926C0", VA = "0x3B926C0")]
	private void WriteCustomType(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x3B928C0", Offset = "0x3B928C0", VA = "0x3B928C0")]
	private void WriteCustomTypeArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x3B94A20", Offset = "0x3B94A20", VA = "0x3B94A20")]
	private bool WriteArrayHeader(StreamBuffer stream, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x3B94AD0", Offset = "0x3B94AD0", VA = "0x3B94AD0")]
	private void WriteDictionaryElements(StreamBuffer stream, IDictionary dictionary, GpType keyWriteType, GpType valueWriteType)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x3B92F60", Offset = "0x3B92F60", VA = "0x3B92F60")]
	private void WriteDictionary(StreamBuffer stream, object dict, bool setType)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3B94FC0", Offset = "0x3B94FC0", VA = "0x3B94FC0")]
	private void WriteDictionaryHeader(StreamBuffer stream, Type type, out GpType keyWriteType, out GpType valueWriteType)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3B95330", Offset = "0x3B95330", VA = "0x3B95330")]
	private bool WriteArrayType(StreamBuffer stream, Type type, out GpType writeType)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3B93960", Offset = "0x3B93960", VA = "0x3B93960")]
	private void WriteHashtableArray(StreamBuffer stream, object value, bool writeType)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3B93740", Offset = "0x3B93740", VA = "0x3B93740")]
	private void WriteDictionaryArray(StreamBuffer stream, IDictionary[] dictArray, bool writeType)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x3B94560", Offset = "0x3B94560", VA = "0x3B94560")]
	private void WriteIntLength(StreamBuffer stream, int value)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x3B95870", Offset = "0x3B95870", VA = "0x3B95870")]
	private void WriteVarInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3B921D0", Offset = "0x3B921D0", VA = "0x3B921D0")]
	private void WriteCompressedInt32(StreamBuffer stream, int value, bool writeType)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x3B922E0", Offset = "0x3B922E0", VA = "0x3B922E0")]
	private void WriteCompressedInt64(StreamBuffer stream, long value, bool writeType)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x3B95730", Offset = "0x3B95730", VA = "0x3B95730")]
	private void WriteCompressedUInt32(StreamBuffer stream, uint value)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x3B949C0", Offset = "0x3B949C0", VA = "0x3B949C0")]
	private int WriteCompressedUInt32(byte[] buffer, uint value)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x3B958A0", Offset = "0x3B958A0", VA = "0x3B958A0")]
	private void WriteCompressedUInt64(StreamBuffer stream, ulong value)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x3B95880", Offset = "0x3B95880", VA = "0x3B95880")]
	private uint EncodeZigZag32(int value)
	{
		return default(uint);
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x3B95890", Offset = "0x3B95890", VA = "0x3B95890")]
	private ulong EncodeZigZag64(long value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x3B95A50", Offset = "0x3B95A50", VA = "0x3B95A50")]
	public Protocol18()
	{
	}
}
