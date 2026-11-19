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

[Token(Token = "0x2000044")]
public abstract class JSONNode
{
	[Token(Token = "0x2000045")]
	public struct Enumerator
	{
		[Token(Token = "0x2000046")]
		private enum Type
		{
			[Token(Token = "0x40001AC")]
			None,
			[Token(Token = "0x40001AD")]
			Array,
			[Token(Token = "0x40001AE")]
			Object
		}

		[Token(Token = "0x40001A8")]
		[FieldOffset(Offset = "0x0")]
		private Type type;

		[Token(Token = "0x40001A9")]
		[FieldOffset(Offset = "0x8")]
		private Dictionary<string, JSONNode>.Enumerator m_Object;

		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator m_Array;

		[Token(Token = "0x1700003F")]
		public bool IsValid
		{
			[Token(Token = "0x6000218")]
			[Address(RVA = "0x5765410", Offset = "0x5764410", VA = "0x5765410")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000040")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x600021B")]
			[Address(RVA = "0x57654B0", Offset = "0x57644B0", VA = "0x57654B0")]
			get
			{
				return default(KeyValuePair<string, JSONNode>);
			}
		}

		[Token(Token = "0x6000219")]
		[Address(RVA = "0x5765420", Offset = "0x5764420", VA = "0x5765420")]
		public Enumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x5765460", Offset = "0x5764460", VA = "0x5765460")]
		public Enumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x600021C")]
		[Address(RVA = "0x5765580", Offset = "0x5764580", VA = "0x5765580")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000047")]
	public struct ValueEnumerator
	{
		[Token(Token = "0x40001AF")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000041")]
		public JSONNode Current
		{
			[Token(Token = "0x6000220")]
			[Address(RVA = "0x5765770", Offset = "0x5764770", VA = "0x5765770")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600021D")]
		[Address(RVA = "0x57655F0", Offset = "0x57645F0", VA = "0x57655F0")]
		public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x600021E")]
		[Address(RVA = "0x5765680", Offset = "0x5764680", VA = "0x5765680")]
		public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x600021F")]
		[Address(RVA = "0x5765730", Offset = "0x5764730", VA = "0x5765730")]
		public ValueEnumerator(Enumerator aEnumerator)
		{
		}

		[Token(Token = "0x6000221")]
		[Address(RVA = "0x57657A0", Offset = "0x57647A0", VA = "0x57657A0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000222")]
		[Address(RVA = "0x5765810", Offset = "0x5764810", VA = "0x5765810")]
		public ValueEnumerator GetEnumerator()
		{
			return default(ValueEnumerator);
		}
	}

	[Token(Token = "0x2000048")]
	public struct KeyEnumerator
	{
		[Token(Token = "0x40001B0")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000042")]
		public string Current
		{
			[Token(Token = "0x6000226")]
			[Address(RVA = "0x57659C0", Offset = "0x57649C0", VA = "0x57659C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000223")]
		[Address(RVA = "0x5765840", Offset = "0x5764840", VA = "0x5765840")]
		public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x57658D0", Offset = "0x57648D0", VA = "0x57658D0")]
		public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x6000225")]
		[Address(RVA = "0x5765980", Offset = "0x5764980", VA = "0x5765980")]
		public KeyEnumerator(Enumerator aEnumerator)
		{
		}

		[Token(Token = "0x6000227")]
		[Address(RVA = "0x57659F0", Offset = "0x57649F0", VA = "0x57659F0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x5765A60", Offset = "0x5764A60", VA = "0x5765A60")]
		public KeyEnumerator GetEnumerator()
		{
			return default(KeyEnumerator);
		}
	}

	[Token(Token = "0x2000049")]
	public class LinqEnumerator : IEnumerator<KeyValuePair<string, JSONNode>>, IEnumerator, IDisposable, IEnumerable<KeyValuePair<string, JSONNode>>, IEnumerable
	{
		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x10")]
		private JSONNode m_Node;

		[Token(Token = "0x40001B2")]
		[FieldOffset(Offset = "0x18")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000043")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x600022A")]
			[Address(RVA = "0x5765A90", Offset = "0x5764A90", VA = "0x5765A90", Slot = "4")]
			get
			{
				return default(KeyValuePair<string, JSONNode>);
			}
		}

		[Token(Token = "0x17000044")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600022B")]
			[Address(RVA = "0x5765AA0", Offset = "0x5764AA0", VA = "0x5765AA0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000229")]
		[Address(RVA = "0x5762EA0", Offset = "0x5761EA0", VA = "0x5762EA0")]
		internal LinqEnumerator(JSONNode aNode)
		{
		}

		[Token(Token = "0x600022C")]
		[Address(RVA = "0x5765B00", Offset = "0x5764B00", VA = "0x5765B00", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600022D")]
		[Address(RVA = "0x5765B70", Offset = "0x5764B70", VA = "0x5765B70", Slot = "5")]
		public void Dispose()
		{
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x5765BB0", Offset = "0x5764BB0", VA = "0x5765BB0", Slot = "9")]
		public IEnumerator<KeyValuePair<string, JSONNode>> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x5765C00", Offset = "0x5764C00", VA = "0x5765C00", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000230")]
		[Address(RVA = "0x5765D20", Offset = "0x5764D20", VA = "0x5765D20", Slot = "10")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200004A")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__43 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001B3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001B4")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001B5")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000045")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000234")]
			[Address(RVA = "0x5765DA0", Offset = "0x5764DA0", VA = "0x5765DA0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000046")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000236")]
			[Address(RVA = "0x5765DF0", Offset = "0x5764DF0", VA = "0x5765DF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x5762C40", Offset = "0x5761C40", VA = "0x5762C40")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000232")]
		[Address(RVA = "0x5765D70", Offset = "0x5764D70", VA = "0x5765D70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000233")]
		[Address(RVA = "0x5765D80", Offset = "0x5764D80", VA = "0x5765D80", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x5765DB0", Offset = "0x5764DB0", VA = "0x5765DB0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x5765E00", Offset = "0x5764E00", VA = "0x5765E00", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x5765E80", Offset = "0x5764E80", VA = "0x5765E80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003Cget_DeepChildren_003Ed__45 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001B6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001B7")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001B8")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001B9")]
		[FieldOffset(Offset = "0x28")]
		public JSONNode _003C_003E4__this;

		[Token(Token = "0x40001BA")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x40001BB")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap2;

		[Token(Token = "0x17000047")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x600023E")]
			[Address(RVA = "0x5766870", Offset = "0x5765870", VA = "0x5766870", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000048")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000240")]
			[Address(RVA = "0x57668C0", Offset = "0x57658C0", VA = "0x57668C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x5762CE0", Offset = "0x5761CE0", VA = "0x5762CE0")]
		[DebuggerHidden]
		public _003Cget_DeepChildren_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023A")]
		[Address(RVA = "0x5765F00", Offset = "0x5764F00", VA = "0x5765F00", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x5766100", Offset = "0x5765100", VA = "0x5766100", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x57667D0", Offset = "0x57657D0", VA = "0x57667D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x5766730", Offset = "0x5765730", VA = "0x5766730")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x5766880", Offset = "0x5765880", VA = "0x5766880", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x57668D0", Offset = "0x57658D0", VA = "0x57668D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x5766970", Offset = "0x5765970", VA = "0x5766970", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x0")]
	public static bool forceASCII;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x1")]
	public static readonly bool longAsString;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x2")]
	public static bool allowLineComments;

	[Token(Token = "0x40001A7")]
	[ThreadStatic]
	private static StringBuilder m_EscapeBuilder;

	[Token(Token = "0x17000025")]
	public abstract JSONNodeType Tag
	{
		[Token(Token = "0x60001CF")]
		get;
	}

	[Token(Token = "0x17000026")]
	public virtual JSONNode this[int aIndex]
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x5762A20", Offset = "0x5761A20", VA = "0x5762A20", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x5762A30", Offset = "0x5761A30", VA = "0x5762A30", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public virtual JSONNode this[string aKey]
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x5762A40", Offset = "0x5761A40", VA = "0x5762A40", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x5762A50", Offset = "0x5761A50", VA = "0x5762A50", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public virtual string Value
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x5762A60", Offset = "0x5761A60", VA = "0x5762A60", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x5762A90", Offset = "0x5761A90", VA = "0x5762A90", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public virtual int Count
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x5762AA0", Offset = "0x5761AA0", VA = "0x5762AA0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002A")]
	public virtual bool IsNumber
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x5762AB0", Offset = "0x5761AB0", VA = "0x5762AB0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public virtual bool IsString
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x5762AC0", Offset = "0x5761AC0", VA = "0x5762AC0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002C")]
	public virtual bool IsBoolean
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x5762AD0", Offset = "0x5761AD0", VA = "0x5762AD0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002D")]
	public virtual bool IsNull
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x5762AE0", Offset = "0x5761AE0", VA = "0x5762AE0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	public virtual bool IsArray
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x5762AF0", Offset = "0x5761AF0", VA = "0x5762AF0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002F")]
	public virtual bool IsObject
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x5762B00", Offset = "0x5761B00", VA = "0x5762B00", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000030")]
	public virtual bool Inline
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x5762B10", Offset = "0x5761B10", VA = "0x5762B10", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x5762B20", Offset = "0x5761B20", VA = "0x5762B20", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public virtual IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x5762BF0", Offset = "0x5761BF0", VA = "0x5762BF0", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__43))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public IEnumerable<JSONNode> DeepChildren
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x5762C70", Offset = "0x5761C70", VA = "0x5762C70")]
		[IteratorStateMachine(typeof(_003Cget_DeepChildren_003Ed__45))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	public IEnumerable<KeyValuePair<string, JSONNode>> Linq
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x5762E50", Offset = "0x5761E50", VA = "0x5762E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public KeyEnumerator Keys
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x5762FE0", Offset = "0x5761FE0", VA = "0x5762FE0")]
		get
		{
			return default(KeyEnumerator);
		}
	}

	[Token(Token = "0x17000035")]
	public ValueEnumerator Values
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x5763040", Offset = "0x5762040", VA = "0x5763040")]
		get
		{
			return default(ValueEnumerator);
		}
	}

	[Token(Token = "0x17000036")]
	public virtual double AsDouble
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x57630A0", Offset = "0x57620A0", VA = "0x57630A0", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x5763140", Offset = "0x5762140", VA = "0x5763140", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public virtual int AsInt
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x57631C0", Offset = "0x57621C0", VA = "0x57631C0", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x57631E0", Offset = "0x57621E0", VA = "0x57631E0", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public virtual float AsFloat
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x5763200", Offset = "0x5762200", VA = "0x5763200", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x5763220", Offset = "0x5762220", VA = "0x5763220", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public virtual bool AsBool
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x5763240", Offset = "0x5762240", VA = "0x5763240", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x57632D0", Offset = "0x57622D0", VA = "0x57632D0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public virtual long AsLong
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x5763340", Offset = "0x5762340", VA = "0x5763340", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x5763390", Offset = "0x5762390", VA = "0x5763390", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public virtual ulong AsULong
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x57633D0", Offset = "0x57623D0", VA = "0x57633D0", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x5763420", Offset = "0x5762420", VA = "0x5763420", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public virtual JSONArray AsArray
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x5763460", Offset = "0x5762460", VA = "0x5763460", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public virtual JSONObject AsObject
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x57634C0", Offset = "0x57624C0", VA = "0x57634C0", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	internal static StringBuilder EscapeBuilder
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x5764270", Offset = "0x5763270", VA = "0x5764270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x5762B30", Offset = "0x5761B30", VA = "0x5762B30", Slot = "20")]
	public virtual void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x5762B40", Offset = "0x5761B40", VA = "0x5762B40", Slot = "21")]
	public virtual void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x5762BA0", Offset = "0x5761BA0", VA = "0x5762BA0", Slot = "22")]
	public virtual JSONNode Remove(string aKey)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x5762BB0", Offset = "0x5761BB0", VA = "0x5762BB0", Slot = "23")]
	public virtual JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x5762BC0", Offset = "0x5761BC0", VA = "0x5762BC0", Slot = "24")]
	public virtual JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x5762BD0", Offset = "0x5761BD0", VA = "0x5762BD0", Slot = "25")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x5762BE0", Offset = "0x5761BE0", VA = "0x5762BE0", Slot = "26")]
	public virtual JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x5762D10", Offset = "0x5761D10", VA = "0x5762D10", Slot = "28")]
	public virtual bool HasKey(string aKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x5762D20", Offset = "0x5761D20", VA = "0x5762D20", Slot = "29")]
	public virtual JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x5762D30", Offset = "0x5761D30", VA = "0x5762D30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x5762DC0", Offset = "0x5761DC0", VA = "0x5762DC0", Slot = "30")]
	public virtual string ToString(int aIndent)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	internal abstract void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode);

	[Token(Token = "0x60001ED")]
	public abstract Enumerator GetEnumerator();

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x5763520", Offset = "0x5762520", VA = "0x5763520")]
	public static implicit operator JSONNode(string s)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5763740", Offset = "0x5762740", VA = "0x5763740")]
	public static implicit operator string(JSONNode d)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x57638F0", Offset = "0x57628F0", VA = "0x57638F0")]
	public static implicit operator JSONNode(double n)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x57639E0", Offset = "0x57629E0", VA = "0x57639E0")]
	public static implicit operator double(JSONNode d)
	{
		return default(double);
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5763A50", Offset = "0x5762A50", VA = "0x5763A50")]
	public static implicit operator JSONNode(float n)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x5763AF0", Offset = "0x5762AF0", VA = "0x5763AF0")]
	public static implicit operator float(JSONNode d)
	{
		return default(float);
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5763B60", Offset = "0x5762B60", VA = "0x5763B60")]
	public static implicit operator JSONNode(int n)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x5763BF0", Offset = "0x5762BF0", VA = "0x5763BF0")]
	public static implicit operator int(JSONNode d)
	{
		return default(int);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5763C60", Offset = "0x5762C60", VA = "0x5763C60")]
	public static implicit operator JSONNode(long n)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x5763DE0", Offset = "0x5762DE0", VA = "0x5763DE0")]
	public static implicit operator long(JSONNode d)
	{
		return default(long);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x5763E50", Offset = "0x5762E50", VA = "0x5763E50")]
	public static implicit operator JSONNode(ulong n)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x5764000", Offset = "0x5763000", VA = "0x5764000")]
	public static implicit operator ulong(JSONNode d)
	{
		return default(ulong);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x5764070", Offset = "0x5763070", VA = "0x5764070")]
	public static implicit operator JSONNode(bool b)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x5764150", Offset = "0x5763150", VA = "0x5764150")]
	public static implicit operator bool(JSONNode d)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x57641C0", Offset = "0x57631C0", VA = "0x57641C0")]
	public static implicit operator JSONNode(KeyValuePair<string, JSONNode> aKeyValue)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x57637B0", Offset = "0x57627B0", VA = "0x57637B0")]
	public static bool operator ==(JSONNode a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x57641F0", Offset = "0x57631F0", VA = "0x57641F0")]
	public static bool operator !=(JSONNode a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x5764250", Offset = "0x5763250", VA = "0x5764250", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x5764260", Offset = "0x5763260", VA = "0x5764260", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x5764370", Offset = "0x5763370", VA = "0x5764370")]
	internal static string Escape(string aText)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x5764610", Offset = "0x5763610", VA = "0x5764610")]
	private static JSONNode ParseElement(string token, bool quoted)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x57648F0", Offset = "0x57638F0", VA = "0x57648F0")]
	public static JSONNode Parse(string aJSON)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x57653C0", Offset = "0x57643C0", VA = "0x57653C0")]
	protected JSONNode()
	{
	}
}
