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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetDescendants_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x1C898E0", Offset = "0x1C87EE0", VA = "0x181C898E0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x1C893E0", Offset = "0x1C879E0", VA = "0x181C893E0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BC5")]
		[Address(RVA = "0x1C89A30", Offset = "0x1C88030", VA = "0x181C89A30")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x1C89A80", Offset = "0x1C88080", VA = "0x181C89A80")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x1C898A0", Offset = "0x1C87EA0", VA = "0x181C898A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x1C897F0", Offset = "0x1C87DF0", VA = "0x181C897F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x1C897F0", Offset = "0x1C87DF0", VA = "0x181C897F0", Slot = "5")]
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
		[Address(RVA = "0x1C8B2C0", Offset = "0x1C898C0", VA = "0x181C8B2C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x1C8BBF0", Offset = "0x1C8A1F0", VA = "0x181C8BBF0", Slot = "5")]
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
		[Address(RVA = "0x1C8C6B0", Offset = "0x1C8ACB0", VA = "0x181C8C6B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x1C8CC40", Offset = "0x1C8B240", VA = "0x181C8CC40", Slot = "5")]
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
		[Address(RVA = "0x1C75910", Offset = "0x1C73F10", VA = "0x181C75910", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	public override JToken? First
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x1C75880", Offset = "0x1C73E80", VA = "0x181C75880", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public override JToken? Last
	{
		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x1C75970", Offset = "0x1C73F70", VA = "0x181C75970", Slot = "21")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170001DD")]
	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x1C568A0", Offset = "0x1C54EA0", VA = "0x181C568A0", Slot = "27")]
	private JToken System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x1C568C0", Offset = "0x1C54EC0", VA = "0x181C568C0", Slot = "28")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002Eset_Item(int index, JToken value)
	{
	}

	[Token(Token = "0x170001DE")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170001E1")]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x1C568A0", Offset = "0x1C54EA0", VA = "0x181C568A0", Slot = "58")]
	private object? System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x1C74840", Offset = "0x1C72E40", VA = "0x181C74840", Slot = "59")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object? value)
	{
	}

	[Token(Token = "0x170001E2")]
	public int Count
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x1C75820", Offset = "0x1C73E20", VA = "0x181C75820", Slot = "70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x1C74670", Offset = "0x1C72C70", VA = "0x181C74670", Slot = "71")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E6")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E7")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "48")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "50")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001EA")]
	private PropertyDescriptor? System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "49")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EB")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x1C75780", Offset = "0x1C73D80", VA = "0x181C75780", Slot = "51")]
		add
		{
		}
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x1C75B40", Offset = "0x1C74140", VA = "0x181C75B40", Slot = "52")]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x1C75640", Offset = "0x1C73C40", VA = "0x181C75640")]
		add
		{
		}
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x1C75A00", Offset = "0x1C74000", VA = "0x181C75A00")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event NotifyCollectionChangedEventHandler? CollectionChanged
	{
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x1C756E0", Offset = "0x1C73CE0", VA = "0x181C756E0", Slot = "73")]
		add
		{
		}
		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x1C75AA0", Offset = "0x1C740A0", VA = "0x181C75AA0", Slot = "74")]
		remove
		{
		}
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x1C73AE0", Offset = "0x1C720E0", VA = "0x181C73AE0")]
	[AsyncStateMachine(typeof(_003CReadTokenFromAsync_003Ed__0))]
	internal Task ReadTokenFromAsync(JsonReader reader, JsonLoadSettings? options, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x1C731B0", Offset = "0x1C717B0", VA = "0x181C731B0")]
	[AsyncStateMachine(typeof(_003CReadContentFromAsync_003Ed__1))]
	private Task ReadContentFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x1C75310", Offset = "0x1C73910", VA = "0x181C75310")]
	internal JContainer()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x1C75360", Offset = "0x1C73960", VA = "0x181C75360")]
	internal JContainer(JContainer other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x1C71420", Offset = "0x1C6FA20", VA = "0x181C71420")]
	internal void CheckReentrancy()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x1C71E30", Offset = "0x1C70430", VA = "0x181C71E30", Slot = "76")]
	internal virtual IList<JToken> CreateChildrenCollection()
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x12B3020", Offset = "0x12B1620", VA = "0x1812B3020", Slot = "77")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x1C73140", Offset = "0x1C71740", VA = "0x181C73140", Slot = "78")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x1C730D0", Offset = "0x1C716D0", VA = "0x181C730D0", Slot = "79")]
	protected virtual void OnCollectionChanged(NotifyCollectionChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x1C71820", Offset = "0x1C6FE20", VA = "0x181C71820")]
	internal bool ContentsEqual(JContainer container)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x1C714D0", Offset = "0x1C6FAD0", VA = "0x181C714D0", Slot = "22")]
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
	[Address(RVA = "0x1C71FA0", Offset = "0x1C705A0", VA = "0x181C71FA0")]
	public IEnumerable<JToken> Descendants()
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x1C71F90", Offset = "0x1C70590", VA = "0x181C71F90")]
	public IEnumerable<JToken> DescendantsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x1C72150", Offset = "0x1C70750", VA = "0x181C72150")]
	[IteratorStateMachine(typeof(_003CGetDescendants_003Ed__36))]
	internal IEnumerable<JToken> GetDescendants(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x1C72510", Offset = "0x1C70B10", VA = "0x181C72510")]
	internal bool IsMultiContent([NotNullWhen(true)] object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x1C71FB0", Offset = "0x1C705B0", VA = "0x181C71FB0")]
	internal JToken EnsureParentToken(JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	internal abstract int IndexOfItem(JToken? item);

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x1C72250", Offset = "0x1C70850", VA = "0x181C72250", Slot = "81")]
	internal virtual bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x1C73DC0", Offset = "0x1C723C0", VA = "0x181C73DC0", Slot = "82")]
	internal virtual void RemoveItemAt(int index)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x1C74120", Offset = "0x1C72720", VA = "0x181C74120", Slot = "83")]
	internal virtual bool RemoveItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x1C721E0", Offset = "0x1C707E0", VA = "0x181C721E0", Slot = "84")]
	internal virtual JToken GetItem(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x1C74210", Offset = "0x1C72810", VA = "0x181C74210", Slot = "85")]
	internal virtual void SetItem(int index, JToken? item)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x1C71530", Offset = "0x1C6FB30", VA = "0x181C71530", Slot = "86")]
	internal virtual void ClearItems()
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x1C741C0", Offset = "0x1C727C0", VA = "0x181C741C0", Slot = "87")]
	internal virtual void ReplaceItem(JToken existing, JToken replacement)
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x1C71800", Offset = "0x1C6FE00", VA = "0x181C71800", Slot = "88")]
	internal virtual bool ContainsItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x1C71B50", Offset = "0x1C70150", VA = "0x181C71B50", Slot = "89")]
	internal virtual void CopyItemsTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x1C725D0", Offset = "0x1C70BD0", VA = "0x181C725D0")]
	internal static bool IsTokenUnchanged(JToken currentValue, JToken? newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x1C751E0", Offset = "0x1C737E0", VA = "0x181C751E0", Slot = "90")]
	internal virtual void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x1C71390", Offset = "0x1C6F990", VA = "0x181C71390", Slot = "91")]
	public virtual void Add(object? content)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x1C74FE0", Offset = "0x1C735E0", VA = "0x181C74FE0")]
	internal bool TryAdd(object? content)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x1C712D0", Offset = "0x1C6F8D0", VA = "0x181C712D0")]
	internal void AddAndSkipParentCheck(JToken token)
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x1C71360", Offset = "0x1C6F960", VA = "0x181C71360")]
	public void AddFirst(object? content)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x1C74CD0", Offset = "0x1C732D0", VA = "0x181C74CD0")]
	internal bool TryAddInternal(int index, object? content, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x1C71E90", Offset = "0x1C70490", VA = "0x181C71E90")]
	internal static JToken CreateFromContent(object? content)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x1C71F30", Offset = "0x1C70530", VA = "0x181C71F30")]
	public JsonWriter CreateWriter()
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x1C74170", Offset = "0x1C72770", VA = "0x181C74170")]
	public void ReplaceAll(object content)
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x1C55640", Offset = "0x1C53C40", VA = "0x181C55640")]
	public void RemoveAll()
	{
	}

	[Token(Token = "0x6000B8D")]
	internal abstract void MergeItem(object content, JsonMergeSettings? settings);

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x1C73080", Offset = "0x1C71680", VA = "0x181C73080")]
	public void Merge(object? content)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x1C73030", Offset = "0x1C71630", VA = "0x181C73030")]
	public void Merge(object? content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x1C75070", Offset = "0x1C73670", VA = "0x181C75070")]
	private void ValidateContent(object content)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x1C73C10", Offset = "0x1C72210", VA = "0x181C73C10")]
	internal void ReadTokenFrom(JsonReader reader, JsonLoadSettings? options)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x1C732E0", Offset = "0x1C718E0", VA = "0x181C732E0")]
	internal void ReadContentFrom(JsonReader r, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x1C73870", Offset = "0x1C71E70", VA = "0x181C73870")]
	private static JProperty? ReadProperty(JsonReader r, JsonLoadSettings? settings, IJsonLineInfo? lineInfo, JContainer parent)
	{
		return null;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x1C71970", Offset = "0x1C6FF70", VA = "0x181C71970")]
	internal int ContentsHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "39")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x1C74B50", Offset = "0x1C73150", VA = "0x181C74B50", Slot = "40")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x1C55BD0", Offset = "0x1C541D0", VA = "0x181C55BD0", Slot = "29")]
	private int System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EIndexOf(JToken item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x1C55BF0", Offset = "0x1C541F0", VA = "0x181C55BF0", Slot = "30")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EInsert(int index, JToken item)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x1C562E0", Offset = "0x1C548E0", VA = "0x181C562E0", Slot = "31")]
	private void System_002ECollections_002EGeneric_002EIList_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x1C55620", Offset = "0x1C53C20", VA = "0x181C55620", Slot = "34")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EAdd(JToken item)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x1C55640", Offset = "0x1C53C40", VA = "0x181C55640", Slot = "35")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EClear()
	{
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x1C55710", Offset = "0x1C53D10", VA = "0x181C55710", Slot = "36")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EContains(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x1C55730", Offset = "0x1C53D30", VA = "0x181C55730", Slot = "37")]
	private void System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECopyTo(JToken[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x1C56300", Offset = "0x1C54900", VA = "0x181C56300", Slot = "38")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ERemove(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x1C720A0", Offset = "0x1C706A0", VA = "0x181C720A0")]
	private JToken? EnsureValue(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x1C746E0", Offset = "0x1C72CE0", VA = "0x181C746E0", Slot = "60")]
	private int System_002ECollections_002EIList_002EAdd(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x1C55640", Offset = "0x1C53C40", VA = "0x181C55640", Slot = "62")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x1C74760", Offset = "0x1C72D60", VA = "0x181C74760", Slot = "61")]
	private bool System_002ECollections_002EIList_002EContains(object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x1C74790", Offset = "0x1C72D90", VA = "0x181C74790", Slot = "65")]
	private int System_002ECollections_002EIList_002EIndexOf(object? value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x1C747C0", Offset = "0x1C72DC0", VA = "0x181C747C0", Slot = "66")]
	private void System_002ECollections_002EIList_002EInsert(int index, object? value)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x1C74810", Offset = "0x1C72E10", VA = "0x181C74810", Slot = "67")]
	private void System_002ECollections_002EIList_002ERemove(object? value)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x1C562E0", Offset = "0x1C548E0", VA = "0x181C562E0", Slot = "68")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x1C55730", Offset = "0x1C53D30", VA = "0x181C55730", Slot = "69")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "53")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x1C74880", Offset = "0x1C72E80", VA = "0x181C74880", Slot = "42")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x1C74A90", Offset = "0x1C73090", VA = "0x181C74A90", Slot = "54")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x1C74AD0", Offset = "0x1C730D0", VA = "0x181C74AD0", Slot = "55")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "56")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x1C74B10", Offset = "0x1C73110", VA = "0x181C74B10", Slot = "57")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x1C72680", Offset = "0x1C70C80", VA = "0x181C72680")]
	internal static void MergeEnumerableContent(JContainer target, IEnumerable content, JsonMergeSettings? settings)
	{
	}
}
