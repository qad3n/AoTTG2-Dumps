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

[Token(Token = "0x200004D")]
public class JSONArray : JSONNode
{
	[Token(Token = "0x200004E")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__24 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001AF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001B0")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001B2")]
		[FieldOffset(Offset = "0x28")]
		public JSONArray _003C_003E4__this;

		[Token(Token = "0x40001B3")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000057")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000250")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000058")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000252")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600024C")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600024D")]
		[Address(RVA = "0x1DD1190", Offset = "0x1DCF790", VA = "0x181DD1190", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600024E")]
		[Address(RVA = "0x1DD0F00", Offset = "0x1DCF500", VA = "0x181DD0F00", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x1DD1220", Offset = "0x1DCF820", VA = "0x181DD1220")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x1DD1150", Offset = "0x1DCF750", VA = "0x181DD1150", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000253")]
		[Address(RVA = "0x1DD10B0", Offset = "0x1DCF6B0", VA = "0x181DD10B0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000254")]
		[Address(RVA = "0x1DD10B0", Offset = "0x1DCF6B0", VA = "0x181DD10B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x10")]
	private List<JSONNode> m_List;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x18")]
	private bool inline;

	[Token(Token = "0x17000050")]
	public override bool Inline
	{
		[Token(Token = "0x600023A")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600023C")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000052")]
	public override bool IsArray
	{
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000053")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x1DC0DC0", Offset = "0x1DBF3C0", VA = "0x181DC0DC0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x1DC1090", Offset = "0x1DBF690", VA = "0x181DC1090", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x1DC0E70", Offset = "0x1DBF470", VA = "0x181DC0E70", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x1DC0ED0", Offset = "0x1DBF4D0", VA = "0x181DC0ED0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public override int Count
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x1DC0D80", Offset = "0x1DBF380", VA = "0x181DC0D80", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000056")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x1DC0D00", Offset = "0x1DBF300", VA = "0x181DC0D00", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__24))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x1DC0940", Offset = "0x1DBEF40", VA = "0x181DC0940", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x1DC0420", Offset = "0x1DBEA20", VA = "0x181DC0420", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x1DC0A40", Offset = "0x1DBF040", VA = "0x181DC0A40", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x1DC09E0", Offset = "0x1DBEFE0", VA = "0x181DC09E0", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x1DC05E0", Offset = "0x1DBEBE0", VA = "0x181DC05E0", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x1DC0640", Offset = "0x1DBEC40", VA = "0x181DC0640", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x1DC0AF0", Offset = "0x1DBF0F0", VA = "0x181DC0AF0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x1DC0C60", Offset = "0x1DBF260", VA = "0x181DC0C60")]
	public JSONArray()
	{
	}
}
