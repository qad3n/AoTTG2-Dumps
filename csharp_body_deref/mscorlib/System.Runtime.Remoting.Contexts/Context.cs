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
[Token(Token = "0x2000396")]
[ComVisible(true)]
public class Context
{
	[Token(Token = "0x4000EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int domain_id;

	[Token(Token = "0x4000EFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int context_id;

	[Token(Token = "0x4000F00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private UIntPtr static_data;

	[Token(Token = "0x4000F01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIntPtr data;

	[Token(Token = "0x4000F02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[ContextStatic]
	private static object[] local_slots;

	[Token(Token = "0x4000F03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static IMessageSink default_server_context_sink;

	[Token(Token = "0x4000F04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IMessageSink server_context_sink_chain;

	[Token(Token = "0x4000F05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IMessageSink client_context_sink_chain;

	[Token(Token = "0x4000F06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<IContextProperty> context_properties;

	[Token(Token = "0x4000F07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static int global_count;

	[Token(Token = "0x4000F08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private System.LocalDataStoreHolder _localDataStore;

	[Token(Token = "0x4000F09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static System.LocalDataStoreMgr _localDataStoreMgr;

	[Token(Token = "0x4000F0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties;

	[Token(Token = "0x4000F0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection context_dynamic_properties;

	[Token(Token = "0x4000F0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Runtime.Remoting.Contexts.ContextCallbackObject callback_object;

	[Token(Token = "0x17000364")]
	public static Context DefaultContext
	{
		[Token(Token = "0x6001DAD")]
		[Address(RVA = "0x19F8110", Offset = "0x19F6710", VA = "0x1819F8110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000365")]
	public virtual int ContextID
	{
		[Token(Token = "0x6001DAE")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000366")]
	public virtual IContextProperty[] ContextProperties
	{
		[Token(Token = "0x6001DAF")]
		[Address(RVA = "0x19F80B0", Offset = "0x19F66B0", VA = "0x1819F80B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000367")]
	internal bool IsDefaultContext
	{
		[Token(Token = "0x6001DB0")]
		[Address(RVA = "0x19F82D0", Offset = "0x19F68D0", VA = "0x1819F82D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000368")]
	internal bool NeedsContextSink
	{
		[Token(Token = "0x6001DB1")]
		[Address(RVA = "0x19F8460", Offset = "0x19F6A60", VA = "0x1819F8460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000369")]
	internal static bool HasGlobalDynamicSinks
	{
		[Token(Token = "0x6001DB6")]
		[Address(RVA = "0x19F8230", Offset = "0x19F6830", VA = "0x1819F8230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036A")]
	internal bool HasDynamicSinks
	{
		[Token(Token = "0x6001DB8")]
		[Address(RVA = "0x19F8120", Offset = "0x19F6720", VA = "0x1819F8120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036B")]
	internal bool HasExitSinks
	{
		[Token(Token = "0x6001DB9")]
		[Address(RVA = "0x19F8160", Offset = "0x19F6760", VA = "0x1819F8160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036C")]
	private System.LocalDataStore MyLocalStore
	{
		[Token(Token = "0x6001DC5")]
		[Address(RVA = "0x19F82E0", Offset = "0x19F68E0", VA = "0x1819F82E0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x19F77E0", Offset = "0x19F5DE0", VA = "0x1819F77E0")]
	private static extern void RegisterContext(Context ctx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x19F7A80", Offset = "0x19F6080", VA = "0x1819F7A80")]
	private static extern void ReleaseContext(Context ctx);

	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x19F8030", Offset = "0x19F6630", VA = "0x1819F8030")]
	public Context()
	{
	}

	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x19F6BE0", Offset = "0x19F51E0", VA = "0x1819F6BE0", Slot = "1")]
	~Context()
	{
	}

	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x19F77F0", Offset = "0x19F5DF0", VA = "0x1819F77F0")]
	public static bool RegisterDynamicProperty(IDynamicProperty prop, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x19F7D20", Offset = "0x19F6320", VA = "0x1819F7D20")]
	public static bool UnregisterDynamicProperty(string name, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x19F7070", Offset = "0x19F5670", VA = "0x1819F7070")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(ContextBoundObject obj, Context ctx)
	{
		return null;
	}

	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x19F76E0", Offset = "0x19F5CE0", VA = "0x1819F76E0")]
	internal static void NotifyGlobalDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001DB7")]
	[Address(RVA = "0x19F7660", Offset = "0x19F5C60", VA = "0x1819F7660")]
	internal void NotifyDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x19F7330", Offset = "0x19F5930", VA = "0x1819F7330", Slot = "6")]
	public virtual IContextProperty GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x19F7AE0", Offset = "0x19F60E0", VA = "0x1819F7AE0", Slot = "7")]
	public virtual void SetProperty(IContextProperty prop)
	{
	}

	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x19F6CE0", Offset = "0x19F52E0", VA = "0x1819F6CE0", Slot = "8")]
	public virtual void Freeze()
	{
	}

	[Token(Token = "0x6001DBD")]
	[Address(RVA = "0x19F7CD0", Offset = "0x19F62D0", VA = "0x1819F7CD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x19F74B0", Offset = "0x19F5AB0", VA = "0x1819F74B0")]
	internal IMessageSink GetServerContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001DBF")]
	[Address(RVA = "0x19F6E80", Offset = "0x19F5480", VA = "0x1819F6E80")]
	internal IMessageSink GetClientContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001DC0")]
	[Address(RVA = "0x19F68E0", Offset = "0x19F4EE0", VA = "0x1819F68E0")]
	internal IMessageSink CreateServerObjectSinkChain(MarshalByRefObject obj, bool forceInternalExecute)
	{
		return null;
	}

	[Token(Token = "0x6001DC1")]
	[Address(RVA = "0x19F60A0", Offset = "0x19F46A0", VA = "0x1819F60A0")]
	internal IMessageSink CreateEnvoySink(MarshalByRefObject serverObject)
	{
		return null;
	}

	[Token(Token = "0x6001DC2")]
	[Address(RVA = "0x19F7CC0", Offset = "0x19F62C0", VA = "0x1819F7CC0")]
	internal static Context SwitchToContext(Context newContext)
	{
		return null;
	}

	[Token(Token = "0x6001DC3")]
	[Address(RVA = "0x19F6240", Offset = "0x19F4840", VA = "0x1819F6240")]
	internal static Context CreateNewContext(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DC4")]
	[Address(RVA = "0x19F6AB0", Offset = "0x19F50B0", VA = "0x1819F6AB0")]
	public void DoCallBack(CrossContextDelegate deleg)
	{
	}

	[Token(Token = "0x6001DC6")]
	[Address(RVA = "0x19F5FD0", Offset = "0x19F45D0", VA = "0x1819F5FD0")]
	public static LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x19F6030", Offset = "0x19F4630", VA = "0x1819F6030")]
	public static LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x19F6C70", Offset = "0x19F5270", VA = "0x1819F6C70")]
	public static void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x19F72C0", Offset = "0x19F58C0", VA = "0x1819F72C0")]
	public static LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x19F7030", Offset = "0x19F5630", VA = "0x1819F7030")]
	public static object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6001DCB")]
	[Address(RVA = "0x19F7A90", Offset = "0x19F6090", VA = "0x1819F7A90")]
	public static void SetData(LocalDataStoreSlot slot, object data)
	{
	}
}
