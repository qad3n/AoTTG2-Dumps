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
			[Address(RVA = "0x4343A90", Offset = "0x4343A90", VA = "0x4343A90", Slot = "6")]
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
			[Address(RVA = "0x4343AE0", Offset = "0x4343AE0", VA = "0x4343AE0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x4342F40", Offset = "0x4342F40", VA = "0x4342F40")]
		[DebuggerHidden]
		public _003CGetAttributes_003Ed__116(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x43439C0", Offset = "0x43439C0", VA = "0x43439C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x43439D0", Offset = "0x43439D0", VA = "0x43439D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4343AA0", Offset = "0x4343AA0", VA = "0x4343AA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x4343AF0", Offset = "0x4343AF0", VA = "0x4343AF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<XAttribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EXml_002ELinq_002EXAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000083")]
		[Address(RVA = "0x4343BA0", Offset = "0x4343BA0", VA = "0x4343BA0", Slot = "5")]
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
		[Address(RVA = "0x43421F0", Offset = "0x43421F0", VA = "0x43421F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4342200", Offset = "0x4342200", VA = "0x4342200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public XName Name
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4342210", Offset = "0x4342210", VA = "0x4342210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4342220", Offset = "0x4342220", VA = "0x4342220", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700001A")]
	public string Value
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4342230", Offset = "0x4342230", VA = "0x4342230")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x43422B0", Offset = "0x43422B0", VA = "0x43422B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4340DE0", Offset = "0x4340DE0", VA = "0x4340DE0")]
	public XElement(XName name)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4342150", Offset = "0x4342150", VA = "0x4342150")]
	public XElement(XElement other)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x433DB30", Offset = "0x433DB30", VA = "0x433DB30")]
	public XElement(XStreamingElement other)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4342320", Offset = "0x4342320", VA = "0x4342320")]
	public XAttribute Attribute(XName name)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4342350", Offset = "0x4342350", VA = "0x4342350")]
	public IEnumerable<XAttribute> Attributes()
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x433BE60", Offset = "0x433BE60", VA = "0x433BE60")]
	public string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4342520", Offset = "0x4342520", VA = "0x4342520", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4342820", Offset = "0x4342820", VA = "0x4342820", Slot = "15")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4342830", Offset = "0x4342830", VA = "0x4342830", Slot = "16")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4342AA0", Offset = "0x4342AA0", VA = "0x4342AA0", Slot = "17")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4342AC0", Offset = "0x4342AC0", VA = "0x4342AC0", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4342E10", Offset = "0x4342E10", VA = "0x4342E10", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4342BA0", Offset = "0x4342BA0", VA = "0x4342BA0")]
	internal void AppendAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4340E60", Offset = "0x4340E60", VA = "0x4340E60")]
	internal void AppendAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4342EF0", Offset = "0x4342EF0", VA = "0x4342EF0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4342360", Offset = "0x4342360", VA = "0x4342360")]
	[IteratorStateMachine(typeof(_003CGetAttributes_003Ed__116))]
	private IEnumerable<XAttribute> GetAttributes(XName name)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4342400", Offset = "0x4342400", VA = "0x4342400")]
	private string GetNamespaceOfPrefixInScope(string prefix, XElement outOfScope)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4342A30", Offset = "0x4342A30", VA = "0x4342A30")]
	private void ReadElementFrom(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4342F70", Offset = "0x4342F70", VA = "0x4342F70")]
	private void ReadElementFromImpl(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4341110", Offset = "0x4341110", VA = "0x4341110")]
	internal void SetEndElementLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x43438A0", Offset = "0x43438A0", VA = "0x43438A0", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}
}
