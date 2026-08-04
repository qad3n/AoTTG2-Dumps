// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000167")]
public abstract class JContainer : JToken, IList<JToken>, ICollection<JToken>, IEnumerable<JToken>, IEnumerable, ITypedList, IBindingList, ICollection, IList, INotifyCollectionChanged
{
	[Token(Token = "0x2000168")]
	[CompilerGenerated]
	private sealed class _003CGetDescendants_003Ed__36 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40006A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40006A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x40006A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40006A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private bool self;

		[Token(Token = "0x40006A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
		public bool _003C_003E3__self;

		[Token(Token = "0x40006A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JContainer _003C_003E4__this;

		[Token(Token = "0x40006A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x40006A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private JToken _003Co_003E5__3;

		[Token(Token = "0x40006A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private IEnumerator<JToken> _003C_003E7__wrap3;

		[Token(Token = "0x170001EE")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000BC7")]
			[Address(RVA = "0x3E11BC0", Offset = "0x3E11BC0", VA = "0x3E11BC0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001EF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BC9")]
			[Address(RVA = "0x3E11C10", Offset = "0x3E11C10", VA = "0x3E11C10", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x3E0D630", Offset = "0x3E0D630", VA = "0x3E0D630")]
		[DebuggerHidden]
		public _003CGetDescendants_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x3E11110", Offset = "0x3E11110", VA = "0x3E11110", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x3E11360", Offset = "0x3E11360", VA = "0x3E11360", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x3E11B20", Offset = "0x3E11B20", VA = "0x3E11B20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x3E11A80", Offset = "0x3E11A80", VA = "0x3E11A80")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x3E11BD0", Offset = "0x3E11BD0", VA = "0x3E11BD0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x3E11C20", Offset = "0x3E11C20", VA = "0x3E11C20", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x3E11CD0", Offset = "0x3E11CD0", VA = "0x3E11CD0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000169")]
	[CompilerGenerated]
	private struct _003CReadContentFromAsync_003Ed__1 : IAsyncStateMachine
	{
		[Token(Token = "0x40006AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40006AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40006AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x40006AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JContainer _003C_003E4__this;

		[Token(Token = "0x40006AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonLoadSettings settings;

		[Token(Token = "0x40006AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40006B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private IJsonLineInfo _003ClineInfo_003E5__2;

		[Token(Token = "0x40006B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private JContainer _003Cparent_003E5__3;

		[Token(Token = "0x40006B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40006B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x3E11CE0", Offset = "0x3E11CE0", VA = "0x3E11CE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x3E12AD0", Offset = "0x3E12AD0", VA = "0x3E12AD0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200016A")]
	[CompilerGenerated]
	private struct _003CReadTokenFromAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x40006B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40006B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40006B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x40006B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40006B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JContainer _003C_003E4__this;

		[Token(Token = "0x40006B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public JsonLoadSettings options;

		[Token(Token = "0x40006BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003CstartDepth_003E5__2;

		[Token(Token = "0x40006BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40006BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x3E12B30", Offset = "0x3E12B30", VA = "0x3E12B30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x3E13210", Offset = "0x3E13210", VA = "0x3E13210", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400069C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal ListChangedEventHandler? _listChanged;

	[Token(Token = "0x400069D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal AddingNewEventHandler? _addingNew;

	[Token(Token = "0x400069E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal NotifyCollectionChangedEventHandler? _collectionChanged;

	[Token(Token = "0x400069F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object? _syncRoot;

	[Token(Token = "0x40006A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _busy;

	[Token(Token = "0x170001D9")]
	protected abstract IList<JToken> ChildrenTokens
	{
		[Token(Token = "0x6000B65")]
		get;
	}

	[Token(Token = "0x170001DA")]
	public override bool HasValues
	{
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x3E0D100", Offset = "0x3E0D100", VA = "0x3E0D100", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	public override JToken? First
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x3E0D1C0", Offset = "0x3E0D1C0", VA = "0x3E0D1C0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public override JToken? Last
	{
		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x3E0D300", Offset = "0x3E0D300", VA = "0x3E0D300", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	private JToken System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EItem
	{
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x3E10840", Offset = "0x3E10840", VA = "0x3E10840", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x3E10860", Offset = "0x3E10860", VA = "0x3E10860", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170001DE")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x3E10900", Offset = "0x3E10900", VA = "0x3E10900", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x3E10B70", Offset = "0x3E10B70", VA = "0x3E10B70", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x3E10B80", Offset = "0x3E10B80", VA = "0x3E10B80", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E1")]
	private object? System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x3E10BE0", Offset = "0x3E10BE0", VA = "0x3E10BE0", Slot = "58")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x3E10C00", Offset = "0x3E10C00", VA = "0x3E10C00", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	public int Count
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x3E0F3C0", Offset = "0x3E0F3C0", VA = "0x3E0F3C0", Slot = "70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x3E10C60", Offset = "0x3E10C60", VA = "0x3E10C60", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x3E10C70", Offset = "0x3E10C70", VA = "0x3E10C70", Slot = "71")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x3E10EB0", Offset = "0x3E10EB0", VA = "0x3E10EB0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E6")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x3E10EC0", Offset = "0x3E10EC0", VA = "0x3E10EC0", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E7")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x3E10ED0", Offset = "0x3E10ED0", VA = "0x3E10ED0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x3E10F60", Offset = "0x3E10F60", VA = "0x3E10F60", Slot = "48")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x3E10FC0", Offset = "0x3E10FC0", VA = "0x3E10FC0", Slot = "50")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001EA")]
	private PropertyDescriptor? System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x3E10FD0", Offset = "0x3E10FD0", VA = "0x3E10FD0", Slot = "49")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EB")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x3E10FE0", Offset = "0x3E10FE0", VA = "0x3E10FE0", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x3E10FF0", Offset = "0x3E10FF0", VA = "0x3E10FF0", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x3E11000", Offset = "0x3E11000", VA = "0x3E11000", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x3E0C670", Offset = "0x3E0C670", VA = "0x3E0C670", Slot = "51")]
		add
		{
		}
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x3E0C6F0", Offset = "0x3E0C6F0", VA = "0x3E0C6F0", Slot = "52")]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x3E0C770", Offset = "0x3E0C770", VA = "0x3E0C770")]
		add
		{
		}
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x3E0C7F0", Offset = "0x3E0C7F0", VA = "0x3E0C7F0")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event NotifyCollectionChangedEventHandler? CollectionChanged
	{
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x3E0C870", Offset = "0x3E0C870", VA = "0x3E0C870", Slot = "73")]
		add
		{
		}
		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x3E0C8F0", Offset = "0x3E0C8F0", VA = "0x3E0C8F0", Slot = "74")]
		remove
		{
		}
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x3E0BD60", Offset = "0x3E0BD60", VA = "0x3E0BD60")]
	[AsyncStateMachine(typeof(_003CReadTokenFromAsync_003Ed__0))]
	internal Task ReadTokenFromAsync(JsonReader reader, JsonLoadSettings? options, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x3E0C520", Offset = "0x3E0C520", VA = "0x3E0C520")]
	[AsyncStateMachine(typeof(_003CReadContentFromAsync_003Ed__1))]
	private Task ReadContentFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x3E09D80", Offset = "0x3E09D80", VA = "0x3E09D80")]
	internal JContainer()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x3E09E90", Offset = "0x3E09E90", VA = "0x3E09E90")]
	internal JContainer(JContainer other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x3E0CEC0", Offset = "0x3E0CEC0", VA = "0x3E0CEC0")]
	internal void CheckReentrancy()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x3E0CF60", Offset = "0x3E0CF60", VA = "0x3E0CF60", Slot = "76")]
	internal virtual IList<JToken> CreateChildrenCollection()
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x3E0CFC0", Offset = "0x3E0CFC0", VA = "0x3E0CFC0", Slot = "77")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x3E0CFE0", Offset = "0x3E0CFE0", VA = "0x3E0CFE0", Slot = "78")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x3E0D070", Offset = "0x3E0D070", VA = "0x3E0D070", Slot = "79")]
	protected virtual void OnCollectionChanged(NotifyCollectionChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x3E0A5A0", Offset = "0x3E0A5A0", VA = "0x3E0A5A0")]
	internal bool ContentsEqual(JContainer container)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x3E0D440", Offset = "0x3E0D440", VA = "0x3E0D440", Slot = "22")]
	public override JEnumerable<JToken> Children()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000B72")]
	public override IEnumerable<T?>? Values<T>()
	{
		return null;
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x3E0D4B0", Offset = "0x3E0D4B0", VA = "0x3E0D4B0")]
	public IEnumerable<JToken> Descendants()
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x3E0D5B0", Offset = "0x3E0D5B0", VA = "0x3E0D5B0")]
	public IEnumerable<JToken> DescendantsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x3E0D530", Offset = "0x3E0D530", VA = "0x3E0D530")]
	[IteratorStateMachine(typeof(_003CGetDescendants_003Ed__36))]
	internal IEnumerable<JToken> GetDescendants(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x3E0D660", Offset = "0x3E0D660", VA = "0x3E0D660")]
	internal bool IsMultiContent([NotNullWhen(true)] object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x3E0D710", Offset = "0x3E0D710", VA = "0x3E0D710")]
	internal JToken EnsureParentToken(JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	internal abstract int IndexOfItem(JToken? item);

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x3E0D830", Offset = "0x3E0D830", VA = "0x3E0D830", Slot = "81")]
	internal virtual bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x3E0DC70", Offset = "0x3E0DC70", VA = "0x3E0DC70", Slot = "82")]
	internal virtual void RemoveItemAt(int index)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x3E0E150", Offset = "0x3E0E150", VA = "0x3E0E150", Slot = "83")]
	internal virtual bool RemoveItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x3E0E190", Offset = "0x3E0E190", VA = "0x3E0E190", Slot = "84")]
	internal virtual JToken GetItem(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x3E0E250", Offset = "0x3E0E250", VA = "0x3E0E250", Slot = "85")]
	internal virtual void SetItem(int index, JToken? item)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x3E0E970", Offset = "0x3E0E970", VA = "0x3E0E970", Slot = "86")]
	internal virtual void ClearItems()
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x3E0EE30", Offset = "0x3E0EE30", VA = "0x3E0EE30", Slot = "87")]
	internal virtual void ReplaceItem(JToken existing, JToken replacement)
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x3E0EE90", Offset = "0x3E0EE90", VA = "0x3E0EE90", Slot = "88")]
	internal virtual bool ContainsItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x3E0EEB0", Offset = "0x3E0EEB0", VA = "0x3E0EEB0", Slot = "89")]
	internal virtual void CopyItemsTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x3E0E8B0", Offset = "0x3E0E8B0", VA = "0x3E0E8B0")]
	internal static bool IsTokenUnchanged(JToken currentValue, JToken? newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x3E0F470", Offset = "0x3E0F470", VA = "0x3E0F470", Slot = "90")]
	internal virtual void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x3E0F580", Offset = "0x3E0F580", VA = "0x3E0F580", Slot = "91")]
	public virtual void Add(object? content)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x3E0F650", Offset = "0x3E0F650", VA = "0x3E0F650")]
	internal bool TryAdd(object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x3E0F720", Offset = "0x3E0F720", VA = "0x3E0F720")]
	internal void AddAndSkipParentCheck(JToken token)
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x3E0F7F0", Offset = "0x3E0F7F0", VA = "0x3E0F7F0")]
	public void AddFirst(object? content)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x3E0CA30", Offset = "0x3E0CA30", VA = "0x3E0CA30")]
	internal bool TryAddInternal(int index, object? content, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x3E0F810", Offset = "0x3E0F810", VA = "0x3E0F810")]
	internal static JToken CreateFromContent(object? content)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x3E0F8A0", Offset = "0x3E0F8A0", VA = "0x3E0F8A0")]
	public JsonWriter CreateWriter()
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x3E0F8F0", Offset = "0x3E0F8F0", VA = "0x3E0F8F0")]
	public void ReplaceAll(object content)
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x3E0F930", Offset = "0x3E0F930", VA = "0x3E0F930")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x6000B8D")]
	internal abstract void MergeItem(object content, JsonMergeSettings? settings);

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x3E0F950", Offset = "0x3E0F950", VA = "0x3E0F950")]
	public void Merge(object? content)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x3E0FAD0", Offset = "0x3E0FAD0", VA = "0x3E0FAD0")]
	public void Merge(object? content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x3E0F990", Offset = "0x3E0F990", VA = "0x3E0F990")]
	private void ValidateContent(object content)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x3E0B360", Offset = "0x3E0B360", VA = "0x3E0B360")]
	internal void ReadTokenFrom(JsonReader reader, JsonLoadSettings? options)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x3E0FB10", Offset = "0x3E0FB10", VA = "0x3E0FB10")]
	internal void ReadContentFrom(JsonReader r, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x3E100B0", Offset = "0x3E100B0", VA = "0x3E100B0")]
	private static JProperty? ReadProperty(JsonReader r, JsonLoadSettings? settings, IJsonLineInfo? lineInfo, JContainer parent)
	{
		return null;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x3E0AC20", Offset = "0x3E0AC20", VA = "0x3E0AC20")]
	internal int ContentsHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x3E10620", Offset = "0x3E10620", VA = "0x3E10620", Slot = "39")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x3E10640", Offset = "0x3E10640", VA = "0x3E10640", Slot = "40")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x3E107E0", Offset = "0x3E107E0", VA = "0x3E107E0", Slot = "29")]
	private int System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIndexOf(JToken item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x3E10800", Offset = "0x3E10800", VA = "0x3E10800", Slot = "30")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EInsert(int index, JToken item)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x3E10820", Offset = "0x3E10820", VA = "0x3E10820", Slot = "31")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x3E10880", Offset = "0x3E10880", VA = "0x3E10880", Slot = "34")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EAdd(JToken item)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x3E108A0", Offset = "0x3E108A0", VA = "0x3E108A0", Slot = "35")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EClear()
	{
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x3E108C0", Offset = "0x3E108C0", VA = "0x3E108C0", Slot = "36")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EContains(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x3E108E0", Offset = "0x3E108E0", VA = "0x3E108E0", Slot = "37")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECopyTo(JToken[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x3E10910", Offset = "0x3E10910", VA = "0x3E10910", Slot = "38")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemove(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x3E10930", Offset = "0x3E10930", VA = "0x3E10930")]
	private JToken? EnsureValue(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x3E109E0", Offset = "0x3E109E0", VA = "0x3E109E0", Slot = "60")]
	private int System_002ECollections_002EIList_002EAdd(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x3E10AB0", Offset = "0x3E10AB0", VA = "0x3E10AB0", Slot = "62")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x3E10AD0", Offset = "0x3E10AD0", VA = "0x3E10AD0", Slot = "61")]
	private bool System_002ECollections_002EIList_002EContains(object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x3E10B00", Offset = "0x3E10B00", VA = "0x3E10B00", Slot = "65")]
	private int System_002ECollections_002EIList_002EIndexOf(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x3E10B30", Offset = "0x3E10B30", VA = "0x3E10B30", Slot = "66")]
	private void System_002ECollections_002EIList_002EInsert(int index, object? value)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x3E10B90", Offset = "0x3E10B90", VA = "0x3E10B90", Slot = "67")]
	private void System_002ECollections_002EIList_002ERemove(object? value)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x3E10BC0", Offset = "0x3E10BC0", VA = "0x3E10BC0", Slot = "68")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x3E10C40", Offset = "0x3E10C40", VA = "0x3E10C40", Slot = "69")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x3E10CF0", Offset = "0x3E10CF0", VA = "0x3E10CF0", Slot = "53")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x3E10D00", Offset = "0x3E10D00", VA = "0x3E10D00", Slot = "42")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x3E10EE0", Offset = "0x3E10EE0", VA = "0x3E10EE0", Slot = "54")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x3E10F20", Offset = "0x3E10F20", VA = "0x3E10F20", Slot = "55")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x3E10F70", Offset = "0x3E10F70", VA = "0x3E10F70", Slot = "56")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x3E10F80", Offset = "0x3E10F80", VA = "0x3E10F80", Slot = "57")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x3E086C0", Offset = "0x3E086C0", VA = "0x3E086C0")]
	internal static void MergeEnumerableContent(JContainer target, IEnumerable content, JsonMergeSettings? settings)
	{
	}
}
