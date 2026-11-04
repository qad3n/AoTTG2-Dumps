// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.MonoMethodMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20003E8")]
internal class MonoMethodMessage : IMethodCallMessage, IMethodMessage, IMessage, IMethodReturnMessage, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000FA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Reflection.RuntimeMethodInfo method;

	[Token(Token = "0x4000FA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x4000FA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string[] names;

	[Token(Token = "0x4000FA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] arg_types;

	[Token(Token = "0x4000FA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public LogicalCallContext ctx;

	[Token(Token = "0x4000FA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public object rval;

	[Token(Token = "0x4000FA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public Exception exc;

	[Token(Token = "0x4000FA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private AsyncResult asyncResult;

	[Token(Token = "0x4000FA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Runtime.Remoting.Messaging.CallType call_type;

	[Token(Token = "0x4000FAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string uri;

	[Token(Token = "0x4000FAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MCMDictionary properties;

	[Token(Token = "0x4000FAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.Runtime.Remoting.Identity identity;

	[Token(Token = "0x4000FAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Type[] methodSignature;

	[Token(Token = "0x170003F4")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001F48")]
		[Address(RVA = "0x1A043B0", Offset = "0x1A029B0", VA = "0x181A043B0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	public int ArgCount
	{
		[Token(Token = "0x6001F49")]
		[Address(RVA = "0x1A03F20", Offset = "0x1A02520", VA = "0x181A03F20", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003F6")]
	public object[] Args
	{
		[Token(Token = "0x6001F4A")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F7")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001F4B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F4C")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x170003F8")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001F4D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public string MethodName
	{
		[Token(Token = "0x6001F4E")]
		[Address(RVA = "0x1A04020", Offset = "0x1A02620", VA = "0x181A04020", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public object MethodSignature
	{
		[Token(Token = "0x6001F4F")]
		[Address(RVA = "0x1A04080", Offset = "0x1A02680", VA = "0x181A04080", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FB")]
	public string TypeName
	{
		[Token(Token = "0x6001F50")]
		[Address(RVA = "0x1A04420", Offset = "0x1A02A20", VA = "0x181A04420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public string Uri
	{
		[Token(Token = "0x6001F51")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F52")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	public Exception Exception
	{
		[Token(Token = "0x6001F54")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FE")]
	public int OutArgCount
	{
		[Token(Token = "0x6001F55")]
		[Address(RVA = "0x1A041D0", Offset = "0x1A027D0", VA = "0x181A041D0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003FF")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F56")]
		[Address(RVA = "0x1A04230", Offset = "0x1A02830", VA = "0x181A04230", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public object ReturnValue
	{
		[Token(Token = "0x6001F57")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000401")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F58")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F59")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000402")]
	public AsyncResult AsyncResult
	{
		[Token(Token = "0x6001F5A")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000403")]
	internal System.Runtime.Remoting.Messaging.CallType CallType
	{
		[Token(Token = "0x6001F5B")]
		[Address(RVA = "0x1A03FB0", Offset = "0x1A025B0", VA = "0x181A03FB0")]
		get
		{
			return default(System.Runtime.Remoting.Messaging.CallType);
		}
	}

	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x1A038D0", Offset = "0x1A01ED0", VA = "0x181A038D0")]
	internal void InitMessage(System.Reflection.RuntimeMethodInfo method, object[] out_args)
	{
	}

	[Token(Token = "0x6001F44")]
	[Address(RVA = "0x1A03E50", Offset = "0x1A02450", VA = "0x181A03E50")]
	public MonoMethodMessage(MethodBase method, object[] out_args)
	{
	}

	[Token(Token = "0x6001F45")]
	[Address(RVA = "0x1A03D10", Offset = "0x1A02310", VA = "0x181A03D10")]
	internal MonoMethodMessage(MethodInfo minfo, object[] in_args, object[] out_args)
	{
	}

	[Token(Token = "0x6001F46")]
	[Address(RVA = "0x1A03810", Offset = "0x1A01E10", VA = "0x181A03810")]
	private static MethodInfo GetMethodInfo(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001F47")]
	[Address(RVA = "0x1A03C30", Offset = "0x1A02230", VA = "0x181A03C30")]
	public MonoMethodMessage(Type type, string methodName, object[] in_args)
	{
	}

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x1A037E0", Offset = "0x1A01DE0", VA = "0x181A037E0", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}

	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x1A03BB0", Offset = "0x1A021B0", VA = "0x181A03BB0")]
	public bool NeedsOutProcessing(out int outCount)
	{
		return default(bool);
	}
}
