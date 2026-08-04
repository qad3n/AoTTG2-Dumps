// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XmlNodeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001D3")]
public class XmlNodeConverter : JsonConverter
{
	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly List<IXmlNode> EmptyChildNodes;

	[Token(Token = "0x400081F")]
	private const string TextName = "#text";

	[Token(Token = "0x4000820")]
	private const string CommentName = "#comment";

	[Token(Token = "0x4000821")]
	private const string CDataName = "#cdata-section";

	[Token(Token = "0x4000822")]
	private const string WhitespaceName = "#whitespace";

	[Token(Token = "0x4000823")]
	private const string SignificantWhitespaceName = "#significant-whitespace";

	[Token(Token = "0x4000824")]
	private const string DeclarationName = "?xml";

	[Token(Token = "0x4000825")]
	private const string JsonNamespaceUri = "http://james.newtonking.com/projects/json";

	[Token(Token = "0x170002A8")]
	public string? DeserializeRootElementName
	{
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x3E4D0E0", Offset = "0x3E4D0E0", VA = "0x3E4D0E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x3E4D0F0", Offset = "0x3E4D0F0", VA = "0x3E4D0F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public bool WriteArrayAttribute
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x3E4D100", Offset = "0x3E4D100", VA = "0x3E4D100")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x3E4D110", Offset = "0x3E4D110", VA = "0x3E4D110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public bool OmitRootObject
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x3E4D120", Offset = "0x3E4D120", VA = "0x3E4D120")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x3E4D130", Offset = "0x3E4D130", VA = "0x3E4D130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public bool EncodeSpecialCharacters
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x3E4D140", Offset = "0x3E4D140", VA = "0x3E4D140")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x3E4D150", Offset = "0x3E4D150", VA = "0x3E4D150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x3E4D160", Offset = "0x3E4D160", VA = "0x3E4D160", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x3E4D2A0", Offset = "0x3E4D2A0", VA = "0x3E4D2A0")]
	private IXmlNode WrapXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x3E4D3A0", Offset = "0x3E4D3A0", VA = "0x3E4D3A0")]
	private void PushParentNamespaces(IXmlNode node, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x3E4F610", Offset = "0x3E4F610", VA = "0x3E4F610")]
	private string ResolveFullName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x3E4F960", Offset = "0x3E4F960", VA = "0x3E4F960")]
	private string GetPropertyName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x3E4FDD0", Offset = "0x3E4FDD0", VA = "0x3E4FDD0")]
	private bool IsArray(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x3E50200", Offset = "0x3E50200", VA = "0x3E50200")]
	private void SerializeGroupedNodes(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x3E50DF0", Offset = "0x3E50DF0", VA = "0x3E50DF0")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, List<IXmlNode> groupedNodes, string elementNames)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x3E50F50", Offset = "0x3E50F50", VA = "0x3E50F50")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, IXmlNode node, string elementNames)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x3E4DB40", Offset = "0x3E4DB40", VA = "0x3E4DB40")]
	private void SerializeNode(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x3E51020", Offset = "0x3E51020", VA = "0x3E51020")]
	private static bool AllSameName(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x3E516F0", Offset = "0x3E516F0", VA = "0x3E516F0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x3E52C80", Offset = "0x3E52C80", VA = "0x3E52C80")]
	private void DeserializeValue(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, string propertyName, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x3E52000", Offset = "0x3E52000", VA = "0x3E52000")]
	private void ReadElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x3E55090", Offset = "0x3E55090", VA = "0x3E55090")]
	private void CreateElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string elementName, XmlNamespaceManager manager, string? elementPrefix, Dictionary<string, string?>? attributeNameValues)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x3E54D10", Offset = "0x3E54D10", VA = "0x3E54D10")]
	private static void AddAttribute(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, string attributeName, XmlNamespaceManager manager, string? attributePrefix)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x3E532A0", Offset = "0x3E532A0", VA = "0x3E532A0")]
	private static string ConvertTokenToXmlValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x3E54240", Offset = "0x3E54240", VA = "0x3E54240")]
	private void ReadArrayElements(JsonReader reader, IXmlDocument document, string propertyName, IXmlNode currentNode, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x3E55A30", Offset = "0x3E55A30", VA = "0x3E55A30")]
	private void AddJsonArrayAttribute(IXmlElement element, IXmlDocument document)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x3E54650", Offset = "0x3E54650", VA = "0x3E54650")]
	private bool ShouldReadInto(JsonReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x3E54690", Offset = "0x3E54690", VA = "0x3E54690")]
	private Dictionary<string, string> ReadAttributeElements(JsonReader reader, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x3E538F0", Offset = "0x3E538F0", VA = "0x3E538F0")]
	private void CreateInstruction(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x3E53E20", Offset = "0x3E53E20", VA = "0x3E53E20")]
	private void CreateDocumentType(JsonReader reader, IXmlDocument document, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x3E55870", Offset = "0x3E55870", VA = "0x3E55870")]
	private IXmlElement CreateElement(string elementName, IXmlDocument document, string? elementPrefix, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x3E523A0", Offset = "0x3E523A0", VA = "0x3E523A0")]
	private void DeserializeNode(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x3E55D80", Offset = "0x3E55D80", VA = "0x3E55D80")]
	private bool IsNamespaceAttribute(string attributeName, [NotNullWhen(true)] out string? prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x3E51350", Offset = "0x3E51350", VA = "0x3E51350")]
	private bool ValueAttributes(List<IXmlNode> c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x3E55E50", Offset = "0x3E55E50", VA = "0x3E55E50", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x3E55ED0", Offset = "0x3E55ED0", VA = "0x3E55ED0")]
	private bool IsXObject(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x3E55F50", Offset = "0x3E55F50", VA = "0x3E55F50")]
	private bool IsXmlNode(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x3E55FD0", Offset = "0x3E55FD0", VA = "0x3E55FD0")]
	public XmlNodeConverter()
	{
	}
}
