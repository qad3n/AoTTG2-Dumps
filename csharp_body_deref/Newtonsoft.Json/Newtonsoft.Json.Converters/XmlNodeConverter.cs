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
		[Address(RVA = "0x563E9C0", Offset = "0x563D9C0", VA = "0x563E9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x563E9D0", Offset = "0x563D9D0", VA = "0x563E9D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public bool WriteArrayAttribute
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x563E9E0", Offset = "0x563D9E0", VA = "0x563E9E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x563E9F0", Offset = "0x563D9F0", VA = "0x563E9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public bool OmitRootObject
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x563EA00", Offset = "0x563DA00", VA = "0x563EA00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x563EA10", Offset = "0x563DA10", VA = "0x563EA10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public bool EncodeSpecialCharacters
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x563EA20", Offset = "0x563DA20", VA = "0x563EA20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x563EA30", Offset = "0x563DA30", VA = "0x563EA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x563EA40", Offset = "0x563DA40", VA = "0x563EA40", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x563EB80", Offset = "0x563DB80", VA = "0x563EB80")]
	private IXmlNode WrapXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x563EC80", Offset = "0x563DC80", VA = "0x563EC80")]
	private void PushParentNamespaces(IXmlNode node, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x5640D40", Offset = "0x563FD40", VA = "0x5640D40")]
	private string ResolveFullName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x5641120", Offset = "0x5640120", VA = "0x5641120")]
	private string GetPropertyName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x5641590", Offset = "0x5640590", VA = "0x5641590")]
	private bool IsArray(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x5641960", Offset = "0x5640960", VA = "0x5641960")]
	private void SerializeGroupedNodes(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x56424D0", Offset = "0x56414D0", VA = "0x56424D0")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, List<IXmlNode> groupedNodes, string elementNames)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x5642630", Offset = "0x5641630", VA = "0x5642630")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, IXmlNode node, string elementNames)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x563F400", Offset = "0x563E400", VA = "0x563F400")]
	private void SerializeNode(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x5642700", Offset = "0x5641700", VA = "0x5642700")]
	private static bool AllSameName(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x5642D40", Offset = "0x5641D40", VA = "0x5642D40", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x56442A0", Offset = "0x56432A0", VA = "0x56442A0")]
	private void DeserializeValue(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, string propertyName, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x5643660", Offset = "0x5642660", VA = "0x5643660")]
	private void ReadElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x5646630", Offset = "0x5645630", VA = "0x5646630")]
	private void CreateElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string elementName, XmlNamespaceManager manager, string? elementPrefix, Dictionary<string, string?>? attributeNameValues)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x56462B0", Offset = "0x56452B0", VA = "0x56462B0")]
	private static void AddAttribute(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, string attributeName, XmlNamespaceManager manager, string? attributePrefix)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x56448C0", Offset = "0x56438C0", VA = "0x56448C0")]
	private static string ConvertTokenToXmlValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x5645840", Offset = "0x5644840", VA = "0x5645840")]
	private void ReadArrayElements(JsonReader reader, IXmlDocument document, string propertyName, IXmlNode currentNode, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x5646F10", Offset = "0x5645F10", VA = "0x5646F10")]
	private void AddJsonArrayAttribute(IXmlElement element, IXmlDocument document)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x5645C10", Offset = "0x5644C10", VA = "0x5645C10")]
	private bool ShouldReadInto(JsonReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x5645C50", Offset = "0x5644C50", VA = "0x5645C50")]
	private Dictionary<string, string> ReadAttributeElements(JsonReader reader, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x5644F20", Offset = "0x5643F20", VA = "0x5644F20")]
	private void CreateInstruction(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x5645420", Offset = "0x5644420", VA = "0x5645420")]
	private void CreateDocumentType(JsonReader reader, IXmlDocument document, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x5646D20", Offset = "0x5645D20", VA = "0x5646D20")]
	private IXmlElement CreateElement(string elementName, IXmlDocument document, string? elementPrefix, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x5643A10", Offset = "0x5642A10", VA = "0x5643A10")]
	private void DeserializeNode(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x5647260", Offset = "0x5646260", VA = "0x5647260")]
	private bool IsNamespaceAttribute(string attributeName, [NotNullWhen(true)] out string? prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x5642A00", Offset = "0x5641A00", VA = "0x5642A00")]
	private bool ValueAttributes(List<IXmlNode> c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x5647340", Offset = "0x5646340", VA = "0x5647340", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x56473C0", Offset = "0x56463C0", VA = "0x56473C0")]
	private bool IsXObject(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x5647440", Offset = "0x5646440", VA = "0x5647440")]
	private bool IsXmlNode(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x56474C0", Offset = "0x56464C0", VA = "0x56474C0")]
	public XmlNodeConverter()
	{
	}
}
