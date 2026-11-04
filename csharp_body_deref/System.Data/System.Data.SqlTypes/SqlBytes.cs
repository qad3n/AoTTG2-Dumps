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
		[Address(RVA = "0x2562180", Offset = "0x2560780", VA = "0x182562180", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017E")]
	public byte[] Buffer
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x2561FF0", Offset = "0x25605F0", VA = "0x182561FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017F")]
	public long Length
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x2562190", Offset = "0x2560790", VA = "0x182562190")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000180")]
	public byte[] Value
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x2562260", Offset = "0x2560860", VA = "0x182562260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public static SqlBytes Null
	{
		[Token(Token = "0x600097B")]
		[Address(RVA = "0x2562210", Offset = "0x2560810", VA = "0x182562210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x2561E90", Offset = "0x2560490", VA = "0x182561E90")]
	public SqlBytes()
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x2561F60", Offset = "0x2560560", VA = "0x182561F60")]
	public SqlBytes(byte[] buffer)
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x2561ED0", Offset = "0x25604D0", VA = "0x182561ED0")]
	public SqlBytes(SqlBinary value)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x2561970", Offset = "0x255FF70", VA = "0x182561970")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x2561710", Offset = "0x255FD10", VA = "0x182561710")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x2561890", Offset = "0x255FE90", VA = "0x182561890")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x2561910", Offset = "0x255FF10", VA = "0x182561910")]
	private void SetBuffer(byte[] buffer)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x25619F0", Offset = "0x255FFF0", VA = "0x1825619F0", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x2561BA0", Offset = "0x25601A0", VA = "0x182561BA0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x25618A0", Offset = "0x255FEA0", VA = "0x1825618A0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x25619B0", Offset = "0x255FFB0", VA = "0x1825619B0", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
