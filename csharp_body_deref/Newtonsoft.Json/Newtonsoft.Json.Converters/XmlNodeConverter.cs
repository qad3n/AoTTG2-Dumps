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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public bool WriteArrayAttribute
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public bool OmitRootObject
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public bool EncodeSpecialCharacters
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0xB15840", Offset = "0xB13E40", VA = "0x180B15840")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x1CB9AC0", Offset = "0x1CB80C0", VA = "0x181CB9AC0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x1CB9750", Offset = "0x1CB7D50", VA = "0x181CB9750")]
	private IXmlNode WrapXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x1CB64B0", Offset = "0x1CB4AB0", VA = "0x181CB64B0")]
	private void PushParentNamespaces(IXmlNode node, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x1CB7E40", Offset = "0x1CB6440", VA = "0x181CB7E40")]
	private string ResolveFullName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x1CB5D30", Offset = "0x1CB4330", VA = "0x181CB5D30")]
	private string GetPropertyName(IXmlNode node, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x1CB60C0", Offset = "0x1CB46C0", VA = "0x181CB60C0")]
	private bool IsArray(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x1CB7FF0", Offset = "0x1CB65F0", VA = "0x181CB7FF0")]
	private void SerializeGroupedNodes(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x1CB9860", Offset = "0x1CB7E60", VA = "0x181CB9860")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, List<IXmlNode> groupedNodes, string elementNames)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x1CB99D0", Offset = "0x1CB7FD0", VA = "0x181CB99D0")]
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, IXmlNode node, string elementNames)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x1CB8700", Offset = "0x1CB6D00", VA = "0x181CB8700")]
	private void SerializeNode(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x1CB3AC0", Offset = "0x1CB20C0", VA = "0x181CB3AC0")]
	private static bool AllSameName(IXmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x1CB76C0", Offset = "0x1CB5CC0", VA = "0x181CB76C0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x1CB5A10", Offset = "0x1CB4010", VA = "0x181CB5A10")]
	private void DeserializeValue(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, string propertyName, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x1CB72C0", Offset = "0x1CB58C0", VA = "0x181CB72C0")]
	private void ReadElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x1CB47A0", Offset = "0x1CB2DA0", VA = "0x181CB47A0")]
	private void CreateElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string elementName, XmlNamespaceManager manager, string? elementPrefix, Dictionary<string, string?>? attributeNameValues)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x1CB3690", Offset = "0x1CB1C90", VA = "0x181CB3690")]
	private static void AddAttribute(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, string attributeName, XmlNamespaceManager manager, string? attributePrefix)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x1CB3D10", Offset = "0x1CB2310", VA = "0x181CB3D10")]
	private static string ConvertTokenToXmlValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x1CB6960", Offset = "0x1CB4F60", VA = "0x181CB6960")]
	private void ReadArrayElements(JsonReader reader, IXmlDocument document, string propertyName, IXmlNode currentNode, XmlNamespaceManager manager)
	{
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x1CB38C0", Offset = "0x1CB1EC0", VA = "0x181CB38C0")]
	private void AddJsonArrayAttribute(IXmlElement element, IXmlDocument document)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x1CB94E0", Offset = "0x1CB7AE0", VA = "0x181CB94E0")]
	private bool ShouldReadInto(JsonReader reader)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x1CB6C10", Offset = "0x1CB5210", VA = "0x181CB6C10")]
	private Dictionary<string, string> ReadAttributeElements(JsonReader reader, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x1CB4D90", Offset = "0x1CB3390", VA = "0x181CB4D90")]
	private void CreateInstruction(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x1CB43E0", Offset = "0x1CB29E0", VA = "0x181CB43E0")]
	private void CreateDocumentType(JsonReader reader, IXmlDocument document, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x1CB4C70", Offset = "0x1CB3270", VA = "0x181CB4C70")]
	private IXmlElement CreateElement(string elementName, IXmlDocument document, string? elementPrefix, XmlNamespaceManager manager)
	{
		return null;
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x1CB5130", Offset = "0x1CB3730", VA = "0x181CB5130")]
	private void DeserializeNode(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, IXmlNode currentNode)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x1CB62D0", Offset = "0x1CB48D0", VA = "0x181CB62D0")]
	private bool IsNamespaceAttribute(string attributeName, [NotNullWhen(true)] out string? prefix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x1CB9570", Offset = "0x1CB7B70", VA = "0x181CB9570")]
	private bool ValueAttributes(List<IXmlNode> c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x1CB3C60", Offset = "0x1CB2260", VA = "0x181CB3C60", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x1CB63B0", Offset = "0x1CB49B0", VA = "0x181CB63B0")]
	private bool IsXObject(Type valueType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x1CB6430", Offset = "0x1CB4A30", VA = "0x181CB6430")]
	private bool IsXmlNode(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public XmlNodeConverter()
	{
	}
}
