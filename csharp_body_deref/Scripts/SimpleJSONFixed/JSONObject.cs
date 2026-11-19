// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONObject.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x200004E")]
public class JSONObject : JSONNode
{
	[Token(Token = "0x2000050")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__27 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x28")]
		public JSONObject _003C_003E4__this;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0x30")]
		private Dictionary<string, JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000059")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000279")]
			[Address(RVA = "0x5768E60", Offset = "0x5767E60", VA = "0x5768E60", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700005A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600027B")]
			[Address(RVA = "0x5768EB0", Offset = "0x5767EB0", VA = "0x5768EB0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000275")]
		[Address(RVA = "0x57687F0", Offset = "0x57677F0", VA = "0x57687F0")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x5768BE0", Offset = "0x5767BE0", VA = "0x5768BE0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000277")]
		[Address(RVA = "0x5768C30", Offset = "0x5767C30", VA = "0x5768C30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x5768E20", Offset = "0x5767E20", VA = "0x5768E20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x5768E70", Offset = "0x5767E70", VA = "0x5768E70", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5768EC0", Offset = "0x5767EC0", VA = "0x5768EC0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600027D")]
		[Address(RVA = "0x5768F60", Offset = "0x5767F60", VA = "0x5768F60", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<string, JSONNode> m_Dict;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x17000052")]
	public override bool Inline
	{
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x5767A70", Offset = "0x5766A70", VA = "0x5767A70", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x5767A80", Offset = "0x5766A80", VA = "0x5767A80", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x5767A90", Offset = "0x5766A90", VA = "0x5767A90", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000054")]
	public override bool IsObject
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x5767AA0", Offset = "0x5766AA0", VA = "0x5767AA0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000055")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x5767B60", Offset = "0x5766B60", VA = "0x5767B60", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x5767CF0", Offset = "0x5766CF0", VA = "0x5767CF0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x5767E00", Offset = "0x5766E00", VA = "0x5767E00", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x5767E90", Offset = "0x5766E90", VA = "0x5767E90", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public override int Count
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x5767FA0", Offset = "0x5766FA0", VA = "0x5767FA0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x5768780", Offset = "0x5767780", VA = "0x5768780", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__27))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5767AB0", Offset = "0x5766AB0", VA = "0x5767AB0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5767FE0", Offset = "0x5766FE0", VA = "0x5767FE0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x5768150", Offset = "0x5767150", VA = "0x5768150", Slot = "22")]
	public override JSONNode Remove(string aKey)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x5768200", Offset = "0x5767200", VA = "0x5768200", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x57682C0", Offset = "0x57672C0", VA = "0x57682C0", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x5768480", Offset = "0x5767480", VA = "0x5768480", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x57684C0", Offset = "0x57674C0", VA = "0x57684C0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x57686B0", Offset = "0x57676B0", VA = "0x57686B0", Slot = "28")]
	public override bool HasKey(string aKey)
	{
		return default(bool);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x5768700", Offset = "0x5767700", VA = "0x5768700", Slot = "29")]
	public override JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x5768820", Offset = "0x5767820", VA = "0x5768820", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x5765280", Offset = "0x5764280", VA = "0x5765280")]
	public JSONObject()
	{
	}
}
