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
		[Address(RVA = "0x4E935F0", Offset = "0x4E935F0", VA = "0x4E935F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000363")]
	public virtual int ContextID
	{
		[Token(Token = "0x6001D3F")]
		[Address(RVA = "0x4E93600", Offset = "0x4E93600", VA = "0x4E93600", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000364")]
	public virtual IContextProperty[] ContextProperties
	{
		[Token(Token = "0x6001D40")]
		[Address(RVA = "0x4E93610", Offset = "0x4E93610", VA = "0x4E93610", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000365")]
	internal bool IsDefaultContext
	{
		[Token(Token = "0x6001D41")]
		[Address(RVA = "0x4E93670", Offset = "0x4E93670", VA = "0x4E93670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000366")]
	internal bool NeedsContextSink
	{
		[Token(Token = "0x6001D42")]
		[Address(RVA = "0x4E93680", Offset = "0x4E93680", VA = "0x4E93680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000367")]
	internal static bool HasGlobalDynamicSinks
	{
		[Token(Token = "0x6001D47")]
		[Address(RVA = "0x4E949C0", Offset = "0x4E949C0", VA = "0x4E949C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000368")]
	internal bool HasDynamicSinks
	{
		[Token(Token = "0x6001D49")]
		[Address(RVA = "0x4E94AF0", Offset = "0x4E94AF0", VA = "0x4E94AF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000369")]
	internal bool HasExitSinks
	{
		[Token(Token = "0x6001D4A")]
		[Address(RVA = "0x4E904D0", Offset = "0x4E904D0", VA = "0x4E904D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036A")]
	private System.LocalDataStore MyLocalStore
	{
		[Token(Token = "0x6001D56")]
		[Address(RVA = "0x4E964D0", Offset = "0x4E964D0", VA = "0x4E964D0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D3A")]
	[Address(RVA = "0x4E93490", Offset = "0x4E93490", VA = "0x4E93490")]
	private static extern void RegisterContext(Context ctx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D3B")]
	[Address(RVA = "0x4E934A0", Offset = "0x4E934A0", VA = "0x4E934A0")]
	private static extern void ReleaseContext(Context ctx);

	[Token(Token = "0x6001D3C")]
	[Address(RVA = "0x4E934B0", Offset = "0x4E934B0", VA = "0x4E934B0")]
	public Context()
	{
	}

	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x4E93530", Offset = "0x4E93530", VA = "0x4E93530", Slot = "1")]
	~Context()
	{
	}

	[Token(Token = "0x6001D43")]
	[Address(RVA = "0x4E937A0", Offset = "0x4E937A0", VA = "0x4E937A0")]
	public static bool RegisterDynamicProperty(IDynamicProperty prop, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x4E93E70", Offset = "0x4E93E70", VA = "0x4E93E70")]
	public static bool UnregisterDynamicProperty(string name, ContextBoundObject obj, Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D45")]
	[Address(RVA = "0x4E93810", Offset = "0x4E93810", VA = "0x4E93810")]
	private static System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(ContextBoundObject obj, Context ctx)
	{
		return null;
	}

	[Token(Token = "0x6001D46")]
	[Address(RVA = "0x4E940C0", Offset = "0x4E940C0", VA = "0x4E940C0")]
	internal static void NotifyGlobalDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D48")]
	[Address(RVA = "0x4E94A80", Offset = "0x4E94A80", VA = "0x4E94A80")]
	internal void NotifyDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x4E94B30", Offset = "0x4E94B30", VA = "0x4E94B30", Slot = "6")]
	public virtual IContextProperty GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x4E94D70", Offset = "0x4E94D70", VA = "0x4E94D70", Slot = "7")]
	public virtual void SetProperty(IContextProperty prop)
	{
	}

	[Token(Token = "0x6001D4D")]
	[Address(RVA = "0x4E94F10", Offset = "0x4E94F10", VA = "0x4E94F10", Slot = "8")]
	public virtual void Freeze()
	{
	}

	[Token(Token = "0x6001D4E")]
	[Address(RVA = "0x4E95100", Offset = "0x4E95100", VA = "0x4E95100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001D4F")]
	[Address(RVA = "0x4E95150", Offset = "0x4E95150", VA = "0x4E95150")]
	internal IMessageSink GetServerContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x4E90580", Offset = "0x4E90580", VA = "0x4E90580")]
	internal IMessageSink GetClientContextSinkChain()
	{
		return null;
	}

	[Token(Token = "0x6001D51")]
	[Address(RVA = "0x4E953B0", Offset = "0x4E953B0", VA = "0x4E953B0")]
	internal IMessageSink CreateServerObjectSinkChain(MarshalByRefObject obj, bool forceInternalExecute)
	{
		return null;
	}

	[Token(Token = "0x6001D52")]
	[Address(RVA = "0x4E95660", Offset = "0x4E95660", VA = "0x4E95660")]
	internal IMessageSink CreateEnvoySink(MarshalByRefObject serverObject)
	{
		return null;
	}

	[Token(Token = "0x6001D53")]
	[Address(RVA = "0x4E95890", Offset = "0x4E95890", VA = "0x4E95890")]
	internal static Context SwitchToContext(Context newContext)
	{
		return null;
	}

	[Token(Token = "0x6001D54")]
	[Address(RVA = "0x4E958A0", Offset = "0x4E958A0", VA = "0x4E958A0")]
	internal static Context CreateNewContext(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D55")]
	[Address(RVA = "0x4E96310", Offset = "0x4E96310", VA = "0x4E96310")]
	public void DoCallBack(CrossContextDelegate deleg)
	{
	}

	[Token(Token = "0x6001D57")]
	[Address(RVA = "0x4E96680", Offset = "0x4E96680", VA = "0x4E96680")]
	public static LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6001D58")]
	[Address(RVA = "0x4E96700", Offset = "0x4E96700", VA = "0x4E96700")]
	public static LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D59")]
	[Address(RVA = "0x4E96790", Offset = "0x4E96790", VA = "0x4E96790")]
	public static void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001D5A")]
	[Address(RVA = "0x4E96820", Offset = "0x4E96820", VA = "0x4E96820")]
	public static LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6001D5B")]
	[Address(RVA = "0x4E968B0", Offset = "0x4E968B0", VA = "0x4E968B0")]
	public static object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6001D5C")]
	[Address(RVA = "0x4E968E0", Offset = "0x4E968E0", VA = "0x4E968E0")]
	public static void SetData(LocalDataStoreSlot slot, object data)
	{
	}
}
