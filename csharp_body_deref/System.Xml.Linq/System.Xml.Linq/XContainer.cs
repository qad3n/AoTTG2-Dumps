// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x25E39A0", Offset = "0x25E1FA0", VA = "0x1825E39A0")]
		public ContentReader(XContainer rootContainer)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x25E39E0", Offset = "0x25E1FE0", VA = "0x1825E39E0")]
		public ContentReader(XContainer rootContainer, XmlReader r, LoadOptions o)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x25E2F20", Offset = "0x25E1520", VA = "0x1825E2F20")]
		public bool ReadContentFrom(XContainer rootContainer, XmlReader r)
		{
			return default(bool);
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x25E2000", Offset = "0x25E0600", VA = "0x1825E2000")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000039")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CNodes_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600003A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600003B")]
		[Address(RVA = "0x25E4DE0", Offset = "0x25E33E0", VA = "0x1825E4DE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x25E5080", Offset = "0x25E3680", VA = "0x1825E5080", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x25E4FE0", Offset = "0x25E35E0", VA = "0x1825E4FE0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<XNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EXml_002ELinq_002EXNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x25E4FE0", Offset = "0x25E35E0", VA = "0x1825E4FE0", Slot = "5")]
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
		[Address(RVA = "0x25E86A0", Offset = "0x25E6CA0", VA = "0x1825E86A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal XContainer()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x25E8540", Offset = "0x25E6B40", VA = "0x1825E8540")]
	internal XContainer(XContainer other)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x25E6C20", Offset = "0x25E5220", VA = "0x1825E6C20")]
	public void Add(object content)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x25E7800", Offset = "0x25E5E00", VA = "0x1825E7800")]
	[IteratorStateMachine(typeof(_003CNodes_003Ed__18))]
	public IEnumerable<XNode> Nodes()
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x25E7F80", Offset = "0x25E6580", VA = "0x1825E7F80")]
	public void RemoveNodes()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	internal virtual void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	internal virtual void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x25E6210", Offset = "0x25E4810", VA = "0x1825E6210")]
	internal void AddContentSkipNotify(object content)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x25E65E0", Offset = "0x25E4BE0", VA = "0x1825E65E0")]
	internal void AddNode(XNode n)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x25E6540", Offset = "0x25E4B40", VA = "0x1825E6540")]
	internal void AddNodeSkipNotify(XNode n)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x25E6830", Offset = "0x25E4E30", VA = "0x1825E6830")]
	internal void AddString(string s)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x25E6680", Offset = "0x25E4C80", VA = "0x1825E6680")]
	internal void AddStringSkipNotify(string s)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x25E70A0", Offset = "0x25E56A0", VA = "0x1825E70A0")]
	internal void AppendNode(XNode n)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x25E6FB0", Offset = "0x25E55B0", VA = "0x1825E6FB0")]
	internal void AppendNodeSkipNotify(XNode n)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x25E71D0", Offset = "0x25E57D0", VA = "0x1825E71D0", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x25E72C0", Offset = "0x25E58C0", VA = "0x1825E72C0")]
	internal void ConvertTextToNode()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x25E73D0", Offset = "0x25E59D0", VA = "0x1825E73D0")]
	internal static string GetStringValue(object value)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x25E7880", Offset = "0x25E5E80", VA = "0x1825E7880")]
	internal void ReadContentFrom(XmlReader r)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x25E7990", Offset = "0x25E5F90", VA = "0x1825E7990")]
	internal void ReadContentFrom(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x25E7C30", Offset = "0x25E6230", VA = "0x1825E7C30")]
	internal void RemoveNode(XNode n)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x25E7EA0", Offset = "0x25E64A0", VA = "0x1825E7EA0")]
	private void RemoveNodesSkipNotify()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	internal virtual void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	internal virtual void ValidateString(string s)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x25E83D0", Offset = "0x25E69D0", VA = "0x1825E83D0")]
	internal void WriteContentTo(XmlWriter writer)
	{
	}
}
