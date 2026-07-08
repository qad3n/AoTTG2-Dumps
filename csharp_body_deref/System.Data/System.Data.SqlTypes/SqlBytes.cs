using System.IO;
using System.Reflection;
using System.Runtime.Serialization;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A3")]
[DefaultMember("Item")]
[XmlSchemaProvider("GetXsdType")]
public sealed class SqlBytes : INullable, IXmlSerializable, ISerializable
{
	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] _rgbBuf;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x18")]
	private long _lCurLen;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x20")]
	internal Stream _stream;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x28")]
	private SqlBytesCharsState _state;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x30")]
	private byte[] _rgbWorkBuf;

	[Token(Token = "0x1700017A")]
	public bool IsNull
	{
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x42C84F0", Offset = "0x42C84F0", VA = "0x42C84F0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public byte[] Buffer
	{
		[Token(Token = "0x6000950")]
		[Address(RVA = "0x42C8500", Offset = "0x42C8500", VA = "0x42C8500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public long Length
	{
		[Token(Token = "0x6000951")]
		[Address(RVA = "0x42C86A0", Offset = "0x42C86A0", VA = "0x42C86A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700017D")]
	public byte[] Value
	{
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x42C8710", Offset = "0x42C8710", VA = "0x42C8710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	public static SqlBytes Null
	{
		[Token(Token = "0x600095C")]
		[Address(RVA = "0x42C8D80", Offset = "0x42C8D80", VA = "0x42C8D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x42C8320", Offset = "0x42C8320", VA = "0x42C8320")]
	public SqlBytes()
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x42C8380", Offset = "0x42C8380", VA = "0x42C8380")]
	public SqlBytes(byte[] buffer)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x42C8400", Offset = "0x42C8400", VA = "0x42C8400")]
	public SqlBytes(SqlBinary value)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x42C8350", Offset = "0x42C8350", VA = "0x42C8350")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x42C8530", Offset = "0x42C8530", VA = "0x42C8530")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x42C8520", Offset = "0x42C8520", VA = "0x42C8520")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x42C8910", Offset = "0x42C8910", VA = "0x42C8910")]
	private void SetBuffer(byte[] buffer)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x42C8960", Offset = "0x42C8960", VA = "0x42C8960", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x42C8970", Offset = "0x42C8970", VA = "0x42C8970", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x42C8BC0", Offset = "0x42C8BC0", VA = "0x42C8BC0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x42C8CD0", Offset = "0x42C8CD0", VA = "0x42C8CD0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x42C8D40", Offset = "0x42C8D40", VA = "0x42C8D40", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
