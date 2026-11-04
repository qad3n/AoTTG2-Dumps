// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlChars
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.Serialization;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000AE")]
[XmlSchemaProvider("GetXsdType")]
[DefaultMember("Item")]
public sealed class SqlChars : INullable, IXmlSerializable, ISerializable
{
	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x10")]
	internal char[] _rgchBuf;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x18")]
	private long _lCurLen;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x20")]
	internal SqlStreamChars _stream;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x28")]
	private SqlBytesCharsState _state;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x30")]
	private char[] _rgchWorkBuf;

	[Token(Token = "0x17000182")]
	public bool IsNull
	{
		[Token(Token = "0x600097F")]
		[Address(RVA = "0x2562180", Offset = "0x2560780", VA = "0x182562180", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000183")]
	public char[] Buffer
	{
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x2562B80", Offset = "0x2561180", VA = "0x182562B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public long Length
	{
		[Token(Token = "0x6000981")]
		[Address(RVA = "0x2562D10", Offset = "0x2561310", VA = "0x182562D10")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000185")]
	public char[] Value
	{
		[Token(Token = "0x6000982")]
		[Address(RVA = "0x2562DE0", Offset = "0x25613E0", VA = "0x182562DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public static SqlChars Null
	{
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x2562D90", Offset = "0x2561390", VA = "0x182562D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x2561E90", Offset = "0x2560490", VA = "0x182561E90")]
	public SqlChars()
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x2561F60", Offset = "0x2560560", VA = "0x182561F60")]
	public SqlChars(char[] buffer)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x2562AE0", Offset = "0x25610E0", VA = "0x182562AE0")]
	public SqlChars(SqlString value)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x2561970", Offset = "0x255FF70", VA = "0x182561970")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x2561890", Offset = "0x255FE90", VA = "0x182561890")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x2562480", Offset = "0x2560A80", VA = "0x182562480")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x2561910", Offset = "0x255FF10", VA = "0x182561910")]
	private void SetBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x25626B0", Offset = "0x2560CB0", VA = "0x1825626B0", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x2562810", Offset = "0x2560E10", VA = "0x182562810", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x2562600", Offset = "0x2560C00", VA = "0x182562600")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x2562670", Offset = "0x2560C70", VA = "0x182562670", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
