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
		[Address(RVA = "0x5F09BC0", Offset = "0x5F08BC0", VA = "0x5F09BC0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000183")]
	public char[] Buffer
	{
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x5F09BD0", Offset = "0x5F08BD0", VA = "0x5F09BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public long Length
	{
		[Token(Token = "0x6000981")]
		[Address(RVA = "0x5F09D70", Offset = "0x5F08D70", VA = "0x5F09D70")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000185")]
	public char[] Value
	{
		[Token(Token = "0x6000982")]
		[Address(RVA = "0x5F09DE0", Offset = "0x5F08DE0", VA = "0x5F09DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public static SqlChars Null
	{
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x5F0A320", Offset = "0x5F09320", VA = "0x5F0A320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x5F09920", Offset = "0x5F08920", VA = "0x5F09920")]
	public SqlChars()
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x5F09980", Offset = "0x5F08980", VA = "0x5F09980")]
	public SqlChars(char[] buffer)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x5F09A00", Offset = "0x5F08A00", VA = "0x5F09A00")]
	public SqlChars(SqlString value)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x5F09950", Offset = "0x5F08950", VA = "0x5F09950")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x5F09BF0", Offset = "0x5F08BF0", VA = "0x5F09BF0")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x5F09C00", Offset = "0x5F08C00", VA = "0x5F09C00")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x5F09FC0", Offset = "0x5F08FC0", VA = "0x5F09FC0")]
	private void SetBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x5F0A010", Offset = "0x5F09010", VA = "0x5F0A010", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x5F0A020", Offset = "0x5F09020", VA = "0x5F0A020", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x5F0A180", Offset = "0x5F09180", VA = "0x5F0A180", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x5F0A270", Offset = "0x5F09270", VA = "0x5F0A270")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x5F0A2E0", Offset = "0x5F092E0", VA = "0x5F0A2E0", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
