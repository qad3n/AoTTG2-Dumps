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
		[Address(RVA = "0x4605C50", Offset = "0x4605C50", VA = "0x4605C50", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public byte[] Buffer
	{
		[Token(Token = "0x6000950")]
		[Address(RVA = "0x4605C60", Offset = "0x4605C60", VA = "0x4605C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public long Length
	{
		[Token(Token = "0x6000951")]
		[Address(RVA = "0x4605E00", Offset = "0x4605E00", VA = "0x4605E00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700017D")]
	public byte[] Value
	{
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x4605E70", Offset = "0x4605E70", VA = "0x4605E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	public static SqlBytes Null
	{
		[Token(Token = "0x600095C")]
		[Address(RVA = "0x46064E0", Offset = "0x46064E0", VA = "0x46064E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x4605A80", Offset = "0x4605A80", VA = "0x4605A80")]
	public SqlBytes()
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x4605AE0", Offset = "0x4605AE0", VA = "0x4605AE0")]
	public SqlBytes(byte[] buffer)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x4605B60", Offset = "0x4605B60", VA = "0x4605B60")]
	public SqlBytes(SqlBinary value)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x4605AB0", Offset = "0x4605AB0", VA = "0x4605AB0")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x4605C90", Offset = "0x4605C90", VA = "0x4605C90")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x4605C80", Offset = "0x4605C80", VA = "0x4605C80")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x4606070", Offset = "0x4606070", VA = "0x4606070")]
	private void SetBuffer(byte[] buffer)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x46060C0", Offset = "0x46060C0", VA = "0x46060C0", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x46060D0", Offset = "0x46060D0", VA = "0x46060D0", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x4606320", Offset = "0x4606320", VA = "0x4606320", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x4606430", Offset = "0x4606430", VA = "0x4606430")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x46064A0", Offset = "0x46064A0", VA = "0x46064A0", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
