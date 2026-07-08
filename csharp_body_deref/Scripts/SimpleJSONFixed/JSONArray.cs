using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x200004D")]
public class JSONArray : JSONNode
{
	[Token(Token = "0x200004E")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__24 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001A3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001A4")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001A5")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001A6")]
		[FieldOffset(Offset = "0x28")]
		public JSONArray _003C_003E4__this;

		[Token(Token = "0x40001A7")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000055")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000240")]
			[Address(RVA = "0x3C884E0", Offset = "0x3C884E0", VA = "0x3C884E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000056")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000242")]
			[Address(RVA = "0x3C88530", Offset = "0x3C88530", VA = "0x3C88530", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x3C88010", Offset = "0x3C88010", VA = "0x3C88010")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x3C88240", Offset = "0x3C88240", VA = "0x3C88240", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x3C88290", Offset = "0x3C88290", VA = "0x3C88290", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x3C884A0", Offset = "0x3C884A0", VA = "0x3C884A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x3C884F0", Offset = "0x3C884F0", VA = "0x3C884F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x3C88540", Offset = "0x3C88540", VA = "0x3C88540", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x3C885E0", Offset = "0x3C885E0", VA = "0x3C885E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x10")]
	private List<JSONNode> m_List;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x1700004E")]
	public override bool Inline
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x3C87510", Offset = "0x3C87510", VA = "0x3C87510", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x3C87520", Offset = "0x3C87520", VA = "0x3C87520", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x3C87530", Offset = "0x3C87530", VA = "0x3C87530", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000050")]
	public override bool IsArray
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x3C87540", Offset = "0x3C87540", VA = "0x3C87540", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x3C875E0", Offset = "0x3C875E0", VA = "0x3C875E0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x3C87760", Offset = "0x3C87760", VA = "0x3C87760", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3C87890", Offset = "0x3C87890", VA = "0x3C87890", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x3C87940", Offset = "0x3C87940", VA = "0x3C87940", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public override int Count
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x3C87A40", Offset = "0x3C87A40", VA = "0x3C87A40", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000054")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000239")]
		[Address(RVA = "0x3C87F90", Offset = "0x3C87F90", VA = "0x3C87F90", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__24))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3C87550", Offset = "0x3C87550", VA = "0x3C87550", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x3C87A80", Offset = "0x3C87A80", VA = "0x3C87A80", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3C87B80", Offset = "0x3C87B80", VA = "0x3C87B80", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3C87C20", Offset = "0x3C87C20", VA = "0x3C87C20", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x3C87C80", Offset = "0x3C87C80", VA = "0x3C87C80", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x3C87CD0", Offset = "0x3C87CD0", VA = "0x3C87CD0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x3C88040", Offset = "0x3C88040", VA = "0x3C88040", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x3C85DE0", Offset = "0x3C85DE0", VA = "0x3C85DE0")]
	public JSONArray()
	{
	}
}
