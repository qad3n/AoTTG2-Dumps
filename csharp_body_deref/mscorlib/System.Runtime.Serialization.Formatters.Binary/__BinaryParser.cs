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

[Token(Token = "0x2000454")]
internal sealed class __BinaryParser
{
	[Token(Token = "0x40011BF")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader;

	[Token(Token = "0x40011C0")]
	[FieldOffset(Offset = "0x18")]
	internal Stream input;

	[Token(Token = "0x40011C1")]
	[FieldOffset(Offset = "0x20")]
	internal long topId;

	[Token(Token = "0x40011C2")]
	[FieldOffset(Offset = "0x28")]
	internal long headerId;

	[Token(Token = "0x40011C3")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray objectMapIdTable;

	[Token(Token = "0x40011C4")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable;

	[Token(Token = "0x40011C5")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack stack;

	[Token(Token = "0x40011C6")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType;

	[Token(Token = "0x40011C7")]
	[FieldOffset(Offset = "0x50")]
	internal object expectedTypeInformation;

	[Token(Token = "0x40011C8")]
	[FieldOffset(Offset = "0x58")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord PRS;

	[Token(Token = "0x40011C9")]
	[FieldOffset(Offset = "0x60")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo systemAssemblyInfo;

	[Token(Token = "0x40011CA")]
	[FieldOffset(Offset = "0x68")]
	private BinaryReader dataReader;

	[Token(Token = "0x40011CB")]
	[FieldOffset(Offset = "0x0")]
	private static Encoding encoding;

	[Token(Token = "0x40011CC")]
	[FieldOffset(Offset = "0x70")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack opPool;

	[Token(Token = "0x40011CD")]
	[FieldOffset(Offset = "0x78")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject;

	[Token(Token = "0x40011CE")]
	[FieldOffset(Offset = "0x80")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap bowm;

	[Token(Token = "0x40011CF")]
	[FieldOffset(Offset = "0x88")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped bowmt;

	[Token(Token = "0x40011D0")]
	[FieldOffset(Offset = "0x90")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectString objectString;

	[Token(Token = "0x40011D1")]
	[FieldOffset(Offset = "0x98")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString crossAppDomainString;

	[Token(Token = "0x40011D2")]
	[FieldOffset(Offset = "0xA0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped;

	[Token(Token = "0x40011D3")]
	[FieldOffset(Offset = "0xA8")]
	private byte[] byteBuffer;

	[Token(Token = "0x40011D4")]
	[FieldOffset(Offset = "0xB0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped;

	[Token(Token = "0x40011D5")]
	[FieldOffset(Offset = "0xB8")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference;

	[Token(Token = "0x40011D6")]
	[FieldOffset(Offset = "0xC0")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull;

	[Token(Token = "0x40011D7")]
	[FieldOffset(Offset = "0x8")]
	internal static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd;

	[Token(Token = "0x17000457")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo SystemAssemblyInfo
	{
		[Token(Token = "0x60021C3")]
		[Address(RVA = "0x1A3EA10", Offset = "0x1A3D010", VA = "0x181A3EA10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000458")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray ObjectMapIdTable
	{
		[Token(Token = "0x60021C4")]
		[Address(RVA = "0x1A3E940", Offset = "0x1A3CF40", VA = "0x181A3E940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000459")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray AssemIdToAssemblyTable
	{
		[Token(Token = "0x60021C5")]
		[Address(RVA = "0x1A3E870", Offset = "0x1A3CE70", VA = "0x181A3E870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045A")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord prs
	{
		[Token(Token = "0x60021C6")]
		[Address(RVA = "0x1A3EAE0", Offset = "0x1A3D0E0", VA = "0x181A3EAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60021C2")]
	[Address(RVA = "0x1A3E750", Offset = "0x1A3CD50", VA = "0x181A3E750")]
	internal __BinaryParser(Stream stream, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader)
	{
	}

	[Token(Token = "0x60021C7")]
	[Address(RVA = "0x1A3E0F0", Offset = "0x1A3C6F0", VA = "0x181A3E0F0")]
	internal void Run()
	{
	}

	[Token(Token = "0x60021C8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void ReadBegin()
	{
	}

	[Token(Token = "0x60021C9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void ReadEnd()
	{
	}

	[Token(Token = "0x60021CA")]
	[Address(RVA = "0x1A3A2F0", Offset = "0x1A388F0", VA = "0x181A3A2F0")]
	internal bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x60021CB")]
	[Address(RVA = "0x1A3A320", Offset = "0x1A38920", VA = "0x181A3A320")]
	internal byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60021CC")]
	[Address(RVA = "0x1A3A350", Offset = "0x1A38950", VA = "0x181A3A350")]
	internal byte[] ReadBytes(int length)
	{
		return null;
	}

	[Token(Token = "0x60021CD")]
	[Address(RVA = "0x1A3A380", Offset = "0x1A38980", VA = "0x181A3A380")]
	internal void ReadBytes(byte[] byteA, int offset, int size)
	{
	}

	[Token(Token = "0x60021CE")]
	[Address(RVA = "0x1A3A400", Offset = "0x1A38A00", VA = "0x181A3A400")]
	internal char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x60021CF")]
	[Address(RVA = "0x1A3A430", Offset = "0x1A38A30", VA = "0x181A3A430")]
	internal char[] ReadChars(int length)
	{
		return null;
	}

	[Token(Token = "0x60021D0")]
	[Address(RVA = "0x1A3A6D0", Offset = "0x1A38CD0", VA = "0x181A3A6D0")]
	internal decimal ReadDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60021D1")]
	[Address(RVA = "0x1A3DAC0", Offset = "0x1A3C0C0", VA = "0x181A3DAC0")]
	internal float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x60021D2")]
	[Address(RVA = "0x1A3A790", Offset = "0x1A38D90", VA = "0x181A3A790")]
	internal double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60021D3")]
	[Address(RVA = "0x1A3A7C0", Offset = "0x1A38DC0", VA = "0x181A3A7C0")]
	internal short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x60021D4")]
	[Address(RVA = "0x1A3A7F0", Offset = "0x1A38DF0", VA = "0x181A3A7F0")]
	internal int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x60021D5")]
	[Address(RVA = "0x1A3A820", Offset = "0x1A38E20", VA = "0x181A3A820")]
	internal long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x60021D6")]
	[Address(RVA = "0x1A3A320", Offset = "0x1A38920", VA = "0x181A3A320")]
	internal sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x60021D7")]
	[Address(RVA = "0x1A3DAF0", Offset = "0x1A3C0F0", VA = "0x181A3DAF0")]
	internal string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60021D8")]
	[Address(RVA = "0x1A3A820", Offset = "0x1A38E20", VA = "0x181A3A820")]
	internal TimeSpan ReadTimeSpan()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x60021D9")]
	[Address(RVA = "0x1A3A660", Offset = "0x1A38C60", VA = "0x181A3A660")]
	internal DateTime ReadDateTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x60021DA")]
	[Address(RVA = "0x1A3DB20", Offset = "0x1A3C120", VA = "0x181A3DB20")]
	internal ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x60021DB")]
	[Address(RVA = "0x1A3DB50", Offset = "0x1A3C150", VA = "0x181A3DB50")]
	internal uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x60021DC")]
	[Address(RVA = "0x1A3DB80", Offset = "0x1A3C180", VA = "0x181A3DB80")]
	internal ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x60021DD")]
	[Address(RVA = "0x1A3D9F0", Offset = "0x1A3BFF0", VA = "0x181A3D9F0")]
	internal void ReadSerializationHeaderRecord()
	{
	}

	[Token(Token = "0x60021DE")]
	[Address(RVA = "0x1A3A040", Offset = "0x1A38640", VA = "0x181A3A040")]
	internal void ReadAssembly(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021DF")]
	[Address(RVA = "0x1A3D4A0", Offset = "0x1A3BAA0", VA = "0x181A3D4A0")]
	private void ReadObject()
	{
	}

	[Token(Token = "0x60021E0")]
	[Address(RVA = "0x1A3A460", Offset = "0x1A38A60", VA = "0x181A3A460")]
	internal void ReadCrossAppDomainMap()
	{
	}

	[Token(Token = "0x60021E1")]
	[Address(RVA = "0x1A3CE10", Offset = "0x1A3B410", VA = "0x181A3CE10")]
	internal void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021E2")]
	[Address(RVA = "0x1A3CEE0", Offset = "0x1A3B4E0", VA = "0x181A3CEE0")]
	private void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap record)
	{
	}

	[Token(Token = "0x60021E3")]
	[Address(RVA = "0x1A3C700", Offset = "0x1A3AD00", VA = "0x181A3C700")]
	internal void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021E4")]
	[Address(RVA = "0x1A3C7C0", Offset = "0x1A3ADC0", VA = "0x181A3C7C0")]
	private void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped record)
	{
	}

	[Token(Token = "0x60021E5")]
	[Address(RVA = "0x1A3BCE0", Offset = "0x1A3A2E0", VA = "0x181A3BCE0")]
	private void ReadObjectString(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021E6")]
	[Address(RVA = "0x1A3A850", Offset = "0x1A38E50", VA = "0x181A3A850")]
	private void ReadMemberPrimitiveTyped()
	{
	}

	[Token(Token = "0x60021E7")]
	[Address(RVA = "0x1A39920", Offset = "0x1A37F20", VA = "0x181A39920")]
	private void ReadArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021E8")]
	[Address(RVA = "0x1A39610", Offset = "0x1A37C10", VA = "0x181A39610")]
	private void ReadArrayAsBytes(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x60021E9")]
	[Address(RVA = "0x1A3AE80", Offset = "0x1A39480", VA = "0x181A3AE80")]
	private void ReadMemberPrimitiveUnTyped()
	{
	}

	[Token(Token = "0x60021EA")]
	[Address(RVA = "0x1A3B3F0", Offset = "0x1A399F0", VA = "0x181A3B3F0")]
	private void ReadMemberReference()
	{
	}

	[Token(Token = "0x60021EB")]
	[Address(RVA = "0x1A3B960", Offset = "0x1A39F60", VA = "0x181A3B960")]
	private void ReadObjectNull(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021EC")]
	[Address(RVA = "0x1A3B7B0", Offset = "0x1A39DB0", VA = "0x181A3B7B0")]
	private void ReadMessageEnd()
	{
	}

	[Token(Token = "0x60021ED")]
	[Address(RVA = "0x1A3DBB0", Offset = "0x1A3C1B0", VA = "0x181A3DBB0")]
	internal object ReadValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}

	[Token(Token = "0x60021EE")]
	[Address(RVA = "0x1A394C0", Offset = "0x1A37AC0", VA = "0x181A394C0")]
	private System.Runtime.Serialization.Formatters.Binary.ObjectProgress GetOp()
	{
		return null;
	}

	[Token(Token = "0x60021EF")]
	[Address(RVA = "0x1A39570", Offset = "0x1A37B70", VA = "0x181A39570")]
	private void PutOp(System.Runtime.Serialization.Formatters.Binary.ObjectProgress op)
	{
	}
}
