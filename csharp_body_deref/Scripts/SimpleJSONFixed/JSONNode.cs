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
			[Token(Token = "0x400019D")]
			None,
			[Token(Token = "0x400019E")]
			Array,
			[Token(Token = "0x400019F")]
			Object
		}

		[Token(Token = "0x4000199")]
		[FieldOffset(Offset = "0x0")]
		private Type type;

		[Token(Token = "0x400019A")]
		[FieldOffset(Offset = "0x8")]
		private Dictionary<string, JSONNode>.Enumerator m_Object;

		[Token(Token = "0x400019B")]
		[FieldOffset(Offset = "0x30")]
		private List<JSONNode>.Enumerator m_Array;

		[Token(Token = "0x17000046")]
		public bool IsValid
		{
			[Token(Token = "0x600020F")]
			[Address(RVA = "0x1DBB1F0", Offset = "0x1DB97F0", VA = "0x181DBB1F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000047")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x6000212")]
			[Address(RVA = "0x1DBB150", Offset = "0x1DB9750", VA = "0x181DBB150")]
			get
			{
				return default(KeyValuePair<string, JSONNode>);
			}
		}

		[Token(Token = "0x6000210")]
		[Address(RVA = "0x1DBB110", Offset = "0x1DB9710", VA = "0x181DBB110")]
		public Enumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x6000211")]
		[Address(RVA = "0x1DBB0C0", Offset = "0x1DB96C0", VA = "0x181DBB0C0")]
		public Enumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x6000213")]
		[Address(RVA = "0x1DBB050", Offset = "0x1DB9650", VA = "0x181DBB050")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000048")]
	public struct ValueEnumerator
	{
		[Token(Token = "0x40001A0")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000048")]
		public JSONNode Current
		{
			[Token(Token = "0x6000217")]
			[Address(RVA = "0x1DD2240", Offset = "0x1DD0840", VA = "0x181DD2240")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000214")]
		[Address(RVA = "0x1DC7170", Offset = "0x1DC5770", VA = "0x181DC7170")]
		public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x6000215")]
		[Address(RVA = "0x1DC7240", Offset = "0x1DC5840", VA = "0x181DC7240")]
		public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x6000216")]
		[Address(RVA = "0x1DC7200", Offset = "0x1DC5800", VA = "0x181DC7200")]
		public ValueEnumerator(Enumerator aEnumerator)
		{
		}

		[Token(Token = "0x6000218")]
		[Address(RVA = "0x1DBB050", Offset = "0x1DB9650", VA = "0x181DBB050")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000219")]
		[Address(RVA = "0x1DC7140", Offset = "0x1DC5740", VA = "0x181DC7140")]
		public ValueEnumerator GetEnumerator()
		{
			return default(ValueEnumerator);
		}
	}

	[Token(Token = "0x2000049")]
	public struct KeyEnumerator
	{
		[Token(Token = "0x40001A1")]
		[FieldOffset(Offset = "0x0")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x17000049")]
		public string Current
		{
			[Token(Token = "0x600021D")]
			[Address(RVA = "0x1DC72D0", Offset = "0x1DC58D0", VA = "0x181DC72D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x1DC7170", Offset = "0x1DC5770", VA = "0x181DC7170")]
		public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum)
		{
		}

		[Token(Token = "0x600021B")]
		[Address(RVA = "0x1DC7240", Offset = "0x1DC5840", VA = "0x181DC7240")]
		public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum)
		{
		}

		[Token(Token = "0x600021C")]
		[Address(RVA = "0x1DC7200", Offset = "0x1DC5800", VA = "0x181DC7200")]
		public KeyEnumerator(Enumerator aEnumerator)
		{
		}

		[Token(Token = "0x600021E")]
		[Address(RVA = "0x1DBB050", Offset = "0x1DB9650", VA = "0x181DBB050")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600021F")]
		[Address(RVA = "0x1DC7140", Offset = "0x1DC5740", VA = "0x181DC7140")]
		public KeyEnumerator GetEnumerator()
		{
			return default(KeyEnumerator);
		}
	}

	[Token(Token = "0x200004A")]
	public class LinqEnumerator : IEnumerator<KeyValuePair<string, JSONNode>>, IEnumerator, IDisposable, IEnumerable<KeyValuePair<string, JSONNode>>, IEnumerable
	{
		[Token(Token = "0x40001A2")]
		[FieldOffset(Offset = "0x10")]
		private JSONNode m_Node;

		[Token(Token = "0x40001A3")]
		[FieldOffset(Offset = "0x18")]
		private Enumerator m_Enumerator;

		[Token(Token = "0x1700004A")]
		public KeyValuePair<string, JSONNode> Current
		{
			[Token(Token = "0x6000221")]
			[Address(RVA = "0x1DC7910", Offset = "0x1DC5F10", VA = "0x181DC7910", Slot = "4")]
			get
			{
				return default(KeyValuePair<string, JSONNode>);
			}
		}

		[Token(Token = "0x1700004B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000222")]
			[Address(RVA = "0x1DC7690", Offset = "0x1DC5C90", VA = "0x181DC7690", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000220")]
		[Address(RVA = "0x1DC7750", Offset = "0x1DC5D50", VA = "0x181DC7750")]
		internal LinqEnumerator(JSONNode aNode)
		{
		}

		[Token(Token = "0x6000223")]
		[Address(RVA = "0x1DC7420", Offset = "0x1DC5A20", VA = "0x181DC7420", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x1DC7380", Offset = "0x1DC5980", VA = "0x181DC7380", Slot = "5")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000225")]
		[Address(RVA = "0x1DC73C0", Offset = "0x1DC59C0", VA = "0x181DC73C0", Slot = "9")]
		public IEnumerator<KeyValuePair<string, JSONNode>> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000226")]
		[Address(RVA = "0x1DC7490", Offset = "0x1DC5A90", VA = "0x181DC7490", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000227")]
		[Address(RVA = "0x1DC7630", Offset = "0x1DC5C30", VA = "0x181DC7630", Slot = "10")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003Cget_Children_003Ed__43 : IEnumerable<JSONNode>, IEnumerable, IEnumerator<JSONNode>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001A4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001A5")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001A6")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x1700004C")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x600022B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600022D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_Children_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000229")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600022A")]
		[Address(RVA = "0x18BE990", Offset = "0x18BCF90", VA = "0x1818BE990", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600022C")]
		[Address(RVA = "0x1DD16A0", Offset = "0x1DCFCA0", VA = "0x181DD16A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x1DD1610", Offset = "0x1DCFC10", VA = "0x181DD1610", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x1DD1610", Offset = "0x1DCFC10", VA = "0x181DD1610", Slot = "5")]
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
		[Token(Token = "0x40001A7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001A8")]
		[FieldOffset(Offset = "0x18")]
		private JSONNode _003C_003E2__current;

		[Token(Token = "0x40001A9")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x28")]
		public JSONNode _003C_003E4__this;

		[Token(Token = "0x40001AB")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap2;

		[Token(Token = "0x1700004E")]
		private JSONNode System_002ECollections_002EGeneric_002EIEnumerator_003CSimpleJSONFixed_002EJSONNode_003E_002ECurrent
		{
			[Token(Token = "0x6000235")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000237")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000230")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_DeepChildren_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x1DD1B20", Offset = "0x1DD0120", VA = "0x181DD1B20", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000232")]
		[Address(RVA = "0x1DD16E0", Offset = "0x1DCFCE0", VA = "0x181DD16E0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000233")]
		[Address(RVA = "0x1DD1C70", Offset = "0x1DD0270", VA = "0x181DD1C70")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x1DD1CC0", Offset = "0x1DD02C0", VA = "0x181DD1CC0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000236")]
		[Address(RVA = "0x1DD1AE0", Offset = "0x1DD00E0", VA = "0x181DD1AE0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000238")]
		[Address(RVA = "0x1DD1A40", Offset = "0x1DD0040", VA = "0x181DD1A40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JSONNode> System_002ECollections_002EGeneric_002EIEnumerable_003CSimpleJSONFixed_002EJSONNode_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x1DD1A40", Offset = "0x1DD0040", VA = "0x181DD1A40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x0")]
	public static bool forceASCII;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x1")]
	public static readonly bool longAsString;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x2")]
	public static bool allowLineComments;

	[Token(Token = "0x4000198")]
	[ThreadStatic]
	private static StringBuilder m_EscapeBuilder;

	[Token(Token = "0x1700002C")]
	public abstract JSONNodeType Tag
	{
		[Token(Token = "0x60001C6")]
		get;
	}

	[Token(Token = "0x1700002D")]
	public virtual JSONNode this[int aIndex]
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public virtual JSONNode this[string aKey]
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public virtual string Value
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x1DC3DE0", Offset = "0x1DC23E0", VA = "0x181DC3DE0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public virtual int Count
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000031")]
	public virtual bool IsNumber
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000032")]
	public virtual bool IsString
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public virtual bool IsBoolean
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public virtual bool IsNull
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public virtual bool IsArray
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000036")]
	public virtual bool IsObject
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public virtual bool Inline
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public virtual IEnumerable<JSONNode> Children
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x1DC3B60", Offset = "0x1DC2160", VA = "0x181DC3B60", Slot = "27")]
		[IteratorStateMachine(typeof(_003Cget_Children_003Ed__43))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public IEnumerable<JSONNode> DeepChildren
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x1DC3BC0", Offset = "0x1DC21C0", VA = "0x181DC3BC0")]
		[IteratorStateMachine(typeof(_003Cget_DeepChildren_003Ed__45))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	public IEnumerable<KeyValuePair<string, JSONNode>> Linq
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x1DC3D80", Offset = "0x1DC2380", VA = "0x181DC3D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public KeyEnumerator Keys
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x1DC3D20", Offset = "0x1DC2320", VA = "0x181DC3D20")]
		get
		{
			return default(KeyEnumerator);
		}
	}

	[Token(Token = "0x1700003C")]
	public ValueEnumerator Values
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x1DC3D20", Offset = "0x1DC2320", VA = "0x181DC3D20")]
		get
		{
			return default(ValueEnumerator);
		}
	}

	[Token(Token = "0x1700003D")]
	public virtual double AsDouble
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x1DC3960", Offset = "0x1DC1F60", VA = "0x181DC3960", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x1DC4EA0", Offset = "0x1DC34A0", VA = "0x181DC4EA0", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public virtual int AsInt
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x1DC3A30", Offset = "0x1DC2030", VA = "0x181DC3A30", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x1DC4F40", Offset = "0x1DC3540", VA = "0x181DC4F40", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public virtual float AsFloat
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x1DC3A10", Offset = "0x1DC2010", VA = "0x181DC3A10", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x1DC4F20", Offset = "0x1DC3520", VA = "0x181DC4F20", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public virtual bool AsBool
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x1DC38D0", Offset = "0x1DC1ED0", VA = "0x181DC38D0", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x1DC4E20", Offset = "0x1DC3420", VA = "0x181DC4E20", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public virtual long AsLong
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x1DC3A50", Offset = "0x1DC2050", VA = "0x181DC3A50", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x1DC4F60", Offset = "0x1DC3560", VA = "0x181DC4F60", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public virtual ulong AsULong
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x1DC3B10", Offset = "0x1DC2110", VA = "0x181DC3B10", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x1DC4FA0", Offset = "0x1DC35A0", VA = "0x181DC4FA0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public virtual JSONArray AsArray
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x1DC3860", Offset = "0x1DC1E60", VA = "0x181DC3860", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000044")]
	public virtual JSONObject AsObject
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x1DC3AA0", Offset = "0x1DC20A0", VA = "0x181DC3AA0", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000045")]
	internal static StringBuilder EscapeBuilder
	{
		[Token(Token = "0x6000209")]
		[Address(RVA = "0x1DC3C40", Offset = "0x1DC2240", VA = "0x181DC3C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public virtual void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x1DC2770", Offset = "0x1DC0D70", VA = "0x181DC2770", Slot = "21")]
	public virtual void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "22")]
	public virtual JSONNode Remove(string aKey)
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "23")]
	public virtual JSONNode Remove(int aIndex)
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "24")]
	public virtual JSONNode Remove(JSONNode aNode)
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "25")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "26")]
	public virtual JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "28")]
	public virtual bool HasKey(string aKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x546D10", Offset = "0x545310", VA = "0x180546D10", Slot = "29")]
	public virtual JSONNode GetValueOrDefault(string aKey, JSONNode aDefault)
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x1DC36B0", Offset = "0x1DC1CB0", VA = "0x181DC36B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x1DC3750", Offset = "0x1DC1D50", VA = "0x181DC3750", Slot = "30")]
	public virtual string ToString(int aIndent)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	internal abstract void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode);

	[Token(Token = "0x60001E4")]
	public abstract Enumerator GetEnumerator();

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x1DC4B90", Offset = "0x1DC3190", VA = "0x181DC4B90")]
	public static implicit operator JSONNode(string s)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x1DC4450", Offset = "0x1DC2A50", VA = "0x181DC4450")]
	public static implicit operator string(JSONNode d)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x1DC4710", Offset = "0x1DC2D10", VA = "0x181DC4710")]
	public static implicit operator JSONNode(double n)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x1DC47A0", Offset = "0x1DC2DA0", VA = "0x181DC47A0")]
	public static implicit operator double(JSONNode d)
	{
		return default(double);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x1DC4260", Offset = "0x1DC2860", VA = "0x181DC4260")]
	public static implicit operator JSONNode(float n)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x1DC40B0", Offset = "0x1DC26B0", VA = "0x181DC40B0")]
	public static implicit operator float(JSONNode d)
	{
		return default(float);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x1DC41D0", Offset = "0x1DC27D0", VA = "0x181DC41D0")]
	public static implicit operator JSONNode(int n)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x1DC4950", Offset = "0x1DC2F50", VA = "0x181DC4950")]
	public static implicit operator int(JSONNode d)
	{
		return default(int);
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x1DC4C60", Offset = "0x1DC3260", VA = "0x181DC4C60")]
	public static implicit operator JSONNode(long n)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x1DC4A70", Offset = "0x1DC3070", VA = "0x181DC4A70")]
	public static implicit operator long(JSONNode d)
	{
		return default(long);
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x1DC4570", Offset = "0x1DC2B70", VA = "0x181DC4570")]
	public static implicit operator JSONNode(ulong n)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x1DC3F90", Offset = "0x1DC2590", VA = "0x181DC3F90")]
	public static implicit operator ulong(JSONNode d)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x1DC48C0", Offset = "0x1DC2EC0", VA = "0x181DC48C0")]
	public static implicit operator JSONNode(bool b)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x1DC42F0", Offset = "0x1DC28F0", VA = "0x181DC42F0")]
	public static implicit operator bool(JSONNode d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x1DC4410", Offset = "0x1DC2A10", VA = "0x181DC4410")]
	public static implicit operator JSONNode(KeyValuePair<string, JSONNode> aKeyValue)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x1DC3E10", Offset = "0x1DC2410", VA = "0x181DC3E10")]
	public static bool operator ==(JSONNode a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x1DC4DC0", Offset = "0x1DC33C0", VA = "0x181DC4DC0")]
	public static bool operator !=(JSONNode a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x1DC27D0", Offset = "0x1DC0DD0", VA = "0x181DC27D0")]
	internal static string Escape(string aText)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x1DC2BB0", Offset = "0x1DC11B0", VA = "0x181DC2BB0")]
	private static JSONNode ParseElement(string token, bool quoted)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x1DC2E70", Offset = "0x1DC1470", VA = "0x181DC2E70")]
	public static JSONNode Parse(string aJSON)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected JSONNode()
	{
	}
}
