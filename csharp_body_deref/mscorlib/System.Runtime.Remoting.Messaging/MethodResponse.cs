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
[Token(Token = "0x20003E6")]
[CLSCompliant(false)]
[ComVisible(true)]
public class MethodResponse : IMethodReturnMessage, IMethodMessage, IMessage, ISerializable, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _methodName;

	[Token(Token = "0x4000F91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _uri;

	[Token(Token = "0x4000F92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _typeName;

	[Token(Token = "0x4000F93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000F94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object _returnValue;

	[Token(Token = "0x4000F95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Exception _exception;

	[Token(Token = "0x4000F96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000F97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo;

	[Token(Token = "0x4000F98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private object[] _args;

	[Token(Token = "0x4000F99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object[] _outArgs;

	[Token(Token = "0x4000F9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private IMethodCallMessage _callMsg;

	[Token(Token = "0x4000F9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private LogicalCallContext _callContext;

	[Token(Token = "0x4000F9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000F9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected IDictionary ExternalProperties;

	[Token(Token = "0x4000F9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected IDictionary InternalProperties;

	[Token(Token = "0x170003E6")]
	public int ArgCount
	{
		[Token(Token = "0x6001F2E")]
		[Address(RVA = "0x1A02F30", Offset = "0x1A01530", VA = "0x181A02F30", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E7")]
	public object[] Args
	{
		[Token(Token = "0x6001F2F")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	public Exception Exception
	{
		[Token(Token = "0x6001F30")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E9")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001F31")]
		[Address(RVA = "0x1A02F50", Offset = "0x1A01550", VA = "0x181A02F50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EA")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001F32")]
		[Address(RVA = "0x1A02FC0", Offset = "0x1A015C0", VA = "0x181A02FC0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EB")]
	public string MethodName
	{
		[Token(Token = "0x6001F33")]
		[Address(RVA = "0x1A03120", Offset = "0x1A01720", VA = "0x181A03120", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	public object MethodSignature
	{
		[Token(Token = "0x6001F34")]
		[Address(RVA = "0x1A03190", Offset = "0x1A01790", VA = "0x181A03190", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003ED")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F35")]
		[Address(RVA = "0x1A03270", Offset = "0x1A01870", VA = "0x181A03270", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EE")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001F36")]
		[Address(RVA = "0x19F5AA0", Offset = "0x19F40A0", VA = "0x1819F5AA0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EF")]
	public object ReturnValue
	{
		[Token(Token = "0x6001F37")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F0")]
	public string TypeName
	{
		[Token(Token = "0x6001F38")]
		[Address(RVA = "0x1A03480", Offset = "0x1A01A80", VA = "0x181A03480", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F1")]
	public string Uri
	{
		[Token(Token = "0x6001F39")]
		[Address(RVA = "0x1A028C0", Offset = "0x1A00EC0", VA = "0x181A028C0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F3A")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170003F2")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001F3B")]
		[Address(RVA = "0x1A028C0", Offset = "0x1A00EC0", VA = "0x181A028C0", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F3C")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x170003F3")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F3F")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770", Slot = "18")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F40")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x1A02930", Offset = "0x1A00F30", VA = "0x181A02930")]
	internal MethodResponse(Exception e, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x1A02A20", Offset = "0x1A01020", VA = "0x181A02A20")]
	internal MethodResponse(object returnValue, object[] outArgs, LogicalCallContext callCtx, IMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x1A02AE0", Offset = "0x1A010E0", VA = "0x181A02AE0")]
	internal MethodResponse(IMethodCallMessage msg, System.Runtime.Remoting.Messaging.CADMethodReturnMessage retmsg)
	{
	}

	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x19F5A20", Offset = "0x19F4020", VA = "0x1819F5A20")]
	internal MethodResponse(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x1A02350", Offset = "0x1A00950", VA = "0x181A02350")]
	internal void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x1A01FD0", Offset = "0x1A005D0", VA = "0x181A01FD0", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x1A02000", Offset = "0x1A00600", VA = "0x181A02000", Slot = "23")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
