using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000009")]
public abstract class XContainer : XNode
{
	[Token(Token = "0x200000A")]
	private sealed class ContentReader
	{
		[Token(Token = "0x4000009")]
		[FieldOffset(Offset = "0x10")]
		private readonly NamespaceCache _eCache;

		[Token(Token = "0x400000A")]
		[FieldOffset(Offset = "0x20")]
		private readonly NamespaceCache _aCache;

		[Token(Token = "0x400000B")]
		[FieldOffset(Offset = "0x30")]
		private readonly IXmlLineInfo _lineInfo;

		[Token(Token = "0x400000C")]
		[FieldOffset(Offset = "0x38")]
		private XContainer _currentContainer;

		[Token(Token = "0x400000D")]
		[FieldOffset(Offset = "0x40")]
		private string _baseUri;

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x433EBC0", Offset = "0x433EBC0", VA = "0x433EBC0")]
		public ContentReader(XContainer rootContainer)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x433F660", Offset = "0x433F660", VA = "0x433F660")]
		public ContentReader(XContainer rootContainer, XmlReader r, LoadOptions o)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x433EBF0", Offset = "0x433EBF0", VA = "0x433EBF0")]
		public bool ReadContentFrom(XContainer rootContainer, XmlReader r)
		{
			return default(bool);
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x433F720", Offset = "0x433F720", VA = "0x433F720")]
		public bool ReadContentFrom(XContainer rootContainer, XmlReader r, LoadOptions o)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200000B")]
	[CompilerGenerated]
	private sealed class _003CNodes_003Ed__18 : IEnumerable<XNode>, IEnumerable, IEnumerator<XNode>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400000E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400000F")]
		[FieldOffset(Offset = "0x18")]
		private XNode _003C_003E2__current;

		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x28")]
		public XContainer _003C_003E4__this;

		[Token(Token = "0x4000012")]
		[FieldOffset(Offset = "0x30")]
		private XNode _003Cn_003E5__2;

		[Token(Token = "0x17000009")]
		private XNode System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EXml_002ELinq_002EXNode_003E_002ECurrent
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x4341300", Offset = "0x4341300", VA = "0x4341300", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x4341350", Offset = "0x4341350", VA = "0x4341350", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000039")]
		[Address(RVA = "0x433DC40", Offset = "0x433DC40", VA = "0x433DC40")]
		[DebuggerHidden]
		public _003CNodes_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4341250", Offset = "0x4341250", VA = "0x4341250", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4341260", Offset = "0x4341260", VA = "0x4341260", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4341310", Offset = "0x4341310", VA = "0x4341310", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4341360", Offset = "0x4341360", VA = "0x4341360", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<XNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EXml_002ELinq_002EXNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4341400", Offset = "0x4341400", VA = "0x4341400", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x28")]
	internal object content;

	[Token(Token = "0x17000008")]
	public XNode LastNode
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x433C940", Offset = "0x433C940", VA = "0x433C940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x433C710", Offset = "0x433C710", VA = "0x433C710")]
	internal XContainer()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x433C720", Offset = "0x433C720", VA = "0x433C720")]
	internal XContainer(XContainer other)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x433CA90", Offset = "0x433CA90", VA = "0x433CA90")]
	public void Add(object content)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x433DBC0", Offset = "0x433DBC0", VA = "0x433DBC0")]
	[IteratorStateMachine(typeof(_003CNodes_003Ed__18))]
	public IEnumerable<XNode> Nodes()
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x433DC70", Offset = "0x433DC70", VA = "0x433DC70")]
	public void RemoveNodes()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x433E360", Offset = "0x433E360", VA = "0x433E360", Slot = "11")]
	internal virtual void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x433E370", Offset = "0x433E370", VA = "0x433E370", Slot = "12")]
	internal virtual void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x433D180", Offset = "0x433D180", VA = "0x433D180")]
	internal void AddContentSkipNotify(object content)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x433D780", Offset = "0x433D780", VA = "0x433D780")]
	internal void AddNode(XNode n)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x433E380", Offset = "0x433E380", VA = "0x433E380")]
	internal void AddNodeSkipNotify(XNode n)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x433D800", Offset = "0x433D800", VA = "0x433D800")]
	internal void AddString(string s)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x433E400", Offset = "0x433E400", VA = "0x433E400")]
	internal void AddStringSkipNotify(string s)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x433E550", Offset = "0x433E550", VA = "0x433E550")]
	internal void AppendNode(XNode n)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x433C860", Offset = "0x433C860", VA = "0x433C860")]
	internal void AppendNodeSkipNotify(XNode n)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x433E9F0", Offset = "0x433E9F0", VA = "0x433E9F0", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x433E2A0", Offset = "0x433E2A0", VA = "0x433E2A0")]
	internal void ConvertTextToNode()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x433AE30", Offset = "0x433AE30", VA = "0x433AE30")]
	internal static string GetStringValue(object value)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x433EAC0", Offset = "0x433EAC0", VA = "0x433EAC0")]
	internal void ReadContentFrom(XmlReader r)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x433F540", Offset = "0x433F540", VA = "0x433F540")]
	internal void ReadContentFrom(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x43408E0", Offset = "0x43408E0", VA = "0x43408E0")]
	internal void RemoveNode(XNode n)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x433E1E0", Offset = "0x433E1E0", VA = "0x433E1E0")]
	private void RemoveNodesSkipNotify()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4340BE0", Offset = "0x4340BE0", VA = "0x4340BE0", Slot = "13")]
	internal virtual void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4340BF0", Offset = "0x4340BF0", VA = "0x4340BF0", Slot = "14")]
	internal virtual void ValidateString(string s)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4340C00", Offset = "0x4340C00", VA = "0x4340C00")]
	internal void WriteContentTo(XmlWriter writer)
	{
	}
}
