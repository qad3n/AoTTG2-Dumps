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
		[Address(RVA = "0x5FA0FF0", Offset = "0x5F9FFF0", VA = "0x5FA0FF0")]
		public ContentReader(XContainer rootContainer)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x5FA19D0", Offset = "0x5FA09D0", VA = "0x5FA19D0")]
		public ContentReader(XContainer rootContainer, XmlReader r, LoadOptions o)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x5FA1020", Offset = "0x5FA0020", VA = "0x5FA1020")]
		public bool ReadContentFrom(XContainer rootContainer, XmlReader r)
		{
			return default(bool);
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x5FA1A90", Offset = "0x5FA0A90", VA = "0x5FA1A90")]
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
			[Address(RVA = "0x5FA35B0", Offset = "0x5FA25B0", VA = "0x5FA35B0", Slot = "6")]
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
			[Address(RVA = "0x5FA3600", Offset = "0x5FA2600", VA = "0x5FA3600", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000039")]
		[Address(RVA = "0x5FA0160", Offset = "0x5F9F160", VA = "0x5FA0160")]
		[DebuggerHidden]
		public _003CNodes_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600003A")]
		[Address(RVA = "0x5FA3500", Offset = "0x5FA2500", VA = "0x5FA3500", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600003B")]
		[Address(RVA = "0x5FA3510", Offset = "0x5FA2510", VA = "0x5FA3510", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5FA35C0", Offset = "0x5FA25C0", VA = "0x5FA35C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5FA3610", Offset = "0x5FA2610", VA = "0x5FA3610", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<XNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EXml_002ELinq_002EXNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5FA36B0", Offset = "0x5FA26B0", VA = "0x5FA36B0", Slot = "5")]
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
		[Address(RVA = "0x5F9F1D0", Offset = "0x5F9E1D0", VA = "0x5F9F1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5F9EFC0", Offset = "0x5F9DFC0", VA = "0x5F9EFC0")]
	internal XContainer()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5F9EFD0", Offset = "0x5F9DFD0", VA = "0x5F9EFD0")]
	internal XContainer(XContainer other)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5F9F320", Offset = "0x5F9E320", VA = "0x5F9F320")]
	public void Add(object content)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5FA00F0", Offset = "0x5F9F0F0", VA = "0x5FA00F0")]
	[IteratorStateMachine(typeof(_003CNodes_003Ed__18))]
	public IEnumerable<XNode> Nodes()
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x5FA0190", Offset = "0x5F9F190", VA = "0x5FA0190")]
	public void RemoveNodes()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x5FA07E0", Offset = "0x5F9F7E0", VA = "0x5FA07E0", Slot = "11")]
	internal virtual void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x5FA07F0", Offset = "0x5F9F7F0", VA = "0x5FA07F0", Slot = "12")]
	internal virtual void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x5F9F870", Offset = "0x5F9E870", VA = "0x5F9F870")]
	internal void AddContentSkipNotify(object content)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x5F9FCB0", Offset = "0x5F9ECB0", VA = "0x5F9FCB0")]
	internal void AddNode(XNode n)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x5FA0800", Offset = "0x5F9F800", VA = "0x5FA0800")]
	internal void AddNodeSkipNotify(XNode n)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x5F9FD30", Offset = "0x5F9ED30", VA = "0x5F9FD30")]
	internal void AddString(string s)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5FA0880", Offset = "0x5F9F880", VA = "0x5FA0880")]
	internal void AddStringSkipNotify(string s)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5FA09D0", Offset = "0x5F9F9D0", VA = "0x5FA09D0")]
	internal void AppendNode(XNode n)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x5F9F100", Offset = "0x5F9E100", VA = "0x5F9F100")]
	internal void AppendNodeSkipNotify(XNode n)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5FA0E30", Offset = "0x5F9FE30", VA = "0x5FA0E30", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5FA0720", Offset = "0x5F9F720", VA = "0x5FA0720")]
	internal void ConvertTextToNode()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x5F9D890", Offset = "0x5F9C890", VA = "0x5F9D890")]
	internal static string GetStringValue(object value)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5FA0EF0", Offset = "0x5F9FEF0", VA = "0x5FA0EF0")]
	internal void ReadContentFrom(XmlReader r)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x5FA18B0", Offset = "0x5FA08B0", VA = "0x5FA18B0")]
	internal void ReadContentFrom(XmlReader r, LoadOptions o)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5FA2BA0", Offset = "0x5FA1BA0", VA = "0x5FA2BA0")]
	internal void RemoveNode(XNode n)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5FA0660", Offset = "0x5F9F660", VA = "0x5FA0660")]
	private void RemoveNodesSkipNotify()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5FA2EA0", Offset = "0x5FA1EA0", VA = "0x5FA2EA0", Slot = "13")]
	internal virtual void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5FA2EB0", Offset = "0x5FA1EB0", VA = "0x5FA2EB0", Slot = "14")]
	internal virtual void ValidateString(string s)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5FA2EC0", Offset = "0x5FA1EC0", VA = "0x5FA2EC0")]
	internal void WriteContentTo(XmlWriter writer)
	{
	}
}
