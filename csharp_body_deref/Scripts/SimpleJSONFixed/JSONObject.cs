using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x200004F")]
public class JSONObject : JSONNode
{
	[Token(Token = "0x2000051")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__27 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001AB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001AE")]
		[FieldOffset(Offset = "0x28")]
		public JSONObject _003C_003E4__this;

		[Token(Token = "0x40001AF")]
		[FieldOffset(Offset = "0x30")]
		private Dictionary<string, JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x1700005E")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000260")]
			[Address(RVA = "0x3C89BF0", Offset = "0x3C89BF0", VA = "0x3C89BF0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700005F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000262")]
			[Address(RVA = "0x3C89C40", Offset = "0x3C89C40", VA = "0x3C89C40", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600025C")]
		[Address(RVA = "0x3C893F0", Offset = "0x3C893F0", VA = "0x3C893F0")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600025D")]
		[Address(RVA = "0x3C89920", Offset = "0x3C89920", VA = "0x3C89920", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600025E")]
		[Address(RVA = "0x3C89970", Offset = "0x3C89970", VA = "0x3C89970", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600025F")]
		[Address(RVA = "0x3C89BB0", Offset = "0x3C89BB0", VA = "0x3C89BB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000261")]
		[Address(RVA = "0x3C89C00", Offset = "0x3C89C00", VA = "0x3C89C00", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000263")]
		[Address(RVA = "0x3C89C50", Offset = "0x3C89C50", VA = "0x3C89C50", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000264")]
		[Address(RVA = "0x3C89CF0", Offset = "0x3C89CF0", VA = "0x3C89CF0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<string, JSONNode> m_Dict;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x17000057")]
	public override bool Inline
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x3C885F0", Offset = "0x3C885F0", VA = "0x3C885F0", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x3C88600", Offset = "0x3C88600", VA = "0x3C88600", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x3C88610", Offset = "0x3C88610", VA = "0x3C88610", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000059")]
	public override bool IsObject
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x3C88620", Offset = "0x3C88620", VA = "0x3C88620", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x3C886E0", Offset = "0x3C886E0", VA = "0x3C886E0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x3C88870", Offset = "0x3C88870", VA = "0x3C88870", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x3C88980", Offset = "0x3C88980", VA = "0x3C88980", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x3C88A10", Offset = "0x3C88A10", VA = "0x3C88A10", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public override int Count
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x3C88B20", Offset = "0x3C88B20", VA = "0x3C88B20", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005D")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x3C89370", Offset = "0x3C89370", VA = "0x3C89370", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__27))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3C88630", Offset = "0x3C88630", VA = "0x3C88630", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x3C88B60", Offset = "0x3C88B60", VA = "0x3C88B60", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x3C88CB0", Offset = "0x3C88CB0", VA = "0x3C88CB0", Slot = "22")]
	public override JSONNode Remove(string aKey)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x3C88D60", Offset = "0x3C88D60", VA = "0x3C88D60", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3C88E20", Offset = "0x3C88E20", VA = "0x3C88E20", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3C89000", Offset = "0x3C89000", VA = "0x3C89000", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3C89040", Offset = "0x3C89040", VA = "0x3C89040", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x3C892A0", Offset = "0x3C892A0", VA = "0x3C892A0", Slot = "28")]
	public override bool HasKey(string aKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x3C892F0", Offset = "0x3C892F0", VA = "0x3C892F0", Slot = "29")]
	public override JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3C89420", Offset = "0x3C89420", VA = "0x3C89420", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3C85D40", Offset = "0x3C85D40", VA = "0x3C85D40")]
	public JSONObject()
	{
	}
}
