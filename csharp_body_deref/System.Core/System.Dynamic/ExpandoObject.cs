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
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(KeyCollectionDebugView))]
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
				[Token(Token = "0x6000C29")]
				[Address(RVA = "0x41E88C0", Offset = "0x41E88C0", VA = "0x41E88C0", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000274")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C2B")]
				[Address(RVA = "0x41E8910", Offset = "0x41E8910", VA = "0x41E8910", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C26")]
			[Address(RVA = "0x41E86F0", Offset = "0x41E86F0", VA = "0x41E86F0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C27")]
			[Address(RVA = "0x41E8710", Offset = "0x41E8710", VA = "0x41E8710", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C28")]
			[Address(RVA = "0x41E8720", Offset = "0x41E8720", VA = "0x41E8720", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C2A")]
			[Address(RVA = "0x41E88D0", Offset = "0x41E88D0", VA = "0x41E88D0", Slot = "8")]
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
			[Token(Token = "0x6000C21")]
			[Address(RVA = "0x41E8580", Offset = "0x41E8580", VA = "0x41E8580", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000272")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C22")]
			[Address(RVA = "0x41E85D0", Offset = "0x41E85D0", VA = "0x41E85D0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x41E6D20", Offset = "0x41E6D20", VA = "0x41E6D20")]
		internal KeyCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x41E7F40", Offset = "0x41E7F40", VA = "0x41E7F40")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x41E7F90", Offset = "0x41E7F90", VA = "0x41E7F90", Slot = "6")]
		public void Add(string item)
		{
		}

		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x41E7FC0", Offset = "0x41E7FC0", VA = "0x41E7FC0", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x41E7FF0", Offset = "0x41E7FF0", VA = "0x41E7FF0", Slot = "8")]
		public bool Contains(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x41E81B0", Offset = "0x41E81B0", VA = "0x41E81B0", Slot = "9")]
		public void CopyTo(string[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x41E85E0", Offset = "0x41E85E0", VA = "0x41E85E0", Slot = "10")]
		public bool Remove(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x41E8610", Offset = "0x41E8610", VA = "0x41E8610", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<string> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x41E8680", Offset = "0x41E8680", VA = "0x41E8680", Slot = "12")]
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
				[Token(Token = "0x6000C3A")]
				[Address(RVA = "0x41E93E0", Offset = "0x41E93E0", VA = "0x41E93E0", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000278")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C3C")]
				[Address(RVA = "0x41E9430", Offset = "0x41E9430", VA = "0x41E9430", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C37")]
			[Address(RVA = "0x41E91A0", Offset = "0x41E91A0", VA = "0x41E91A0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C38")]
			[Address(RVA = "0x41E9230", Offset = "0x41E9230", VA = "0x41E9230", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C39")]
			[Address(RVA = "0x41E9240", Offset = "0x41E9240", VA = "0x41E9240", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C3B")]
			[Address(RVA = "0x41E93F0", Offset = "0x41E93F0", VA = "0x41E93F0", Slot = "8")]
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
			[Token(Token = "0x6000C32")]
			[Address(RVA = "0x41E90A0", Offset = "0x41E90A0", VA = "0x41E90A0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000276")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C33")]
			[Address(RVA = "0x41E90F0", Offset = "0x41E90F0", VA = "0x41E90F0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x41E8920", Offset = "0x41E8920", VA = "0x41E8920")]
		internal ValueCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x41E8A40", Offset = "0x41E8A40", VA = "0x41E8A40")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x41E8A90", Offset = "0x41E8A90", VA = "0x41E8A90", Slot = "6")]
		public void Add(object item)
		{
		}

		[Token(Token = "0x6000C2F")]
		[Address(RVA = "0x41E8AC0", Offset = "0x41E8AC0", VA = "0x41E8AC0", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x41E8AF0", Offset = "0x41E8AF0", VA = "0x41E8AF0", Slot = "8")]
		public bool Contains(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x41E8CC0", Offset = "0x41E8CC0", VA = "0x41E8CC0", Slot = "9")]
		public void CopyTo(object[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C34")]
		[Address(RVA = "0x41E9100", Offset = "0x41E9100", VA = "0x41E9100", Slot = "10")]
		public bool Remove(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x41E9130", Offset = "0x41E9130", VA = "0x41E9130", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<object> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x41E91C0", Offset = "0x41E91C0", VA = "0x41E91C0", Slot = "12")]
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
				[Token(Token = "0x6000C4E")]
				[Address(RVA = "0x41EAF30", Offset = "0x41EAF30", VA = "0x41EAF30", Slot = "6")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700027B")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C50")]
				[Address(RVA = "0x41EAF80", Offset = "0x41EAF80", VA = "0x41EAF80", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C4B")]
			[Address(RVA = "0x41EAC40", Offset = "0x41EAC40", VA = "0x41EAC40")]
			[DebuggerHidden]
			public _003CGetDynamicMemberNames_003Ed__6(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C4C")]
			[Address(RVA = "0x41EAD80", Offset = "0x41EAD80", VA = "0x41EAD80", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C4D")]
			[Address(RVA = "0x41EAD90", Offset = "0x41EAD90", VA = "0x41EAD90", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C4F")]
			[Address(RVA = "0x41EAF40", Offset = "0x41EAF40", VA = "0x41EAF40", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000C51")]
			[Address(RVA = "0x41EAF90", Offset = "0x41EAF90", VA = "0x41EAF90", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000C52")]
			[Address(RVA = "0x41EB030", Offset = "0x41EB030", VA = "0x41EB030", Slot = "5")]
			[DebuggerHidden]
			private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
			{
				return null;
			}
		}

		[Token(Token = "0x17000279")]
		public new ExpandoObject Value
		{
			[Token(Token = "0x6000C48")]
			[Address(RVA = "0x41E9BD0", Offset = "0x41E9BD0", VA = "0x41E9BD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x41E9440", Offset = "0x41E9440", VA = "0x41E9440")]
		public MetaExpando(Expression expression, ExpandoObject value)
		{
		}

		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x41E94E0", Offset = "0x41E94E0", VA = "0x41E94E0")]
		private DynamicMetaObject BindGetOrInvokeMember(DynamicMetaObjectBinder binder, string name, bool ignoreCase, DynamicMetaObject fallback, Func<DynamicMetaObject, DynamicMetaObject> fallbackInvoke)
		{
			return null;
		}

		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x41EA040", Offset = "0x41EA040", VA = "0x41EA040", Slot = "5")]
		public override DynamicMetaObject BindGetMember(GetMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x41EA120", Offset = "0x41EA120", VA = "0x41EA120", Slot = "11")]
		public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
		{
			return null;
		}

		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x41EA2D0", Offset = "0x41EA2D0", VA = "0x41EA2D0", Slot = "6")]
		public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
		{
			return null;
		}

		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x41EA850", Offset = "0x41EA850", VA = "0x41EA850", Slot = "7")]
		public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x41EABC0", Offset = "0x41EABC0", VA = "0x41EABC0", Slot = "16")]
		[IteratorStateMachine(typeof(_003CGetDynamicMemberNames_003Ed__6))]
		public override IEnumerable<string> GetDynamicMemberNames()
		{
			return null;
		}

		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x41E9D60", Offset = "0x41E9D60", VA = "0x41E9D60")]
		private DynamicMetaObject AddDynamicTestAndDefer(DynamicMetaObjectBinder binder, ExpandoClass klass, ExpandoClass originalClass, DynamicMetaObject succeeds)
		{
			return null;
		}

		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x41EA750", Offset = "0x41EA750", VA = "0x41EA750")]
		private ExpandoClass GetClassEnsureIndex(string name, bool caseInsensitive, ExpandoObject obj, out ExpandoClass klass, out int index)
		{
			return null;
		}

		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x41E9C20", Offset = "0x41E9C20", VA = "0x41E9C20")]
		private Expression GetLimitedSelf()
		{
			return null;
		}

		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x41EAC70", Offset = "0x41EAC70", VA = "0x41EAC70")]
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
			[Token(Token = "0x6000C53")]
			[Address(RVA = "0x41E8890", Offset = "0x41E8890", VA = "0x41E8890")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C54")]
			[Address(RVA = "0x41EB040", Offset = "0x41EB040", VA = "0x41EB040")]
			set
			{
			}
		}

		[Token(Token = "0x1700027D")]
		internal int Version
		{
			[Token(Token = "0x6000C55")]
			[Address(RVA = "0x41EB0B0", Offset = "0x41EB0B0", VA = "0x41EB0B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700027E")]
		internal int Length
		{
			[Token(Token = "0x6000C56")]
			[Address(RVA = "0x41EB0C0", Offset = "0x41EB0C0", VA = "0x41EB0C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x41EB0E0", Offset = "0x41EB0E0", VA = "0x41EB0E0")]
		private ExpandoData()
		{
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x41EB1F0", Offset = "0x41EB1F0", VA = "0x41EB1F0")]
		internal ExpandoData(ExpandoClass klass, object[] data, int version)
		{
		}

		[Token(Token = "0x6000C59")]
		[Address(RVA = "0x41EB240", Offset = "0x41EB240", VA = "0x41EB240")]
		internal ExpandoData UpdateClass(ExpandoClass newClass)
		{
			return null;
		}

		[Token(Token = "0x6000C5A")]
		[Address(RVA = "0x41EB4D0", Offset = "0x41EB4D0", VA = "0x41EB4D0")]
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
			[Token(Token = "0x6000C5F")]
			[Address(RVA = "0x41EB730", Offset = "0x41EB730", VA = "0x41EB730", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, object>);
			}
		}

		[Token(Token = "0x17000280")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C61")]
			[Address(RVA = "0x41EB780", Offset = "0x41EB780", VA = "0x41EB780", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x41EB540", Offset = "0x41EB540", VA = "0x41EB540")]
		[DebuggerHidden]
		public _003CGetExpandoEnumerator_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x41EB560", Offset = "0x41EB560", VA = "0x41EB560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x41EB570", Offset = "0x41EB570", VA = "0x41EB570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x41EB740", Offset = "0x41EB740", VA = "0x41EB740", Slot = "8")]
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
		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x41E2D40", Offset = "0x41E2D40", VA = "0x41E2D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EKeys
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x41E6CD0", Offset = "0x41E6CD0", VA = "0x41E6CD0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	private ICollection<object> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EValues
	{
		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x41E6E40", Offset = "0x41E6E40", VA = "0x41E6E40", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	private object System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EItem
	{
		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x41E6E90", Offset = "0x41E6E90", VA = "0x41E6E90", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x41E6EF0", Offset = "0x41E6EF0", VA = "0x41E6EF0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	private int System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECount
	{
		[Token(Token = "0x6000C0E")]
		[Address(RVA = "0x41E7180", Offset = "0x41E7180", VA = "0x41E7180", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0F")]
		[Address(RVA = "0x41E7190", Offset = "0x41E7190", VA = "0x41E7190", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	private event PropertyChangedEventHandler System_002EComponentModel_002EINotifyPropertyChanged_002EPropertyChanged
	{
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x41E7C10", Offset = "0x41E7C10", VA = "0x41E7C10", Slot = "22")]
		add
		{
		}
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x41E7C90", Offset = "0x41E7C90", VA = "0x41E7C90", Slot = "23")]
		remove
		{
		}
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x41E6A60", Offset = "0x41E6A60", VA = "0x41E6A60")]
	public ExpandoObject()
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x41E2120", Offset = "0x41E2120", VA = "0x41E2120")]
	internal bool TryGetValue(object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x41E22D0", Offset = "0x41E22D0", VA = "0x41E22D0")]
	internal void TrySetValue(object indexClass, int index, object value, string name, bool ignoreCase, bool add)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x41E28A0", Offset = "0x41E28A0", VA = "0x41E28A0")]
	internal bool TryDeleteValue(object indexClass, int index, string name, bool ignoreCase, object deleteValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x41E6960", Offset = "0x41E6960", VA = "0x41E6960")]
	internal bool IsDeletedMember(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x41E6B10", Offset = "0x41E6B10", VA = "0x41E6B10")]
	private ExpandoData PromoteClassCore(ExpandoClass oldClass, ExpandoClass newClass)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x41E2D70", Offset = "0x41E2D70", VA = "0x41E2D70")]
	internal void PromoteClass(object oldClass, object newClass)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x41E6B50", Offset = "0x41E6B50", VA = "0x41E6B50", Slot = "4")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x41E6BB0", Offset = "0x41E6BB0", VA = "0x41E6BB0")]
	private void TryAddMember(string key, object value)
	{
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x41E6C20", Offset = "0x41E6C20", VA = "0x41E6C20")]
	private bool TryGetValueForKey(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x41E6C40", Offset = "0x41E6C40", VA = "0x41E6C40")]
	private bool ExpandoContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x41E6F60", Offset = "0x41E6F60", VA = "0x41E6F60", Slot = "10")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EAdd(string key, object value)
	{
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x41E6FD0", Offset = "0x41E6FD0", VA = "0x41E6FD0", Slot = "9")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x41E70D0", Offset = "0x41E70D0", VA = "0x41E70D0", Slot = "11")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ERemove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x41E7160", Offset = "0x41E7160", VA = "0x41E7160", Slot = "12")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ETryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x41E71A0", Offset = "0x41E71A0", VA = "0x41E71A0", Slot = "15")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x41E7240", Offset = "0x41E7240", VA = "0x41E7240", Slot = "16")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x41E74A0", Offset = "0x41E74A0", VA = "0x41E74A0", Slot = "17")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x41E7530", Offset = "0x41E7530", VA = "0x41E7530", Slot = "18")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x41E7A00", Offset = "0x41E7A00", VA = "0x41E7A00", Slot = "19")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x41E7A60", Offset = "0x41E7A60", VA = "0x41E7A60", Slot = "20")]
	private IEnumerator<KeyValuePair<string, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x41E7B80", Offset = "0x41E7B80", VA = "0x41E7B80", Slot = "21")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x41E7AF0", Offset = "0x41E7AF0", VA = "0x41E7AF0")]
	[IteratorStateMachine(typeof(_003CGetExpandoEnumerator_003Ed__51))]
	private IEnumerator<KeyValuePair<string, object>> GetExpandoEnumerator(ExpandoData data, int version)
	{
		return null;
	}
}
