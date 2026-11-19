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
[Token(Token = "0x20000BF")]
[XmlSchemaProvider("GetXsdType")]
public sealed class SqlXml : INullable, IXmlSerializable
{
	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> s_sqlReaderDelegate;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x8")]
	private static readonly XmlReaderSettings s_defaultXmlReaderSettings;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x10")]
	private static readonly XmlReaderSettings s_defaultXmlReaderSettingsCloseInput;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x18")]
	private static MethodInfo s_createSqlReaderMethodInfo;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x10")]
	private MethodInfo _createSqlReaderMethodInfo;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x18")]
	private bool _fNotNull;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x20")]
	private Stream _stream;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x28")]
	private bool _firstCreateReader;

	[Token(Token = "0x170001A2")]
	private static MethodInfo CreateSqlReaderMethodInfo
	{
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x5F20ED0", Offset = "0x5F1FED0", VA = "0x5F20ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A3")]
	public bool IsNull
	{
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x5F20E50", Offset = "0x5F1FE50", VA = "0x5F20E50", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x5F20C50", Offset = "0x5F1FC50", VA = "0x5F20C50")]
	public SqlXml()
	{
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x5F20CB0", Offset = "0x5F1FCB0", VA = "0x5F20CB0")]
	public XmlReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x5F20FF0", Offset = "0x5F1FFF0", VA = "0x5F20FF0")]
	internal static XmlReader CreateSqlXmlReader(Stream stream, bool closeInput = false, bool throwTargetInvocationExceptions = false)
	{
		return null;
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x5F211B0", Offset = "0x5F201B0", VA = "0x5F211B0")]
	private static Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> CreateSqlReaderDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x5F20C80", Offset = "0x5F1FC80", VA = "0x5F20C80")]
	private void SetNull()
	{
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x5F212A0", Offset = "0x5F202A0", VA = "0x5F212A0", Slot = "5")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x5F212B0", Offset = "0x5F202B0", VA = "0x5F212B0", Slot = "6")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader r)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x5F214A0", Offset = "0x5F204A0", VA = "0x5F214A0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x5F21600", Offset = "0x5F20600", VA = "0x5F21600")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
