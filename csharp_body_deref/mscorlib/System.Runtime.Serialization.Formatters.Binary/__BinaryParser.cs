// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.__BinaryParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000425")]
internal sealed class __BinaryParser
{
	[Token(Token = "0x40011BD")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader;

	[Token(Token = "0x40011BE")]
	[FieldOffset(Offset = "0x18")]
	internal Stream input;

	[Token(Token = "0x40011BF")]
	[FieldOffset(Offset = "0x20")]
	internal long topId;

	[Token(Token = "0x40011C0")]
	[FieldOffset(Offset = "0x28")]
	internal long headerId;

	[Token(Token = "0x40011C1")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray objectMapIdTable;

	[Token(Token = "0x40011C2")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable;

	[Token(Token = "0x40011C3")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack stack;

	[Token(Token = "0x40011C4")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType;

	[Token(Token = "0x40011C5")]
	[FieldOffset(Offset = "0x50")]
	internal object expectedTypeInformation;

	[Token(Token = "0x40011C6")]
	[FieldOffset(Offset = "0x58")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord PRS;

	[Token(Token = "0x40011C7")]
	[FieldOffset(Offset = "0x60")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo systemAssemblyInfo;

	[Token(Token = "0x40011C8")]
	[FieldOffset(Offset = "0x68")]
	private BinaryReader dataReader;

	[Token(Token = "0x40011C9")]
	[FieldOffset(Offset = "0x0")]
	private static Encoding encoding;

	[Token(Token = "0x40011CA")]
	[FieldOffset(Offset = "0x70")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack opPool;

	[Token(Token = "0x40011CB")]
	[FieldOffset(Offset = "0x78")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject;

	[Token(Token = "0x40011CC")]
	[FieldOffset(Offset = "0x80")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap bowm;

	[Token(Token = "0x40011CD")]
	[FieldOffset(Offset = "0x88")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped bowmt;

	[Token(Token = "0x40011CE")]
	[FieldOffset(Offset = "0x90")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectString objectString;

	[Token(Token = "0x40011CF")]
	[FieldOffset(Offset = "0x98")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString crossAppDomainString;

	[Token(Token = "0x40011D0")]
	[FieldOffset(Offset = "0xA0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped;

	[Token(Token = "0x40011D1")]
	[FieldOffset(Offset = "0xA8")]
	private byte[] byteBuffer;

	[Token(Token = "0x40011D2")]
	[FieldOffset(Offset = "0xB0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped;

	[Token(Token = "0x40011D3")]
	[FieldOffset(Offset = "0xB8")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference;

	[Token(Token = "0x40011D4")]
	[FieldOffset(Offset = "0xC0")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull;

	[Token(Token = "0x40011D5")]
	[FieldOffset(Offset = "0x8")]
	internal static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd;

	[Token(Token = "0x17000455")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo SystemAssemblyInfo
	{
		[Token(Token = "0x6002154")]
		[Address(RVA = "0x3BB4DA0", Offset = "0x3BB4DA0", VA = "0x3BB4DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000456")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray ObjectMapIdTable
	{
		[Token(Token = "0x6002155")]
		[Address(RVA = "0x3BB4E50", Offset = "0x3BB4E50", VA = "0x3BB4E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000457")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray AssemIdToAssemblyTable
	{
		[Token(Token = "0x6002156")]
		[Address(RVA = "0x3BB4FB0", Offset = "0x3BB4FB0", VA = "0x3BB4FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000458")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord prs
	{
		[Token(Token = "0x6002157")]
		[Address(RVA = "0x3BB5110", Offset = "0x3BB5110", VA = "0x3BB5110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002153")]
	[Address(RVA = "0x3BB4C10", Offset = "0x3BB4C10", VA = "0x3BB4C10")]
	internal __BinaryParser(Stream stream, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader)
	{
	}

	[Token(Token = "0x6002158")]
	[Address(RVA = "0x3BB51A0", Offset = "0x3BB51A0", VA = "0x3BB51A0")]
	internal void Run()
	{
	}

	[Token(Token = "0x6002159")]
	[Address(RVA = "0x3BB5D90", Offset = "0x3BB5D90", VA = "0x3BB5D90")]
	internal void ReadBegin()
	{
	}

	[Token(Token = "0x600215A")]
	[Address(RVA = "0x3BB8FE0", Offset = "0x3BB8FE0", VA = "0x3BB8FE0")]
	internal void ReadEnd()
	{
	}

	[Token(Token = "0x600215B")]
	[Address(RVA = "0x3BB9940", Offset = "0x3BB9940", VA = "0x3BB9940")]
	internal bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x600215C")]
	[Address(RVA = "0x3BB9970", Offset = "0x3BB9970", VA = "0x3BB9970")]
	internal byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x600215D")]
	[Address(RVA = "0x3BB99A0", Offset = "0x3BB99A0", VA = "0x3BB99A0")]
	internal byte[] ReadBytes(int length)
	{
		return null;
	}

	[Token(Token = "0x600215E")]
	[Address(RVA = "0x3BB99D0", Offset = "0x3BB99D0", VA = "0x3BB99D0")]
	internal void ReadBytes(byte[] byteA, int offset, int size)
	{
	}

	[Token(Token = "0x600215F")]
	[Address(RVA = "0x3BB9A50", Offset = "0x3BB9A50", VA = "0x3BB9A50")]
	internal char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x6002160")]
	[Address(RVA = "0x3BB9A80", Offset = "0x3BB9A80", VA = "0x3BB9A80")]
	internal char[] ReadChars(int length)
	{
		return null;
	}

	[Token(Token = "0x6002161")]
	[Address(RVA = "0x3BB9AB0", Offset = "0x3BB9AB0", VA = "0x3BB9AB0")]
	internal decimal ReadDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x6002162")]
	[Address(RVA = "0x3BB9B50", Offset = "0x3BB9B50", VA = "0x3BB9B50")]
	internal float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x6002163")]
	[Address(RVA = "0x3BB9B80", Offset = "0x3BB9B80", VA = "0x3BB9B80")]
	internal double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6002164")]
	[Address(RVA = "0x3BB9BB0", Offset = "0x3BB9BB0", VA = "0x3BB9BB0")]
	internal short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x6002165")]
	[Address(RVA = "0x3BB9BE0", Offset = "0x3BB9BE0", VA = "0x3BB9BE0")]
	internal int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6002166")]
	[Address(RVA = "0x3BB9C10", Offset = "0x3BB9C10", VA = "0x3BB9C10")]
	internal long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6002167")]
	[Address(RVA = "0x3BB9C40", Offset = "0x3BB9C40", VA = "0x3BB9C40")]
	internal sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x6002168")]
	[Address(RVA = "0x3BB9C70", Offset = "0x3BB9C70", VA = "0x3BB9C70")]
	internal string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6002169")]
	[Address(RVA = "0x3BB9CA0", Offset = "0x3BB9CA0", VA = "0x3BB9CA0")]
	internal TimeSpan ReadTimeSpan()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600216A")]
	[Address(RVA = "0x3BB9CD0", Offset = "0x3BB9CD0", VA = "0x3BB9CD0")]
	internal DateTime ReadDateTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600216B")]
	[Address(RVA = "0x3BB9D40", Offset = "0x3BB9D40", VA = "0x3BB9D40")]
	internal ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x600216C")]
	[Address(RVA = "0x3BB9D70", Offset = "0x3BB9D70", VA = "0x3BB9D70")]
	internal uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x600216D")]
	[Address(RVA = "0x3BB9DA0", Offset = "0x3BB9DA0", VA = "0x3BB9DA0")]
	internal ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x600216E")]
	[Address(RVA = "0x3BB5DA0", Offset = "0x3BB5DA0", VA = "0x3BB5DA0")]
	internal void ReadSerializationHeaderRecord()
	{
	}

	[Token(Token = "0x600216F")]
	[Address(RVA = "0x3BB5E60", Offset = "0x3BB5E60", VA = "0x3BB5E60")]
	internal void ReadAssembly(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002170")]
	[Address(RVA = "0x3BB6100", Offset = "0x3BB6100", VA = "0x3BB6100")]
	private void ReadObject()
	{
	}

	[Token(Token = "0x6002171")]
	[Address(RVA = "0x3BB65C0", Offset = "0x3BB65C0", VA = "0x3BB65C0")]
	internal void ReadCrossAppDomainMap()
	{
	}

	[Token(Token = "0x6002172")]
	[Address(RVA = "0x3BB6770", Offset = "0x3BB6770", VA = "0x3BB6770")]
	internal void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002173")]
	[Address(RVA = "0x3BBA020", Offset = "0x3BBA020", VA = "0x3BBA020")]
	private void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap record)
	{
	}

	[Token(Token = "0x6002174")]
	[Address(RVA = "0x3BB6830", Offset = "0x3BB6830", VA = "0x3BB6830")]
	internal void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002175")]
	[Address(RVA = "0x3BBA570", Offset = "0x3BBA570", VA = "0x3BBA570")]
	private void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped record)
	{
	}

	[Token(Token = "0x6002176")]
	[Address(RVA = "0x3BB68D0", Offset = "0x3BB68D0", VA = "0x3BB68D0")]
	private void ReadObjectString(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002177")]
	[Address(RVA = "0x3BB7C20", Offset = "0x3BB7C20", VA = "0x3BB7C20")]
	private void ReadMemberPrimitiveTyped()
	{
	}

	[Token(Token = "0x6002178")]
	[Address(RVA = "0x3BB7540", Offset = "0x3BB7540", VA = "0x3BB7540")]
	private void ReadArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002179")]
	[Address(RVA = "0x3BBAAE0", Offset = "0x3BBAAE0", VA = "0x3BBAAE0")]
	private void ReadArrayAsBytes(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600217A")]
	[Address(RVA = "0x3BB8FF0", Offset = "0x3BB8FF0", VA = "0x3BB8FF0")]
	private void ReadMemberPrimitiveUnTyped()
	{
	}

	[Token(Token = "0x600217B")]
	[Address(RVA = "0x3BB84C0", Offset = "0x3BB84C0", VA = "0x3BB84C0")]
	private void ReadMemberReference()
	{
	}

	[Token(Token = "0x600217C")]
	[Address(RVA = "0x3BB8990", Offset = "0x3BB8990", VA = "0x3BB8990")]
	private void ReadObjectNull(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x600217D")]
	[Address(RVA = "0x3BB8E40", Offset = "0x3BB8E40", VA = "0x3BB8E40")]
	private void ReadMessageEnd()
	{
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x3BBAE10", Offset = "0x3BBAE10", VA = "0x3BBAE10")]
	internal object ReadValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}

	[Token(Token = "0x600217F")]
	[Address(RVA = "0x3BB9F30", Offset = "0x3BB9F30", VA = "0x3BB9F30")]
	private System.Runtime.Serialization.Formatters.Binary.ObjectProgress GetOp()
	{
		return null;
	}

	[Token(Token = "0x6002180")]
	[Address(RVA = "0x3BB9840", Offset = "0x3BB9840", VA = "0x3BB9840")]
	private void PutOp(System.Runtime.Serialization.Formatters.Binary.ObjectProgress op)
	{
	}
}
