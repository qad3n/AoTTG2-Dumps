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
			[Address(RVA = "0x3F7DE30", Offset = "0x3F7DE30", VA = "0x3F7DE30", Slot = "6")]
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
			[Address(RVA = "0x3F7DE80", Offset = "0x3F7DE80", VA = "0x3F7DE80", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x3F7D960", Offset = "0x3F7D960", VA = "0x3F7D960")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x3F7DB90", Offset = "0x3F7DB90", VA = "0x3F7DB90", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x3F7DBE0", Offset = "0x3F7DBE0", VA = "0x3F7DBE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x3F7DDF0", Offset = "0x3F7DDF0", VA = "0x3F7DDF0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x3F7DE40", Offset = "0x3F7DE40", VA = "0x3F7DE40", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x3F7DE90", Offset = "0x3F7DE90", VA = "0x3F7DE90", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x3F7DF30", Offset = "0x3F7DF30", VA = "0x3F7DF30", Slot = "5")]
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
		[Address(RVA = "0x3F7CE60", Offset = "0x3F7CE60", VA = "0x3F7CE60", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x3F7CE70", Offset = "0x3F7CE70", VA = "0x3F7CE70", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x3F7CE80", Offset = "0x3F7CE80", VA = "0x3F7CE80", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000050")]
	public override bool IsArray
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x3F7CE90", Offset = "0x3F7CE90", VA = "0x3F7CE90", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x3F7CF30", Offset = "0x3F7CF30", VA = "0x3F7CF30", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x3F7D0B0", Offset = "0x3F7D0B0", VA = "0x3F7D0B0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3F7D1E0", Offset = "0x3F7D1E0", VA = "0x3F7D1E0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x3F7D290", Offset = "0x3F7D290", VA = "0x3F7D290", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public override int Count
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x3F7D390", Offset = "0x3F7D390", VA = "0x3F7D390", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000054")]
	public override IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x6000239")]
		[Address(RVA = "0x3F7D8E0", Offset = "0x3F7D8E0", VA = "0x3F7D8E0", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__24))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3F7CEA0", Offset = "0x3F7CEA0", VA = "0x3F7CEA0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x3F7D3D0", Offset = "0x3F7D3D0", VA = "0x3F7D3D0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3F7D4D0", Offset = "0x3F7D4D0", VA = "0x3F7D4D0", Slot = "23")]
	public override JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3F7D570", Offset = "0x3F7D570", VA = "0x3F7D570", Slot = "24")]
	public override JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x3F7D5D0", Offset = "0x3F7D5D0", VA = "0x3F7D5D0", Slot = "25")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x3F7D620", Offset = "0x3F7D620", VA = "0x3F7D620", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x3F7D990", Offset = "0x3F7D990", VA = "0x3F7D990", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x3F7B730", Offset = "0x3F7B730", VA = "0x3F7B730")]
	public JSONArray()
	{
	}
}
