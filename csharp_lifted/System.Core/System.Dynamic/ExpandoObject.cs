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

[Token(Token = "0x200026A")]
public sealed class ExpandoObject : IDynamicMetaObjectProvider, IDictionary<string, object>, ICollection<KeyValuePair<string, object>>, IEnumerable<KeyValuePair<string, object>>, IEnumerable, INotifyPropertyChanged
{
	[Token(Token = "0x200026B")]
	private sealed class KeyCollectionDebugView
	{
	}

	[Token(Token = "0x200026C")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(KeyCollectionDebugView))]
	private class KeyCollection : ICollection<string>, IEnumerable<string>, IEnumerable
	{
		[Token(Token = "0x200026D")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__15 : IEnumerator<string>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400047B")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x400047C")]
			[FieldOffset(Offset = "0x18")]
			private string _003C_003E2__current;

			[Token(Token = "0x400047D")]
			[FieldOffset(Offset = "0x20")]
			public KeyCollection _003C_003E4__this;

			[Token(Token = "0x400047E")]
			[FieldOffset(Offset = "0x28")]
			private int _003Ci_003E5__2;

			[Token(Token = "0x400047F")]
			[FieldOffset(Offset = "0x2C")]
			private int _003Cn_003E5__3;

			[Token(Token = "0x17000275")]
			private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
			{
				[Token(Token = "0x6000C33")]
				[Address(RVA = "0x5E226E0", Offset = "0x5E216E0", VA = "0x5E226E0", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000276")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C35")]
				[Address(RVA = "0x5E22730", Offset = "0x5E21730", VA = "0x5E22730", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C30")]
			[Address(RVA = "0x5E22510", Offset = "0x5E21510", VA = "0x5E22510")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C31")]
			[Address(RVA = "0x5E22530", Offset = "0x5E21530", VA = "0x5E22530", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C32")]
			[Address(RVA = "0x5E22540", Offset = "0x5E21540", VA = "0x5E22540", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C34")]
			[Address(RVA = "0x5E226F0", Offset = "0x5E216F0", VA = "0x5E226F0", Slot = "8")]
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

		[Token(Token = "0x17000273")]
		public int Count
		{
			[Token(Token = "0x6000C2B")]
			[Address(RVA = "0x5E223A0", Offset = "0x5E213A0", VA = "0x5E223A0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000274")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C2C")]
			[Address(RVA = "0x5E223F0", Offset = "0x5E213F0", VA = "0x5E223F0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x5E20D30", Offset = "0x5E1FD30", VA = "0x5E20D30")]
		internal KeyCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x5E21E70", Offset = "0x5E20E70", VA = "0x5E21E70")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x5E21EC0", Offset = "0x5E20EC0", VA = "0x5E21EC0", Slot = "6")]
		public void Add(string item)
		{
		}

		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x5E21EF0", Offset = "0x5E20EF0", VA = "0x5E21EF0", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x5E21F20", Offset = "0x5E20F20", VA = "0x5E21F20", Slot = "8")]
		public bool Contains(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x5E22040", Offset = "0x5E21040", VA = "0x5E22040", Slot = "9")]
		public void CopyTo(string[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x5E22400", Offset = "0x5E21400", VA = "0x5E22400", Slot = "10")]
		public bool Remove(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x5E22430", Offset = "0x5E21430", VA = "0x5E22430", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<string> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C2F")]
		[Address(RVA = "0x5E224A0", Offset = "0x5E214A0", VA = "0x5E224A0", Slot = "12")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200026E")]
	private sealed class ValueCollectionDebugView
	{
	}

	[Token(Token = "0x200026F")]
	[DebuggerTypeProxy(typeof(ValueCollectionDebugView))]
	[DebuggerDisplay("Count = {Count}")]
	private class ValueCollection : ICollection<object>, IEnumerable<object>, IEnumerable
	{
		[Token(Token = "0x2000270")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__15 : IEnumerator<object>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4000484")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000485")]
			[FieldOffset(Offset = "0x18")]
			private object _003C_003E2__current;

			[Token(Token = "0x4000486")]
			[FieldOffset(Offset = "0x20")]
			public ValueCollection _003C_003E4__this;

			[Token(Token = "0x4000487")]
			[FieldOffset(Offset = "0x28")]
			private ExpandoData _003Cdata_003E5__2;

			[Token(Token = "0x4000488")]
			[FieldOffset(Offset = "0x30")]
			private int _003Ci_003E5__3;

			[Token(Token = "0x17000279")]
			private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
			{
				[Token(Token = "0x6000C44")]
				[Address(RVA = "0x5E23130", Offset = "0x5E22130", VA = "0x5E23130", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700027A")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C46")]
				[Address(RVA = "0x5E23180", Offset = "0x5E22180", VA = "0x5E23180", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C41")]
			[Address(RVA = "0x5E22F00", Offset = "0x5E21F00", VA = "0x5E22F00")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C42")]
			[Address(RVA = "0x5E22F90", Offset = "0x5E21F90", VA = "0x5E22F90", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C43")]
			[Address(RVA = "0x5E22FA0", Offset = "0x5E21FA0", VA = "0x5E22FA0", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C45")]
			[Address(RVA = "0x5E23140", Offset = "0x5E22140", VA = "0x5E23140", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4000480")]
		[FieldOffset(Offset = "0x10")]
		private readonly ExpandoObject _expando;

		[Token(Token = "0x4000481")]
		[FieldOffset(Offset = "0x18")]
		private readonly int _expandoVersion;

		[Token(Token = "0x4000482")]
		[FieldOffset(Offset = "0x1C")]
		private readonly int _expandoCount;

		[Token(Token = "0x4000483")]
		[FieldOffset(Offset = "0x20")]
		private readonly ExpandoData _expandoData;

		[Token(Token = "0x17000277")]
		public int Count
		{
			[Token(Token = "0x6000C3C")]
			[Address(RVA = "0x5E22E00", Offset = "0x5E21E00", VA = "0x5E22E00", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000278")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C3D")]
			[Address(RVA = "0x5E22E50", Offset = "0x5E21E50", VA = "0x5E22E50", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x5E22740", Offset = "0x5E21740", VA = "0x5E22740")]
		internal ValueCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C37")]
		[Address(RVA = "0x5E22840", Offset = "0x5E21840", VA = "0x5E22840")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C38")]
		[Address(RVA = "0x5E22890", Offset = "0x5E21890", VA = "0x5E22890", Slot = "6")]
		public void Add(object item)
		{
		}

		[Token(Token = "0x6000C39")]
		[Address(RVA = "0x5E228C0", Offset = "0x5E218C0", VA = "0x5E228C0", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x5E228F0", Offset = "0x5E218F0", VA = "0x5E228F0", Slot = "8")]
		public bool Contains(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x5E22A80", Offset = "0x5E21A80", VA = "0x5E22A80", Slot = "9")]
		public void CopyTo(object[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x5E22E60", Offset = "0x5E21E60", VA = "0x5E22E60", Slot = "10")]
		public bool Remove(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x5E22E90", Offset = "0x5E21E90", VA = "0x5E22E90", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<object> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x5E22F20", Offset = "0x5E21F20", VA = "0x5E22F20", Slot = "12")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000271")]
	private class MetaExpando : DynamicMetaObject
	{
		[Token(Token = "0x2000273")]
		[CompilerGenerated]
		private sealed class _003CGetDynamicMemberNames_003Ed__6 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400048B")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x400048C")]
			[FieldOffset(Offset = "0x18")]
			private string _003C_003E2__current;

			[Token(Token = "0x400048D")]
			[FieldOffset(Offset = "0x20")]
			private int _003C_003El__initialThreadId;

			[Token(Token = "0x400048E")]
			[FieldOffset(Offset = "0x28")]
			public MetaExpando _003C_003E4__this;

			[Token(Token = "0x400048F")]
			[FieldOffset(Offset = "0x30")]
			private ExpandoData _003CexpandoData_003E5__2;

			[Token(Token = "0x4000490")]
			[FieldOffset(Offset = "0x38")]
			private ExpandoClass _003Cklass_003E5__3;

			[Token(Token = "0x4000491")]
			[FieldOffset(Offset = "0x40")]
			private int _003Ci_003E5__4;

			[Token(Token = "0x1700027C")]
			private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
			{
				[Token(Token = "0x6000C58")]
				[Address(RVA = "0x5E24C80", Offset = "0x5E23C80", VA = "0x5E24C80", Slot = "6")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700027D")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C5A")]
				[Address(RVA = "0x5E24CD0", Offset = "0x5E23CD0", VA = "0x5E24CD0", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C55")]
			[Address(RVA = "0x5E24990", Offset = "0x5E23990", VA = "0x5E24990")]
			[DebuggerHidden]
			public _003CGetDynamicMemberNames_003Ed__6(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C56")]
			[Address(RVA = "0x5E24AD0", Offset = "0x5E23AD0", VA = "0x5E24AD0", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C57")]
			[Address(RVA = "0x5E24AE0", Offset = "0x5E23AE0", VA = "0x5E24AE0", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C59")]
			[Address(RVA = "0x5E24C90", Offset = "0x5E23C90", VA = "0x5E24C90", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000C5B")]
			[Address(RVA = "0x5E24CE0", Offset = "0x5E23CE0", VA = "0x5E24CE0", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000C5C")]
			[Address(RVA = "0x5E24D80", Offset = "0x5E23D80", VA = "0x5E24D80", Slot = "5")]
			[DebuggerHidden]
			private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
			{
				return null;
			}
		}

		[Token(Token = "0x1700027B")]
		public new ExpandoObject Value
		{
			[Token(Token = "0x6000C52")]
			[Address(RVA = "0x5E23920", Offset = "0x5E22920", VA = "0x5E23920")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x5E23190", Offset = "0x5E22190", VA = "0x5E23190")]
		public MetaExpando(Expression expression, ExpandoObject value)
		{
		}

		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x5E23230", Offset = "0x5E22230", VA = "0x5E23230")]
		private DynamicMetaObject BindGetOrInvokeMember(DynamicMetaObjectBinder binder, string name, bool ignoreCase, DynamicMetaObject fallback, Func<DynamicMetaObject, DynamicMetaObject> fallbackInvoke)
		{
			return null;
		}

		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x5E23D90", Offset = "0x5E22D90", VA = "0x5E23D90", Slot = "5")]
		public override DynamicMetaObject BindGetMember(GetMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x5E23E70", Offset = "0x5E22E70", VA = "0x5E23E70", Slot = "11")]
		public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
		{
			return null;
		}

		[Token(Token = "0x6000C4B")]
		[Address(RVA = "0x5E24020", Offset = "0x5E23020", VA = "0x5E24020", Slot = "6")]
		public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
		{
			return null;
		}

		[Token(Token = "0x6000C4C")]
		[Address(RVA = "0x5E245B0", Offset = "0x5E235B0", VA = "0x5E245B0", Slot = "7")]
		public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C4D")]
		[Address(RVA = "0x5E24920", Offset = "0x5E23920", VA = "0x5E24920", Slot = "16")]
		[IteratorStateMachine(typeof(_003CGetDynamicMemberNames_003Ed__6))]
		public override IEnumerable<string> GetDynamicMemberNames()
		{
			return null;
		}

		[Token(Token = "0x6000C4E")]
		[Address(RVA = "0x5E23AB0", Offset = "0x5E22AB0", VA = "0x5E23AB0")]
		private DynamicMetaObject AddDynamicTestAndDefer(DynamicMetaObjectBinder binder, ExpandoClass klass, ExpandoClass originalClass, DynamicMetaObject succeeds)
		{
			return null;
		}

		[Token(Token = "0x6000C4F")]
		[Address(RVA = "0x5E244B0", Offset = "0x5E234B0", VA = "0x5E244B0")]
		private ExpandoClass GetClassEnsureIndex(string name, bool caseInsensitive, ExpandoObject obj, out ExpandoClass klass, out int index)
		{
			return null;
		}

		[Token(Token = "0x6000C50")]
		[Address(RVA = "0x5E23970", Offset = "0x5E22970", VA = "0x5E23970")]
		private Expression GetLimitedSelf()
		{
			return null;
		}

		[Token(Token = "0x6000C51")]
		[Address(RVA = "0x5E249C0", Offset = "0x5E239C0", VA = "0x5E249C0")]
		private BindingRestrictions GetRestrictions()
		{
			return null;
		}
	}

	[Token(Token = "0x2000274")]
	private class ExpandoData
	{
		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0x0")]
		internal static ExpandoData Empty;

		[Token(Token = "0x4000493")]
		[FieldOffset(Offset = "0x10")]
		internal readonly ExpandoClass Class;

		[Token(Token = "0x4000494")]
		[FieldOffset(Offset = "0x18")]
		private readonly object[] _dataArray;

		[Token(Token = "0x4000495")]
		[FieldOffset(Offset = "0x20")]
		private int _version;

		[Token(Token = "0x1700027E")]
		internal object this[int index]
		{
			[Token(Token = "0x6000C5D")]
			[Address(RVA = "0x5E226B0", Offset = "0x5E216B0", VA = "0x5E226B0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C5E")]
			[Address(RVA = "0x5E24D90", Offset = "0x5E23D90", VA = "0x5E24D90")]
			set
			{
			}
		}

		[Token(Token = "0x1700027F")]
		internal int Version
		{
			[Token(Token = "0x6000C5F")]
			[Address(RVA = "0x5E24E00", Offset = "0x5E23E00", VA = "0x5E24E00")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000280")]
		internal int Length
		{
			[Token(Token = "0x6000C60")]
			[Address(RVA = "0x5E24E10", Offset = "0x5E23E10", VA = "0x5E24E10")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x5E24E30", Offset = "0x5E23E30", VA = "0x5E24E30")]
		private ExpandoData()
		{
		}

		[Token(Token = "0x6000C62")]
		[Address(RVA = "0x5E24F40", Offset = "0x5E23F40", VA = "0x5E24F40")]
		internal ExpandoData(ExpandoClass klass, object[] data, int version)
		{
		}

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x5E24F90", Offset = "0x5E23F90", VA = "0x5E24F90")]
		internal ExpandoData UpdateClass(ExpandoClass newClass)
		{
			return null;
		}

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x5E25210", Offset = "0x5E24210", VA = "0x5E25210")]
		private static int GetAlignedSize(int len)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000275")]
	[CompilerGenerated]
	private sealed class _003CGetExpandoEnumerator_003Ed__51 : IEnumerator<KeyValuePair<string, object>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000496")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000497")]
		[FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, object> _003C_003E2__current;

		[Token(Token = "0x4000498")]
		[FieldOffset(Offset = "0x28")]
		public ExpandoObject _003C_003E4__this;

		[Token(Token = "0x4000499")]
		[FieldOffset(Offset = "0x30")]
		public int version;

		[Token(Token = "0x400049A")]
		[FieldOffset(Offset = "0x38")]
		public ExpandoData data;

		[Token(Token = "0x400049B")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000281")]
		private KeyValuePair<string, object> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECurrent
		{
			[Token(Token = "0x6000C69")]
			[Address(RVA = "0x5E25470", Offset = "0x5E24470", VA = "0x5E25470", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, object>);
			}
		}

		[Token(Token = "0x17000282")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C6B")]
			[Address(RVA = "0x5E254C0", Offset = "0x5E244C0", VA = "0x5E254C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x5E25280", Offset = "0x5E24280", VA = "0x5E25280")]
		[DebuggerHidden]
		public _003CGetExpandoEnumerator_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x5E252A0", Offset = "0x5E242A0", VA = "0x5E252A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x5E252B0", Offset = "0x5E242B0", VA = "0x5E252B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x5E25480", Offset = "0x5E24480", VA = "0x5E25480", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MethodInfo s_expandoTryGetValue;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo s_expandoTrySetValue;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly MethodInfo s_expandoTryDeleteValue;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x18")]
	private static readonly MethodInfo s_expandoPromoteClass;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x20")]
	private static readonly MethodInfo s_expandoCheckVersion;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x10")]
	internal readonly object LockObject;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x18")]
	private ExpandoData _data;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x20")]
	private int _count;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly object Uninitialized;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x28")]
	private PropertyChangedEventHandler _propertyChanged;

	[Token(Token = "0x1700026D")]
	internal ExpandoClass Class
	{
		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x5E1CF00", Offset = "0x5E1BF00", VA = "0x5E1CF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EKeys
	{
		[Token(Token = "0x6000C10")]
		[Address(RVA = "0x5E20CE0", Offset = "0x5E1FCE0", VA = "0x5E20CE0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026F")]
	private ICollection<object> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EValues
	{
		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x5E20E30", Offset = "0x5E1FE30", VA = "0x5E20E30", Slot = "8")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IDictionary<System.String,System.Object>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000270")]
	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x5E20E80", Offset = "0x5E1FE80", VA = "0x5E20E80", Slot = "5")]
	private object System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002Eget_Item(string key)
	{
		return null;
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x5E20EE0", Offset = "0x5E1FEE0", VA = "0x5E20EE0", Slot = "6")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002Eset_Item(string key, object value)
	{
	}

	[Token(Token = "0x17000271")]
	private int System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECount
	{
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x5E21170", Offset = "0x5E20170", VA = "0x5E21170", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000272")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x5E21180", Offset = "0x5E20180", VA = "0x5E21180", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	private event PropertyChangedEventHandler System_002EComponentModel_002EINotifyPropertyChanged_002EPropertyChanged
	{
		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x5E21B40", Offset = "0x5E20B40", VA = "0x5E21B40", Slot = "22")]
		add
		{
		}
		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x5E21BC0", Offset = "0x5E20BC0", VA = "0x5E21BC0", Slot = "23")]
		remove
		{
		}
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x5E20A70", Offset = "0x5E1FA70", VA = "0x5E20A70")]
	public ExpandoObject()
	{
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x5E1C410", Offset = "0x5E1B410", VA = "0x5E1C410")]
	internal bool TryGetValue(object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x5E1C5B0", Offset = "0x5E1B5B0", VA = "0x5E1C5B0")]
	internal void TrySetValue(object indexClass, int index, object value, string name, bool ignoreCase, bool add)
	{
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x5E1CB40", Offset = "0x5E1BB40", VA = "0x5E1CB40")]
	internal bool TryDeleteValue(object indexClass, int index, string name, bool ignoreCase, object deleteValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x5E20970", Offset = "0x5E1F970", VA = "0x5E20970")]
	internal bool IsDeletedMember(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x5E20B20", Offset = "0x5E1FB20", VA = "0x5E20B20")]
	private ExpandoData PromoteClassCore(ExpandoClass oldClass, ExpandoClass newClass)
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x5E1CF30", Offset = "0x5E1BF30", VA = "0x5E1CF30")]
	internal void PromoteClass(object oldClass, object newClass)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x5E20B60", Offset = "0x5E1FB60", VA = "0x5E20B60", Slot = "4")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x5E20BC0", Offset = "0x5E1FBC0", VA = "0x5E20BC0")]
	private void TryAddMember(string key, object value)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x5E20C30", Offset = "0x5E1FC30", VA = "0x5E20C30")]
	private bool TryGetValueForKey(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x5E20C50", Offset = "0x5E1FC50", VA = "0x5E20C50")]
	private bool ExpandoContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x5E20F50", Offset = "0x5E1FF50", VA = "0x5E20F50", Slot = "10")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EAdd(string key, object value)
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x5E20FC0", Offset = "0x5E1FFC0", VA = "0x5E20FC0", Slot = "9")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x5E210C0", Offset = "0x5E200C0", VA = "0x5E210C0", Slot = "11")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ERemove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x5E21150", Offset = "0x5E20150", VA = "0x5E21150", Slot = "12")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ETryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x5E21190", Offset = "0x5E20190", VA = "0x5E21190", Slot = "15")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x5E21230", Offset = "0x5E20230", VA = "0x5E21230", Slot = "16")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x5E21480", Offset = "0x5E20480", VA = "0x5E21480", Slot = "17")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x5E21510", Offset = "0x5E20510", VA = "0x5E21510", Slot = "18")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x5E21930", Offset = "0x5E20930", VA = "0x5E21930", Slot = "19")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x5E21990", Offset = "0x5E20990", VA = "0x5E21990", Slot = "20")]
	private IEnumerator<KeyValuePair<string, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x5E21AB0", Offset = "0x5E20AB0", VA = "0x5E21AB0", Slot = "21")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x5E21A20", Offset = "0x5E20A20", VA = "0x5E21A20")]
	[IteratorStateMachine(typeof(_003CGetExpandoEnumerator_003Ed__51))]
	private IEnumerator<KeyValuePair<string, object>> GetExpandoEnumerator(ExpandoData data, int version)
	{
		return null;
	}
}
