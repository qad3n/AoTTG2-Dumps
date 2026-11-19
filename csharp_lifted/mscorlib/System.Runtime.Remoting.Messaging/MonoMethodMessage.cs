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
[Token(Token = "0x20003C1")]
internal class MonoMethodMessage : IMethodCallMessage, IMethodMessage, IMessage, IMethodReturnMessage, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Reflection.RuntimeMethodInfo method;

	[Token(Token = "0x4000F02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x4000F03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string[] names;

	[Token(Token = "0x4000F04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] arg_types;

	[Token(Token = "0x4000F05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public LogicalCallContext ctx;

	[Token(Token = "0x4000F06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public object rval;

	[Token(Token = "0x4000F07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public Exception exc;

	[Token(Token = "0x4000F08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private AsyncResult asyncResult;

	[Token(Token = "0x4000F09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private System.Runtime.Remoting.Messaging.CallType call_type;

	[Token(Token = "0x4000F0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string uri;

	[Token(Token = "0x4000F0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MCMDictionary properties;

	[Token(Token = "0x4000F0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.Runtime.Remoting.Identity identity;

	[Token(Token = "0x4000F0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Type[] methodSignature;

	[Token(Token = "0x170003F3")]
	public IDictionary Properties
	{
		[Token(Token = "0x6001F1E")]
		[Address(RVA = "0x5399290", Offset = "0x5398290", VA = "0x5399290", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F4")]
	public int ArgCount
	{
		[Token(Token = "0x6001F1F")]
		[Address(RVA = "0x5399360", Offset = "0x5398360", VA = "0x5399360", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003F5")]
	public object[] Args
	{
		[Token(Token = "0x6001F20")]
		[Address(RVA = "0x5399400", Offset = "0x5398400", VA = "0x5399400", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F6")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001F21")]
		[Address(RVA = "0x5399410", Offset = "0x5398410", VA = "0x5399410", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F22")]
		[Address(RVA = "0x5399420", Offset = "0x5398420", VA = "0x5399420")]
		set
		{
		}
	}

	[Token(Token = "0x170003F7")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001F23")]
		[Address(RVA = "0x5399430", Offset = "0x5398430", VA = "0x5399430", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	public string MethodName
	{
		[Token(Token = "0x6001F24")]
		[Address(RVA = "0x5399440", Offset = "0x5398440", VA = "0x5399440", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public object MethodSignature
	{
		[Token(Token = "0x6001F25")]
		[Address(RVA = "0x53994A0", Offset = "0x53984A0", VA = "0x53994A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public string TypeName
	{
		[Token(Token = "0x6001F26")]
		[Address(RVA = "0x53995E0", Offset = "0x53985E0", VA = "0x53995E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FB")]
	public string Uri
	{
		[Token(Token = "0x6001F27")]
		[Address(RVA = "0x5399650", Offset = "0x5398650", VA = "0x5399650", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F28")]
		[Address(RVA = "0x5399660", Offset = "0x5398660", VA = "0x5399660", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170003FC")]
	public Exception Exception
	{
		[Token(Token = "0x6001F2A")]
		[Address(RVA = "0x5399670", Offset = "0x5398670", VA = "0x5399670", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FD")]
	public int OutArgCount
	{
		[Token(Token = "0x6001F2B")]
		[Address(RVA = "0x5399680", Offset = "0x5398680", VA = "0x5399680", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003FE")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F2C")]
		[Address(RVA = "0x5399760", Offset = "0x5398760", VA = "0x5399760", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public object ReturnValue
	{
		[Token(Token = "0x6001F2D")]
		[Address(RVA = "0x5399990", Offset = "0x5398990", VA = "0x5399990", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F2E")]
		[Address(RVA = "0x53999A0", Offset = "0x53989A0", VA = "0x53999A0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F2F")]
		[Address(RVA = "0x53999B0", Offset = "0x53989B0", VA = "0x53999B0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public AsyncResult AsyncResult
	{
		[Token(Token = "0x6001F30")]
		[Address(RVA = "0x53999C0", Offset = "0x53989C0", VA = "0x53999C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000402")]
	internal System.Runtime.Remoting.Messaging.CallType CallType
	{
		[Token(Token = "0x6001F31")]
		[Address(RVA = "0x537BD40", Offset = "0x537AD40", VA = "0x537BD40")]
		get
		{
			return default(System.Runtime.Remoting.Messaging.CallType);
		}
	}

	[Token(Token = "0x6001F19")]
	[Address(RVA = "0x5398D50", Offset = "0x5397D50", VA = "0x5398D50")]
	internal void InitMessage(System.Reflection.RuntimeMethodInfo method, object[] out_args)
	{
	}

	[Token(Token = "0x6001F1A")]
	[Address(RVA = "0x5399100", Offset = "0x5398100", VA = "0x5399100")]
	public MonoMethodMessage(MethodBase method, object[] out_args)
	{
	}

	[Token(Token = "0x6001F1B")]
	[Address(RVA = "0x537A9C0", Offset = "0x53799C0", VA = "0x537A9C0")]
	internal MonoMethodMessage(MethodInfo minfo, object[] in_args, object[] out_args)
	{
	}

	[Token(Token = "0x6001F1C")]
	[Address(RVA = "0x53991B0", Offset = "0x53981B0", VA = "0x53991B0")]
	private static MethodInfo GetMethodInfo(Type type, string methodName)
	{
		return null;
	}

	[Token(Token = "0x6001F1D")]
	[Address(RVA = "0x5399260", Offset = "0x5398260", VA = "0x5399260")]
	public MonoMethodMessage(Type type, string methodName, object[] in_args)
	{
	}

	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x537D3A0", Offset = "0x537C3A0", VA = "0x537D3A0", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}

	[Token(Token = "0x6001F32")]
	[Address(RVA = "0x537D2B0", Offset = "0x537C2B0", VA = "0x537D2B0")]
	public bool NeedsOutProcessing(out int outCount)
	{
		return default(bool);
	}
}
