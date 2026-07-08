using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003B3")]
[CLSCompliant(false)]
[ComVisible(true)]
public class MethodCall : IMethodCallMessage, IMethodMessage, IMessage, ISerializable, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _uri;

	[Token(Token = "0x4000F78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _typeName;

	[Token(Token = "0x4000F79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _methodName;

	[Token(Token = "0x4000F7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object[] _args;

	[Token(Token = "0x4000F7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000F7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000F7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LogicalCallContext _callContext;

	[Token(Token = "0x4000F7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000F7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type[] _genericArguments;

	[Token(Token = "0x4000F80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected IDictionary ExternalProperties;

	[Token(Token = "0x4000F81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected IDictionary InternalProperties;

	[Token(Token = "0x170003CA")]
	public int ArgCount
	{
		[Token(Token = "0x6001E83")]
		[Address(RVA = "0x4EA79C0", Offset = "0x4EA79C0", VA = "0x4EA79C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003CB")]
	public object[] Args
	{
		[Token(Token = "0x6001E84")]
		[Address(RVA = "0x4EA79E0", Offset = "0x4EA79E0", VA = "0x4EA79E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CC")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001E85")]
		[Address(RVA = "0x4EA79F0", Offset = "0x4EA79F0", VA = "0x4EA79F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001E86")]
		[Address(RVA = "0x4EA7A70", Offset = "0x4EA7A70", VA = "0x4EA7A70", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	public string MethodName
	{
		[Token(Token = "0x6001E87")]
		[Address(RVA = "0x4EA80E0", Offset = "0x4EA80E0", VA = "0x4EA80E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CF")]
	public object MethodSignature
	{
		[Token(Token = "0x6001E88")]
		[Address(RVA = "0x4EA8130", Offset = "0x4EA8130", VA = "0x4EA8130", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D0")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001E89")]
		[Address(RVA = "0x4EA5F50", Offset = "0x4EA5F50", VA = "0x4EA5F50", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public string TypeName
	{
		[Token(Token = "0x6001E8B")]
		[Address(RVA = "0x4EA8400", Offset = "0x4EA8400", VA = "0x4EA8400", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	public string Uri
	{
		[Token(Token = "0x6001E8C")]
		[Address(RVA = "0x4EA8460", Offset = "0x4EA8460", VA = "0x4EA8460", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E8D")]
		[Address(RVA = "0x4EA8470", Offset = "0x4EA8470", VA = "0x4EA8470")]
		set
		{
		}
	}

	[Token(Token = "0x170003D3")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001E8E")]
		[Address(RVA = "0x4EA8480", Offset = "0x4EA8480", VA = "0x4EA8480", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E8F")]
		[Address(RVA = "0x4EA8490", Offset = "0x4EA8490", VA = "0x4EA8490", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003D4")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001E95")]
		[Address(RVA = "0x4EA8770", Offset = "0x4EA8770", VA = "0x4EA8770", Slot = "15")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E96")]
		[Address(RVA = "0x4EA8780", Offset = "0x4EA8780", VA = "0x4EA8780", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x170003D5")]
	private Type[] GenericArguments
	{
		[Token(Token = "0x6001E97")]
		[Address(RVA = "0x4EA8660", Offset = "0x4EA8660", VA = "0x4EA8660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x4EA4CA0", Offset = "0x4EA4CA0", VA = "0x4EA4CA0")]
	internal MethodCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x4EA7790", Offset = "0x4EA7790", VA = "0x4EA7790")]
	internal MethodCall(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x4EA4C80", Offset = "0x4EA4C80", VA = "0x4EA4C80")]
	internal MethodCall()
	{
	}

	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x4E90A70", Offset = "0x4E90A70", VA = "0x4E90A70")]
	internal void CopyFrom(IMethodMessage call)
	{
	}

	[Token(Token = "0x6001E81")]
	[Address(RVA = "0x4EA53F0", Offset = "0x4EA53F0", VA = "0x4EA53F0", Slot = "19")]
	internal virtual void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x4EA5A30", Offset = "0x4EA5A30", VA = "0x4EA5A30", Slot = "20")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x4EA8280", Offset = "0x4EA8280", VA = "0x4EA8280", Slot = "22")]
	internal virtual void InitDictionary()
	{
	}

	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x4EA84A0", Offset = "0x4EA84A0", VA = "0x4EA84A0", Slot = "12")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x4EA84D0", Offset = "0x4EA84D0", VA = "0x4EA84D0", Slot = "23")]
	public virtual void Init()
	{
	}

	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x4EA7AA0", Offset = "0x4EA7AA0", VA = "0x4EA7AA0")]
	public void ResolveMethod()
	{
	}

	[Token(Token = "0x6001E93")]
	[Address(RVA = "0x4EA84E0", Offset = "0x4EA84E0", VA = "0x4EA84E0")]
	private Type CastTo(string clientType, Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001E94")]
	[Address(RVA = "0x4EA86D0", Offset = "0x4EA86D0", VA = "0x4EA86D0")]
	private static string GetTypeNameFromAssemblyQualifiedName(string aqname)
	{
		return null;
	}
}
