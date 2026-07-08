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
		[Address(RVA = "0x42C90C0", Offset = "0x42C90C0", VA = "0x42C90C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	public char[] Buffer
	{
		[Token(Token = "0x6000961")]
		[Address(RVA = "0x42C90D0", Offset = "0x42C90D0", VA = "0x42C90D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public long Length
	{
		[Token(Token = "0x6000962")]
		[Address(RVA = "0x42C9270", Offset = "0x42C9270", VA = "0x42C9270")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000182")]
	public char[] Value
	{
		[Token(Token = "0x6000963")]
		[Address(RVA = "0x42C92E0", Offset = "0x42C92E0", VA = "0x42C92E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000183")]
	public static SqlChars Null
	{
		[Token(Token = "0x600096D")]
		[Address(RVA = "0x42C9820", Offset = "0x42C9820", VA = "0x42C9820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x42C8E30", Offset = "0x42C8E30", VA = "0x42C8E30")]
	public SqlChars()
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x42C8E90", Offset = "0x42C8E90", VA = "0x42C8E90")]
	public SqlChars(char[] buffer)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x42C8F10", Offset = "0x42C8F10", VA = "0x42C8F10")]
	public SqlChars(SqlString value)
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x42C8E60", Offset = "0x42C8E60", VA = "0x42C8E60")]
	public void SetNull()
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x42C90F0", Offset = "0x42C90F0", VA = "0x42C90F0")]
	internal bool FStream()
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x42C9100", Offset = "0x42C9100", VA = "0x42C9100")]
	private void CopyStreamToBuffer()
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x42C94C0", Offset = "0x42C94C0", VA = "0x42C94C0")]
	private void SetBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x42C9510", Offset = "0x42C9510", VA = "0x42C9510", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x42C9520", Offset = "0x42C9520", VA = "0x42C9520", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x42C9680", Offset = "0x42C9680", VA = "0x42C9680", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x42C9770", Offset = "0x42C9770", VA = "0x42C9770")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x42C97E0", Offset = "0x42C97E0", VA = "0x42C97E0", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
