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
			[Address(RVA = "0x3B1C270", Offset = "0x3B1C270", VA = "0x3B1C270", Slot = "6")]
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
			[Address(RVA = "0x3B1C2C0", Offset = "0x3B1C2C0", VA = "0x3B1C2C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x3B17CE0", Offset = "0x3B17CE0", VA = "0x3B17CE0")]
		[DebuggerHidden]
		public _003CGetDescendants_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x3B1B7C0", Offset = "0x3B1B7C0", VA = "0x3B1B7C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x3B1BA10", Offset = "0x3B1BA10", VA = "0x3B1BA10", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x3B1C1D0", Offset = "0x3B1C1D0", VA = "0x3B1C1D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x3B1C130", Offset = "0x3B1C130", VA = "0x3B1C130")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x3B1C280", Offset = "0x3B1C280", VA = "0x3B1C280", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x3B1C2D0", Offset = "0x3B1C2D0", VA = "0x3B1C2D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x3B1C380", Offset = "0x3B1C380", VA = "0x3B1C380", Slot = "5")]
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
		[Address(RVA = "0x3B1C390", Offset = "0x3B1C390", VA = "0x3B1C390", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x3B1D180", Offset = "0x3B1D180", VA = "0x3B1D180", Slot = "5")]
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
		[Address(RVA = "0x3B1D1E0", Offset = "0x3B1D1E0", VA = "0x3B1D1E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x3B1D8C0", Offset = "0x3B1D8C0", VA = "0x3B1D8C0", Slot = "5")]
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
		[Address(RVA = "0x3B177B0", Offset = "0x3B177B0", VA = "0x3B177B0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	public override JToken? First
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x3B17870", Offset = "0x3B17870", VA = "0x3B17870", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public override JToken? Last
	{
		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x3B179B0", Offset = "0x3B179B0", VA = "0x3B179B0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	private JToken System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EItem
	{
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x3B1AEF0", Offset = "0x3B1AEF0", VA = "0x3B1AEF0", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x3B1AF10", Offset = "0x3B1AF10", VA = "0x3B1AF10", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170001DE")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x3B1AFB0", Offset = "0x3B1AFB0", VA = "0x3B1AFB0", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x3B1B220", Offset = "0x3B1B220", VA = "0x3B1B220", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x3B1B230", Offset = "0x3B1B230", VA = "0x3B1B230", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E1")]
	private object? System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x3B1B290", Offset = "0x3B1B290", VA = "0x3B1B290", Slot = "58")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x3B1B2B0", Offset = "0x3B1B2B0", VA = "0x3B1B2B0", Slot = "59")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	public int Count
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x3B19A70", Offset = "0x3B19A70", VA = "0x3B19A70", Slot = "70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x3B1B310", Offset = "0x3B1B310", VA = "0x3B1B310", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x3B1B320", Offset = "0x3B1B320", VA = "0x3B1B320", Slot = "71")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x3B1B560", Offset = "0x3B1B560", VA = "0x3B1B560", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E6")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x3B1B570", Offset = "0x3B1B570", VA = "0x3B1B570", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E7")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x3B1B580", Offset = "0x3B1B580", VA = "0x3B1B580", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x3B1B610", Offset = "0x3B1B610", VA = "0x3B1B610", Slot = "48")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x3B1B670", Offset = "0x3B1B670", VA = "0x3B1B670", Slot = "50")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001EA")]
	private PropertyDescriptor? System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x3B1B680", Offset = "0x3B1B680", VA = "0x3B1B680", Slot = "49")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EB")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x3B1B690", Offset = "0x3B1B690", VA = "0x3B1B690", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x3B1B6A0", Offset = "0x3B1B6A0", VA = "0x3B1B6A0", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x3B1B6B0", Offset = "0x3B1B6B0", VA = "0x3B1B6B0", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x3B16D20", Offset = "0x3B16D20", VA = "0x3B16D20", Slot = "51")]
		add
		{
		}
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x3B16DA0", Offset = "0x3B16DA0", VA = "0x3B16DA0", Slot = "52")]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x3B16E20", Offset = "0x3B16E20", VA = "0x3B16E20")]
		add
		{
		}
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x3B16EA0", Offset = "0x3B16EA0", VA = "0x3B16EA0")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event NotifyCollectionChangedEventHandler? CollectionChanged
	{
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x3B16F20", Offset = "0x3B16F20", VA = "0x3B16F20", Slot = "73")]
		add
		{
		}
		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x3B16FA0", Offset = "0x3B16FA0", VA = "0x3B16FA0", Slot = "74")]
		remove
		{
		}
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x3B16410", Offset = "0x3B16410", VA = "0x3B16410")]
	[AsyncStateMachine(typeof(_003CReadTokenFromAsync_003Ed__0))]
	internal Task ReadTokenFromAsync(JsonReader reader, JsonLoadSettings? options, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x3B16BD0", Offset = "0x3B16BD0", VA = "0x3B16BD0")]
	[AsyncStateMachine(typeof(_003CReadContentFromAsync_003Ed__1))]
	private Task ReadContentFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x3B14430", Offset = "0x3B14430", VA = "0x3B14430")]
	internal JContainer()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x3B14540", Offset = "0x3B14540", VA = "0x3B14540")]
	internal JContainer(JContainer other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x3B17570", Offset = "0x3B17570", VA = "0x3B17570")]
	internal void CheckReentrancy()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x3B17610", Offset = "0x3B17610", VA = "0x3B17610", Slot = "76")]
	internal virtual IList<JToken> CreateChildrenCollection()
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x3B17670", Offset = "0x3B17670", VA = "0x3B17670", Slot = "77")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x3B17690", Offset = "0x3B17690", VA = "0x3B17690", Slot = "78")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x3B17720", Offset = "0x3B17720", VA = "0x3B17720", Slot = "79")]
	protected virtual void OnCollectionChanged(NotifyCollectionChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x3B14C50", Offset = "0x3B14C50", VA = "0x3B14C50")]
	internal bool ContentsEqual(JContainer container)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x3B17AF0", Offset = "0x3B17AF0", VA = "0x3B17AF0", Slot = "22")]
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
	[Address(RVA = "0x3B17B60", Offset = "0x3B17B60", VA = "0x3B17B60")]
	public IEnumerable<JToken> Descendants()
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x3B17C60", Offset = "0x3B17C60", VA = "0x3B17C60")]
	public IEnumerable<JToken> DescendantsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x3B17BE0", Offset = "0x3B17BE0", VA = "0x3B17BE0")]
	[IteratorStateMachine(typeof(_003CGetDescendants_003Ed__36))]
	internal IEnumerable<JToken> GetDescendants(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x3B17D10", Offset = "0x3B17D10", VA = "0x3B17D10")]
	internal bool IsMultiContent([NotNullWhen(true)] object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x3B17DC0", Offset = "0x3B17DC0", VA = "0x3B17DC0")]
	internal JToken EnsureParentToken(JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	internal abstract int IndexOfItem(JToken? item);

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x3B17EE0", Offset = "0x3B17EE0", VA = "0x3B17EE0", Slot = "81")]
	internal virtual bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x3B18320", Offset = "0x3B18320", VA = "0x3B18320", Slot = "82")]
	internal virtual void RemoveItemAt(int index)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x3B18800", Offset = "0x3B18800", VA = "0x3B18800", Slot = "83")]
	internal virtual bool RemoveItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x3B18840", Offset = "0x3B18840", VA = "0x3B18840", Slot = "84")]
	internal virtual JToken GetItem(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x3B18900", Offset = "0x3B18900", VA = "0x3B18900", Slot = "85")]
	internal virtual void SetItem(int index, JToken? item)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x3B19020", Offset = "0x3B19020", VA = "0x3B19020", Slot = "86")]
	internal virtual void ClearItems()
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x3B194E0", Offset = "0x3B194E0", VA = "0x3B194E0", Slot = "87")]
	internal virtual void ReplaceItem(JToken existing, JToken replacement)
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x3B19540", Offset = "0x3B19540", VA = "0x3B19540", Slot = "88")]
	internal virtual bool ContainsItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x3B19560", Offset = "0x3B19560", VA = "0x3B19560", Slot = "89")]
	internal virtual void CopyItemsTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x3B18F60", Offset = "0x3B18F60", VA = "0x3B18F60")]
	internal static bool IsTokenUnchanged(JToken currentValue, JToken? newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x3B19B20", Offset = "0x3B19B20", VA = "0x3B19B20", Slot = "90")]
	internal virtual void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x3B19C30", Offset = "0x3B19C30", VA = "0x3B19C30", Slot = "91")]
	public virtual void Add(object? content)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x3B19D00", Offset = "0x3B19D00", VA = "0x3B19D00")]
	internal bool TryAdd(object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x3B19DD0", Offset = "0x3B19DD0", VA = "0x3B19DD0")]
	internal void AddAndSkipParentCheck(JToken token)
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x3B19EA0", Offset = "0x3B19EA0", VA = "0x3B19EA0")]
	public void AddFirst(object? content)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x3B170E0", Offset = "0x3B170E0", VA = "0x3B170E0")]
	internal bool TryAddInternal(int index, object? content, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x3B19EC0", Offset = "0x3B19EC0", VA = "0x3B19EC0")]
	internal static JToken CreateFromContent(object? content)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x3B19F50", Offset = "0x3B19F50", VA = "0x3B19F50")]
	public JsonWriter CreateWriter()
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x3B19FA0", Offset = "0x3B19FA0", VA = "0x3B19FA0")]
	public void ReplaceAll(object content)
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x3B19FE0", Offset = "0x3B19FE0", VA = "0x3B19FE0")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x6000B8D")]
	internal abstract void MergeItem(object content, JsonMergeSettings? settings);

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x3B1A000", Offset = "0x3B1A000", VA = "0x3B1A000")]
	public void Merge(object? content)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x3B1A180", Offset = "0x3B1A180", VA = "0x3B1A180")]
	public void Merge(object? content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x3B1A040", Offset = "0x3B1A040", VA = "0x3B1A040")]
	private void ValidateContent(object content)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x3B15A10", Offset = "0x3B15A10", VA = "0x3B15A10")]
	internal void ReadTokenFrom(JsonReader reader, JsonLoadSettings? options)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x3B1A1C0", Offset = "0x3B1A1C0", VA = "0x3B1A1C0")]
	internal void ReadContentFrom(JsonReader r, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x3B1A760", Offset = "0x3B1A760", VA = "0x3B1A760")]
	private static JProperty? ReadProperty(JsonReader r, JsonLoadSettings? settings, IJsonLineInfo? lineInfo, JContainer parent)
	{
		return null;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x3B152D0", Offset = "0x3B152D0", VA = "0x3B152D0")]
	internal int ContentsHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x3B1ACD0", Offset = "0x3B1ACD0", VA = "0x3B1ACD0", Slot = "39")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x3B1ACF0", Offset = "0x3B1ACF0", VA = "0x3B1ACF0", Slot = "40")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x3B1AE90", Offset = "0x3B1AE90", VA = "0x3B1AE90", Slot = "29")]
	private int System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIndexOf(JToken item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x3B1AEB0", Offset = "0x3B1AEB0", VA = "0x3B1AEB0", Slot = "30")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EInsert(int index, JToken item)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x3B1AED0", Offset = "0x3B1AED0", VA = "0x3B1AED0", Slot = "31")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x3B1AF30", Offset = "0x3B1AF30", VA = "0x3B1AF30", Slot = "34")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EAdd(JToken item)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x3B1AF50", Offset = "0x3B1AF50", VA = "0x3B1AF50", Slot = "35")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EClear()
	{
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x3B1AF70", Offset = "0x3B1AF70", VA = "0x3B1AF70", Slot = "36")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EContains(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x3B1AF90", Offset = "0x3B1AF90", VA = "0x3B1AF90", Slot = "37")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECopyTo(JToken[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x3B1AFC0", Offset = "0x3B1AFC0", VA = "0x3B1AFC0", Slot = "38")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemove(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x3B1AFE0", Offset = "0x3B1AFE0", VA = "0x3B1AFE0")]
	private JToken? EnsureValue(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x3B1B090", Offset = "0x3B1B090", VA = "0x3B1B090", Slot = "60")]
	private int System_002ECollections_002EIList_002EAdd(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x3B1B160", Offset = "0x3B1B160", VA = "0x3B1B160", Slot = "62")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x3B1B180", Offset = "0x3B1B180", VA = "0x3B1B180", Slot = "61")]
	private bool System_002ECollections_002EIList_002EContains(object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x3B1B1B0", Offset = "0x3B1B1B0", VA = "0x3B1B1B0", Slot = "65")]
	private int System_002ECollections_002EIList_002EIndexOf(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x3B1B1E0", Offset = "0x3B1B1E0", VA = "0x3B1B1E0", Slot = "66")]
	private void System_002ECollections_002EIList_002EInsert(int index, object? value)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x3B1B240", Offset = "0x3B1B240", VA = "0x3B1B240", Slot = "67")]
	private void System_002ECollections_002EIList_002ERemove(object? value)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x3B1B270", Offset = "0x3B1B270", VA = "0x3B1B270", Slot = "68")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x3B1B2F0", Offset = "0x3B1B2F0", VA = "0x3B1B2F0", Slot = "69")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x3B1B3A0", Offset = "0x3B1B3A0", VA = "0x3B1B3A0", Slot = "53")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x3B1B3B0", Offset = "0x3B1B3B0", VA = "0x3B1B3B0", Slot = "42")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x3B1B590", Offset = "0x3B1B590", VA = "0x3B1B590", Slot = "54")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x3B1B5D0", Offset = "0x3B1B5D0", VA = "0x3B1B5D0", Slot = "55")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x3B1B620", Offset = "0x3B1B620", VA = "0x3B1B620", Slot = "56")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x3B1B630", Offset = "0x3B1B630", VA = "0x3B1B630", Slot = "57")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x3B12D70", Offset = "0x3B12D70", VA = "0x3B12D70")]
	internal static void MergeEnumerableContent(JContainer target, IEnumerable content, JsonMergeSettings? settings)
	{
	}
}
