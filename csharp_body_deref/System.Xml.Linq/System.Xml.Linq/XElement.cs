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
			[Address(RVA = "0x4694360", Offset = "0x4694360", VA = "0x4694360", Slot = "6")]
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
			[Address(RVA = "0x46943B0", Offset = "0x46943B0", VA = "0x46943B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x4693810", Offset = "0x4693810", VA = "0x4693810")]
		[DebuggerHidden]
		public _003CGetAttributes_003Ed__116(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x4694290", Offset = "0x4694290", VA = "0x4694290", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600007E")]
		[Address(RVA = "0x46942A0", Offset = "0x46942A0", VA = "0x46942A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4694370", Offset = "0x4694370", VA = "0x4694370", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x46943C0", Offset = "0x46943C0", VA = "0x46943C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<XAttribute> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EXml_002ELinq_002EXAttribute_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000083")]
		[Address(RVA = "0x4694470", Offset = "0x4694470", VA = "0x4694470", Slot = "5")]
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
		[Address(RVA = "0x4692AC0", Offset = "0x4692AC0", VA = "0x4692AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000017")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4692AD0", Offset = "0x4692AD0", VA = "0x4692AD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000018")]
	public XName Name
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4692AE0", Offset = "0x4692AE0", VA = "0x4692AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4692AF0", Offset = "0x4692AF0", VA = "0x4692AF0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700001A")]
	public string Value
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4692B00", Offset = "0x4692B00", VA = "0x4692B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x4692B80", Offset = "0x4692B80", VA = "0x4692B80")]
		set
		{
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x46916B0", Offset = "0x46916B0", VA = "0x46916B0")]
	public XElement(XName name)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4692A20", Offset = "0x4692A20", VA = "0x4692A20")]
	public XElement(XElement other)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x468E400", Offset = "0x468E400", VA = "0x468E400")]
	public XElement(XStreamingElement other)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4692BF0", Offset = "0x4692BF0", VA = "0x4692BF0")]
	public XAttribute Attribute(XName name)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4692C20", Offset = "0x4692C20", VA = "0x4692C20")]
	public IEnumerable<XAttribute> Attributes()
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x468C730", Offset = "0x468C730", VA = "0x468C730")]
	public string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4692DF0", Offset = "0x4692DF0", VA = "0x4692DF0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x46930F0", Offset = "0x46930F0", VA = "0x46930F0", Slot = "15")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4693100", Offset = "0x4693100", VA = "0x4693100", Slot = "16")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4693370", Offset = "0x4693370", VA = "0x4693370", Slot = "17")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4693390", Offset = "0x4693390", VA = "0x4693390", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x46936E0", Offset = "0x46936E0", VA = "0x46936E0", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4693470", Offset = "0x4693470", VA = "0x4693470")]
	internal void AppendAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4691730", Offset = "0x4691730", VA = "0x4691730")]
	internal void AppendAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x46937C0", Offset = "0x46937C0", VA = "0x46937C0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4692C30", Offset = "0x4692C30", VA = "0x4692C30")]
	[IteratorStateMachine(typeof(_003CGetAttributes_003Ed__116))]
	private IEnumerable<XAttribute> GetAttributes(XName name)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4692CD0", Offset = "0x4692CD0", VA = "0x4692CD0")]
	private string GetNamespaceOfPrefixInScope(string prefix, XElement outOfScope)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4693300", Offset = "0x4693300", VA = "0x4693300")]
	private void ReadElementFrom(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4693840", Offset = "0x4693840", VA = "0x4693840")]
	private void ReadElementFromImpl(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x46919E0", Offset = "0x46919E0", VA = "0x46919E0")]
	internal void SetEndElementLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4694170", Offset = "0x4694170", VA = "0x4694170", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}
}
