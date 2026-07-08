using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20003B9")]
internal class MonoMethodMessage : IMethodCallMessage, IMethodMessage, IMessage, IMethodReturnMessage, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Reflection.RuntimeMethodInfo method;

	[Token(Token = "0x4000F9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x4000F9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string[] names;

	[Token(Token = "0x4000F9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] arg_types;

	[Token(Token = "0x4000F9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public LogicalCallContext ctx;

	[Token(Token = "0x4000FA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public object rval;

	[Token(Token = "0x4000FA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public Exception exc;

	[Token(Token = "0x4000FA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private AsyncResult asyncResult;

	[Token(Token = "0x4000FA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Runtime.Remoting.Messaging.CallType call_type;

	[Token(Token = "0x4000FA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string uri;

	[Token(Token = "0x4000FA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MCMDictionary properties;

	[Token(Token = "0x4000FA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.Runtime.Remoting.Identity identity;

	[Token(Token = "0x4000FA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Type[] methodSignature;

	[Token(Token = "0x170003F2")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001ED9")]
		[Address(RVA = "0x4EABE00", Offset = "0x4EABE00", VA = "0x4EABE00", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F3")]
	public int ArgCount
	{
		[Token(Token = "0x6001EDA")]
		[Address(RVA = "0x4EABED0", Offset = "0x4EABED0", VA = "0x4EABED0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003F4")]
	public object[] Args
	{
		[Token(Token = "0x6001EDB")]
		[Address(RVA = "0x4EABF80", Offset = "0x4EABF80", VA = "0x4EABF80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EDC")]
		[Address(RVA = "0x4EABF90", Offset = "0x4EABF90", VA = "0x4EABF90", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EDD")]
		[Address(RVA = "0x4EABFA0", Offset = "0x4EABFA0", VA = "0x4EABFA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001EDE")]
		[Address(RVA = "0x4EABFB0", Offset = "0x4EABFB0", VA = "0x4EABFB0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F7")]
	public string MethodName
	{
		[Token(Token = "0x6001EDF")]
		[Address(RVA = "0x4EABFC0", Offset = "0x4EABFC0", VA = "0x4EABFC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	public object MethodSignature
	{
		[Token(Token = "0x6001EE0")]
		[Address(RVA = "0x4EAC020", Offset = "0x4EAC020", VA = "0x4EAC020", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public string TypeName
	{
		[Token(Token = "0x6001EE1")]
		[Address(RVA = "0x4EAC160", Offset = "0x4EAC160", VA = "0x4EAC160", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public string Uri
	{
		[Token(Token = "0x6001EE2")]
		[Address(RVA = "0x4EAC1D0", Offset = "0x4EAC1D0", VA = "0x4EAC1D0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EE3")]
		[Address(RVA = "0x4EAC1E0", Offset = "0x4EAC1E0", VA = "0x4EAC1E0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003FB")]
	public Exception Exception
	{
		[Token(Token = "0x6001EE5")]
		[Address(RVA = "0x4EAC1F0", Offset = "0x4EAC1F0", VA = "0x4EAC1F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public int OutArgCount
	{
		[Token(Token = "0x6001EE6")]
		[Address(RVA = "0x4EAC200", Offset = "0x4EAC200", VA = "0x4EAC200", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003FD")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001EE7")]
		[Address(RVA = "0x4EAC260", Offset = "0x4EAC260", VA = "0x4EAC260", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FE")]
	public object ReturnValue
	{
		[Token(Token = "0x6001EE8")]
		[Address(RVA = "0x4EAC410", Offset = "0x4EAC410", VA = "0x4EAC410", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001EE9")]
		[Address(RVA = "0x4EAC420", Offset = "0x4EAC420", VA = "0x4EAC420", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EEA")]
		[Address(RVA = "0x4EAC430", Offset = "0x4EAC430", VA = "0x4EAC430", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000400")]
	public AsyncResult AsyncResult
	{
		[Token(Token = "0x6001EEB")]
		[Address(RVA = "0x4EAC440", Offset = "0x4EAC440", VA = "0x4EAC440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000401")]
	internal System.Runtime.Remoting.Messaging.CallType CallType
	{
		[Token(Token = "0x6001EEC")]
		[Address(RVA = "0x4E8D920", Offset = "0x4E8D920", VA = "0x4E8D920")]
		get
		{
			return default(System.Runtime.Remoting.Messaging.CallType);
		}
	}

	[Token(Token = "0x6001ED4")]
	[Address(RVA = "0x4EAB8B0", Offset = "0x4EAB8B0", VA = "0x4EAB8B0")]
	internal void InitMessage(System.Reflection.RuntimeMethodInfo method, object[] out_args)
	{
	}

	[Token(Token = "0x6001ED5")]
	[Address(RVA = "0x4EABC70", Offset = "0x4EABC70", VA = "0x4EABC70")]
	public MonoMethodMessage(MethodBase method, object[] out_args)
	{
	}

	[Token(Token = "0x6001ED6")]
	[Address(RVA = "0x4E8C590", Offset = "0x4E8C590", VA = "0x4E8C590")]
	internal MonoMethodMessage(MethodInfo minfo, object[] in_args, object[] out_args)
	{
	}

	[Token(Token = "0x6001ED7")]
	[Address(RVA = "0x4EABD20", Offset = "0x4EABD20", VA = "0x4EABD20")]
	private static MethodInfo GetMethodInfo(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001ED8")]
	[Address(RVA = "0x4EABDD0", Offset = "0x4EABDD0", VA = "0x4EABDD0")]
	public MonoMethodMessage(Type type, string methodName, object[] in_args)
	{
	}

	[Token(Token = "0x6001EE4")]
	[Address(RVA = "0x4E8EEB0", Offset = "0x4E8EEB0", VA = "0x4E8EEB0", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}

	[Token(Token = "0x6001EED")]
	[Address(RVA = "0x4E8EE20", Offset = "0x4E8EE20", VA = "0x4E8EE20")]
	public bool NeedsOutProcessing(out int outCount)
	{
		return default(bool);
	}
}
