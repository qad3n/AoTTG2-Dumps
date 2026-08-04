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
[Token(Token = "0x2000367")]
[ComVisible(true)]
public class Context
{
	[Token(Token = "0x4000EF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int domain_id;

	[Token(Token = "0x4000EF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int context_id;

	[Token(Token = "0x4000EF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private UIntPtr static_data;

	[Token(Token = "0x4000EF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIntPtr data;

	[Token(Token = "0x4000EF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[ContextStatic]
	private static object[] local_slots;

	[Token(Token = "0x4000EF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static IMessageSink default_server_context_sink;

	[Token(Token = "0x4000EF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IMessageSink server_context_sink_chain;

	[Token(Token = "0x4000EF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IMessageSink client_context_sink_chain;

	[Token(Token = "0x4000EF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<IContextProperty> context_properties;

	[Token(Token = "0x4000EFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static int global_count;

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private System.LocalDataStoreHolder _localDataStore;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static System.LocalDataStoreMgr _localDataStoreMgr;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties;

	[Token(Token = "0x4000EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection context_dynamic_properties;

	[Token(Token = "0x4000EFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Runtime.Remoting.Contexts.ContextCallbackObject callback_object;

	[Token(Token = "0x17000362")]
	public static Context DefaultContext
	{
		[Token(Token = "0x6001D3E")]
		[Address(RVA = "0x3B79110", Offset = "0x3B79110", VA = "0x3B79110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000363")]
	public virtual int ContextID
	{
		[Token(Token = "0x6001D3F")]
		[Address(RVA = "0x3B79120", Offset = "0x3B79120", VA = "0x3B79120", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000364")]
	public virtual IContextProperty[] ContextProperties
	{
		[Token(Token = "0x6001D40")]
		[Address(RVA = "0x3B79130", Offset = "0x3B79130", VA = "0x3B79130", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000365")]
	internal bool IsDefaultContext
	{
		[Token(Token = "0x6001D41")]
		[Address(RVA = "0x3B79190", Offset = "0x3B79190", VA = "0x3B79190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000366")]
	internal bool NeedsContextSink
	{
		[Token(Token = "0x6001D42")]
		[Address(RVA = "0x3B791A0", Offset = "0x3B791A0", VA = "0x3B791A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000367")]
	internal static bool HasGlobalDynamicSinks
	{
		[Token(Token = "0x6001D47")]
		[Address(RVA = "0x3B7A4E0", Offset = "0x3B7A4E0", VA = "0x3B7A4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000368")]
	internal bool HasDynamicSinks
	{
		[Token(Token = "0x6001D49")]
		[Address(RVA = "0x3B7A610", Offset = "0x3B7A610", VA = "0x3B7A610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000369")]
	internal bool HasExitSinks
	{
		[Token(Token = "0x6001D4A")]
		[Address(RVA = "0x3B75FF0", Offset = "0x3B75FF0", VA = "0x3B75FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036A")]
	private System.LocalDataStore MyLocalStore
	{
		[Token(Token = "0x6001D56")]
		[Address(RVA = "0x3B7BFF0", Offset = "0x3B7BFF0", VA = "0x3B7BFF0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D3A")]
	[Address(RVA = "0x3B78FB0", Offset = "0x3B78FB0", VA = "0x3B78FB0")]
	private static extern void RegisterContext(Context ctx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D3B")]
	[Address(RVA = "0x3B78FC0", Offset = "0x3B78FC0", VA = "0x3B78FC0")]
	private static extern void ReleaseContext(Context ctx);

	[Token(Token = "0x6001D3C")]
	[Address(RVA = "0x3B78FD0", Offset = "0x3B78FD0", VA = "0x3B78FD0")]
	public Context()
	{
	}

	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x3B79050", Offset = "0x3B79050", VA = "0x3B79050", Slot = "1")]
	~Context()
	{
	}

	[Token(Token = "0x6001D43")]
	[Address(RVA = "0x3B792C0", Offset = "0x3B792C0", VA = "0x3B792C0")]
	public static bool RegisterDynamicProperty(IDynamicProperty prop, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x3B79990", Offset = "0x3B79990", VA = "0x3B79990")]
	public static bool UnregisterDynamicProperty(string name, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D45")]
	[Address(RVA = "0x3B79330", Offset = "0x3B79330", VA = "0x3B79330")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(ContextBoundObject obj, Context ctx)
	{
		return null;
	}

	[Token(Token = "0x6001D46")]
	[Address(RVA = "0x3B79BE0", Offset = "0x3B79BE0", VA = "0x3B79BE0")]
	internal static void NotifyGlobalDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D48")]
	[Address(RVA = "0x3B7A5A0", Offset = "0x3B7A5A0", VA = "0x3B7A5A0")]
	internal void NotifyDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x3B7A650", Offset = "0x3B7A650", VA = "0x3B7A650", Slot = "6")]
	public virtual IContextProperty GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x3B7A890", Offset = "0x3B7A890", VA = "0x3B7A890", Slot = "7")]
	public virtual void SetProperty(IContextProperty prop)
	{
	}

	[Token(Token = "0x6001D4D")]
	[Address(RVA = "0x3B7AA30", Offset = "0x3B7AA30", VA = "0x3B7AA30", Slot = "8")]
	public virtual void Freeze()
	{
	}

	[Token(Token = "0x6001D4E")]
	[Address(RVA = "0x3B7AC20", Offset = "0x3B7AC20", VA = "0x3B7AC20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001D4F")]
	[Address(RVA = "0x3B7AC70", Offset = "0x3B7AC70", VA = "0x3B7AC70")]
	internal IMessageSink GetServerContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x3B760A0", Offset = "0x3B760A0", VA = "0x3B760A0")]
	internal IMessageSink GetClientContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001D51")]
	[Address(RVA = "0x3B7AED0", Offset = "0x3B7AED0", VA = "0x3B7AED0")]
	internal IMessageSink CreateServerObjectSinkChain(MarshalByRefObject obj, bool forceInternalExecute)
	{
		return null;
	}

	[Token(Token = "0x6001D52")]
	[Address(RVA = "0x3B7B180", Offset = "0x3B7B180", VA = "0x3B7B180")]
	internal IMessageSink CreateEnvoySink(MarshalByRefObject serverObject)
	{
		return null;
	}

	[Token(Token = "0x6001D53")]
	[Address(RVA = "0x3B7B3B0", Offset = "0x3B7B3B0", VA = "0x3B7B3B0")]
	internal static Context SwitchToContext(Context newContext)
	{
		return null;
	}

	[Token(Token = "0x6001D54")]
	[Address(RVA = "0x3B7B3C0", Offset = "0x3B7B3C0", VA = "0x3B7B3C0")]
	internal static Context CreateNewContext(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D55")]
	[Address(RVA = "0x3B7BE30", Offset = "0x3B7BE30", VA = "0x3B7BE30")]
	public void DoCallBack(CrossContextDelegate deleg)
	{
	}

	[Token(Token = "0x6001D57")]
	[Address(RVA = "0x3B7C1A0", Offset = "0x3B7C1A0", VA = "0x3B7C1A0")]
	public static LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6001D58")]
	[Address(RVA = "0x3B7C220", Offset = "0x3B7C220", VA = "0x3B7C220")]
	public static LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D59")]
	[Address(RVA = "0x3B7C2B0", Offset = "0x3B7C2B0", VA = "0x3B7C2B0")]
	public static void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001D5A")]
	[Address(RVA = "0x3B7C340", Offset = "0x3B7C340", VA = "0x3B7C340")]
	public static LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D5B")]
	[Address(RVA = "0x3B7C3D0", Offset = "0x3B7C3D0", VA = "0x3B7C3D0")]
	public static object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6001D5C")]
	[Address(RVA = "0x3B7C400", Offset = "0x3B7C400", VA = "0x3B7C400")]
	public static void SetData(LocalDataStoreSlot slot, object data)
	{
	}
}
