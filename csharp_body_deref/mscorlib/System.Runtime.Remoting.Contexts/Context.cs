// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Contexts.Context
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Activation;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200036F")]
[ComVisible(true)]
public class Context
{
	[Token(Token = "0x4000E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int domain_id;

	[Token(Token = "0x4000E5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int context_id;

	[Token(Token = "0x4000E60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private UIntPtr static_data;

	[Token(Token = "0x4000E61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIntPtr data;

	[Token(Token = "0x4000E62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[ContextStatic]
	private static object[] local_slots;

	[Token(Token = "0x4000E63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static IMessageSink default_server_context_sink;

	[Token(Token = "0x4000E64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IMessageSink server_context_sink_chain;

	[Token(Token = "0x4000E65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IMessageSink client_context_sink_chain;

	[Token(Token = "0x4000E66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<IContextProperty> context_properties;

	[Token(Token = "0x4000E67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static int global_count;

	[Token(Token = "0x4000E68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private System.LocalDataStoreHolder _localDataStore;

	[Token(Token = "0x4000E69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static System.LocalDataStoreMgr _localDataStoreMgr;

	[Token(Token = "0x4000E6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties;

	[Token(Token = "0x4000E6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection context_dynamic_properties;

	[Token(Token = "0x4000E6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Runtime.Remoting.Contexts.ContextCallbackObject callback_object;

	[Token(Token = "0x17000363")]
	public static Context DefaultContext
	{
		[Token(Token = "0x6001D83")]
		[Address(RVA = "0x53817D0", Offset = "0x53807D0", VA = "0x53817D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000364")]
	public virtual int ContextID
	{
		[Token(Token = "0x6001D84")]
		[Address(RVA = "0x53817E0", Offset = "0x53807E0", VA = "0x53817E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000365")]
	public virtual IContextProperty[] ContextProperties
	{
		[Token(Token = "0x6001D85")]
		[Address(RVA = "0x53817F0", Offset = "0x53807F0", VA = "0x53817F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000366")]
	internal bool IsDefaultContext
	{
		[Token(Token = "0x6001D86")]
		[Address(RVA = "0x5381850", Offset = "0x5380850", VA = "0x5381850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000367")]
	internal bool NeedsContextSink
	{
		[Token(Token = "0x6001D87")]
		[Address(RVA = "0x5381860", Offset = "0x5380860", VA = "0x5381860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000368")]
	internal static bool HasGlobalDynamicSinks
	{
		[Token(Token = "0x6001D8C")]
		[Address(RVA = "0x5382A00", Offset = "0x5381A00", VA = "0x5382A00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000369")]
	internal bool HasDynamicSinks
	{
		[Token(Token = "0x6001D8E")]
		[Address(RVA = "0x5382B30", Offset = "0x5381B30", VA = "0x5382B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036A")]
	internal bool HasExitSinks
	{
		[Token(Token = "0x6001D8F")]
		[Address(RVA = "0x537E820", Offset = "0x537D820", VA = "0x537E820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036B")]
	private System.LocalDataStore MyLocalStore
	{
		[Token(Token = "0x6001D9B")]
		[Address(RVA = "0x5384360", Offset = "0x5383360", VA = "0x5384360")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x5381660", Offset = "0x5380660", VA = "0x5381660")]
	private static extern void RegisterContext(Context ctx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x5381670", Offset = "0x5380670", VA = "0x5381670")]
	private static extern void ReleaseContext(Context ctx);

	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x5381680", Offset = "0x5380680", VA = "0x5381680")]
	public Context()
	{
	}

	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x5381700", Offset = "0x5380700", VA = "0x5381700", Slot = "1")]
	~Context()
	{
	}

	[Token(Token = "0x6001D88")]
	[Address(RVA = "0x5381980", Offset = "0x5380980", VA = "0x5381980")]
	public static bool RegisterDynamicProperty(IDynamicProperty prop, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x5382000", Offset = "0x5381000", VA = "0x5382000")]
	public static bool UnregisterDynamicProperty(string name, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x53819F0", Offset = "0x53809F0", VA = "0x53819F0")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(ContextBoundObject obj, Context ctx)
	{
		return null;
	}

	[Token(Token = "0x6001D8B")]
	[Address(RVA = "0x5382230", Offset = "0x5381230", VA = "0x5382230")]
	internal static void NotifyGlobalDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x5382AC0", Offset = "0x5381AC0", VA = "0x5382AC0")]
	internal void NotifyDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x5382B70", Offset = "0x5381B70", VA = "0x5382B70", Slot = "6")]
	public virtual IContextProperty GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x5382D70", Offset = "0x5381D70", VA = "0x5382D70", Slot = "7")]
	public virtual void SetProperty(IContextProperty prop)
	{
	}

	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x5382F10", Offset = "0x5381F10", VA = "0x5382F10", Slot = "8")]
	public virtual void Freeze()
	{
	}

	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x53830E0", Offset = "0x53820E0", VA = "0x53830E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x5383130", Offset = "0x5382130", VA = "0x5383130")]
	internal IMessageSink GetServerContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x537E8D0", Offset = "0x537D8D0", VA = "0x537E8D0")]
	internal IMessageSink GetClientContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x53833A0", Offset = "0x53823A0", VA = "0x53833A0")]
	internal IMessageSink CreateServerObjectSinkChain(MarshalByRefObject obj, bool forceInternalExecute)
	{
		return null;
	}

	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x5383660", Offset = "0x5382660", VA = "0x5383660")]
	internal IMessageSink CreateEnvoySink(MarshalByRefObject serverObject)
	{
		return null;
	}

	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x5383870", Offset = "0x5382870", VA = "0x5383870")]
	internal static Context SwitchToContext(Context newContext)
	{
		return null;
	}

	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x5383880", Offset = "0x5382880", VA = "0x5383880")]
	internal static Context CreateNewContext(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x53841E0", Offset = "0x53831E0", VA = "0x53841E0")]
	public void DoCallBack(CrossContextDelegate deleg)
	{
	}

	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x53844F0", Offset = "0x53834F0", VA = "0x53844F0")]
	public static LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x5384570", Offset = "0x5383570", VA = "0x5384570")]
	public static LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x5384600", Offset = "0x5383600", VA = "0x5384600")]
	public static void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x5384690", Offset = "0x5383690", VA = "0x5384690")]
	public static LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x5384720", Offset = "0x5383720", VA = "0x5384720")]
	public static object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x5384750", Offset = "0x5383750", VA = "0x5384750")]
	public static void SetData(LocalDataStoreSlot slot, object data)
	{
	}
}
