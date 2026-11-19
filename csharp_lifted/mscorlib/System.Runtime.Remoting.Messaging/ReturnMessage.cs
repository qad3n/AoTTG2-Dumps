// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ReturnMessage
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

[Token(Token = "0x20003C7")]
[ComVisible(true)]
public class ReturnMessage : IMethodReturnMessage, IMethodMessage, IMessage, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _outArgs;

	[Token(Token = "0x4000F18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object[] _args;

	[Token(Token = "0x4000F19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private LogicalCallContext _callCtx;

	[Token(Token = "0x4000F1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _returnValue;

	[Token(Token = "0x4000F1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _uri;

	[Token(Token = "0x4000F1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Exception _exception;

	[Token(Token = "0x4000F1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000F1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _methodName;

	[Token(Token = "0x4000F1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000F20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string _typeName;

	[Token(Token = "0x4000F21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties;

	[Token(Token = "0x4000F22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000F23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo;

	[Token(Token = "0x17000403")]
	public int ArgCount
	{
		[Token(Token = "0x6001F3E")]
		[Address(RVA = "0x5399F60", Offset = "0x5398F60", VA = "0x5399F60", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000404")]
	public object[] Args
	{
		[Token(Token = "0x6001F3F")]
		[Address(RVA = "0x5399F80", Offset = "0x5398F80", VA = "0x5399F80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000405")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001F40")]
		[Address(RVA = "0x5399F90", Offset = "0x5398F90", VA = "0x5399F90", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000406")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001F41")]
		[Address(RVA = "0x539A010", Offset = "0x5399010", VA = "0x539A010", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000407")]
	public string MethodName
	{
		[Token(Token = "0x6001F42")]
		[Address(RVA = "0x539A020", Offset = "0x5399020", VA = "0x539A020", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000408")]
	public object MethodSignature
	{
		[Token(Token = "0x6001F43")]
		[Address(RVA = "0x539A080", Offset = "0x5399080", VA = "0x539A080", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000409")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001F44")]
		[Address(RVA = "0x539A1E0", Offset = "0x53991E0", VA = "0x539A1E0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040A")]
	public string TypeName
	{
		[Token(Token = "0x6001F45")]
		[Address(RVA = "0x539A260", Offset = "0x5399260", VA = "0x539A260", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040B")]
	public string Uri
	{
		[Token(Token = "0x6001F46")]
		[Address(RVA = "0x539A2E0", Offset = "0x53992E0", VA = "0x539A2E0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F47")]
		[Address(RVA = "0x539A2F0", Offset = "0x53992F0", VA = "0x539A2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700040C")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001F48")]
		[Address(RVA = "0x539A300", Offset = "0x5399300", VA = "0x539A300", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F49")]
		[Address(RVA = "0x539A310", Offset = "0x5399310", VA = "0x539A310", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700040D")]
	public Exception Exception
	{
		[Token(Token = "0x6001F4B")]
		[Address(RVA = "0x539A350", Offset = "0x5399350", VA = "0x539A350", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040E")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F4C")]
		[Address(RVA = "0x539A360", Offset = "0x5399360", VA = "0x539A360", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	public virtual object ReturnValue
	{
		[Token(Token = "0x6001F4D")]
		[Address(RVA = "0x539A420", Offset = "0x5399420", VA = "0x539A420", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000410")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F4E")]
		[Address(RVA = "0x539A430", Offset = "0x5399430", VA = "0x539A430", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F4F")]
		[Address(RVA = "0x539A440", Offset = "0x5399440", VA = "0x539A440", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x6001F3C")]
	[Address(RVA = "0x537C1A0", Offset = "0x537B1A0", VA = "0x537C1A0")]
	public ReturnMessage(object ret, object[] outArgs, int outArgsCount, LogicalCallContext callCtx, IMethodCallMessage mcm)
	{
	}

	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x537C020", Offset = "0x537B020", VA = "0x537C020")]
	public ReturnMessage(Exception e, IMethodCallMessage mcm)
	{
	}

	[Token(Token = "0x6001F4A")]
	[Address(RVA = "0x539A320", Offset = "0x5399320", VA = "0x539A320", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}
}
