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
[Token(Token = "0x20000A4")]
[DefaultMember("Item")]
[XmlSchemaProvider("GetXsdType")]
public sealed class SqlChars : INullable, IXmlSerializable, ISerializable
{
	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x10")]
	internal char[] _rgchBuf;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x18")]
	private long _lCurLen;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x20")]
	internal SqlStreamChars _stream;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x28")]
	private SqlBytesCharsState _state;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x30")]
	private char[] _rgchWorkBuf;

	[Token(Token = "0x1700017F")]
	public bool IsNull
	{
		[Token(Token = "0x6000960")]
		[Address(RVA = "0x4606820", Offset = "0x4606820", VA = "0x4606820", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	public char[] Buffer
	{
		[Token(Token = "0x6000961")]
		[Address(RVA = "0x4606830", Offset = "0x4606830", VA = "0x4606830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public long Length
	{
		[Token(Token = "0x6000962")]
		[Address(RVA = "0x46069D0", Offset = "0x46069D0", VA = "0x46069D0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000182")]
	public char[] Value
	{
		[Token(Token = "0x6000963")]
		[Address(RVA = "0x4606A40", Offset = "0x4606A40", VA = "0x4606A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000183")]
	public static SqlChars Null
	{
		[Token(Token = "0x600096D")]
		[Address(RVA = "0x4606F80", Offset = "0x4606F80", VA = "0x4606F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x4606590", Offset = "0x4606590", VA = "0x4606590")]
	public SqlChars()
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x46065F0", Offset = "0x46065F0", VA = "0x46065F0")]
	public SqlChars(char[] buffer)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x4606670", Offset = "0x4606670", VA = "0x4606670")]
	public SqlChars(SqlString value)
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x46065C0", Offset = "0x46065C0", VA = "0x46065C0")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x4606850", Offset = "0x4606850", VA = "0x4606850")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x4606860", Offset = "0x4606860", VA = "0x4606860")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x4606C20", Offset = "0x4606C20", VA = "0x4606C20")]
	private void SetBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x4606C70", Offset = "0x4606C70", VA = "0x4606C70", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x4606C80", Offset = "0x4606C80", VA = "0x4606C80", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x4606DE0", Offset = "0x4606DE0", VA = "0x4606DE0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x4606ED0", Offset = "0x4606ED0", VA = "0x4606ED0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x4606F40", Offset = "0x4606F40", VA = "0x4606F40", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
