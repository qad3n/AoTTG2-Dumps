// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.IO;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000449")]
internal sealed class __BinaryWriter
{
	[Token(Token = "0x4001147")]
	[FieldOffset(Offset = "0x10")]
	internal Stream sout;

	[Token(Token = "0x4001148")]
	[FieldOffset(Offset = "0x18")]
	internal FormatterTypeStyle formatterTypeStyle;

	[Token(Token = "0x4001149")]
	[FieldOffset(Offset = "0x20")]
	internal Hashtable objectMapTable;

	[Token(Token = "0x400114A")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter;

	[Token(Token = "0x400114B")]
	[FieldOffset(Offset = "0x30")]
	internal BinaryWriter dataWriter;

	[Token(Token = "0x400114C")]
	[FieldOffset(Offset = "0x38")]
	internal int m_nestedObjectCount;

	[Token(Token = "0x400114D")]
	[FieldOffset(Offset = "0x3C")]
	private int nullCount;

	[Token(Token = "0x400114E")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall binaryMethodCall;

	[Token(Token = "0x400114F")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn binaryMethodReturn;

	[Token(Token = "0x4001150")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject;

	[Token(Token = "0x4001151")]
	[FieldOffset(Offset = "0x58")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap binaryObjectWithMap;

	[Token(Token = "0x4001152")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped binaryObjectWithMapTyped;

	[Token(Token = "0x4001153")]
	[FieldOffset(Offset = "0x68")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectString binaryObjectString;

	[Token(Token = "0x4001154")]
	[FieldOffset(Offset = "0x70")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryArray binaryArray;

	[Token(Token = "0x4001155")]
	[FieldOffset(Offset = "0x78")]
	private byte[] byteBuffer;

	[Token(Token = "0x4001156")]
	[FieldOffset(Offset = "0x80")]
	private int chunkSize;

	[Token(Token = "0x4001157")]
	[FieldOffset(Offset = "0x88")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped;

	[Token(Token = "0x4001158")]
	[FieldOffset(Offset = "0x90")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped;

	[Token(Token = "0x4001159")]
	[FieldOffset(Offset = "0x98")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull;

	[Token(Token = "0x400115A")]
	[FieldOffset(Offset = "0xA0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference;

	[Token(Token = "0x400115B")]
	[FieldOffset(Offset = "0xA8")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssembly binaryAssembly;

	[Token(Token = "0x6002120")]
	[Address(RVA = "0x1A275F0", Offset = "0x1A25BF0", VA = "0x181A275F0")]
	internal __BinaryWriter(Stream sout, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, FormatterTypeStyle formatterTypeStyle)
	{
	}

	[Token(Token = "0x6002121")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void WriteBegin()
	{
	}

	[Token(Token = "0x6002122")]
	[Address(RVA = "0x1A24E70", Offset = "0x1A23470", VA = "0x181A24E70")]
	internal void WriteEnd()
	{
	}

	[Token(Token = "0x6002123")]
	[Address(RVA = "0x1A24BE0", Offset = "0x1A231E0", VA = "0x181A24BE0")]
	internal void WriteBoolean(bool value)
	{
	}

	[Token(Token = "0x6002124")]
	[Address(RVA = "0x1A24C10", Offset = "0x1A23210", VA = "0x181A24C10")]
	internal void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6002125")]
	[Address(RVA = "0x1A24C40", Offset = "0x1A23240", VA = "0x181A24C40")]
	private void WriteBytes(byte[] value)
	{
	}

	[Token(Token = "0x6002126")]
	[Address(RVA = "0x1A24C70", Offset = "0x1A23270", VA = "0x181A24C70")]
	private void WriteBytes(byte[] byteA, int offset, int size)
	{
	}

	[Token(Token = "0x6002127")]
	[Address(RVA = "0x1A24CA0", Offset = "0x1A232A0", VA = "0x181A24CA0")]
	internal void WriteChar(char value)
	{
	}

	[Token(Token = "0x6002128")]
	[Address(RVA = "0x1A24CD0", Offset = "0x1A232D0", VA = "0x181A24CD0")]
	internal void WriteChars(char[] value)
	{
	}

	[Token(Token = "0x6002129")]
	[Address(RVA = "0x1A24D70", Offset = "0x1A23370", VA = "0x181A24D70")]
	internal void WriteDecimal(decimal value)
	{
	}

	[Token(Token = "0x600212A")]
	[Address(RVA = "0x1A26BF0", Offset = "0x1A251F0", VA = "0x181A26BF0")]
	internal void WriteSingle(float value)
	{
	}

	[Token(Token = "0x600212B")]
	[Address(RVA = "0x1A24E40", Offset = "0x1A23440", VA = "0x181A24E40")]
	internal void WriteDouble(double value)
	{
	}

	[Token(Token = "0x600212C")]
	[Address(RVA = "0x1A24EA0", Offset = "0x1A234A0", VA = "0x181A24EA0")]
	internal void WriteInt16(short value)
	{
	}

	[Token(Token = "0x600212D")]
	[Address(RVA = "0x1A24ED0", Offset = "0x1A234D0", VA = "0x181A24ED0")]
	internal void WriteInt32(int value)
	{
	}

	[Token(Token = "0x600212E")]
	[Address(RVA = "0x1A24F00", Offset = "0x1A23500", VA = "0x181A24F00")]
	internal void WriteInt64(long value)
	{
	}

	[Token(Token = "0x600212F")]
	[Address(RVA = "0x1A24C10", Offset = "0x1A23210", VA = "0x181A24C10")]
	internal void WriteSByte(sbyte value)
	{
	}

	[Token(Token = "0x6002130")]
	[Address(RVA = "0x1A26C20", Offset = "0x1A25220", VA = "0x181A26C20")]
	internal void WriteString(string value)
	{
	}

	[Token(Token = "0x6002131")]
	[Address(RVA = "0x1A26C50", Offset = "0x1A25250", VA = "0x181A26C50")]
	internal void WriteTimeSpan(TimeSpan value)
	{
	}

	[Token(Token = "0x6002132")]
	[Address(RVA = "0x1A24D00", Offset = "0x1A23300", VA = "0x181A24D00")]
	internal void WriteDateTime(DateTime value)
	{
	}

	[Token(Token = "0x6002133")]
	[Address(RVA = "0x1A26CC0", Offset = "0x1A252C0", VA = "0x181A26CC0")]
	internal void WriteUInt16(ushort value)
	{
	}

	[Token(Token = "0x6002134")]
	[Address(RVA = "0x1A26CF0", Offset = "0x1A252F0", VA = "0x181A26CF0")]
	internal void WriteUInt32(uint value)
	{
	}

	[Token(Token = "0x6002135")]
	[Address(RVA = "0x1A26D20", Offset = "0x1A25320", VA = "0x181A26D20")]
	internal void WriteUInt64(ulong value)
	{
	}

	[Token(Token = "0x6002136")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void WriteObjectEnd(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x6002137")]
	[Address(RVA = "0x1A26520", Offset = "0x1A24B20", VA = "0x181A26520")]
	internal void WriteSerializationHeaderEnd()
	{
	}

	[Token(Token = "0x6002138")]
	[Address(RVA = "0x1A265A0", Offset = "0x1A24BA0", VA = "0x181A265A0")]
	internal void WriteSerializationHeader(int topId, int headerId, int minorVersion, int majorVersion)
	{
	}

	[Token(Token = "0x6002139")]
	[Address(RVA = "0x1A257E0", Offset = "0x1A23DE0", VA = "0x181A257E0")]
	internal void WriteMethodCall()
	{
	}

	[Token(Token = "0x600213A")]
	[Address(RVA = "0x1A25870", Offset = "0x1A23E70", VA = "0x181A25870")]
	internal void WriteMethodReturn()
	{
	}

	[Token(Token = "0x600213B")]
	[Address(RVA = "0x1A25B40", Offset = "0x1A24140", VA = "0x181A25B40")]
	internal void WriteObject(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, int numMembers, string[] memberNames, Type[] memberTypes, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x600213C")]
	[Address(RVA = "0x1A25A30", Offset = "0x1A24030", VA = "0x181A25A30")]
	internal void WriteObjectString(int objectId, string value)
	{
	}

	[Token(Token = "0x600213D")]
	[Address(RVA = "0x1A266B0", Offset = "0x1A24CB0", VA = "0x181A266B0")]
	internal void WriteSingleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound, Array array)
	{
	}

	[Token(Token = "0x600213E")]
	[Address(RVA = "0x1A24950", Offset = "0x1A22F50", VA = "0x181A24950")]
	private void WriteArrayAsBytes(Array array, int typeLength)
	{
	}

	[Token(Token = "0x600213F")]
	[Address(RVA = "0x1A251F0", Offset = "0x1A237F0", VA = "0x181A251F0")]
	internal void WriteJaggedArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound)
	{
	}

	[Token(Token = "0x6002140")]
	[Address(RVA = "0x1A26350", Offset = "0x1A24950", VA = "0x181A26350")]
	internal void WriteRectangleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int rank, int[] lengthA, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x6002141")]
	[Address(RVA = "0x1A259E0", Offset = "0x1A23FE0", VA = "0x181A259E0")]
	internal void WriteObjectByteArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound, byte[] byteA)
	{
	}

	[Token(Token = "0x6002142")]
	[Address(RVA = "0x1A25630", Offset = "0x1A23C30", VA = "0x181A25630")]
	internal void WriteMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object value)
	{
	}

	[Token(Token = "0x6002143")]
	[Address(RVA = "0x1A25910", Offset = "0x1A23F10", VA = "0x181A25910")]
	internal void WriteNullMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x6002144")]
	[Address(RVA = "0x1A25420", Offset = "0x1A23A20", VA = "0x181A25420")]
	internal void WriteMemberObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, int idRef)
	{
	}

	[Token(Token = "0x6002145")]
	[Address(RVA = "0x1A253F0", Offset = "0x1A239F0", VA = "0x181A253F0")]
	internal void WriteMemberNested(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo)
	{
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x1A25520", Offset = "0x1A23B20", VA = "0x181A25520")]
	internal void WriteMemberString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string value)
	{
	}

	[Token(Token = "0x6002147")]
	[Address(RVA = "0x1A25040", Offset = "0x1A23640", VA = "0x181A25040")]
	internal void WriteItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object value)
	{
	}

	[Token(Token = "0x6002148")]
	[Address(RVA = "0x1A25900", Offset = "0x1A23F00", VA = "0x181A25900")]
	internal void WriteNullItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x6002149")]
	[Address(RVA = "0x1A24E30", Offset = "0x1A23430", VA = "0x181A24E30")]
	internal void WriteDelayedNullItem()
	{
	}

	[Token(Token = "0x600214A")]
	[Address(RVA = "0x1A24F30", Offset = "0x1A23530", VA = "0x181A24F30")]
	internal void WriteItemEnd()
	{
	}

	[Token(Token = "0x600214B")]
	[Address(RVA = "0x1A248A0", Offset = "0x1A22EA0", VA = "0x181A248A0")]
	private void InternalWriteItemNull()
	{
	}

	[Token(Token = "0x600214C")]
	[Address(RVA = "0x1A24F40", Offset = "0x1A23540", VA = "0x181A24F40")]
	internal void WriteItemObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, int idRef)
	{
	}

	[Token(Token = "0x600214D")]
	[Address(RVA = "0x1A24AA0", Offset = "0x1A230A0", VA = "0x181A24AA0")]
	internal void WriteAssembly(Type type, string assemblyString, int assemId, bool isNew)
	{
	}

	[Token(Token = "0x600214E")]
	[Address(RVA = "0x1A26D50", Offset = "0x1A25350", VA = "0x181A26D50")]
	internal void WriteValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, object value)
	{
	}
}
