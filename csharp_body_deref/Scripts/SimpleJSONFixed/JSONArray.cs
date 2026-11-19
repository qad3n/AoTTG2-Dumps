// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONArray
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONArray.c
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

[Token(Token = "0x200004C")]
public class JSONArray : JSONNode
{
	[Token(Token = "0x200004D")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__24 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001BE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x28")]
		public JSONArray _003C_003E4__this;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000050")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000259")]
			[Address(RVA = "0x5767960", Offset = "0x5766960", VA = "0x5767960", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000051")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600025B")]
			[Address(RVA = "0x57679B0", Offset = "0x57669B0", VA = "0x57679B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000255")]
		[Address(RVA = "0x5767430", Offset = "0x5766430", VA = "0x5767430")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000256")]
		[Address(RVA = "0x5767700", Offset = "0x5766700", VA = "0x5767700", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000257")]
		[Address(RVA = "0x5767750", Offset = "0x5766750", VA = "0x5767750", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000258")]
		[Address(RVA = "0x5767920", Offset = "0x5766920", VA = "0x5767920")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600025A")]
		[Address(RVA = "0x5767970", Offset = "0x5766970", VA = "0x5767970", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600025C")]
		[Address(RVA = "0x57679C0", Offset = "0x57669C0", VA = "0x57679C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600025D")]
		[Address(RVA = "0x5767A60", Offset = "0x5766A60", VA = "0x5767A60", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10")]
	private List<JSONNode> m_List;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x17000049")]
	public override bool Inline
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x5766980", Offset = "0x5765980", VA = "0x5766980", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x5766990", Offset = "0x5765990", VA = "0x5766990", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x57669A0", Offset = "0x57659A0", VA = "0x57669A0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700004B")]
	public override bool IsArray
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x57669B0", Offset = "0x57659B0", VA = "0x57669B0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x5766A50", Offset = "0x5765A50", VA = "0x5766A50", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x5766BD0", Offset = "0x5765BD0", VA = "0x5766BD0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x5766D00", Offset = "0x5765D00", VA = "0x5766D00", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x5766DB0", Offset = "0x5765DB0", VA = "0x5766DB0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public override int Count
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x5766EB0", Offset = "0x5765EB0", VA = "0x5766EB0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004F")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x57673C0", Offset = "0x57663C0", VA = "0x57673C0", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__24))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x57669C0", Offset = "0x57659C0", VA = "0x57669C0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x5766EF0", Offset = "0x5765EF0", VA = "0x5766EF0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x5766FF0", Offset = "0x5765FF0", VA = "0x5766FF0", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x5767090", Offset = "0x5766090", VA = "0x5767090", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x57670F0", Offset = "0x57660F0", VA = "0x57670F0", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x5767140", Offset = "0x5766140", VA = "0x5767140", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x5767460", Offset = "0x5766460", VA = "0x5767460", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x5765320", Offset = "0x5764320", VA = "0x5765320")]
	public JSONArray()
	{
	}
}
