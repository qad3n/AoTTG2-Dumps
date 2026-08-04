// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.MethodResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B90480", Offset = "0x3B90480", VA = "0x3B90480", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E5")]
	public object[] Args
	{
		[Token(Token = "0x6001EC0")]
		[Address(RVA = "0x3B90490", Offset = "0x3B90490", VA = "0x3B90490", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E6")]
	public Exception Exception
	{
		[Token(Token = "0x6001EC1")]
		[Address(RVA = "0x3B904A0", Offset = "0x3B904A0", VA = "0x3B904A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EC2")]
		[Address(RVA = "0x3B904B0", Offset = "0x3B904B0", VA = "0x3B904B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001EC3")]
		[Address(RVA = "0x3B90530", Offset = "0x3B90530", VA = "0x3B90530", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E9")]
	public string MethodName
	{
		[Token(Token = "0x6001EC4")]
		[Address(RVA = "0x3B90650", Offset = "0x3B90650", VA = "0x3B90650", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EA")]
	public object MethodSignature
	{
		[Token(Token = "0x6001EC5")]
		[Address(RVA = "0x3B90810", Offset = "0x3B90810", VA = "0x3B90810", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EB")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001EC6")]
		[Address(RVA = "0x3B90940", Offset = "0x3B90940", VA = "0x3B90940", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001EC7")]
		[Address(RVA = "0x3B8CCE0", Offset = "0x3B8CCE0", VA = "0x3B8CCE0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	public object ReturnValue
	{
		[Token(Token = "0x6001EC8")]
		[Address(RVA = "0x3B90B20", Offset = "0x3B90B20", VA = "0x3B90B20", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EE")]
	public string TypeName
	{
		[Token(Token = "0x6001EC9")]
		[Address(RVA = "0x3B90730", Offset = "0x3B90730", VA = "0x3B90730", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EF")]
	public string Uri
	{
		[Token(Token = "0x6001ECA")]
		[Address(RVA = "0x3B90B30", Offset = "0x3B90B30", VA = "0x3B90B30", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ECB")]
		[Address(RVA = "0x3B90C10", Offset = "0x3B90C10", VA = "0x3B90C10")]
		set
		{
		}
	}

	[Token(Token = "0x170003F0")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001ECC")]
		[Address(RVA = "0x3B90C20", Offset = "0x3B90C20", VA = "0x3B90C20", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ECD")]
		[Address(RVA = "0x3B90C30", Offset = "0x3B90C30", VA = "0x3B90C30", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001ED0")]
		[Address(RVA = "0x3B91190", Offset = "0x3B91190", VA = "0x3B91190", Slot = "18")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ED1")]
		[Address(RVA = "0x3B911A0", Offset = "0x3B911A0", VA = "0x3B911A0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x6001EBA")]
	[Address(RVA = "0x3B80370", Offset = "0x3B80370", VA = "0x3B80370")]
	internal MethodResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EBB")]
	[Address(RVA = "0x3B75ED0", Offset = "0x3B75ED0", VA = "0x3B75ED0")]
	internal MethodResponse(object returnValue, object[] outArgs, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EBC")]
	[Address(RVA = "0x3B81BD0", Offset = "0x3B81BD0", VA = "0x3B81BD0")]
	internal MethodResponse(IMethodCallMessage msg, System.Runtime.Remoting.Messaging.CADMethodReturnMessage retmsg)
	{
	}

	[Token(Token = "0x6001EBD")]
	[Address(RVA = "0x3B8CC40", Offset = "0x3B8CC40", VA = "0x3B8CC40")]
	internal MethodResponse(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001EBE")]
	[Address(RVA = "0x3B8FF60", Offset = "0x3B8FF60", VA = "0x3B8FF60")]
	internal void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001ECE")]
	[Address(RVA = "0x3B90C40", Offset = "0x3B90C40", VA = "0x3B90C40", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001ECF")]
	[Address(RVA = "0x3B90C70", Offset = "0x3B90C70", VA = "0x3B90C70", Slot = "23")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
