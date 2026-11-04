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
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(InferenceOption);
		}
		[Token(Token = "0x600125E")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000502")]
	public InferenceOption TypeInference
	{
		[Token(Token = "0x6001260")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x261C360", Offset = "0x261A960", VA = "0x18261C360")]
	public XmlSchemaInference()
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x2618690", Offset = "0x2616C90", VA = "0x182618690")]
	public XmlSchemaSet InferSchema(XmlReader instanceDocument)
	{
		return null;
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x2617E30", Offset = "0x2616430", VA = "0x182617E30")]
	internal XmlSchemaSet InferSchema1(XmlReader instanceDocument, XmlSchemaSet schemas)
	{
		return null;
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x2612330", Offset = "0x2610930", VA = "0x182612330")]
	private XmlSchemaAttribute AddAttribute(string localName, string prefix, string childURI, string attrValue, bool bCreatingNewType, XmlSchema parentSchema, XmlSchemaObjectCollection addLocation, XmlSchemaObjectTable compiledAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x2613780", Offset = "0x2611D80", VA = "0x182613780")]
	private XmlSchema CreateXmlSchema(string targetNS)
	{
		return null;
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x2612C80", Offset = "0x2611280", VA = "0x182612C80")]
	private XmlSchemaElement AddElement(string localName, string prefix, string childURI, XmlSchema parentSchema, XmlSchemaObjectCollection addLocation, int positionWithinCollection)
	{
		return null;
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x2616260", Offset = "0x2614860", VA = "0x182616260")]
	internal void InferElement(XmlSchemaElement xse, bool bCreatingNewType, XmlSchema parentSchema)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x2613350", Offset = "0x2611950", VA = "0x182613350")]
	private XmlSchemaSimpleContentExtension CheckSimpleContentExtension(XmlSchemaComplexType ct)
	{
		return null;
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x2615660", Offset = "0x2613C60", VA = "0x182615660")]
	private XmlSchemaType GetEffectiveSchemaType(XmlSchemaElement elem, bool bCreatingNewType)
	{
		return null;
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x26141B0", Offset = "0x26127B0", VA = "0x1826141B0")]
	internal XmlSchemaElement FindMatchingElement(bool bCreatingNewType, XmlReader xtr, XmlSchemaComplexType ct, ref int lastUsedSeqItem, ref bool bParticleChanged, XmlSchema parentSchema, bool setMaxoccurs)
	{
		return null;
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x2619C80", Offset = "0x2618280", VA = "0x182619C80")]
	internal void ProcessAttributes(ref XmlSchemaElement xse, XmlSchemaType effectiveSchemaType, bool bCreatingNewType, XmlSchema parentSchema)
	{
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x2619920", Offset = "0x2617F20", VA = "0x182619920")]
	private void MoveAttributes(XmlSchemaSimpleContentExtension scExtension, XmlSchemaComplexType ct)
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x26199B0", Offset = "0x2617FB0", VA = "0x1826199B0")]
	private void MoveAttributes(XmlSchemaComplexType ct, XmlSchemaSimpleContentExtension simpleContentExtension, bool bCreatingNewType)
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x2613B30", Offset = "0x2612130", VA = "0x182613B30")]
	internal XmlSchemaAttribute FindAttribute(ICollection attributes, string attrName)
	{
		return null;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x2613FA0", Offset = "0x26125A0", VA = "0x182613FA0")]
	internal XmlSchemaElement FindGlobalElement(string namespaceURI, string localName, out XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x2613E80", Offset = "0x2612480", VA = "0x182613E80")]
	internal XmlSchemaElement FindElement(XmlSchemaObjectCollection elements, string elementName)
	{
		return null;
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x26138F0", Offset = "0x2611EF0", VA = "0x1826138F0")]
	internal XmlSchemaAttribute FindAttributeRef(ICollection attributes, string attributeName, string nsURI)
	{
		return null;
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x2613D30", Offset = "0x2612330", VA = "0x182613D30")]
	internal XmlSchemaElement FindElementRef(XmlSchemaObjectCollection elements, string elementName, string nsURI)
	{
		return null;
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x2619850", Offset = "0x2617E50", VA = "0x182619850")]
	internal void MakeExistingAttributesOptional(XmlSchemaComplexType ct, XmlSchemaObjectCollection attributesInInstance)
	{
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x261B330", Offset = "0x2619930", VA = "0x18261B330")]
	private void SwitchUseToOptional(XmlSchemaObjectCollection attributes, XmlSchemaObjectCollection attributesInInstance)
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x261A460", Offset = "0x2618A60", VA = "0x18261A460")]
	internal XmlQualifiedName RefineSimpleType(string s, ref int iTypeFlags)
	{
		return null;
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x2618700", Offset = "0x2616D00", VA = "0x182618700")]
	internal static int InferSimpleType(string s, ref bool bNeedsRangeCheck)
	{
		return default(int);
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x2613820", Offset = "0x2611E20", VA = "0x182613820")]
	internal static int DateTime(string s, bool bDate, bool bTime)
	{
		return default(int);
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x26134D0", Offset = "0x2611AD0", VA = "0x1826134D0")]
	private XmlSchemaElement CreateNewElementforChoice(XmlSchemaElement copyElement)
	{
		return null;
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x26157F0", Offset = "0x2613DF0", VA = "0x1826157F0")]
	private static int GetSchemaType(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x261B150", Offset = "0x2619750", VA = "0x18261B150")]
	internal void SetMinMaxOccurs(XmlSchemaElement el, bool setMaxOccurs)
	{
	}
}
