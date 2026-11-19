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

[Token(Token = "0x2000422")]
internal sealed class __BinaryWriter
{
	[Token(Token = "0x40010A7")]
	[FieldOffset(Offset = "0x10")]
	internal Stream sout;

	[Token(Token = "0x40010A8")]
	[FieldOffset(Offset = "0x18")]
	internal FormatterTypeStyle formatterTypeStyle;

	[Token(Token = "0x40010A9")]
	[FieldOffset(Offset = "0x20")]
	internal Hashtable objectMapTable;

	[Token(Token = "0x40010AA")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter;

	[Token(Token = "0x40010AB")]
	[FieldOffset(Offset = "0x30")]
	internal BinaryWriter dataWriter;

	[Token(Token = "0x40010AC")]
	[FieldOffset(Offset = "0x38")]
	internal int m_nestedObjectCount;

	[Token(Token = "0x40010AD")]
	[FieldOffset(Offset = "0x3C")]
	private int nullCount;

	[Token(Token = "0x40010AE")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall binaryMethodCall;

	[Token(Token = "0x40010AF")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn binaryMethodReturn;

	[Token(Token = "0x40010B0")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject;

	[Token(Token = "0x40010B1")]
	[FieldOffset(Offset = "0x58")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap binaryObjectWithMap;

	[Token(Token = "0x40010B2")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped binaryObjectWithMapTyped;

	[Token(Token = "0x40010B3")]
	[FieldOffset(Offset = "0x68")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectString binaryObjectString;

	[Token(Token = "0x40010B4")]
	[FieldOffset(Offset = "0x70")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryArray binaryArray;

	[Token(Token = "0x40010B5")]
	[FieldOffset(Offset = "0x78")]
	private byte[] byteBuffer;

	[Token(Token = "0x40010B6")]
	[FieldOffset(Offset = "0x80")]
	private int chunkSize;

	[Token(Token = "0x40010B7")]
	[FieldOffset(Offset = "0x88")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped;

	[Token(Token = "0x40010B8")]
	[FieldOffset(Offset = "0x90")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped;

	[Token(Token = "0x40010B9")]
	[FieldOffset(Offset = "0x98")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull;

	[Token(Token = "0x40010BA")]
	[FieldOffset(Offset = "0xA0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference;

	[Token(Token = "0x40010BB")]
	[FieldOffset(Offset = "0xA8")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssembly binaryAssembly;

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x53AFEF0", Offset = "0x53AEEF0", VA = "0x53AFEF0")]
	internal __BinaryWriter(Stream sout, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, FormatterTypeStyle formatterTypeStyle)
	{
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x53B02F0", Offset = "0x53AF2F0", VA = "0x53B02F0")]
	internal void WriteBegin()
	{
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x53B0300", Offset = "0x53AF300", VA = "0x53B0300")]
	internal void WriteEnd()
	{
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x53B0330", Offset = "0x53AF330", VA = "0x53B0330")]
	internal void WriteBoolean(bool value)
	{
	}

	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x53A8D60", Offset = "0x53A7D60", VA = "0x53A8D60")]
	internal void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x53B0360", Offset = "0x53AF360", VA = "0x53B0360")]
	private void WriteBytes(byte[] value)
	{
	}

	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x53B0390", Offset = "0x53AF390", VA = "0x53B0390")]
	private void WriteBytes(byte[] byteA, int offset, int size)
	{
	}

	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x53B03C0", Offset = "0x53AF3C0", VA = "0x53B03C0")]
	internal void WriteChar(char value)
	{
	}

	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x53B03F0", Offset = "0x53AF3F0", VA = "0x53B03F0")]
	internal void WriteChars(char[] value)
	{
	}

	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x53B0420", Offset = "0x53AF420", VA = "0x53B0420")]
	internal void WriteDecimal(decimal value)
	{
	}

	[Token(Token = "0x6002100")]
	[Address(RVA = "0x53B04D0", Offset = "0x53AF4D0", VA = "0x53B04D0")]
	internal void WriteSingle(float value)
	{
	}

	[Token(Token = "0x6002101")]
	[Address(RVA = "0x53B0500", Offset = "0x53AF500", VA = "0x53B0500")]
	internal void WriteDouble(double value)
	{
	}

	[Token(Token = "0x6002102")]
	[Address(RVA = "0x53B0530", Offset = "0x53AF530", VA = "0x53B0530")]
	internal void WriteInt16(short value)
	{
	}

	[Token(Token = "0x6002103")]
	[Address(RVA = "0x53A8DC0", Offset = "0x53A7DC0", VA = "0x53A8DC0")]
	internal void WriteInt32(int value)
	{
	}

	[Token(Token = "0x6002104")]
	[Address(RVA = "0x53B0560", Offset = "0x53AF560", VA = "0x53B0560")]
	internal void WriteInt64(long value)
	{
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x53B0590", Offset = "0x53AF590", VA = "0x53B0590")]
	internal void WriteSByte(sbyte value)
	{
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x53A8D90", Offset = "0x53A7D90", VA = "0x53A8D90")]
	internal void WriteString(string value)
	{
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x53B05C0", Offset = "0x53AF5C0", VA = "0x53B05C0")]
	internal void WriteTimeSpan(TimeSpan value)
	{
	}

	[Token(Token = "0x6002108")]
	[Address(RVA = "0x53B0650", Offset = "0x53AF650", VA = "0x53B0650")]
	internal void WriteDateTime(DateTime value)
	{
	}

	[Token(Token = "0x6002109")]
	[Address(RVA = "0x53B06E0", Offset = "0x53AF6E0", VA = "0x53B06E0")]
	internal void WriteUInt16(ushort value)
	{
	}

	[Token(Token = "0x600210A")]
	[Address(RVA = "0x53B0710", Offset = "0x53AF710", VA = "0x53B0710")]
	internal void WriteUInt32(uint value)
	{
	}

	[Token(Token = "0x600210B")]
	[Address(RVA = "0x53B0740", Offset = "0x53AF740", VA = "0x53B0740")]
	internal void WriteUInt64(ulong value)
	{
	}

	[Token(Token = "0x600210C")]
	[Address(RVA = "0x53B0770", Offset = "0x53AF770", VA = "0x53B0770")]
	internal void WriteObjectEnd(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x600210D")]
	[Address(RVA = "0x53B0780", Offset = "0x53AF780", VA = "0x53B0780")]
	internal void WriteSerializationHeaderEnd()
	{
	}

	[Token(Token = "0x600210E")]
	[Address(RVA = "0x53B0800", Offset = "0x53AF800", VA = "0x53B0800")]
	internal void WriteSerializationHeader(int topId, int headerId, int minorVersion, int majorVersion)
	{
	}

	[Token(Token = "0x600210F")]
	[Address(RVA = "0x53B0890", Offset = "0x53AF890", VA = "0x53B0890")]
	internal void WriteMethodCall()
	{
	}

	[Token(Token = "0x6002110")]
	[Address(RVA = "0x53B0910", Offset = "0x53AF910", VA = "0x53B0910")]
	internal void WriteMethodReturn()
	{
	}

	[Token(Token = "0x6002111")]
	[Address(RVA = "0x53B0990", Offset = "0x53AF990", VA = "0x53B0990")]
	internal void WriteObject(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, int numMembers, string[] memberNames, Type[] memberTypes, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x6002112")]
	[Address(RVA = "0x53B1430", Offset = "0x53B0430", VA = "0x53B1430")]
	internal void WriteObjectString(int objectId, string value)
	{
	}

	[Token(Token = "0x6002113")]
	[Address(RVA = "0x53B1530", Offset = "0x53B0530", VA = "0x53B1530")]
	internal void WriteSingleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound, Array array)
	{
	}

	[Token(Token = "0x6002114")]
	[Address(RVA = "0x53B18E0", Offset = "0x53B08E0", VA = "0x53B18E0")]
	private void WriteArrayAsBytes(Array array, int typeLength)
	{
	}

	[Token(Token = "0x6002115")]
	[Address(RVA = "0x53B1A30", Offset = "0x53B0A30", VA = "0x53B1A30")]
	internal void WriteJaggedArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound)
	{
	}

	[Token(Token = "0x6002116")]
	[Address(RVA = "0x53B1C40", Offset = "0x53B0C40", VA = "0x53B1C40")]
	internal void WriteRectangleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int rank, int[] lengthA, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x6002117")]
	[Address(RVA = "0x53B1E00", Offset = "0x53B0E00", VA = "0x53B1E00")]
	internal void WriteObjectByteArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, int length, int lowerBound, byte[] byteA)
	{
	}

	[Token(Token = "0x6002118")]
	[Address(RVA = "0x53B1E60", Offset = "0x53B0E60", VA = "0x53B1E60")]
	internal void WriteMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object value)
	{
	}

	[Token(Token = "0x6002119")]
	[Address(RVA = "0x53B2000", Offset = "0x53B1000", VA = "0x53B2000")]
	internal void WriteNullMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x600211A")]
	[Address(RVA = "0x53B20B0", Offset = "0x53B10B0", VA = "0x53B20B0")]
	internal void WriteMemberObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, int idRef)
	{
	}

	[Token(Token = "0x600211B")]
	[Address(RVA = "0x53B2180", Offset = "0x53B1180", VA = "0x53B2180")]
	internal void WriteMemberNested(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo)
	{
	}

	[Token(Token = "0x600211C")]
	[Address(RVA = "0x53B21A0", Offset = "0x53B11A0", VA = "0x53B21A0")]
	internal void WriteMemberString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string value)
	{
	}

	[Token(Token = "0x600211D")]
	[Address(RVA = "0x53B21F0", Offset = "0x53B11F0", VA = "0x53B21F0")]
	internal void WriteItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object value)
	{
	}

	[Token(Token = "0x600211E")]
	[Address(RVA = "0x53B2230", Offset = "0x53B1230", VA = "0x53B2230")]
	internal void WriteNullItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x600211F")]
	[Address(RVA = "0x53B2240", Offset = "0x53B1240", VA = "0x53B2240")]
	internal void WriteDelayedNullItem()
	{
	}

	[Token(Token = "0x6002120")]
	[Address(RVA = "0x53B2250", Offset = "0x53B1250", VA = "0x53B2250")]
	internal void WriteItemEnd()
	{
	}

	[Token(Token = "0x6002121")]
	[Address(RVA = "0x53B11C0", Offset = "0x53B01C0", VA = "0x53B11C0")]
	private void InternalWriteItemNull()
	{
	}

	[Token(Token = "0x6002122")]
	[Address(RVA = "0x53B2260", Offset = "0x53B1260", VA = "0x53B2260")]
	internal void WriteItemObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, int idRef)
	{
	}

	[Token(Token = "0x6002123")]
	[Address(RVA = "0x53B2290", Offset = "0x53B1290", VA = "0x53B2290")]
	internal void WriteAssembly(Type type, string assemblyString, int assemId, bool isNew)
	{
	}

	[Token(Token = "0x6002124")]
	[Address(RVA = "0x53A9960", Offset = "0x53A8960", VA = "0x53A9960")]
	internal void WriteValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, object value)
	{
	}
}
