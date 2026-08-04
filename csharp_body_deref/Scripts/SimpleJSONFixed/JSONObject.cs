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
			[Address(RVA = "0x3F7F540", Offset = "0x3F7F540", VA = "0x3F7F540", Slot = "6")]
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
			[Address(RVA = "0x3F7F590", Offset = "0x3F7F590", VA = "0x3F7F590", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600025C")]
		[Address(RVA = "0x3F7ED40", Offset = "0x3F7ED40", VA = "0x3F7ED40")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600025D")]
		[Address(RVA = "0x3F7F270", Offset = "0x3F7F270", VA = "0x3F7F270", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600025E")]
		[Address(RVA = "0x3F7F2C0", Offset = "0x3F7F2C0", VA = "0x3F7F2C0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600025F")]
		[Address(RVA = "0x3F7F500", Offset = "0x3F7F500", VA = "0x3F7F500")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000261")]
		[Address(RVA = "0x3F7F550", Offset = "0x3F7F550", VA = "0x3F7F550", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000263")]
		[Address(RVA = "0x3F7F5A0", Offset = "0x3F7F5A0", VA = "0x3F7F5A0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000264")]
		[Address(RVA = "0x3F7F640", Offset = "0x3F7F640", VA = "0x3F7F640", Slot = "5")]
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
		[Address(RVA = "0x3F7DF40", Offset = "0x3F7DF40", VA = "0x3F7DF40", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x3F7DF50", Offset = "0x3F7DF50", VA = "0x3F7DF50", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x3F7DF60", Offset = "0x3F7DF60", VA = "0x3F7DF60", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000059")]
	public override bool IsObject
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x3F7DF70", Offset = "0x3F7DF70", VA = "0x3F7DF70", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x600024A")]
		[Address(RVA = "0x3F7E030", Offset = "0x3F7E030", VA = "0x3F7E030", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x3F7E1C0", Offset = "0x3F7E1C0", VA = "0x3F7E1C0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x3F7E2D0", Offset = "0x3F7E2D0", VA = "0x3F7E2D0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x3F7E360", Offset = "0x3F7E360", VA = "0x3F7E360", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public override int Count
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x3F7E470", Offset = "0x3F7E470", VA = "0x3F7E470", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005D")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x3F7ECC0", Offset = "0x3F7ECC0", VA = "0x3F7ECC0", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__27))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3F7DF80", Offset = "0x3F7DF80", VA = "0x3F7DF80", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x3F7E4B0", Offset = "0x3F7E4B0", VA = "0x3F7E4B0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x3F7E600", Offset = "0x3F7E600", VA = "0x3F7E600", Slot = "22")]
	public override JSONNode Remove(string aKey)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x3F7E6B0", Offset = "0x3F7E6B0", VA = "0x3F7E6B0", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3F7E770", Offset = "0x3F7E770", VA = "0x3F7E770", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3F7E950", Offset = "0x3F7E950", VA = "0x3F7E950", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3F7E990", Offset = "0x3F7E990", VA = "0x3F7E990", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x3F7EBF0", Offset = "0x3F7EBF0", VA = "0x3F7EBF0", Slot = "28")]
	public override bool HasKey(string aKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x3F7EC40", Offset = "0x3F7EC40", VA = "0x3F7EC40", Slot = "29")]
	public override JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3F7ED70", Offset = "0x3F7ED70", VA = "0x3F7ED70", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3F7B690", Offset = "0x3F7B690", VA = "0x3F7B690")]
	public JSONObject()
	{
	}
}
