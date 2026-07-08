using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003BF")]
[ComVisible(true)]
public class ReturnMessage : IMethodReturnMessage, IMethodMessage, IMessage, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000FB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _outArgs;

	[Token(Token = "0x4000FB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object[] _args;

	[Token(Token = "0x4000FB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private LogicalCallContext _callCtx;

	[Token(Token = "0x4000FB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _returnValue;

	[Token(Token = "0x4000FB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _uri;

	[Token(Token = "0x4000FB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Exception _exception;

	[Token(Token = "0x4000FB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000FB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _methodName;

	[Token(Token = "0x4000FB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000FBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string _typeName;

	[Token(Token = "0x4000FBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties;

	[Token(Token = "0x4000FBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000FBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo;

	[Token(Token = "0x17000402")]
	public int ArgCount
	{
		[Token(Token = "0x6001EF9")]
		[Address(RVA = "0x4EAC9F0", Offset = "0x4EAC9F0", VA = "0x4EAC9F0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000403")]
	public object[] Args
	{
		[Token(Token = "0x6001EFA")]
		[Address(RVA = "0x4EACA10", Offset = "0x4EACA10", VA = "0x4EACA10", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000404")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EFB")]
		[Address(RVA = "0x4EACA20", Offset = "0x4EACA20", VA = "0x4EACA20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000405")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001EFC")]
		[Address(RVA = "0x4EACAA0", Offset = "0x4EACAA0", VA = "0x4EACAA0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000406")]
	public string MethodName
	{
		[Token(Token = "0x6001EFD")]
		[Address(RVA = "0x4EACAB0", Offset = "0x4EACAB0", VA = "0x4EACAB0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000407")]
	public object MethodSignature
	{
		[Token(Token = "0x6001EFE")]
		[Address(RVA = "0x4EACB10", Offset = "0x4EACB10", VA = "0x4EACB10", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000408")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001EFF")]
		[Address(RVA = "0x4EACC70", Offset = "0x4EACC70", VA = "0x4EACC70", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000409")]
	public string TypeName
	{
		[Token(Token = "0x6001F00")]
		[Address(RVA = "0x4EACCF0", Offset = "0x4EACCF0", VA = "0x4EACCF0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040A")]
	public string Uri
	{
		[Token(Token = "0x6001F01")]
		[Address(RVA = "0x4EACD70", Offset = "0x4EACD70", VA = "0x4EACD70", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F02")]
		[Address(RVA = "0x4EACD80", Offset = "0x4EACD80", VA = "0x4EACD80")]
		set
		{
		}
	}

	[Token(Token = "0x1700040B")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001F03")]
		[Address(RVA = "0x4EACD90", Offset = "0x4EACD90", VA = "0x4EACD90", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F04")]
		[Address(RVA = "0x4EACDA0", Offset = "0x4EACDA0", VA = "0x4EACDA0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700040C")]
	public Exception Exception
	{
		[Token(Token = "0x6001F06")]
		[Address(RVA = "0x4EACDE0", Offset = "0x4EACDE0", VA = "0x4EACDE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040D")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F07")]
		[Address(RVA = "0x4EACDF0", Offset = "0x4EACDF0", VA = "0x4EACDF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040E")]
	public virtual object ReturnValue
	{
		[Token(Token = "0x6001F08")]
		[Address(RVA = "0x4EACEB0", Offset = "0x4EACEB0", VA = "0x4EACEB0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F09")]
		[Address(RVA = "0x4EACEC0", Offset = "0x4EACEC0", VA = "0x4EACEC0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F0A")]
		[Address(RVA = "0x4EACED0", Offset = "0x4EACED0", VA = "0x4EACED0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x6001EF7")]
	[Address(RVA = "0x4E8DD70", Offset = "0x4E8DD70", VA = "0x4E8DD70")]
	public ReturnMessage(object ret, object[] outArgs, int outArgsCount, LogicalCallContext callCtx, IMethodCallMessage mcm)
	{
	}

	[Token(Token = "0x6001EF8")]
	[Address(RVA = "0x4E8DBF0", Offset = "0x4E8DBF0", VA = "0x4E8DBF0")]
	public ReturnMessage(Exception e, IMethodCallMessage mcm)
	{
	}

	[Token(Token = "0x6001F05")]
	[Address(RVA = "0x4EACDB0", Offset = "0x4EACDB0", VA = "0x4EACDB0", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}
}
