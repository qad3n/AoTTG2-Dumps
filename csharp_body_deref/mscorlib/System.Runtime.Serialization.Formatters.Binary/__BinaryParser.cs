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

[Token(Token = "0x200042D")]
internal sealed class __BinaryParser
{
	[Token(Token = "0x400111F")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader;

	[Token(Token = "0x4001120")]
	[FieldOffset(Offset = "0x18")]
	internal Stream input;

	[Token(Token = "0x4001121")]
	[FieldOffset(Offset = "0x20")]
	internal long topId;

	[Token(Token = "0x4001122")]
	[FieldOffset(Offset = "0x28")]
	internal long headerId;

	[Token(Token = "0x4001123")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray objectMapIdTable;

	[Token(Token = "0x4001124")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable;

	[Token(Token = "0x4001125")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack stack;

	[Token(Token = "0x4001126")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType;

	[Token(Token = "0x4001127")]
	[FieldOffset(Offset = "0x50")]
	internal object expectedTypeInformation;

	[Token(Token = "0x4001128")]
	[FieldOffset(Offset = "0x58")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord PRS;

	[Token(Token = "0x4001129")]
	[FieldOffset(Offset = "0x60")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo systemAssemblyInfo;

	[Token(Token = "0x400112A")]
	[FieldOffset(Offset = "0x68")]
	private BinaryReader dataReader;

	[Token(Token = "0x400112B")]
	[FieldOffset(Offset = "0x0")]
	private static Encoding encoding;

	[Token(Token = "0x400112C")]
	[FieldOffset(Offset = "0x70")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack opPool;

	[Token(Token = "0x400112D")]
	[FieldOffset(Offset = "0x78")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject;

	[Token(Token = "0x400112E")]
	[FieldOffset(Offset = "0x80")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap bowm;

	[Token(Token = "0x400112F")]
	[FieldOffset(Offset = "0x88")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped bowmt;

	[Token(Token = "0x4001130")]
	[FieldOffset(Offset = "0x90")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryObjectString objectString;

	[Token(Token = "0x4001131")]
	[FieldOffset(Offset = "0x98")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString crossAppDomainString;

	[Token(Token = "0x4001132")]
	[FieldOffset(Offset = "0xA0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped;

	[Token(Token = "0x4001133")]
	[FieldOffset(Offset = "0xA8")]
	private byte[] byteBuffer;

	[Token(Token = "0x4001134")]
	[FieldOffset(Offset = "0xB0")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped;

	[Token(Token = "0x4001135")]
	[FieldOffset(Offset = "0xB8")]
	internal System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference;

	[Token(Token = "0x4001136")]
	[FieldOffset(Offset = "0xC0")]
	internal System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull;

	[Token(Token = "0x4001137")]
	[FieldOffset(Offset = "0x8")]
	internal static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd;

	[Token(Token = "0x17000456")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo SystemAssemblyInfo
	{
		[Token(Token = "0x6002199")]
		[Address(RVA = "0x53BC3C0", Offset = "0x53BB3C0", VA = "0x53BC3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000457")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray ObjectMapIdTable
	{
		[Token(Token = "0x600219A")]
		[Address(RVA = "0x53BC470", Offset = "0x53BB470", VA = "0x53BC470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000458")]
	internal System.Runtime.Serialization.Formatters.Binary.SizedArray AssemIdToAssemblyTable
	{
		[Token(Token = "0x600219B")]
		[Address(RVA = "0x53BC5D0", Offset = "0x53BB5D0", VA = "0x53BC5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000459")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord prs
	{
		[Token(Token = "0x600219C")]
		[Address(RVA = "0x53BC730", Offset = "0x53BB730", VA = "0x53BC730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002198")]
	[Address(RVA = "0x53BC230", Offset = "0x53BB230", VA = "0x53BC230")]
	internal __BinaryParser(Stream stream, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader)
	{
	}

	[Token(Token = "0x600219D")]
	[Address(RVA = "0x53BC7C0", Offset = "0x53BB7C0", VA = "0x53BC7C0")]
	internal void Run()
	{
	}

	[Token(Token = "0x600219E")]
	[Address(RVA = "0x53BD300", Offset = "0x53BC300", VA = "0x53BD300")]
	internal void ReadBegin()
	{
	}

	[Token(Token = "0x600219F")]
	[Address(RVA = "0x53C06E0", Offset = "0x53BF6E0", VA = "0x53C06E0")]
	internal void ReadEnd()
	{
	}

	[Token(Token = "0x60021A0")]
	[Address(RVA = "0x53C10B0", Offset = "0x53C00B0", VA = "0x53C10B0")]
	internal bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x60021A1")]
	[Address(RVA = "0x53C10E0", Offset = "0x53C00E0", VA = "0x53C10E0")]
	internal byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60021A2")]
	[Address(RVA = "0x53C1110", Offset = "0x53C0110", VA = "0x53C1110")]
	internal byte[] ReadBytes(int length)
	{
		return null;
	}

	[Token(Token = "0x60021A3")]
	[Address(RVA = "0x53C1140", Offset = "0x53C0140", VA = "0x53C1140")]
	internal void ReadBytes(byte[] byteA, int offset, int size)
	{
	}

	[Token(Token = "0x60021A4")]
	[Address(RVA = "0x53C11B0", Offset = "0x53C01B0", VA = "0x53C11B0")]
	internal char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x60021A5")]
	[Address(RVA = "0x53C11E0", Offset = "0x53C01E0", VA = "0x53C11E0")]
	internal char[] ReadChars(int length)
	{
		return null;
	}

	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x53C1210", Offset = "0x53C0210", VA = "0x53C1210")]
	internal decimal ReadDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x53C12B0", Offset = "0x53C02B0", VA = "0x53C12B0")]
	internal float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x53C12E0", Offset = "0x53C02E0", VA = "0x53C12E0")]
	internal double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60021A9")]
	[Address(RVA = "0x53C1310", Offset = "0x53C0310", VA = "0x53C1310")]
	internal short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x60021AA")]
	[Address(RVA = "0x53C1340", Offset = "0x53C0340", VA = "0x53C1340")]
	internal int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x60021AB")]
	[Address(RVA = "0x53C1370", Offset = "0x53C0370", VA = "0x53C1370")]
	internal long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x60021AC")]
	[Address(RVA = "0x53C13A0", Offset = "0x53C03A0", VA = "0x53C13A0")]
	internal sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x60021AD")]
	[Address(RVA = "0x53C13D0", Offset = "0x53C03D0", VA = "0x53C13D0")]
	internal string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60021AE")]
	[Address(RVA = "0x53C1400", Offset = "0x53C0400", VA = "0x53C1400")]
	internal TimeSpan ReadTimeSpan()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x60021AF")]
	[Address(RVA = "0x53C1430", Offset = "0x53C0430", VA = "0x53C1430")]
	internal DateTime ReadDateTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x60021B0")]
	[Address(RVA = "0x53C14A0", Offset = "0x53C04A0", VA = "0x53C14A0")]
	internal ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x60021B1")]
	[Address(RVA = "0x53C14D0", Offset = "0x53C04D0", VA = "0x53C14D0")]
	internal uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x60021B2")]
	[Address(RVA = "0x53C1500", Offset = "0x53C0500", VA = "0x53C1500")]
	internal ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x53BD310", Offset = "0x53BC310", VA = "0x53BD310")]
	internal void ReadSerializationHeaderRecord()
	{
	}

	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x53BD3D0", Offset = "0x53BC3D0", VA = "0x53BD3D0")]
	internal void ReadAssembly(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021B5")]
	[Address(RVA = "0x53BD670", Offset = "0x53BC670", VA = "0x53BD670")]
	private void ReadObject()
	{
	}

	[Token(Token = "0x60021B6")]
	[Address(RVA = "0x53BDB40", Offset = "0x53BCB40", VA = "0x53BDB40")]
	internal void ReadCrossAppDomainMap()
	{
	}

	[Token(Token = "0x60021B7")]
	[Address(RVA = "0x53BDCE0", Offset = "0x53BCCE0", VA = "0x53BDCE0")]
	internal void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021B8")]
	[Address(RVA = "0x53C17A0", Offset = "0x53C07A0", VA = "0x53C17A0")]
	private void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap record)
	{
	}

	[Token(Token = "0x60021B9")]
	[Address(RVA = "0x53BDDA0", Offset = "0x53BCDA0", VA = "0x53BDDA0")]
	internal void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021BA")]
	[Address(RVA = "0x53C1CF0", Offset = "0x53C0CF0", VA = "0x53C1CF0")]
	private void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped record)
	{
	}

	[Token(Token = "0x60021BB")]
	[Address(RVA = "0x53BDE40", Offset = "0x53BCE40", VA = "0x53BDE40")]
	private void ReadObjectString(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021BC")]
	[Address(RVA = "0x53BF1E0", Offset = "0x53BE1E0", VA = "0x53BF1E0")]
	private void ReadMemberPrimitiveTyped()
	{
	}

	[Token(Token = "0x60021BD")]
	[Address(RVA = "0x53BEB20", Offset = "0x53BDB20", VA = "0x53BEB20")]
	private void ReadArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021BE")]
	[Address(RVA = "0x53C2270", Offset = "0x53C1270", VA = "0x53C2270")]
	private void ReadArrayAsBytes(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x60021BF")]
	[Address(RVA = "0x53C06F0", Offset = "0x53BF6F0", VA = "0x53C06F0")]
	private void ReadMemberPrimitiveUnTyped()
	{
	}

	[Token(Token = "0x60021C0")]
	[Address(RVA = "0x53BFAD0", Offset = "0x53BEAD0", VA = "0x53BFAD0")]
	private void ReadMemberReference()
	{
	}

	[Token(Token = "0x60021C1")]
	[Address(RVA = "0x53C0000", Offset = "0x53BF000", VA = "0x53C0000")]
	private void ReadObjectNull(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60021C2")]
	[Address(RVA = "0x53C0540", Offset = "0x53BF540", VA = "0x53C0540")]
	private void ReadMessageEnd()
	{
	}

	[Token(Token = "0x60021C3")]
	[Address(RVA = "0x53C25A0", Offset = "0x53C15A0", VA = "0x53C25A0")]
	internal object ReadValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}

	[Token(Token = "0x60021C4")]
	[Address(RVA = "0x53C16B0", Offset = "0x53C06B0", VA = "0x53C16B0")]
	private System.Runtime.Serialization.Formatters.Binary.ObjectProgress GetOp()
	{
		return null;
	}

	[Token(Token = "0x60021C5")]
	[Address(RVA = "0x53C0FB0", Offset = "0x53BFFB0", VA = "0x53C0FB0")]
	private void PutOp(System.Runtime.Serialization.Formatters.Binary.ObjectProgress op)
	{
	}
}
