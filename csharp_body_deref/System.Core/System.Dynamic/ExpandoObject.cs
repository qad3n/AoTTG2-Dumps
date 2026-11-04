// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.ExpandoObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq.Expressions;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000269")]
public sealed class ExpandoObject : IDynamicMetaObjectProvider, IDictionary<string, object>, ICollection<KeyValuePair<string, object>>, IEnumerable<KeyValuePair<string, object>>, IEnumerable, INotifyPropertyChanged
{
	[Token(Token = "0x200026A")]
	private sealed class KeyCollectionDebugView
	{
	}

	[Token(Token = "0x200026B")]
	[DebuggerTypeProxy(typeof(KeyCollectionDebugView))]
	[DebuggerDisplay("Count = {Count}")]
	private class KeyCollection : ICollection<string>, IEnumerable<string>, IEnumerable
	{
		[Token(Token = "0x200026C")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__15 : IEnumerator<string>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4000472")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000473")]
			[FieldOffset(Offset = "0x18")]
			private string _003C_003E2__current;

			[Token(Token = "0x4000474")]
			[FieldOffset(Offset = "0x20")]
			public KeyCollection _003C_003E4__this;

			[Token(Token = "0x4000475")]
			[FieldOffset(Offset = "0x28")]
			private int _003Ci_003E5__2;

			[Token(Token = "0x4000476")]
			[FieldOffset(Offset = "0x2C")]
			private int _003Cn_003E5__3;

			[Token(Token = "0x17000273")]
			private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
			{
				[Token(Token = "0x6000C28")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000274")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C2A")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C25")]
			[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C26")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C27")]
			[Address(RVA = "0x248DC50", Offset = "0x248C250", VA = "0x18248DC50", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C29")]
			[Address(RVA = "0x248DE10", Offset = "0x248C410", VA = "0x18248DE10", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x400046E")]
		[FieldOffset(Offset = "0x10")]
		private readonly ExpandoObject _expando;

		[Token(Token = "0x400046F")]
		[FieldOffset(Offset = "0x18")]
		private readonly int _expandoVersion;

		[Token(Token = "0x4000470")]
		[FieldOffset(Offset = "0x1C")]
		private readonly int _expandoCount;

		[Token(Token = "0x4000471")]
		[FieldOffset(Offset = "0x20")]
		private readonly ExpandoData _expandoData;

		[Token(Token = "0x17000271")]
		public int Count
		{
			[Token(Token = "0x6000C20")]
			[Address(RVA = "0x24708F0", Offset = "0x246EEF0", VA = "0x1824708F0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000272")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C21")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x24707F0", Offset = "0x246EDF0", VA = "0x1824707F0")]
		internal KeyCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x24702B0", Offset = "0x246E8B0", VA = "0x1824702B0")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x2470280", Offset = "0x246E880", VA = "0x182470280", Slot = "6")]
		public void Add(string item)
		{
		}

		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x2470320", Offset = "0x246E920", VA = "0x182470320", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x2470350", Offset = "0x246E950", VA = "0x182470350", Slot = "8")]
		public bool Contains(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x2470480", Offset = "0x246EA80", VA = "0x182470480", Slot = "9")]
		public void CopyTo(string[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x24707C0", Offset = "0x246EDC0", VA = "0x1824707C0", Slot = "10")]
		public bool Remove(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x2470750", Offset = "0x246ED50", VA = "0x182470750", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<string> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x2470750", Offset = "0x246ED50", VA = "0x182470750", Slot = "12")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200026D")]
	private sealed class ValueCollectionDebugView
	{
	}

	[Token(Token = "0x200026E")]
	[DebuggerTypeProxy(typeof(ValueCollectionDebugView))]
	[DebuggerDisplay("Count = {Count}")]
	private class ValueCollection : ICollection<object>, IEnumerable<object>, IEnumerable
	{
		[Token(Token = "0x200026F")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__15 : IEnumerator<object>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400047B")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x400047C")]
			[FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x400047D")]
			[FieldOffset(Offset = "0x20")]
			public ValueCollection _003C_003E4__this;

			[Token(Token = "0x400047E")]
			[FieldOffset(Offset = "0x28")]
			private ExpandoData _003Cdata_003E5__2;

			[Token(Token = "0x400047F")]
			[FieldOffset(Offset = "0x30")]
			private int _003Ci_003E5__3;

			[Token(Token = "0x17000277")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x6000C39")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000278")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C3B")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C36")]
			[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C37")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C38")]
			[Address(RVA = "0x248DAA0", Offset = "0x248C0A0", VA = "0x18248DAA0", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C3A")]
			[Address(RVA = "0x248DDD0", Offset = "0x248C3D0", VA = "0x18248DDD0", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4000477")]
		[FieldOffset(Offset = "0x10")]
		private readonly ExpandoObject _expando;

		[Token(Token = "0x4000478")]
		[FieldOffset(Offset = "0x18")]
		private readonly int _expandoVersion;

		[Token(Token = "0x4000479")]
		[FieldOffset(Offset = "0x1C")]
		private readonly int _expandoCount;

		[Token(Token = "0x400047A")]
		[FieldOffset(Offset = "0x20")]
		private readonly ExpandoData _expandoData;

		[Token(Token = "0x17000275")]
		public int Count
		{
			[Token(Token = "0x6000C31")]
			[Address(RVA = "0x248E930", Offset = "0x248CF30", VA = "0x18248E930", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000276")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C32")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x24707F0", Offset = "0x246EDF0", VA = "0x1824707F0")]
		internal ValueCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x248E300", Offset = "0x248C900", VA = "0x18248E300")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x248E2D0", Offset = "0x248C8D0", VA = "0x18248E2D0", Slot = "6")]
		public void Add(object item)
		{
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x248E370", Offset = "0x248C970", VA = "0x18248E370", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C2F")]
		[Address(RVA = "0x248E3A0", Offset = "0x248C9A0", VA = "0x18248E3A0", Slot = "8")]
		public bool Contains(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x248E570", Offset = "0x248CB70", VA = "0x18248E570", Slot = "9")]
		public void CopyTo(object[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x248E900", Offset = "0x248CF00", VA = "0x18248E900", Slot = "10")]
		public bool Remove(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C34")]
		[Address(RVA = "0x248E890", Offset = "0x248CE90", VA = "0x18248E890", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<object> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x248E890", Offset = "0x248CE90", VA = "0x18248E890", Slot = "12")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000270")]
	private class MetaExpando : DynamicMetaObject
	{
		[Token(Token = "0x2000272")]
		[CompilerGenerated]
		private sealed class _003CGetDynamicMemberNames_003Ed__6 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4000482")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000483")]
			[FieldOffset(Offset = "0x18")]
			private string _003C_003E2__current;

			[Token(Token = "0x4000484")]
			[FieldOffset(Offset = "0x20")]
			private int _003C_003El__initialThreadId;

			[Token(Token = "0x4000485")]
			[FieldOffset(Offset = "0x28")]
			public MetaExpando _003C_003E4__this;

			[Token(Token = "0x4000486")]
			[FieldOffset(Offset = "0x30")]
			private ExpandoData _003CexpandoData_003E5__2;

			[Token(Token = "0x4000487")]
			[FieldOffset(Offset = "0x38")]
			private ExpandoClass _003Cklass_003E5__3;

			[Token(Token = "0x4000488")]
			[FieldOffset(Offset = "0x40")]
			private int _003Ci_003E5__4;

			[Token(Token = "0x1700027A")]
			private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
			{
				[Token(Token = "0x6000C4D")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700027B")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C4F")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C4A")]
			[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
			[DebuggerHidden]
			public _003CGetDynamicMemberNames_003Ed__6(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C4B")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C4C")]
			[Address(RVA = "0x248D7F0", Offset = "0x248BDF0", VA = "0x18248D7F0", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C4E")]
			[Address(RVA = "0x248DA60", Offset = "0x248C060", VA = "0x18248DA60", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000C50")]
			[Address(RVA = "0x248D9C0", Offset = "0x248BFC0", VA = "0x18248D9C0", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000C51")]
			[Address(RVA = "0x248D9C0", Offset = "0x248BFC0", VA = "0x18248D9C0", Slot = "5")]
			[DebuggerHidden]
			private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
			{
				return null;
			}
		}

		[Token(Token = "0x17000279")]
		public new ExpandoObject Value
		{
			[Token(Token = "0x6000C47")]
			[Address(RVA = "0x2486DA0", Offset = "0x24853A0", VA = "0x182486DA0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x2486D00", Offset = "0x2485300", VA = "0x182486D00")]
		public MetaExpando(Expression expression, ExpandoObject value)
		{
		}

		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x2485AE0", Offset = "0x24840E0", VA = "0x182485AE0")]
		private DynamicMetaObject BindGetOrInvokeMember(DynamicMetaObjectBinder binder, string name, bool ignoreCase, DynamicMetaObject fallback, Func<DynamicMetaObject, DynamicMetaObject> fallbackInvoke)
		{
			return null;
		}

		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x2485A00", Offset = "0x2484000", VA = "0x182485A00", Slot = "5")]
		public override DynamicMetaObject BindGetMember(GetMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x2486240", Offset = "0x2484840", VA = "0x182486240", Slot = "11")]
		public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
		{
			return null;
		}

		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x24863E0", Offset = "0x24849E0", VA = "0x1824863E0", Slot = "6")]
		public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
		{
			return null;
		}

		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x2485620", Offset = "0x2483C20", VA = "0x182485620", Slot = "7")]
		public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x2486B00", Offset = "0x2485100", VA = "0x182486B00", Slot = "16")]
		[IteratorStateMachine(typeof(_003CGetDynamicMemberNames_003Ed__6))]
		public override IEnumerable<string> GetDynamicMemberNames()
		{
			return null;
		}

		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x2485330", Offset = "0x2483930", VA = "0x182485330")]
		private DynamicMetaObject AddDynamicTestAndDefer(DynamicMetaObjectBinder binder, ExpandoClass klass, ExpandoClass originalClass, DynamicMetaObject succeeds)
		{
			return null;
		}

		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x24869D0", Offset = "0x2484FD0", VA = "0x1824869D0")]
		private ExpandoClass GetClassEnsureIndex(string name, bool caseInsensitive, ExpandoObject obj, out ExpandoClass klass, out int index)
		{
			return null;
		}

		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x2486B80", Offset = "0x2485180", VA = "0x182486B80")]
		private Expression GetLimitedSelf()
		{
			return null;
		}

		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x2486CB0", Offset = "0x24852B0", VA = "0x182486CB0")]
		private BindingRestrictions GetRestrictions()
		{
			return null;
		}
	}

	[Token(Token = "0x2000273")]
	private class ExpandoData
	{
		[Token(Token = "0x4000489")]
		[FieldOffset(Offset = "0x0")]
		internal static ExpandoData Empty;

		[Token(Token = "0x400048A")]
		[FieldOffset(Offset = "0x10")]
		internal readonly ExpandoClass Class;

		[Token(Token = "0x400048B")]
		[FieldOffset(Offset = "0x18")]
		private readonly object[] _dataArray;

		[Token(Token = "0x400048C")]
		[FieldOffset(Offset = "0x20")]
		private int _version;

		[Token(Token = "0x1700027C")]
		internal object this[int index]
		{
			[Token(Token = "0x6000C52")]
			[Address(RVA = "0x1A079D0", Offset = "0x1A05FD0", VA = "0x181A079D0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C53")]
			[Address(RVA = "0x24838B0", Offset = "0x2481EB0", VA = "0x1824838B0")]
			set
			{
			}
		}

		[Token(Token = "0x1700027D")]
		internal int Version
		{
			[Token(Token = "0x6000C54")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700027E")]
		internal int Length
		{
			[Token(Token = "0x6000C55")]
			[Address(RVA = "0x1A07BE0", Offset = "0x1A061E0", VA = "0x181A07BE0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x24837C0", Offset = "0x2481DC0", VA = "0x1824837C0")]
		private ExpandoData()
		{
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x1A48980", Offset = "0x1A46F80", VA = "0x181A48980")]
		internal ExpandoData(ExpandoClass klass, object[] data, int version)
		{
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x24833C0", Offset = "0x24819C0", VA = "0x1824833C0")]
		internal ExpandoData UpdateClass(ExpandoClass newClass)
		{
			return null;
		}

		[Token(Token = "0x6000C59")]
		[Address(RVA = "0x24833B0", Offset = "0x24819B0", VA = "0x1824833B0")]
		private static int GetAlignedSize(int len)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000274")]
	[CompilerGenerated]
	private sealed class _003CGetExpandoEnumerator_003Ed__51 : IEnumerator<KeyValuePair<string, object>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400048D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400048E")]
		[FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, object> _003C_003E2__current;

		[Token(Token = "0x400048F")]
		[FieldOffset(Offset = "0x28")]
		public ExpandoObject _003C_003E4__this;

		[Token(Token = "0x4000490")]
		[FieldOffset(Offset = "0x30")]
		public int version;

		[Token(Token = "0x4000491")]
		[FieldOffset(Offset = "0x38")]
		public ExpandoData data;

		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700027F")]
		private KeyValuePair<string, object> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECurrent
		{
			[Token(Token = "0x6000C5E")]
			[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, object>);
			}
		}

		[Token(Token = "0x17000280")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C60")]
			[Address(RVA = "0x248E080", Offset = "0x248C680", VA = "0x18248E080", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetExpandoEnumerator_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x248DE50", Offset = "0x248C450", VA = "0x18248DE50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x248E040", Offset = "0x248C640", VA = "0x18248E040", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MethodInfo s_expandoTryGetValue;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo s_expandoTrySetValue;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x10")]
	private static readonly MethodInfo s_expandoTryDeleteValue;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x18")]
	private static readonly MethodInfo s_expandoPromoteClass;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x20")]
	private static readonly MethodInfo s_expandoCheckVersion;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x10")]
	internal readonly object LockObject;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x18")]
	private ExpandoData _data;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x20")]
	private int _count;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly object Uninitialized;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x28")]
	private PropertyChangedEventHandler _propertyChanged;

	[Token(Token = "0x1700026B")]
	internal ExpandoClass Class
	{
		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x1CB0C20", Offset = "0x1CAF220", VA = "0x181CB0C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EKeys
	{
		[Token(Token = "0x6000C05")]
		[Address(RVA = "0x246DC70", Offset = "0x246C270", VA = "0x18246DC70", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	private ICollection<object> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EValues
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x246DCD0", Offset = "0x246C2D0", VA = "0x18246DCD0", Slot = "8")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IDictionary<System.String,System.Object>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700026E")]
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x246DC00", Offset = "0x246C200", VA = "0x18246DC00", Slot = "5")]
	private object System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002Eget_Item(string key)
	{
		return null;
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x246DD30", Offset = "0x246C330", VA = "0x18246DD30", Slot = "6")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002Eset_Item(string key, object value)
	{
	}

	[Token(Token = "0x1700026F")]
	private int System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECount
	{
		[Token(Token = "0x6000C0D")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	private event PropertyChangedEventHandler System_002EComponentModel_002EINotifyPropertyChanged_002EPropertyChanged
	{
		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x246DDF0", Offset = "0x246C3F0", VA = "0x18246DDF0", Slot = "22")]
		add
		{
		}
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x246DE90", Offset = "0x246C490", VA = "0x18246DE90", Slot = "23")]
		remove
		{
		}
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x246EA70", Offset = "0x246D070", VA = "0x18246EA70")]
	public ExpandoObject()
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x246E340", Offset = "0x246C940", VA = "0x18246E340")]
	internal bool TryGetValue(object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x246E480", Offset = "0x246CA80", VA = "0x18246E480")]
	internal void TrySetValue(object indexClass, int index, object value, string name, bool ignoreCase, bool add)
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x246E030", Offset = "0x246C630", VA = "0x18246E030")]
	internal bool TryDeleteValue(object indexClass, int index, string name, bool ignoreCase, object deleteValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x246D140", Offset = "0x246B740", VA = "0x18246D140")]
	internal bool IsDeletedMember(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x246D1E0", Offset = "0x246B7E0", VA = "0x18246D1E0")]
	private ExpandoData PromoteClassCore(ExpandoClass oldClass, ExpandoClass newClass)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x246D230", Offset = "0x246B830", VA = "0x18246D230")]
	internal void PromoteClass(object oldClass, object newClass)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x246DF30", Offset = "0x246C530", VA = "0x18246DF30", Slot = "4")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x246DFA0", Offset = "0x246C5A0", VA = "0x18246DFA0")]
	private void TryAddMember(string key, object value)
	{
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x246DBD0", Offset = "0x246C1D0", VA = "0x18246DBD0")]
	private bool TryGetValueForKey(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x246D080", Offset = "0x246B680", VA = "0x18246D080")]
	private bool ExpandoContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x246DA40", Offset = "0x246C040", VA = "0x18246DA40", Slot = "10")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EAdd(string key, object value)
	{
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x246DA50", Offset = "0x246C050", VA = "0x18246DA50", Slot = "9")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x246DB20", Offset = "0x246C120", VA = "0x18246DB20", Slot = "11")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ERemove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x246DBD0", Offset = "0x246C1D0", VA = "0x18246DBD0", Slot = "12")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ETryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x246D3A0", Offset = "0x246B9A0", VA = "0x18246D3A0", Slot = "15")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x246D400", Offset = "0x246BA00", VA = "0x18246D400", Slot = "16")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x246D630", Offset = "0x246BC30", VA = "0x18246D630", Slot = "17")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x246D6D0", Offset = "0x246BCD0", VA = "0x18246D6D0", Slot = "18")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x246D9D0", Offset = "0x246BFD0", VA = "0x18246D9D0", Slot = "19")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x246DDC0", Offset = "0x246C3C0", VA = "0x18246DDC0", Slot = "20")]
	private IEnumerator<KeyValuePair<string, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x246DDC0", Offset = "0x246C3C0", VA = "0x18246DDC0", Slot = "21")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x246D0B0", Offset = "0x246B6B0", VA = "0x18246D0B0")]
	[IteratorStateMachine(typeof(_003CGetExpandoEnumerator_003Ed__51))]
	private IEnumerator<KeyValuePair<string, object>> GetExpandoEnumerator(ExpandoData data, int version)
	{
		return null;
	}
}
