// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlBytes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Reflection;
using System.Runtime.Serialization;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000AD")]
[XmlSchemaProvider("GetXsdType")]
[DefaultMember("Item")]
public sealed class SqlBytes : INullable, IXmlSerializable, ISerializable
{
	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] _rgbBuf;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x18")]
	private long _lCurLen;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x20")]
	internal Stream _stream;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x28")]
	private SqlBytesCharsState _state;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x30")]
	private byte[] _rgbWorkBuf;

	[Token(Token = "0x1700017D")]
	public bool IsNull
	{
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x5F08FE0", Offset = "0x5F07FE0", VA = "0x5F08FE0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017E")]
	public byte[] Buffer
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x5F08FF0", Offset = "0x5F07FF0", VA = "0x5F08FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017F")]
	public long Length
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x5F09190", Offset = "0x5F08190", VA = "0x5F09190")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000180")]
	public byte[] Value
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x5F09200", Offset = "0x5F08200", VA = "0x5F09200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public static SqlBytes Null
	{
		[Token(Token = "0x600097B")]
		[Address(RVA = "0x5F09870", Offset = "0x5F08870", VA = "0x5F09870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x5F08E10", Offset = "0x5F07E10", VA = "0x5F08E10")]
	public SqlBytes()
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x5F08E70", Offset = "0x5F07E70", VA = "0x5F08E70")]
	public SqlBytes(byte[] buffer)
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x5F08EF0", Offset = "0x5F07EF0", VA = "0x5F08EF0")]
	public SqlBytes(SqlBinary value)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x5F08E40", Offset = "0x5F07E40", VA = "0x5F08E40")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x5F09020", Offset = "0x5F08020", VA = "0x5F09020")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x5F09010", Offset = "0x5F08010", VA = "0x5F09010")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x5F09400", Offset = "0x5F08400", VA = "0x5F09400")]
	private void SetBuffer(byte[] buffer)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x5F09450", Offset = "0x5F08450", VA = "0x5F09450", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x5F09460", Offset = "0x5F08460", VA = "0x5F09460", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x5F096B0", Offset = "0x5F086B0", VA = "0x5F096B0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x5F097C0", Offset = "0x5F087C0", VA = "0x5F097C0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x5F09830", Offset = "0x5F08830", VA = "0x5F09830", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
