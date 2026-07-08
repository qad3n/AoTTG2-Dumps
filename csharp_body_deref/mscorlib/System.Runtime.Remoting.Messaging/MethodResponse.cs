using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003B7")]
[CLSCompliant(false)]
[ComVisible(true)]
public class MethodResponse : IMethodReturnMessage, IMethodMessage, IMessage, ISerializable, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _methodName;

	[Token(Token = "0x4000F8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _uri;

	[Token(Token = "0x4000F8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _typeName;

	[Token(Token = "0x4000F8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000F8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object _returnValue;

	[Token(Token = "0x4000F8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Exception _exception;

	[Token(Token = "0x4000F90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000F91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo;

	[Token(Token = "0x4000F92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private object[] _args;

	[Token(Token = "0x4000F93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object[] _outArgs;

	[Token(Token = "0x4000F94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private IMethodCallMessage _callMsg;

	[Token(Token = "0x4000F95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private LogicalCallContext _callContext;

	[Token(Token = "0x4000F96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000F97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected IDictionary ExternalProperties;

	[Token(Token = "0x4000F98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected IDictionary InternalProperties;

	[Token(Token = "0x170003E4")]
	public int ArgCount
	{
		[Token(Token = "0x6001EBF")]
		[Address(RVA = "0x4EAA960", Offset = "0x4EAA960", VA = "0x4EAA960", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E5")]
	public object[] Args
	{
		[Token(Token = "0x6001EC0")]
		[Address(RVA = "0x4EAA970", Offset = "0x4EAA970", VA = "0x4EAA970", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E6")]
	public Exception Exception
	{
		[Token(Token = "0x6001EC1")]
		[Address(RVA = "0x4EAA980", Offset = "0x4EAA980", VA = "0x4EAA980", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EC2")]
		[Address(RVA = "0x4EAA990", Offset = "0x4EAA990", VA = "0x4EAA990", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001EC3")]
		[Address(RVA = "0x4EAAA10", Offset = "0x4EAAA10", VA = "0x4EAAA10", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E9")]
	public string MethodName
	{
		[Token(Token = "0x6001EC4")]
		[Address(RVA = "0x4EAAB30", Offset = "0x4EAAB30", VA = "0x4EAAB30", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EA")]
	public object MethodSignature
	{
		[Token(Token = "0x6001EC5")]
		[Address(RVA = "0x4EAACF0", Offset = "0x4EAACF0", VA = "0x4EAACF0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EB")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001EC6")]
		[Address(RVA = "0x4EAAE20", Offset = "0x4EAAE20", VA = "0x4EAAE20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001EC7")]
		[Address(RVA = "0x4EA71C0", Offset = "0x4EA71C0", VA = "0x4EA71C0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	public object ReturnValue
	{
		[Token(Token = "0x6001EC8")]
		[Address(RVA = "0x4EAB000", Offset = "0x4EAB000", VA = "0x4EAB000", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EE")]
	public string TypeName
	{
		[Token(Token = "0x6001EC9")]
		[Address(RVA = "0x4EAAC10", Offset = "0x4EAAC10", VA = "0x4EAAC10", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EF")]
	public string Uri
	{
		[Token(Token = "0x6001ECA")]
		[Address(RVA = "0x4EAB010", Offset = "0x4EAB010", VA = "0x4EAB010", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ECB")]
		[Address(RVA = "0x4EAB0F0", Offset = "0x4EAB0F0", VA = "0x4EAB0F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F0")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001ECC")]
		[Address(RVA = "0x4EAB100", Offset = "0x4EAB100", VA = "0x4EAB100", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ECD")]
		[Address(RVA = "0x4EAB110", Offset = "0x4EAB110", VA = "0x4EAB110", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001ED0")]
		[Address(RVA = "0x4EAB670", Offset = "0x4EAB670", VA = "0x4EAB670", Slot = "18")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ED1")]
		[Address(RVA = "0x4EAB680", Offset = "0x4EAB680", VA = "0x4EAB680", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x6001EBA")]
	[Address(RVA = "0x4E9A850", Offset = "0x4E9A850", VA = "0x4E9A850")]
	internal MethodResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EBB")]
	[Address(RVA = "0x4E903B0", Offset = "0x4E903B0", VA = "0x4E903B0")]
	internal MethodResponse(object returnValue, object[] outArgs, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EBC")]
	[Address(RVA = "0x4E9C0B0", Offset = "0x4E9C0B0", VA = "0x4E9C0B0")]
	internal MethodResponse(IMethodCallMessage msg, System.Runtime.Remoting.Messaging.CADMethodReturnMessage retmsg)
	{
	}

	[Token(Token = "0x6001EBD")]
	[Address(RVA = "0x4EA7120", Offset = "0x4EA7120", VA = "0x4EA7120")]
	internal MethodResponse(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001EBE")]
	[Address(RVA = "0x4EAA440", Offset = "0x4EAA440", VA = "0x4EAA440")]
	internal void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001ECE")]
	[Address(RVA = "0x4EAB120", Offset = "0x4EAB120", VA = "0x4EAB120", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001ECF")]
	[Address(RVA = "0x4EAB150", Offset = "0x4EAB150", VA = "0x4EAB150", Slot = "23")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
