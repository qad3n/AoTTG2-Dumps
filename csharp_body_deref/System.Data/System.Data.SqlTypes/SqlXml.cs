// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlXml
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Reflection;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B5")]
[XmlSchemaProvider("GetXsdType")]
public sealed class SqlXml : INullable, IXmlSerializable
{
	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> s_sqlReaderDelegate;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x8")]
	private static readonly XmlReaderSettings s_defaultXmlReaderSettings;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x10")]
	private static readonly XmlReaderSettings s_defaultXmlReaderSettingsCloseInput;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x18")]
	private static MethodInfo s_createSqlReaderMethodInfo;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x10")]
	private MethodInfo _createSqlReaderMethodInfo;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x18")]
	private bool _fNotNull;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x20")]
	private Stream _stream;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x28")]
	private bool _firstCreateReader;

	[Token(Token = "0x1700019F")]
	private static MethodInfo CreateSqlReaderMethodInfo
	{
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x461D7C0", Offset = "0x461D7C0", VA = "0x461D7C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public bool IsNull
	{
		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x461D740", Offset = "0x461D740", VA = "0x461D740", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x461D540", Offset = "0x461D540", VA = "0x461D540")]
	public SqlXml()
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x461D5A0", Offset = "0x461D5A0", VA = "0x461D5A0")]
	public XmlReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x461D8E0", Offset = "0x461D8E0", VA = "0x461D8E0")]
	internal static XmlReader CreateSqlXmlReader(Stream stream, bool closeInput = false, bool throwTargetInvocationExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x461DCC0", Offset = "0x461DCC0", VA = "0x461DCC0")]
	private static Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> CreateSqlReaderDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x461D570", Offset = "0x461D570", VA = "0x461D570")]
	private void SetNull()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x461DDB0", Offset = "0x461DDB0", VA = "0x461DDB0", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x461DDC0", Offset = "0x461DDC0", VA = "0x461DDC0", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x461DFB0", Offset = "0x461DFB0", VA = "0x461DFB0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x461E110", Offset = "0x461E110", VA = "0x461E110")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
