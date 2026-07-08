using System.Collections;
using System.IO;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041A")]
internal sealed class __BinaryWriter
{
	[Token(Token = "0x4001145")]
	[FieldOffset(Offset = "0x10")]
	internal Stream sout;

	[Token(Token = "0x4001146")]
	[FieldOffset(Offset = "0x18")]
	internal FormatterTypeStyle formatterTypeStyle;

	[Token(Token = "0x4001147")]
	[FieldOffset(Offset = "0x20")]
	internal Hashtable objectMapTable;

	[Token(Token = "0x4001148")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter;

	[Token(Token = "0x4001149")]
	[FieldOffset(Offset = "0x30")]
	internal BinaryWriter dataWriter;

	[Token(Token = "0x400114A")]
	[FieldOffset(Offset = "0x38")]
	internal int m_nestedObjectCount;

	[Token(Token = "0x400114B")]
	[FieldOffset(Offset = "0x3C")]
	private int nullCount;

	[Token(Token = "0x400114C")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall binaryMethodCall;

	[Token(Token = "0x400114D")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn binaryMethodReturn;

	[Token(Token = "0x400114E")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject;

	[Token(Token = "0x400114F")]
	[FieldOffset(Offset = "0x58")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap binaryObjectWithMap;

	[Token(Token = "0x4001150")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped binaryObjectWithMapTyped;

	[Token(Token = "0x4001151")]
	[FieldOffset(Offset = "0x68")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectString binaryObjectString;

	[Token(Token = "0x4001152")]
	[FieldOffset(Offset = "0x70")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryArray binaryArray;

	[Token(Token = "0x4001153")]
	[FieldOffset(Offset = "0x78")]
	private byte[] byteBuffer;

	[Token(Token = "0x4001154")]
	[FieldOffset(Offset = "0x80")]
	private int chunkSize;

	[Token(Token = "0x4001155")]
	[FieldOffset(Offset = "0x88")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped;

	[Token(Token = "0x4001156")]
	[FieldOffset(Offset = "0x90")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped;

	[Token(Token = "0x4001157")]
	[FieldOffset(Offset = "0x98")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull;

	[Token(Token = "0x4001158")]
	[FieldOffset(Offset = "0xA0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference;

	[Token(Token = "0x4001159")]
	[FieldOffset(Offset = "0xA8")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssembly binaryAssembly;

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x4EC3200", Offset = "0x4EC3200", VA = "0x4EC3200")]
	internal __BinaryWriter(Stream sout, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, FormatterTypeStyle formatterTypeStyle)
	{
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x4EC3690", Offset = "0x4EC3690", VA = "0x4EC3690")]
	internal void WriteBegin()
	{
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x4EC36A0", Offset = "0x4EC36A0", VA = "0x4EC36A0")]
	internal void WriteEnd()
	{
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x4EC36D0", Offset = "0x4EC36D0", VA = "0x4EC36D0")]
	internal void WriteBoolean(bool value)
	{
	}

	[Token(Token = "0x60020B5")]
	[Address(RVA = "0x4EBBD80", Offset = "0x4EBBD80", VA = "0x4EBBD80")]
	internal void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60020B6")]
	[Address(RVA = "0x4EC3700", Offset = "0x4EC3700", VA = "0x4EC3700")]
	private void WriteBytes(byte[] value)
	{
	}

	[Token(Token = "0x60020B7")]
	[Address(RVA = "0x4EC3730", Offset = "0x4EC3730", VA = "0x4EC3730")]
	private void WriteBytes(byte[] byteA, int offset, int size)
	{
	}

	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x4EC3760", Offset = "0x4EC3760", VA = "0x4EC3760")]
	internal void WriteChar(char value)
	{
	}

	[Token(Token = "0x60020B9")]
	[Address(RVA = "0x4EC3790", Offset = "0x4EC3790", VA = "0x4EC3790")]
	internal void WriteChars(char[] value)
	{
	}

	[Token(Token = "0x60020BA")]
	[Address(RVA = "0x4EC37C0", Offset = "0x4EC37C0", VA = "0x4EC37C0")]
	internal void WriteDecimal(decimal value)
	{
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x4EC3870", Offset = "0x4EC3870", VA = "0x4EC3870")]
	internal void WriteSingle(float value)
	{
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x4EC38A0", Offset = "0x4EC38A0", VA = "0x4EC38A0")]
	internal void WriteDouble(double value)
	{
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x4EC38D0", Offset = "0x4EC38D0", VA = "0x4EC38D0")]
	internal void WriteInt16(short value)
	{
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x4EBBDE0", Offset = "0x4EBBDE0", VA = "0x4EBBDE0")]
	internal void WriteInt32(int value)
	{
	}

	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x4EC3900", Offset = "0x4EC3900", VA = "0x4EC3900")]
	internal void WriteInt64(long value)
	{
	}

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x4EC3930", Offset = "0x4EC3930", VA = "0x4EC3930")]
	internal void WriteSByte(sbyte value)
	{
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x4EBBDB0", Offset = "0x4EBBDB0", VA = "0x4EBBDB0")]
	internal void WriteString(string value)
	{
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x4EC3960", Offset = "0x4EC3960", VA = "0x4EC3960")]
	internal void WriteTimeSpan(TimeSpan value)
	{
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x4EC39F0", Offset = "0x4EC39F0", VA = "0x4EC39F0")]
	internal void WriteDateTime(DateTime value)
	{
	}

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x4EC3A80", Offset = "0x4EC3A80", VA = "0x4EC3A80")]
	internal void WriteUInt16(ushort value)
	{
	}

	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x4EC3AB0", Offset = "0x4EC3AB0", VA = "0x4EC3AB0")]
	internal void WriteUInt32(uint value)
	{
	}

	[Token(Token = "0x60020C6")]
	[Address(RVA = "0x4EC3AE0", Offset = "0x4EC3AE0", VA = "0x4EC3AE0")]
	internal void WriteUInt64(ulong value)
	{
	}

	[Token(Token = "0x60020C7")]
	[Address(RVA = "0x4EC3B10", Offset = "0x4EC3B10", VA = "0x4EC3B10")]
	internal void WriteObjectEnd(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x4EC3B20", Offset = "0x4EC3B20", VA = "0x4EC3B20")]
	internal void WriteSerializationHeaderEnd()
	{
	}

	[Token(Token = "0x60020C9")]
	[Address(RVA = "0x4EC3BA0", Offset = "0x4EC3BA0", VA = "0x4EC3BA0")]
	internal void WriteSerializationHeader(int topId, int headerId, int minorVersion, int majorVersion)
	{
	}

	[Token(Token = "0x60020CA")]
	[Address(RVA = "0x4EC3C40", Offset = "0x4EC3C40", VA = "0x4EC3C40")]
	internal void WriteMethodCall()
	{
	}

	[Token(Token = "0x60020CB")]
	[Address(RVA = "0x4EC3CD0", Offset = "0x4EC3CD0", VA = "0x4EC3CD0")]
	internal void WriteMethodReturn()
	{
	}

	[Token(Token = "0x60020CC")]
	[Address(RVA = "0x4EC3D60", Offset = "0x4EC3D60", VA = "0x4EC3D60")]
	internal void WriteObject(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, int numMembers, string[] memberNames, Type[] memberTypes, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x60020CD")]
	[Address(RVA = "0x4EC46A0", Offset = "0x4EC46A0", VA = "0x4EC46A0")]
	internal void WriteObjectString(int objectId, string value)
	{
	}

	[Token(Token = "0x60020CE")]
	[Address(RVA = "0x4EC47A0", Offset = "0x4EC47A0", VA = "0x4EC47A0")]
	internal void WriteSingleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound, Array array)
	{
	}

	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x4EC4BA0", Offset = "0x4EC4BA0", VA = "0x4EC4BA0")]
	private void WriteArrayAsBytes(Array array, int typeLength)
	{
	}

	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x4EC4CF0", Offset = "0x4EC4CF0", VA = "0x4EC4CF0")]
	internal void WriteJaggedArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound)
	{
	}

	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x4EC4F10", Offset = "0x4EC4F10", VA = "0x4EC4F10")]
	internal void WriteRectangleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int rank, int[] lengthA, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x4EC50D0", Offset = "0x4EC50D0", VA = "0x4EC50D0")]
	internal void WriteObjectByteArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound, byte[] byteA)
	{
	}

	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x4EC5130", Offset = "0x4EC5130", VA = "0x4EC5130")]
	internal void WriteMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object value)
	{
	}

	[Token(Token = "0x60020D4")]
	[Address(RVA = "0x4EC52D0", Offset = "0x4EC52D0", VA = "0x4EC52D0")]
	internal void WriteNullMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x60020D5")]
	[Address(RVA = "0x4EC5380", Offset = "0x4EC5380", VA = "0x4EC5380")]
	internal void WriteMemberObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, int idRef)
	{
	}

	[Token(Token = "0x60020D6")]
	[Address(RVA = "0x4EC5450", Offset = "0x4EC5450", VA = "0x4EC5450")]
	internal void WriteMemberNested(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo)
	{
	}

	[Token(Token = "0x60020D7")]
	[Address(RVA = "0x4EC5470", Offset = "0x4EC5470", VA = "0x4EC5470")]
	internal void WriteMemberString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string value)
	{
	}

	[Token(Token = "0x60020D8")]
	[Address(RVA = "0x4EC54C0", Offset = "0x4EC54C0", VA = "0x4EC54C0")]
	internal void WriteItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object value)
	{
	}

	[Token(Token = "0x60020D9")]
	[Address(RVA = "0x4EC5500", Offset = "0x4EC5500", VA = "0x4EC5500")]
	internal void WriteNullItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x60020DA")]
	[Address(RVA = "0x4EC5510", Offset = "0x4EC5510", VA = "0x4EC5510")]
	internal void WriteDelayedNullItem()
	{
	}

	[Token(Token = "0x60020DB")]
	[Address(RVA = "0x4EC5520", Offset = "0x4EC5520", VA = "0x4EC5520")]
	internal void WriteItemEnd()
	{
	}

	[Token(Token = "0x60020DC")]
	[Address(RVA = "0x4EC4430", Offset = "0x4EC4430", VA = "0x4EC4430")]
	private void InternalWriteItemNull()
	{
	}

	[Token(Token = "0x60020DD")]
	[Address(RVA = "0x4EC5530", Offset = "0x4EC5530", VA = "0x4EC5530")]
	internal void WriteItemObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, int idRef)
	{
	}

	[Token(Token = "0x60020DE")]
	[Address(RVA = "0x4EC5560", Offset = "0x4EC5560", VA = "0x4EC5560")]
	internal void WriteAssembly(Type type, string assemblyString, int assemId, bool isNew)
	{
	}

	[Token(Token = "0x60020DF")]
	[Address(RVA = "0x4EBCA10", Offset = "0x4EBCA10", VA = "0x4EBCA10")]
	internal void WriteValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, object value)
	{
	}
}
