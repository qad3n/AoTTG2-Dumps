// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONNode.c
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

[Token(Token = "0x2000045")]
public abstract class JSONNode
{
	[Token(Token = "0x2000046")]
	public struct Enumerator
	{
		[Token(Token = "0x2000047")]
		private enum Type
		{
			[Token(Token = "0x4000191")]
			None,
			[Token(Token = "0x4000192")]
			Array,
			[Token(Token = "0x4000193")]
			Object
		}

		[Token(Token = "0x400018D")]
		[FieldOffset(Offset = "0x0")]
		private Type type;

		[Token(Token = "0x400018E")]
		[FieldOffset(Offset = "0x8")]
		private Dictionary<string, JSONNode>.Enumerator m_Object;

		[Token(Token = "0x400018F")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator m_Array;

		[Token(Token = "0x17000044")]
		public bool IsValid
		{
			[Token(Token = "0x60001FF")]
			[Address(RVA = "0x3F7B820", Offset = "0x3F7B820", VA = "0x3F7B820")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000045")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x6000202")]
			[Address(RVA = "0x3F7B8C0", Offset = "0x3F7B8C0", VA = "0x3F7B8C0")]
			get
			{
				return default(KeyValuePair<string, JSONNode>);
			}
		}

		[Token(Token = "0x6000200")]
		[Address(RVA = "0x3F7B830", Offset = "0x3F7B830", VA = "0x3F7B830")]
		public Enumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x6000201")]
		[Address(RVA = "0x3F7B870", Offset = "0x3F7B870", VA = "0x3F7B870")]
		public Enumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x6000203")]
		[Address(RVA = "0x3F7B9A0", Offset = "0x3F7B9A0", VA = "0x3F7B9A0")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000048")]
	public struct ValueEnumerator
	{
		[Token(Token = "0x4000194")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000046")]
		public JSONNode Current
		{
			[Token(Token = "0x6000207")]
			[Address(RVA = "0x3F7BB90", Offset = "0x3F7BB90", VA = "0x3F7BB90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000204")]
		[Address(RVA = "0x3F7BA10", Offset = "0x3F7BA10", VA = "0x3F7BA10")]
		public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x6000205")]
		[Address(RVA = "0x3F7BAA0", Offset = "0x3F7BAA0", VA = "0x3F7BAA0")]
		public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x6000206")]
		[Address(RVA = "0x3F7BB50", Offset = "0x3F7BB50", VA = "0x3F7BB50")]
		public ValueEnumerator(Enumerator aEnumerator)
		{
		}

		[Token(Token = "0x6000208")]
		[Address(RVA = "0x3F7BBC0", Offset = "0x3F7BBC0", VA = "0x3F7BBC0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000209")]
		[Address(RVA = "0x3F7BC30", Offset = "0x3F7BC30", VA = "0x3F7BC30")]
		public ValueEnumerator GetEnumerator()
		{
			return default(ValueEnumerator);
		}
	}

	[Token(Token = "0x2000049")]
	public struct KeyEnumerator
	{
		[Token(Token = "0x4000195")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000047")]
		public string Current
		{
			[Token(Token = "0x600020D")]
			[Address(RVA = "0x3F7BDE0", Offset = "0x3F7BDE0", VA = "0x3F7BDE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600020A")]
		[Address(RVA = "0x3F7BC60", Offset = "0x3F7BC60", VA = "0x3F7BC60")]
		public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x600020B")]
		[Address(RVA = "0x3F7BCF0", Offset = "0x3F7BCF0", VA = "0x3F7BCF0")]
		public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x600020C")]
		[Address(RVA = "0x3F7BDA0", Offset = "0x3F7BDA0", VA = "0x3F7BDA0")]
		public KeyEnumerator(Enumerator aEnumerator)
		{
		}

		[Token(Token = "0x600020E")]
		[Address(RVA = "0x3F7BE10", Offset = "0x3F7BE10", VA = "0x3F7BE10")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600020F")]
		[Address(RVA = "0x3F7BE80", Offset = "0x3F7BE80", VA = "0x3F7BE80")]
		public KeyEnumerator GetEnumerator()
		{
			return default(KeyEnumerator);
		}
	}

	[Token(Token = "0x200004A")]
	public class LinqEnumerator : IEnumerator<KeyValuePair<string, JSONNode>>, IEnumerator, IDisposable, IEnumerable<KeyValuePair<string, JSONNode>>, IEnumerable
	{
		[Token(Token = "0x4000196")]
		[FieldOffset(Offset = "0x10")]
		private JSONNode m_Node;

		[Token(Token = "0x4000197")]
		[FieldOffset(Offset = "0x18")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000048")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x6000211")]
			[Address(RVA = "0x3F7BEB0", Offset = "0x3F7BEB0", VA = "0x3F7BEB0", Slot = "4")]
			get
			{
				return default(KeyValuePair<string, JSONNode>);
			}
		}

		[Token(Token = "0x17000049")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000212")]
			[Address(RVA = "0x3F7BEC0", Offset = "0x3F7BEC0", VA = "0x3F7BEC0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000210")]
		[Address(RVA = "0x3F79240", Offset = "0x3F79240", VA = "0x3F79240")]
		internal LinqEnumerator(JSONNode aNode)
		{
		}

		[Token(Token = "0x6000213")]
		[Address(RVA = "0x3F7BF20", Offset = "0x3F7BF20", VA = "0x3F7BF20", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000214")]
		[Address(RVA = "0x3F7BF90", Offset = "0x3F7BF90", VA = "0x3F7BF90", Slot = "5")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000215")]
		[Address(RVA = "0x3F7BFD0", Offset = "0x3F7BFD0", VA = "0x3F7BFD0", Slot = "9")]
		public IEnumerator<KeyValuePair<string, JSONNode>> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000216")]
		[Address(RVA = "0x3F7C020", Offset = "0x3F7C020", VA = "0x3F7C020", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000217")]
		[Address(RVA = "0x3F7C160", Offset = "0x3F7C160", VA = "0x3F7C160", Slot = "10")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__43 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000198")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000199")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x400019A")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x1700004A")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x600021B")]
			[Address(RVA = "0x3F7C1E0", Offset = "0x3F7C1E0", VA = "0x3F7C1E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600021D")]
			[Address(RVA = "0x3F7C230", Offset = "0x3F7C230", VA = "0x3F7C230", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000218")]
		[Address(RVA = "0x3F78FD0", Offset = "0x3F78FD0", VA = "0x3F78FD0")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000219")]
		[Address(RVA = "0x3F7C1B0", Offset = "0x3F7C1B0", VA = "0x3F7C1B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x3F7C1C0", Offset = "0x3F7C1C0", VA = "0x3F7C1C0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600021C")]
		[Address(RVA = "0x3F7C1F0", Offset = "0x3F7C1F0", VA = "0x3F7C1F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600021E")]
		[Address(RVA = "0x3F7C240", Offset = "0x3F7C240", VA = "0x3F7C240", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600021F")]
		[Address(RVA = "0x3F7C2C0", Offset = "0x3F7C2C0", VA = "0x3F7C2C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200004C")]
	[CompilerGenerated]
	private sealed class _003Cget_DeepChildren_003Ed__45 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400019B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400019C")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x400019D")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400019E")]
		[FieldOffset(Offset = "0x28")]
		public JSONNode _003C_003E4__this;

		[Token(Token = "0x400019F")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x40001A0")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap2;

		[Token(Token = "0x1700004C")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000225")]
			[Address(RVA = "0x3F7CD50", Offset = "0x3F7CD50", VA = "0x3F7CD50", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000227")]
			[Address(RVA = "0x3F7CDA0", Offset = "0x3F7CDA0", VA = "0x3F7CDA0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000220")]
		[Address(RVA = "0x3F79080", Offset = "0x3F79080", VA = "0x3F79080")]
		[DebuggerHidden]
		public _003Cget_DeepChildren_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000221")]
		[Address(RVA = "0x3F7C340", Offset = "0x3F7C340", VA = "0x3F7C340", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000222")]
		[Address(RVA = "0x3F7C5B0", Offset = "0x3F7C5B0", VA = "0x3F7C5B0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000223")]
		[Address(RVA = "0x3F7CCB0", Offset = "0x3F7CCB0", VA = "0x3F7CCB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x3F7CC10", Offset = "0x3F7CC10", VA = "0x3F7CC10")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000226")]
		[Address(RVA = "0x3F7CD60", Offset = "0x3F7CD60", VA = "0x3F7CD60", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x3F7CDB0", Offset = "0x3F7CDB0", VA = "0x3F7CDB0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000229")]
		[Address(RVA = "0x3F7CE50", Offset = "0x3F7CE50", VA = "0x3F7CE50", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x0")]
	public static bool forceASCII;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x1")]
	public static readonly bool longAsString;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x2")]
	public static bool allowLineComments;

	[Token(Token = "0x400018C")]
	[ThreadStatic]
	private static StringBuilder m_EscapeBuilder;

	[Token(Token = "0x1700002A")]
	public abstract JSONNodeType Tag
	{
		[Token(Token = "0x60001B6")]
		get;
	}

	[Token(Token = "0x1700002B")]
	public virtual JSONNode this[int aIndex]
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x3F78DB0", Offset = "0x3F78DB0", VA = "0x3F78DB0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x3F78DC0", Offset = "0x3F78DC0", VA = "0x3F78DC0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public virtual JSONNode this[string aKey]
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x3F78DD0", Offset = "0x3F78DD0", VA = "0x3F78DD0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x3F78DE0", Offset = "0x3F78DE0", VA = "0x3F78DE0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public virtual string Value
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x3F78DF0", Offset = "0x3F78DF0", VA = "0x3F78DF0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x3F78E20", Offset = "0x3F78E20", VA = "0x3F78E20", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public virtual int Count
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x3F78E30", Offset = "0x3F78E30", VA = "0x3F78E30", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002F")]
	public virtual bool IsNumber
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x3F78E40", Offset = "0x3F78E40", VA = "0x3F78E40", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000030")]
	public virtual bool IsString
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x3F78E50", Offset = "0x3F78E50", VA = "0x3F78E50", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000031")]
	public virtual bool IsBoolean
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x3F78E60", Offset = "0x3F78E60", VA = "0x3F78E60", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000032")]
	public virtual bool IsNull
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x3F78E70", Offset = "0x3F78E70", VA = "0x3F78E70", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public virtual bool IsArray
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x3F78E80", Offset = "0x3F78E80", VA = "0x3F78E80", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public virtual bool IsObject
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x3F78E90", Offset = "0x3F78E90", VA = "0x3F78E90", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public virtual bool Inline
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x3F78EA0", Offset = "0x3F78EA0", VA = "0x3F78EA0", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x3F78EB0", Offset = "0x3F78EB0", VA = "0x3F78EB0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public virtual IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x3F78F80", Offset = "0x3F78F80", VA = "0x3F78F80", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__43))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	public IEnumerable<JSONNode> DeepChildren
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x3F79000", Offset = "0x3F79000", VA = "0x3F79000")]
		[IteratorStateMachine(typeof(_003Cget_DeepChildren_003Ed__45))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public IEnumerable<KeyValuePair<string, JSONNode>> Linq
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x3F791F0", Offset = "0x3F791F0", VA = "0x3F791F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public KeyEnumerator Keys
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3F793B0", Offset = "0x3F793B0", VA = "0x3F793B0")]
		get
		{
			return default(KeyEnumerator);
		}
	}

	[Token(Token = "0x1700003A")]
	public ValueEnumerator Values
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3F79410", Offset = "0x3F79410", VA = "0x3F79410")]
		get
		{
			return default(ValueEnumerator);
		}
	}

	[Token(Token = "0x1700003B")]
	public virtual double AsDouble
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3F79470", Offset = "0x3F79470", VA = "0x3F79470", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3F79510", Offset = "0x3F79510", VA = "0x3F79510", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public virtual int AsInt
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3F79590", Offset = "0x3F79590", VA = "0x3F79590", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3F795B0", Offset = "0x3F795B0", VA = "0x3F795B0", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public virtual float AsFloat
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3F795D0", Offset = "0x3F795D0", VA = "0x3F795D0", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3F795F0", Offset = "0x3F795F0", VA = "0x3F795F0", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public virtual bool AsBool
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x3F79610", Offset = "0x3F79610", VA = "0x3F79610", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x3F796A0", Offset = "0x3F796A0", VA = "0x3F796A0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public virtual long AsLong
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x3F79710", Offset = "0x3F79710", VA = "0x3F79710", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x3F79760", Offset = "0x3F79760", VA = "0x3F79760", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public virtual ulong AsULong
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x3F797A0", Offset = "0x3F797A0", VA = "0x3F797A0", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x3F797F0", Offset = "0x3F797F0", VA = "0x3F797F0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public virtual JSONArray AsArray
	{
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x3F79830", Offset = "0x3F79830", VA = "0x3F79830", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public virtual JSONObject AsObject
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x3F79890", Offset = "0x3F79890", VA = "0x3F79890", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	internal static StringBuilder EscapeBuilder
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x3F7A650", Offset = "0x3F7A650", VA = "0x3F7A650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3F78EC0", Offset = "0x3F78EC0", VA = "0x3F78EC0", Slot = "20")]
	public virtual void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3F78ED0", Offset = "0x3F78ED0", VA = "0x3F78ED0", Slot = "21")]
	public virtual void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3F78F30", Offset = "0x3F78F30", VA = "0x3F78F30", Slot = "22")]
	public virtual JSONNode Remove(string aKey)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3F78F40", Offset = "0x3F78F40", VA = "0x3F78F40", Slot = "23")]
	public virtual JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3F78F50", Offset = "0x3F78F50", VA = "0x3F78F50", Slot = "24")]
	public virtual JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x3F78F60", Offset = "0x3F78F60", VA = "0x3F78F60", Slot = "25")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3F78F70", Offset = "0x3F78F70", VA = "0x3F78F70", Slot = "26")]
	public virtual JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3F790B0", Offset = "0x3F790B0", VA = "0x3F790B0", Slot = "28")]
	public virtual bool HasKey(string aKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3F790C0", Offset = "0x3F790C0", VA = "0x3F790C0", Slot = "29")]
	public virtual JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3F790D0", Offset = "0x3F790D0", VA = "0x3F790D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3F79160", Offset = "0x3F79160", VA = "0x3F79160", Slot = "30")]
	public virtual string ToString(int aIndent)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	internal abstract void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode);

	[Token(Token = "0x60001D4")]
	public abstract Enumerator GetEnumerator();

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x3F798F0", Offset = "0x3F798F0", VA = "0x3F798F0")]
	public static implicit operator JSONNode(string s)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x3F79B00", Offset = "0x3F79B00", VA = "0x3F79B00")]
	public static implicit operator string(JSONNode d)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x3F79CD0", Offset = "0x3F79CD0", VA = "0x3F79CD0")]
	public static implicit operator JSONNode(double n)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x3F79DC0", Offset = "0x3F79DC0", VA = "0x3F79DC0")]
	public static implicit operator double(JSONNode d)
	{
		return default(double);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x3F79E30", Offset = "0x3F79E30", VA = "0x3F79E30")]
	public static implicit operator JSONNode(float n)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x3F79ED0", Offset = "0x3F79ED0", VA = "0x3F79ED0")]
	public static implicit operator float(JSONNode d)
	{
		return default(float);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x3F79F40", Offset = "0x3F79F40", VA = "0x3F79F40")]
	public static implicit operator JSONNode(int n)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3F79FD0", Offset = "0x3F79FD0", VA = "0x3F79FD0")]
	public static implicit operator int(JSONNode d)
	{
		return default(int);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x3F7A040", Offset = "0x3F7A040", VA = "0x3F7A040")]
	public static implicit operator JSONNode(long n)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x3F7A1C0", Offset = "0x3F7A1C0", VA = "0x3F7A1C0")]
	public static implicit operator long(JSONNode d)
	{
		return default(long);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x3F7A230", Offset = "0x3F7A230", VA = "0x3F7A230")]
	public static implicit operator JSONNode(ulong n)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x3F7A3E0", Offset = "0x3F7A3E0", VA = "0x3F7A3E0")]
	public static implicit operator ulong(JSONNode d)
	{
		return default(ulong);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x3F7A450", Offset = "0x3F7A450", VA = "0x3F7A450")]
	public static implicit operator JSONNode(bool b)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3F7A530", Offset = "0x3F7A530", VA = "0x3F7A530")]
	public static implicit operator bool(JSONNode d)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x3F7A5A0", Offset = "0x3F7A5A0", VA = "0x3F7A5A0")]
	public static implicit operator JSONNode(KeyValuePair<string, JSONNode> aKeyValue)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x3F79B70", Offset = "0x3F79B70", VA = "0x3F79B70")]
	public static bool operator ==(JSONNode a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x3F7A5D0", Offset = "0x3F7A5D0", VA = "0x3F7A5D0")]
	public static bool operator !=(JSONNode a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3F7A630", Offset = "0x3F7A630", VA = "0x3F7A630", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x3F7A640", Offset = "0x3F7A640", VA = "0x3F7A640", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3F7A750", Offset = "0x3F7A750", VA = "0x3F7A750")]
	internal static string Escape(string aText)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x3F7AA10", Offset = "0x3F7AA10", VA = "0x3F7AA10")]
	private static JSONNode ParseElement(string token, bool quoted)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x3F7ACC0", Offset = "0x3F7ACC0", VA = "0x3F7ACC0")]
	public static JSONNode Parse(string aJSON)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3F7B7D0", Offset = "0x3F7B7D0", VA = "0x3F7B7D0")]
	protected JSONNode()
	{
	}
}
