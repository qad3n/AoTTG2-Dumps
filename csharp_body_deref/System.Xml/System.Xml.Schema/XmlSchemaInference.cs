// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaInference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001DC")]
public sealed class XmlSchemaInference
{
	[Token(Token = "0x20001DD")]
	public enum InferenceOption
	{
		[Token(Token = "0x40008A7")]
		Restricted,
		[Token(Token = "0x40008A8")]
		Relaxed
	}

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x0")]
	internal static XmlQualifiedName ST_boolean;

	[Token(Token = "0x4000889")]
	[FieldOffset(Offset = "0x8")]
	internal static XmlQualifiedName ST_byte;

	[Token(Token = "0x400088A")]
	[FieldOffset(Offset = "0x10")]
	internal static XmlQualifiedName ST_unsignedByte;

	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x18")]
	internal static XmlQualifiedName ST_short;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x20")]
	internal static XmlQualifiedName ST_unsignedShort;

	[Token(Token = "0x400088D")]
	[FieldOffset(Offset = "0x28")]
	internal static XmlQualifiedName ST_int;

	[Token(Token = "0x400088E")]
	[FieldOffset(Offset = "0x30")]
	internal static XmlQualifiedName ST_unsignedInt;

	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x38")]
	internal static XmlQualifiedName ST_long;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x40")]
	internal static XmlQualifiedName ST_unsignedLong;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x48")]
	internal static XmlQualifiedName ST_integer;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x50")]
	internal static XmlQualifiedName ST_decimal;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x58")]
	internal static XmlQualifiedName ST_float;

	[Token(Token = "0x4000894")]
	[FieldOffset(Offset = "0x60")]
	internal static XmlQualifiedName ST_double;

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x68")]
	internal static XmlQualifiedName ST_duration;

	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x70")]
	internal static XmlQualifiedName ST_dateTime;

	[Token(Token = "0x4000897")]
	[FieldOffset(Offset = "0x78")]
	internal static XmlQualifiedName ST_time;

	[Token(Token = "0x4000898")]
	[FieldOffset(Offset = "0x80")]
	internal static XmlQualifiedName ST_date;

	[Token(Token = "0x4000899")]
	[FieldOffset(Offset = "0x88")]
	internal static XmlQualifiedName ST_gYearMonth;

	[Token(Token = "0x400089A")]
	[FieldOffset(Offset = "0x90")]
	internal static XmlQualifiedName ST_string;

	[Token(Token = "0x400089B")]
	[FieldOffset(Offset = "0x98")]
	internal static XmlQualifiedName ST_anySimpleType;

	[Token(Token = "0x400089C")]
	[FieldOffset(Offset = "0xA0")]
	internal static XmlQualifiedName[] SimpleTypes;

	[Token(Token = "0x400089D")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchema rootSchema;

	[Token(Token = "0x400089E")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaSet schemaSet;

	[Token(Token = "0x400089F")]
	[FieldOffset(Offset = "0x20")]
	private XmlReader xtr;

	[Token(Token = "0x40008A0")]
	[FieldOffset(Offset = "0x28")]
	private NameTable nametable;

	[Token(Token = "0x40008A1")]
	[FieldOffset(Offset = "0x30")]
	private string TargetNamespace;

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x38")]
	private XmlNamespaceManager NamespaceManager;

	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList schemaList;

	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x48")]
	private InferenceOption occurrence;

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x4C")]
	private InferenceOption typeInference;

	[Token(Token = "0x17000501")]
	public InferenceOption Occurrence
	{
		[Token(Token = "0x600125F")]
		[Address(RVA = "0x5FBFB70", Offset = "0x5FBEB70", VA = "0x5FBFB70")]
		get
		{
			return default(InferenceOption);
		}
		[Token(Token = "0x600125E")]
		[Address(RVA = "0x5FBFB60", Offset = "0x5FBEB60", VA = "0x5FBFB60")]
		set
		{
		}
	}

	[Token(Token = "0x17000502")]
	public InferenceOption TypeInference
	{
		[Token(Token = "0x6001260")]
		[Address(RVA = "0x5FBFB80", Offset = "0x5FBEB80", VA = "0x5FBFB80")]
		set
		{
		}
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x5FBFB90", Offset = "0x5FBEB90", VA = "0x5FBFB90")]
	public XmlSchemaInference()
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x5FBFCC0", Offset = "0x5FBECC0", VA = "0x5FBFCC0")]
	public XmlSchemaSet InferSchema(XmlReader instanceDocument)
	{
		return null;
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x5FBFD30", Offset = "0x5FBED30", VA = "0x5FBFD30")]
	internal XmlSchemaSet InferSchema1(XmlReader instanceDocument, XmlSchemaSet schemas)
	{
		return null;
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x5FC2760", Offset = "0x5FC1760", VA = "0x5FC2760")]
	private XmlSchemaAttribute AddAttribute(string localName, string prefix, string childURI, string attrValue, bool bCreatingNewType, XmlSchema parentSchema, XmlSchemaObjectCollection addLocation, XmlSchemaObjectTable compiledAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x5FC53E0", Offset = "0x5FC43E0", VA = "0x5FC53E0")]
	private XmlSchema CreateXmlSchema(string targetNS)
	{
		return null;
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x5FC0870", Offset = "0x5FBF870", VA = "0x5FC0870")]
	private XmlSchemaElement AddElement(string localName, string prefix, string childURI, XmlSchema parentSchema, XmlSchemaObjectCollection addLocation, int positionWithinCollection)
	{
		return null;
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x5FC0F10", Offset = "0x5FBFF10", VA = "0x5FC0F10")]
	internal void InferElement(XmlSchemaElement xse, bool bCreatingNewType, XmlSchema parentSchema)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x5FC6270", Offset = "0x5FC5270", VA = "0x5FC6270")]
	private XmlSchemaSimpleContentExtension CheckSimpleContentExtension(XmlSchemaComplexType ct)
	{
		return null;
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x5FC5830", Offset = "0x5FC4830", VA = "0x5FC5830")]
	private XmlSchemaType GetEffectiveSchemaType(XmlSchemaElement elem, bool bCreatingNewType)
	{
		return null;
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x5FC6840", Offset = "0x5FC5840", VA = "0x5FC6840")]
	internal XmlSchemaElement FindMatchingElement(bool bCreatingNewType, XmlReader xtr, XmlSchemaComplexType ct, ref int lastUsedSeqItem, ref bool bParticleChanged, XmlSchema parentSchema, bool setMaxoccurs)
	{
		return null;
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x5FC5980", Offset = "0x5FC4980", VA = "0x5FC5980")]
	internal void ProcessAttributes(ref XmlSchemaElement xse, XmlSchemaType effectiveSchemaType, bool bCreatingNewType, XmlSchema parentSchema)
	{
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x5FC6790", Offset = "0x5FC5790", VA = "0x5FC6790")]
	private void MoveAttributes(XmlSchemaSimpleContentExtension scExtension, XmlSchemaComplexType ct)
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x5FC6390", Offset = "0x5FC5390", VA = "0x5FC6390")]
	private void MoveAttributes(XmlSchemaComplexType ct, XmlSchemaSimpleContentExtension simpleContentExtension, bool bCreatingNewType)
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x5FC34A0", Offset = "0x5FC24A0", VA = "0x5FC34A0")]
	internal XmlSchemaAttribute FindAttribute(ICollection attributes, string attrName)
	{
		return null;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x5FC5470", Offset = "0x5FC4470", VA = "0x5FC5470")]
	internal XmlSchemaElement FindGlobalElement(string namespaceURI, string localName, out XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x5FC7AB0", Offset = "0x5FC6AB0", VA = "0x5FC7AB0")]
	internal XmlSchemaElement FindElement(XmlSchemaObjectCollection elements, string elementName)
	{
		return null;
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x5FC30B0", Offset = "0x5FC20B0", VA = "0x5FC30B0")]
	internal XmlSchemaAttribute FindAttributeRef(ICollection attributes, string attributeName, string nsURI)
	{
		return null;
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x5FC7BF0", Offset = "0x5FC6BF0", VA = "0x5FC7BF0")]
	internal XmlSchemaElement FindElementRef(XmlSchemaObjectCollection elements, string elementName, string nsURI)
	{
		return null;
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x5FC61E0", Offset = "0x5FC51E0", VA = "0x5FC61E0")]
	internal void MakeExistingAttributesOptional(XmlSchemaComplexType ct, XmlSchemaObjectCollection attributesInInstance)
	{
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x5FC8060", Offset = "0x5FC7060", VA = "0x5FC8060")]
	private void SwitchUseToOptional(XmlSchemaObjectCollection attributes, XmlSchemaObjectCollection attributesInInstance)
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x5FC3830", Offset = "0x5FC2830", VA = "0x5FC3830")]
	internal XmlQualifiedName RefineSimpleType(string s, ref int iTypeFlags)
	{
		return null;
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x5FC8200", Offset = "0x5FC7200", VA = "0x5FC8200")]
	internal static int InferSimpleType(string s, ref bool bNeedsRangeCheck)
	{
		return default(int);
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x5FC95C0", Offset = "0x5FC85C0", VA = "0x5FC95C0")]
	internal static int DateTime(string s, bool bDate, bool bTime)
	{
		return default(int);
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x5FC7D50", Offset = "0x5FC6D50", VA = "0x5FC7D50")]
	private XmlSchemaElement CreateNewElementforChoice(XmlSchemaElement copyElement)
	{
		return null;
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x5FC4B50", Offset = "0x5FC3B50", VA = "0x5FC4B50")]
	private static int GetSchemaType(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x5FC7900", Offset = "0x5FC6900", VA = "0x5FC7900")]
	internal void SetMinMaxOccurs(XmlSchemaElement el, bool setMaxOccurs)
	{
	}
}
