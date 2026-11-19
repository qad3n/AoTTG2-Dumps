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
			[Address(RVA = "0x5606C70", Offset = "0x5605C70", VA = "0x5606C70", Slot = "6")]
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
			[Address(RVA = "0x5606CC0", Offset = "0x5605CC0", VA = "0x5606CC0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x56028A0", Offset = "0x56018A0", VA = "0x56028A0")]
		[DebuggerHidden]
		public _003CGetDescendants_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x5606270", Offset = "0x5605270", VA = "0x5606270", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x5606430", Offset = "0x5605430", VA = "0x5606430", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x5606BD0", Offset = "0x5605BD0", VA = "0x5606BD0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x5606B30", Offset = "0x5605B30", VA = "0x5606B30")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x5606C80", Offset = "0x5605C80", VA = "0x5606C80", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x5606CD0", Offset = "0x5605CD0", VA = "0x5606CD0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x5606D70", Offset = "0x5605D70", VA = "0x5606D70", Slot = "5")]
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
		[Address(RVA = "0x5606D80", Offset = "0x5605D80", VA = "0x5606D80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x56077C0", Offset = "0x56067C0", VA = "0x56077C0", Slot = "5")]
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
		[Address(RVA = "0x5607820", Offset = "0x5606820", VA = "0x5607820", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x5607D40", Offset = "0x5606D40", VA = "0x5607D40", Slot = "5")]
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
		[Address(RVA = "0x56023A0", Offset = "0x56013A0", VA = "0x56023A0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	public override JToken? First
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x5602460", Offset = "0x5601460", VA = "0x5602460", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public override JToken? Last
	{
		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x56025A0", Offset = "0x56015A0", VA = "0x56025A0", Slot = "21")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170001DD")]
	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x56059B0", Offset = "0x56049B0", VA = "0x56059B0", Slot = "27")]
	private JToken System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x56059D0", Offset = "0x56049D0", VA = "0x56059D0", Slot = "28")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002Eset_Item(int index, JToken value)
	{
	}

	[Token(Token = "0x170001DE")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x5605A70", Offset = "0x5604A70", VA = "0x5605A70", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x5605CD0", Offset = "0x5604CD0", VA = "0x5605CD0", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x5605CE0", Offset = "0x5604CE0", VA = "0x5605CE0", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170001E1")]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x5605D40", Offset = "0x5604D40", VA = "0x5605D40", Slot = "58")]
	private object? System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x5605D60", Offset = "0x5604D60", VA = "0x5605D60", Slot = "59")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object? value)
	{
	}

	[Token(Token = "0x170001E2")]
	public int Count
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x5604540", Offset = "0x5603540", VA = "0x5604540", Slot = "70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x5605DC0", Offset = "0x5604DC0", VA = "0x5605DC0", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x5605DD0", Offset = "0x5604DD0", VA = "0x5605DD0", Slot = "71")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x5606010", Offset = "0x5605010", VA = "0x5606010", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E6")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x5606020", Offset = "0x5605020", VA = "0x5606020", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E7")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x5606030", Offset = "0x5605030", VA = "0x5606030", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x56060C0", Offset = "0x56050C0", VA = "0x56060C0", Slot = "48")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x5606120", Offset = "0x5605120", VA = "0x5606120", Slot = "50")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001EA")]
	private PropertyDescriptor? System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x5606130", Offset = "0x5605130", VA = "0x5606130", Slot = "49")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EB")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x5606140", Offset = "0x5605140", VA = "0x5606140", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x5606150", Offset = "0x5605150", VA = "0x5606150", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x5606160", Offset = "0x5605160", VA = "0x5606160", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x56019A0", Offset = "0x56009A0", VA = "0x56019A0", Slot = "51")]
		add
		{
		}
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x5601A20", Offset = "0x5600A20", VA = "0x5601A20", Slot = "52")]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x5601AA0", Offset = "0x5600AA0", VA = "0x5601AA0")]
		add
		{
		}
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x5601B20", Offset = "0x5600B20", VA = "0x5601B20")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event NotifyCollectionChangedEventHandler? CollectionChanged
	{
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x5601BA0", Offset = "0x5600BA0", VA = "0x5601BA0", Slot = "73")]
		add
		{
		}
		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x5601C20", Offset = "0x5600C20", VA = "0x5601C20", Slot = "74")]
		remove
		{
		}
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x56011B0", Offset = "0x56001B0", VA = "0x56011B0")]
	[AsyncStateMachine(typeof(_003CReadTokenFromAsync_003Ed__0))]
	internal Task ReadTokenFromAsync(JsonReader reader, JsonLoadSettings? options, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x5601860", Offset = "0x5600860", VA = "0x5601860")]
	[AsyncStateMachine(typeof(_003CReadContentFromAsync_003Ed__1))]
	private Task ReadContentFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x55FF420", Offset = "0x55FE420", VA = "0x55FF420")]
	internal JContainer()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x55FF530", Offset = "0x55FE530", VA = "0x55FF530")]
	internal JContainer(JContainer other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x5602180", Offset = "0x5601180", VA = "0x5602180")]
	internal void CheckReentrancy()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x5602220", Offset = "0x5601220", VA = "0x5602220", Slot = "76")]
	internal virtual IList<JToken> CreateChildrenCollection()
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x5602280", Offset = "0x5601280", VA = "0x5602280", Slot = "77")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x56022A0", Offset = "0x56012A0", VA = "0x56022A0", Slot = "78")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x5602320", Offset = "0x5601320", VA = "0x5602320", Slot = "79")]
	protected virtual void OnCollectionChanged(NotifyCollectionChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x55FFBF0", Offset = "0x55FEBF0", VA = "0x55FFBF0")]
	internal bool ContentsEqual(JContainer container)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x56026E0", Offset = "0x56016E0", VA = "0x56026E0", Slot = "22")]
	public override JEnumerable<JToken> Children()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000B72")]
	public override IEnumerable<T?>? Values<T>() where T : default
	{
		return null;
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x5602750", Offset = "0x5601750", VA = "0x5602750")]
	public IEnumerable<JToken> Descendants()
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x5602830", Offset = "0x5601830", VA = "0x5602830")]
	public IEnumerable<JToken> DescendantsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x56027C0", Offset = "0x56017C0", VA = "0x56027C0")]
	[IteratorStateMachine(typeof(_003CGetDescendants_003Ed__36))]
	internal IEnumerable<JToken> GetDescendants(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x56028D0", Offset = "0x56018D0", VA = "0x56028D0")]
	internal bool IsMultiContent([NotNullWhen(true)] object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x5602980", Offset = "0x5601980", VA = "0x5602980")]
	internal JToken EnsureParentToken(JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	internal abstract int IndexOfItem(JToken? item);

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x5602A90", Offset = "0x5601A90", VA = "0x5602A90", Slot = "81")]
	internal virtual bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x5602ED0", Offset = "0x5601ED0", VA = "0x5602ED0", Slot = "82")]
	internal virtual void RemoveItemAt(int index)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x56033C0", Offset = "0x56023C0", VA = "0x56033C0", Slot = "83")]
	internal virtual bool RemoveItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x5603400", Offset = "0x5602400", VA = "0x5603400", Slot = "84")]
	internal virtual JToken GetItem(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x56034C0", Offset = "0x56024C0", VA = "0x56034C0", Slot = "85")]
	internal virtual void SetItem(int index, JToken? item)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x5603BB0", Offset = "0x5602BB0", VA = "0x5603BB0", Slot = "86")]
	internal virtual void ClearItems()
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x5603FF0", Offset = "0x5602FF0", VA = "0x5603FF0", Slot = "87")]
	internal virtual void ReplaceItem(JToken existing, JToken replacement)
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x5604050", Offset = "0x5603050", VA = "0x5604050", Slot = "88")]
	internal virtual bool ContainsItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x5604070", Offset = "0x5603070", VA = "0x5604070", Slot = "89")]
	internal virtual void CopyItemsTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x5603B10", Offset = "0x5602B10", VA = "0x5603B10")]
	internal static bool IsTokenUnchanged(JToken currentValue, JToken? newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x56045F0", Offset = "0x56035F0", VA = "0x56045F0", Slot = "90")]
	internal virtual void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x5604700", Offset = "0x5603700", VA = "0x5604700", Slot = "91")]
	public virtual void Add(object? content)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x56047D0", Offset = "0x56037D0", VA = "0x56047D0")]
	internal bool TryAdd(object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x56048A0", Offset = "0x56038A0", VA = "0x56048A0")]
	internal void AddAndSkipParentCheck(JToken token)
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x5604970", Offset = "0x5603970", VA = "0x5604970")]
	public void AddFirst(object? content)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x5601D60", Offset = "0x5600D60", VA = "0x5601D60")]
	internal bool TryAddInternal(int index, object? content, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x5604990", Offset = "0x5603990", VA = "0x5604990")]
	internal static JToken CreateFromContent(object? content)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x5604A20", Offset = "0x5603A20", VA = "0x5604A20")]
	public JsonWriter CreateWriter()
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x5604A70", Offset = "0x5603A70", VA = "0x5604A70")]
	public void ReplaceAll(object content)
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x5604AB0", Offset = "0x5603AB0", VA = "0x5604AB0")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x6000B8D")]
	internal abstract void MergeItem(object content, JsonMergeSettings? settings);

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x5604AD0", Offset = "0x5603AD0", VA = "0x5604AD0")]
	public void Merge(object? content)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x5604C50", Offset = "0x5603C50", VA = "0x5604C50")]
	public void Merge(object? content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x5604B10", Offset = "0x5603B10", VA = "0x5604B10")]
	private void ValidateContent(object content)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x56009A0", Offset = "0x55FF9A0", VA = "0x56009A0")]
	internal void ReadTokenFrom(JsonReader reader, JsonLoadSettings? options)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x5604C90", Offset = "0x5603C90", VA = "0x5604C90")]
	internal void ReadContentFrom(JsonReader r, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x5605250", Offset = "0x5604250", VA = "0x5605250")]
	private static JProperty? ReadProperty(JsonReader r, JsonLoadSettings? settings, IJsonLineInfo? lineInfo, JContainer parent)
	{
		return null;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x56002A0", Offset = "0x55FF2A0", VA = "0x56002A0")]
	internal int ContentsHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x5605790", Offset = "0x5604790", VA = "0x5605790", Slot = "39")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x56057B0", Offset = "0x56047B0", VA = "0x56057B0", Slot = "40")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x5605950", Offset = "0x5604950", VA = "0x5605950", Slot = "29")]
	private int System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIndexOf(JToken item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x5605970", Offset = "0x5604970", VA = "0x5605970", Slot = "30")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EInsert(int index, JToken item)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x5605990", Offset = "0x5604990", VA = "0x5605990", Slot = "31")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x56059F0", Offset = "0x56049F0", VA = "0x56059F0", Slot = "34")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EAdd(JToken item)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x5605A10", Offset = "0x5604A10", VA = "0x5605A10", Slot = "35")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EClear()
	{
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x5605A30", Offset = "0x5604A30", VA = "0x5605A30", Slot = "36")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EContains(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x5605A50", Offset = "0x5604A50", VA = "0x5605A50", Slot = "37")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECopyTo(JToken[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x5605A80", Offset = "0x5604A80", VA = "0x5605A80", Slot = "38")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemove(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x5605AA0", Offset = "0x5604AA0", VA = "0x5605AA0")]
	private JToken? EnsureValue(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x5605B40", Offset = "0x5604B40", VA = "0x5605B40", Slot = "60")]
	private int System_002ECollections_002EIList_002EAdd(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x5605C10", Offset = "0x5604C10", VA = "0x5605C10", Slot = "62")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x5605C30", Offset = "0x5604C30", VA = "0x5605C30", Slot = "61")]
	private bool System_002ECollections_002EIList_002EContains(object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x5605C60", Offset = "0x5604C60", VA = "0x5605C60", Slot = "65")]
	private int System_002ECollections_002EIList_002EIndexOf(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x5605C90", Offset = "0x5604C90", VA = "0x5605C90", Slot = "66")]
	private void System_002ECollections_002EIList_002EInsert(int index, object? value)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x5605CF0", Offset = "0x5604CF0", VA = "0x5605CF0", Slot = "67")]
	private void System_002ECollections_002EIList_002ERemove(object? value)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x5605D20", Offset = "0x5604D20", VA = "0x5605D20", Slot = "68")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x5605DA0", Offset = "0x5604DA0", VA = "0x5605DA0", Slot = "69")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x5605E50", Offset = "0x5604E50", VA = "0x5605E50", Slot = "53")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x5605E60", Offset = "0x5604E60", VA = "0x5605E60", Slot = "42")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x5606040", Offset = "0x5605040", VA = "0x5606040", Slot = "54")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x5606080", Offset = "0x5605080", VA = "0x5606080", Slot = "55")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x56060D0", Offset = "0x56050D0", VA = "0x56060D0", Slot = "56")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x56060E0", Offset = "0x56050E0", VA = "0x56060E0", Slot = "57")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x55FE220", Offset = "0x55FD220", VA = "0x55FE220")]
	internal static void MergeEnumerableContent(JContainer target, IEnumerable content, JsonMergeSettings? settings)
	{
	}
}
