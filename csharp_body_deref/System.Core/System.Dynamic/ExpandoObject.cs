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
				[Address(RVA = "0x450D9C0", Offset = "0x450D9C0", VA = "0x450D9C0", Slot = "4")]
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
				[Address(RVA = "0x450DA10", Offset = "0x450DA10", VA = "0x450DA10", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C26")]
			[Address(RVA = "0x450D7F0", Offset = "0x450D7F0", VA = "0x450D7F0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C27")]
			[Address(RVA = "0x450D810", Offset = "0x450D810", VA = "0x450D810", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C28")]
			[Address(RVA = "0x450D820", Offset = "0x450D820", VA = "0x450D820", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C2A")]
			[Address(RVA = "0x450D9D0", Offset = "0x450D9D0", VA = "0x450D9D0", Slot = "8")]
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
			[Address(RVA = "0x450D680", Offset = "0x450D680", VA = "0x450D680", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000272")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C22")]
			[Address(RVA = "0x450D6D0", Offset = "0x450D6D0", VA = "0x450D6D0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x450BE20", Offset = "0x450BE20", VA = "0x450BE20")]
		internal KeyCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x450D040", Offset = "0x450D040", VA = "0x450D040")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x450D090", Offset = "0x450D090", VA = "0x450D090", Slot = "6")]
		public void Add(string item)
		{
		}

		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x450D0C0", Offset = "0x450D0C0", VA = "0x450D0C0", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x450D0F0", Offset = "0x450D0F0", VA = "0x450D0F0", Slot = "8")]
		public bool Contains(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x450D2B0", Offset = "0x450D2B0", VA = "0x450D2B0", Slot = "9")]
		public void CopyTo(string[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x450D6E0", Offset = "0x450D6E0", VA = "0x450D6E0", Slot = "10")]
		public bool Remove(string item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x450D710", Offset = "0x450D710", VA = "0x450D710", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<string> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x450D780", Offset = "0x450D780", VA = "0x450D780", Slot = "12")]
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
				[Address(RVA = "0x450E4E0", Offset = "0x450E4E0", VA = "0x450E4E0", Slot = "4")]
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
				[Address(RVA = "0x450E530", Offset = "0x450E530", VA = "0x450E530", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C37")]
			[Address(RVA = "0x450E2A0", Offset = "0x450E2A0", VA = "0x450E2A0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__15(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C38")]
			[Address(RVA = "0x450E330", Offset = "0x450E330", VA = "0x450E330", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C39")]
			[Address(RVA = "0x450E340", Offset = "0x450E340", VA = "0x450E340", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C3B")]
			[Address(RVA = "0x450E4F0", Offset = "0x450E4F0", VA = "0x450E4F0", Slot = "8")]
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
			[Address(RVA = "0x450E1A0", Offset = "0x450E1A0", VA = "0x450E1A0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000276")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C33")]
			[Address(RVA = "0x450E1F0", Offset = "0x450E1F0", VA = "0x450E1F0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x450DA20", Offset = "0x450DA20", VA = "0x450DA20")]
		internal ValueCollection(ExpandoObject expando)
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x450DB40", Offset = "0x450DB40", VA = "0x450DB40")]
		private void CheckVersion()
		{
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x450DB90", Offset = "0x450DB90", VA = "0x450DB90", Slot = "6")]
		public void Add(object item)
		{
		}

		[Token(Token = "0x6000C2F")]
		[Address(RVA = "0x450DBC0", Offset = "0x450DBC0", VA = "0x450DBC0", Slot = "7")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x450DBF0", Offset = "0x450DBF0", VA = "0x450DBF0", Slot = "8")]
		public bool Contains(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x450DDC0", Offset = "0x450DDC0", VA = "0x450DDC0", Slot = "9")]
		public void CopyTo(object[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C34")]
		[Address(RVA = "0x450E200", Offset = "0x450E200", VA = "0x450E200", Slot = "10")]
		public bool Remove(object item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C35")]
		[Address(RVA = "0x450E230", Offset = "0x450E230", VA = "0x450E230", Slot = "11")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__15))]
		public IEnumerator<object> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x450E2C0", Offset = "0x450E2C0", VA = "0x450E2C0", Slot = "12")]
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
				[Address(RVA = "0x4510030", Offset = "0x4510030", VA = "0x4510030", Slot = "6")]
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
				[Address(RVA = "0x4510080", Offset = "0x4510080", VA = "0x4510080", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C4B")]
			[Address(RVA = "0x450FD40", Offset = "0x450FD40", VA = "0x450FD40")]
			[DebuggerHidden]
			public _003CGetDynamicMemberNames_003Ed__6(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C4C")]
			[Address(RVA = "0x450FE80", Offset = "0x450FE80", VA = "0x450FE80", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C4D")]
			[Address(RVA = "0x450FE90", Offset = "0x450FE90", VA = "0x450FE90", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C4F")]
			[Address(RVA = "0x4510040", Offset = "0x4510040", VA = "0x4510040", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x6000C51")]
			[Address(RVA = "0x4510090", Offset = "0x4510090", VA = "0x4510090", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x6000C52")]
			[Address(RVA = "0x4510130", Offset = "0x4510130", VA = "0x4510130", Slot = "5")]
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
			[Address(RVA = "0x450ECD0", Offset = "0x450ECD0", VA = "0x450ECD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x450E540", Offset = "0x450E540", VA = "0x450E540")]
		public MetaExpando(Expression expression, ExpandoObject value)
		{
		}

		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x450E5E0", Offset = "0x450E5E0", VA = "0x450E5E0")]
		private DynamicMetaObject BindGetOrInvokeMember(DynamicMetaObjectBinder binder, string name, bool ignoreCase, DynamicMetaObject fallback, Func<DynamicMetaObject, DynamicMetaObject> fallbackInvoke)
		{
			return null;
		}

		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x450F140", Offset = "0x450F140", VA = "0x450F140", Slot = "5")]
		public override DynamicMetaObject BindGetMember(GetMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C40")]
		[Address(RVA = "0x450F220", Offset = "0x450F220", VA = "0x450F220", Slot = "11")]
		public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
		{
			return null;
		}

		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x450F3D0", Offset = "0x450F3D0", VA = "0x450F3D0", Slot = "6")]
		public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
		{
			return null;
		}

		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x450F950", Offset = "0x450F950", VA = "0x450F950", Slot = "7")]
		public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
		{
			return null;
		}

		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x450FCC0", Offset = "0x450FCC0", VA = "0x450FCC0", Slot = "16")]
		[IteratorStateMachine(typeof(_003CGetDynamicMemberNames_003Ed__6))]
		public override IEnumerable<string> GetDynamicMemberNames()
		{
			return null;
		}

		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x450EE60", Offset = "0x450EE60", VA = "0x450EE60")]
		private DynamicMetaObject AddDynamicTestAndDefer(DynamicMetaObjectBinder binder, ExpandoClass klass, ExpandoClass originalClass, DynamicMetaObject succeeds)
		{
			return null;
		}

		[Token(Token = "0x6000C45")]
		[Address(RVA = "0x450F850", Offset = "0x450F850", VA = "0x450F850")]
		private ExpandoClass GetClassEnsureIndex(string name, bool caseInsensitive, ExpandoObject obj, out ExpandoClass klass, out int index)
		{
			return null;
		}

		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x450ED20", Offset = "0x450ED20", VA = "0x450ED20")]
		private Expression GetLimitedSelf()
		{
			return null;
		}

		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x450FD70", Offset = "0x450FD70", VA = "0x450FD70")]
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
			[Address(RVA = "0x450D990", Offset = "0x450D990", VA = "0x450D990")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C54")]
			[Address(RVA = "0x4510140", Offset = "0x4510140", VA = "0x4510140")]
			set
			{
			}
		}

		[Token(Token = "0x1700027D")]
		internal int Version
		{
			[Token(Token = "0x6000C55")]
			[Address(RVA = "0x45101B0", Offset = "0x45101B0", VA = "0x45101B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700027E")]
		internal int Length
		{
			[Token(Token = "0x6000C56")]
			[Address(RVA = "0x45101C0", Offset = "0x45101C0", VA = "0x45101C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x45101E0", Offset = "0x45101E0", VA = "0x45101E0")]
		private ExpandoData()
		{
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x45102F0", Offset = "0x45102F0", VA = "0x45102F0")]
		internal ExpandoData(ExpandoClass klass, object[] data, int version)
		{
		}

		[Token(Token = "0x6000C59")]
		[Address(RVA = "0x4510340", Offset = "0x4510340", VA = "0x4510340")]
		internal ExpandoData UpdateClass(ExpandoClass newClass)
		{
			return null;
		}

		[Token(Token = "0x6000C5A")]
		[Address(RVA = "0x45105D0", Offset = "0x45105D0", VA = "0x45105D0")]
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
			[Address(RVA = "0x4510830", Offset = "0x4510830", VA = "0x4510830", Slot = "4")]
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
			[Address(RVA = "0x4510880", Offset = "0x4510880", VA = "0x4510880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x4510640", Offset = "0x4510640", VA = "0x4510640")]
		[DebuggerHidden]
		public _003CGetExpandoEnumerator_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x4510660", Offset = "0x4510660", VA = "0x4510660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x4510670", Offset = "0x4510670", VA = "0x4510670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x4510840", Offset = "0x4510840", VA = "0x4510840", Slot = "8")]
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
		[Address(RVA = "0x4507E40", Offset = "0x4507E40", VA = "0x4507E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EKeys
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x450BDD0", Offset = "0x450BDD0", VA = "0x450BDD0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	private ICollection<object> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EValues
	{
		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x450BF40", Offset = "0x450BF40", VA = "0x450BF40", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	private object System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EItem
	{
		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x450BF90", Offset = "0x450BF90", VA = "0x450BF90", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x450BFF0", Offset = "0x450BFF0", VA = "0x450BFF0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	private int System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECount
	{
		[Token(Token = "0x6000C0E")]
		[Address(RVA = "0x450C280", Offset = "0x450C280", VA = "0x450C280", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0F")]
		[Address(RVA = "0x450C290", Offset = "0x450C290", VA = "0x450C290", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	private event PropertyChangedEventHandler System_002EComponentModel_002EINotifyPropertyChanged_002EPropertyChanged
	{
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x450CD10", Offset = "0x450CD10", VA = "0x450CD10", Slot = "22")]
		add
		{
		}
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x450CD90", Offset = "0x450CD90", VA = "0x450CD90", Slot = "23")]
		remove
		{
		}
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x450BB60", Offset = "0x450BB60", VA = "0x450BB60")]
	public ExpandoObject()
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x4507220", Offset = "0x4507220", VA = "0x4507220")]
	internal bool TryGetValue(object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x45073D0", Offset = "0x45073D0", VA = "0x45073D0")]
	internal void TrySetValue(object indexClass, int index, object value, string name, bool ignoreCase, bool add)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x45079A0", Offset = "0x45079A0", VA = "0x45079A0")]
	internal bool TryDeleteValue(object indexClass, int index, string name, bool ignoreCase, object deleteValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x450BA60", Offset = "0x450BA60", VA = "0x450BA60")]
	internal bool IsDeletedMember(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x450BC10", Offset = "0x450BC10", VA = "0x450BC10")]
	private ExpandoData PromoteClassCore(ExpandoClass oldClass, ExpandoClass newClass)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x4507E70", Offset = "0x4507E70", VA = "0x4507E70")]
	internal void PromoteClass(object oldClass, object newClass)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x450BC50", Offset = "0x450BC50", VA = "0x450BC50", Slot = "4")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x450BCB0", Offset = "0x450BCB0", VA = "0x450BCB0")]
	private void TryAddMember(string key, object value)
	{
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x450BD20", Offset = "0x450BD20", VA = "0x450BD20")]
	private bool TryGetValueForKey(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x450BD40", Offset = "0x450BD40", VA = "0x450BD40")]
	private bool ExpandoContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x450C060", Offset = "0x450C060", VA = "0x450C060", Slot = "10")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EAdd(string key, object value)
	{
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x450C0D0", Offset = "0x450C0D0", VA = "0x450C0D0", Slot = "9")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002EContainsKey(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x450C1D0", Offset = "0x450C1D0", VA = "0x450C1D0", Slot = "11")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ERemove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x450C260", Offset = "0x450C260", VA = "0x450C260", Slot = "12")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CSystem_002EObject_003E_002ETryGetValue(string key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x450C2A0", Offset = "0x450C2A0", VA = "0x450C2A0", Slot = "15")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EAdd(KeyValuePair<string, object> item)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x450C340", Offset = "0x450C340", VA = "0x450C340", Slot = "16")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x450C5A0", Offset = "0x450C5A0", VA = "0x450C5A0", Slot = "17")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EContains(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x450C630", Offset = "0x450C630", VA = "0x450C630", Slot = "18")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ECopyTo(KeyValuePair<string, object>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x450CB00", Offset = "0x450CB00", VA = "0x450CB00", Slot = "19")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002ERemove(KeyValuePair<string, object> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x450CB60", Offset = "0x450CB60", VA = "0x450CB60", Slot = "20")]
	private IEnumerator<KeyValuePair<string, object>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EObject_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x450CC80", Offset = "0x450CC80", VA = "0x450CC80", Slot = "21")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x450CBF0", Offset = "0x450CBF0", VA = "0x450CBF0")]
	[IteratorStateMachine(typeof(_003CGetExpandoEnumerator_003Ed__51))]
	private IEnumerator<KeyValuePair<string, object>> GetExpandoEnumerator(ExpandoData data, int version)
	{
		return null;
	}
}
