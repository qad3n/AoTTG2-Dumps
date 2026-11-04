// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200000F")]
[XmlSchemaProvider(null, IsAny = true)]
[System.Xml.Serialization.XmlTypeConvertor("ConvertForAssignment")]
public class XElement : XContainer, IXmlSerializable
{
	[Token(Token = "0x2000010")]
	[CompilerGenerated]
	private sealed class _003CGetAttributes_003Ed__116 : IEnumerable<XAttribute>, IEnumerable, IEnumerator<XAttribute>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x18")]
		private XAttribute _003C_003E2__current;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x28")]
		public XElement _003C_003E4__this;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x30")]
		private XName name;

		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x38")]
		public XName _003C_003E3__name;

		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x40")]
		private XAttribute _003Ca_003E5__2;

		[Token(Token = "0x1700001B")]
		private XAttribute System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EXml_002ELinq_002EXAttribute_003E_002ECurrent
		{
			[Token(Token = "0x600007F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000081")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetAttributes_003Ed__116(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x25E4C10", Offset = "0x25E3210", VA = "0x1825E4C10", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x25E4DA0", Offset = "0x25E33A0", VA = "0x1825E4DA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x25E4CF0", Offset = "0x25E32F0", VA = "0x1825E4CF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<XAttribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EXml_002ELinq_002EXAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000083")]
		[Address(RVA = "0x25E4CF0", Offset = "0x25E32F0", VA = "0x1825E4CF0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x30")]
	internal XName name;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x38")]
	internal XAttribute lastAttr;

	[Token(Token = "0x17000016")]
	public bool HasAttributes
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0xC82080", Offset = "0xC80680", VA = "0x180C82080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x25EB210", Offset = "0x25E9810", VA = "0x1825EB210")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public XName Name
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700001A")]
	public string Value
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x25EB220", Offset = "0x25E9820", VA = "0x1825EB220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x25EB320", Offset = "0x25E9920", VA = "0x1825EB320")]
		set
		{
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x25EB190", Offset = "0x25E9790", VA = "0x1825EB190")]
	public XElement(XName name)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x25EAF60", Offset = "0x25E9560", VA = "0x1825EAF60")]
	public XElement(XElement other)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x25EB100", Offset = "0x25E9700", VA = "0x1825EB100")]
	public XElement(XStreamingElement other)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x25E9BE0", Offset = "0x25E81E0", VA = "0x1825E9BE0")]
	public XAttribute Attribute(XName name)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x25E9C20", Offset = "0x25E8220", VA = "0x1825E9C20")]
	public IEnumerable<XAttribute> Attributes()
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x25EA030", Offset = "0x25E8630", VA = "0x1825EA030")]
	public string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x25EAEA0", Offset = "0x25E94A0", VA = "0x1825EAEA0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x25EAAC0", Offset = "0x25E90C0", VA = "0x1825EAAC0", Slot = "16")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x25EACE0", Offset = "0x25E92E0", VA = "0x1825EACE0", Slot = "17")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x25E9770", Offset = "0x25E7D70", VA = "0x1825E9770", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x25E95F0", Offset = "0x25E7BF0", VA = "0x1825E95F0", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x25E9A60", Offset = "0x25E8060", VA = "0x1825E9A60")]
	internal void AppendAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x25E99D0", Offset = "0x25E7FD0", VA = "0x1825E99D0")]
	internal void AppendAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x25E9CB0", Offset = "0x25E82B0", VA = "0x1825E9CB0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x25E9E80", Offset = "0x25E8480", VA = "0x1825E9E80")]
	[IteratorStateMachine(typeof(_003CGetAttributes_003Ed__116))]
	private IEnumerable<XAttribute> GetAttributes(XName name)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x25E9F10", Offset = "0x25E8510", VA = "0x1825E9F10")]
	private string GetNamespaceOfPrefixInScope(string prefix, XElement outOfScope)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x25EA9C0", Offset = "0x25E8FC0", VA = "0x1825EA9C0")]
	private void ReadElementFrom(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x25EA300", Offset = "0x25E8900", VA = "0x1825EA300")]
	private void ReadElementFromImpl(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x25EAA50", Offset = "0x25E9050", VA = "0x1825EAA50")]
	internal void SetEndElementLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x25EAD00", Offset = "0x25E9300", VA = "0x1825EAD00", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}
}
