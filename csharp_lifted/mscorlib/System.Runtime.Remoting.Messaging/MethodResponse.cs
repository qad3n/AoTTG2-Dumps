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
[Token(Token = "0x20003BF")]
[CLSCompliant(false)]
[ComVisible(true)]
public class MethodResponse : IMethodReturnMessage, IMethodMessage, IMessage, ISerializable, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000EF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _methodName;

	[Token(Token = "0x4000EF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _uri;

	[Token(Token = "0x4000EF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _typeName;

	[Token(Token = "0x4000EF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000EF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object _returnValue;

	[Token(Token = "0x4000EF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Exception _exception;

	[Token(Token = "0x4000EF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000EF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo;

	[Token(Token = "0x4000EF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private object[] _args;

	[Token(Token = "0x4000EF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object[] _outArgs;

	[Token(Token = "0x4000EFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private IMethodCallMessage _callMsg;

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private LogicalCallContext _callContext;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected IDictionary ExternalProperties;

	[Token(Token = "0x4000EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected IDictionary InternalProperties;

	[Token(Token = "0x170003E5")]
	public int ArgCount
	{
		[Token(Token = "0x6001F04")]
		[Address(RVA = "0x5397E70", Offset = "0x5396E70", VA = "0x5397E70", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E6")]
	public object[] Args
	{
		[Token(Token = "0x6001F05")]
		[Address(RVA = "0x5397E80", Offset = "0x5396E80", VA = "0x5397E80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	public Exception Exception
	{
		[Token(Token = "0x6001F06")]
		[Address(RVA = "0x5397E90", Offset = "0x5396E90", VA = "0x5397E90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001F07")]
		[Address(RVA = "0x5397EA0", Offset = "0x5396EA0", VA = "0x5397EA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E9")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001F08")]
		[Address(RVA = "0x5397F20", Offset = "0x5396F20", VA = "0x5397F20", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EA")]
	public string MethodName
	{
		[Token(Token = "0x6001F09")]
		[Address(RVA = "0x5398040", Offset = "0x5397040", VA = "0x5398040", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EB")]
	public object MethodSignature
	{
		[Token(Token = "0x6001F0A")]
		[Address(RVA = "0x5398200", Offset = "0x5397200", VA = "0x5398200", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F0B")]
		[Address(RVA = "0x5398330", Offset = "0x5397330", VA = "0x5398330", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001F0C")]
		[Address(RVA = "0x53949A0", Offset = "0x53939A0", VA = "0x53949A0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EE")]
	public object ReturnValue
	{
		[Token(Token = "0x6001F0D")]
		[Address(RVA = "0x5398510", Offset = "0x5397510", VA = "0x5398510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EF")]
	public string TypeName
	{
		[Token(Token = "0x6001F0E")]
		[Address(RVA = "0x5398120", Offset = "0x5397120", VA = "0x5398120", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F0")]
	public string Uri
	{
		[Token(Token = "0x6001F0F")]
		[Address(RVA = "0x5398520", Offset = "0x5397520", VA = "0x5398520", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F10")]
		[Address(RVA = "0x5398600", Offset = "0x5397600", VA = "0x5398600")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001F11")]
		[Address(RVA = "0x5398610", Offset = "0x5397610", VA = "0x5398610", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F12")]
		[Address(RVA = "0x5398620", Offset = "0x5397620", VA = "0x5398620", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F15")]
		[Address(RVA = "0x5398B10", Offset = "0x5397B10", VA = "0x5398B10", Slot = "18")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F16")]
		[Address(RVA = "0x5398B20", Offset = "0x5397B20", VA = "0x5398B20", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x6001EFF")]
	[Address(RVA = "0x53881E0", Offset = "0x53871E0", VA = "0x53881E0")]
	internal MethodResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001F00")]
	[Address(RVA = "0x537E700", Offset = "0x537D700", VA = "0x537E700")]
	internal MethodResponse(object returnValue, object[] outArgs, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001F01")]
	[Address(RVA = "0x53899C0", Offset = "0x53889C0", VA = "0x53899C0")]
	internal MethodResponse(IMethodCallMessage msg, System.Runtime.Remoting.Messaging.CADMethodReturnMessage retmsg)
	{
	}

	[Token(Token = "0x6001F02")]
	[Address(RVA = "0x5394900", Offset = "0x5393900", VA = "0x5394900")]
	internal MethodResponse(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F03")]
	[Address(RVA = "0x5397950", Offset = "0x5396950", VA = "0x5397950")]
	internal void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001F13")]
	[Address(RVA = "0x5398630", Offset = "0x5397630", VA = "0x5398630", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x5398660", Offset = "0x5397660", VA = "0x5398660", Slot = "23")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
