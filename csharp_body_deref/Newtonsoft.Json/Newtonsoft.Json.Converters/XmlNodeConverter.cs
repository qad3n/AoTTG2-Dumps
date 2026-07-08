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
		[Address(RVA = "0x3B57790", Offset = "0x3B57790", VA = "0x3B57790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x3B577A0", Offset = "0x3B577A0", VA = "0x3B577A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public bool WriteArrayAttribute
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x3B577B0", Offset = "0x3B577B0", VA = "0x3B577B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x3B577C0", Offset = "0x3B577C0", VA = "0x3B577C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public bool OmitRootObject
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x3B577D0", Offset = "0x3B577D0", VA = "0x3B577D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x3B577E0", Offset = "0x3B577E0", VA = "0x3B577E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public bool EncodeSpecialCharacters
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x3B577F0", Offset = "0x3B577F0", VA = "0x3B577F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x3B57800", Offset = "0x3B57800", VA = "0x3B57800")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x3B57810", Offset = "0x3B57810", VA = "0x3B57810", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x3B57950", Offset = "0x3B57950", VA = "0x3B57950")]
	private IXmlNode WrapXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x3B57A50", Offset = "0x3B57A50", VA = "0x3B57A50")]
	private void PushParentNamespaces(IXmlNode node, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x3B59CC0", Offset = "0x3B59CC0", VA = "0x3B59CC0")]
	private string ResolveFullName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x3B5A010", Offset = "0x3B5A010", VA = "0x3B5A010")]
	private string GetPropertyName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x3B5A480", Offset = "0x3B5A480", VA = "0x3B5A480")]
	private bool IsArray(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x3B5A8B0", Offset = "0x3B5A8B0", VA = "0x3B5A8B0")]
	private void SerializeGroupedNodes(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x3B5B4A0", Offset = "0x3B5B4A0", VA = "0x3B5B4A0")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, List<IXmlNode> groupedNodes, string elementNames)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x3B5B600", Offset = "0x3B5B600", VA = "0x3B5B600")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, IXmlNode node, string elementNames)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x3B581F0", Offset = "0x3B581F0", VA = "0x3B581F0")]
	private void SerializeNode(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x3B5B6D0", Offset = "0x3B5B6D0", VA = "0x3B5B6D0")]
	private static bool AllSameName(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x3B5BDA0", Offset = "0x3B5BDA0", VA = "0x3B5BDA0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x3B5D330", Offset = "0x3B5D330", VA = "0x3B5D330")]
	private void DeserializeValue(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, string propertyName, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x3B5C6B0", Offset = "0x3B5C6B0", VA = "0x3B5C6B0")]
	private void ReadElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x3B5F740", Offset = "0x3B5F740", VA = "0x3B5F740")]
	private void CreateElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string elementName, XmlNamespaceManager manager, string? elementPrefix, Dictionary<string, string?>? attributeNameValues)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x3B5F3C0", Offset = "0x3B5F3C0", VA = "0x3B5F3C0")]
	private static void AddAttribute(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, string attributeName, XmlNamespaceManager manager, string? attributePrefix)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x3B5D950", Offset = "0x3B5D950", VA = "0x3B5D950")]
	private static string ConvertTokenToXmlValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x3B5E8F0", Offset = "0x3B5E8F0", VA = "0x3B5E8F0")]
	private void ReadArrayElements(JsonReader reader, IXmlDocument document, string propertyName, IXmlNode currentNode, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x3B600E0", Offset = "0x3B600E0", VA = "0x3B600E0")]
	private void AddJsonArrayAttribute(IXmlElement element, IXmlDocument document)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x3B5ED00", Offset = "0x3B5ED00", VA = "0x3B5ED00")]
	private bool ShouldReadInto(JsonReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x3B5ED40", Offset = "0x3B5ED40", VA = "0x3B5ED40")]
	private Dictionary<string, string> ReadAttributeElements(JsonReader reader, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x3B5DFA0", Offset = "0x3B5DFA0", VA = "0x3B5DFA0")]
	private void CreateInstruction(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x3B5E4D0", Offset = "0x3B5E4D0", VA = "0x3B5E4D0")]
	private void CreateDocumentType(JsonReader reader, IXmlDocument document, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x3B5FF20", Offset = "0x3B5FF20", VA = "0x3B5FF20")]
	private IXmlElement CreateElement(string elementName, IXmlDocument document, string? elementPrefix, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x3B5CA50", Offset = "0x3B5CA50", VA = "0x3B5CA50")]
	private void DeserializeNode(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x3B60430", Offset = "0x3B60430", VA = "0x3B60430")]
	private bool IsNamespaceAttribute(string attributeName, [NotNullWhen(true)] out string? prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x3B5BA00", Offset = "0x3B5BA00", VA = "0x3B5BA00")]
	private bool ValueAttributes(List<IXmlNode> c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x3B60500", Offset = "0x3B60500", VA = "0x3B60500", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x3B60580", Offset = "0x3B60580", VA = "0x3B60580")]
	private bool IsXObject(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x3B60600", Offset = "0x3B60600", VA = "0x3B60600")]
	private bool IsXmlNode(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x3B60680", Offset = "0x3B60680", VA = "0x3B60680")]
	public XmlNodeConverter()
	{
	}
}
