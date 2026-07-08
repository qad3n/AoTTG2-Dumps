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
		[Address(RVA = "0x42E0060", Offset = "0x42E0060", VA = "0x42E0060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public bool IsNull
	{
		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x42DFFE0", Offset = "0x42DFFE0", VA = "0x42DFFE0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x42DFDE0", Offset = "0x42DFDE0", VA = "0x42DFDE0")]
	public SqlXml()
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x42DFE40", Offset = "0x42DFE40", VA = "0x42DFE40")]
	public XmlReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x42E0180", Offset = "0x42E0180", VA = "0x42E0180")]
	internal static XmlReader CreateSqlXmlReader(Stream stream, bool closeInput = false, bool throwTargetInvocationExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x42E0560", Offset = "0x42E0560", VA = "0x42E0560")]
	private static Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> CreateSqlReaderDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x42DFE10", Offset = "0x42DFE10", VA = "0x42DFE10")]
	private void SetNull()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x42E0650", Offset = "0x42E0650", VA = "0x42E0650", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x42E0660", Offset = "0x42E0660", VA = "0x42E0660", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x42E0850", Offset = "0x42E0850", VA = "0x42E0850", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x42E09B0", Offset = "0x42E09B0", VA = "0x42E09B0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
