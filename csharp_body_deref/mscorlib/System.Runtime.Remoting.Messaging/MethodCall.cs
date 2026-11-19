// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.MethodCall
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
[Token(Token = "0x20003BB")]
[ComVisible(true)]
[CLSCompliant(false)]
public class MethodCall : IMethodCallMessage, IMethodMessage, IMessage, ISerializable, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000EDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _uri;

	[Token(Token = "0x4000EDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _typeName;

	[Token(Token = "0x4000EDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _methodName;

	[Token(Token = "0x4000EE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object[] _args;

	[Token(Token = "0x4000EE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000EE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000EE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LogicalCallContext _callContext;

	[Token(Token = "0x4000EE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000EE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type[] _genericArguments;

	[Token(Token = "0x4000EE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected IDictionary ExternalProperties;

	[Token(Token = "0x4000EE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected IDictionary InternalProperties;

	[Token(Token = "0x170003CB")]
	public int ArgCount
	{
		[Token(Token = "0x6001EC8")]
		[Address(RVA = "0x53951A0", Offset = "0x53941A0", VA = "0x53951A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003CC")]
	public object[] Args
	{
		[Token(Token = "0x6001EC9")]
		[Address(RVA = "0x53951C0", Offset = "0x53941C0", VA = "0x53951C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001ECA")]
		[Address(RVA = "0x53951D0", Offset = "0x53941D0", VA = "0x53951D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001ECB")]
		[Address(RVA = "0x5395250", Offset = "0x5394250", VA = "0x5395250", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CF")]
	public string MethodName
	{
		[Token(Token = "0x6001ECC")]
		[Address(RVA = "0x5395880", Offset = "0x5394880", VA = "0x5395880", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D0")]
	public object MethodSignature
	{
		[Token(Token = "0x6001ECD")]
		[Address(RVA = "0x53958D0", Offset = "0x53948D0", VA = "0x53958D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001ECE")]
		[Address(RVA = "0x5393750", Offset = "0x5392750", VA = "0x5393750", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	public string TypeName
	{
		[Token(Token = "0x6001ED0")]
		[Address(RVA = "0x5395BA0", Offset = "0x5394BA0", VA = "0x5395BA0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D3")]
	public string Uri
	{
		[Token(Token = "0x6001ED1")]
		[Address(RVA = "0x5395C00", Offset = "0x5394C00", VA = "0x5395C00", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ED2")]
		[Address(RVA = "0x5395C10", Offset = "0x5394C10", VA = "0x5395C10")]
		set
		{
		}
	}

	[Token(Token = "0x170003D4")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001ED3")]
		[Address(RVA = "0x5395C20", Offset = "0x5394C20", VA = "0x5395C20", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ED4")]
		[Address(RVA = "0x5395C30", Offset = "0x5394C30", VA = "0x5395C30", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003D5")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001EDA")]
		[Address(RVA = "0x5395EE0", Offset = "0x5394EE0", VA = "0x5395EE0", Slot = "15")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EDB")]
		[Address(RVA = "0x5395EF0", Offset = "0x5394EF0", VA = "0x5395EF0", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x170003D6")]
	private Type[] GenericArguments
	{
		[Token(Token = "0x6001EDC")]
		[Address(RVA = "0x5395DD0", Offset = "0x5394DD0", VA = "0x5395DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001EC2")]
	[Address(RVA = "0x5392510", Offset = "0x5391510", VA = "0x5392510")]
	internal MethodCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001EC3")]
	[Address(RVA = "0x5394F70", Offset = "0x5393F70", VA = "0x5394F70")]
	internal MethodCall(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EC4")]
	[Address(RVA = "0x53924F0", Offset = "0x53914F0", VA = "0x53924F0")]
	internal MethodCall()
	{
	}

	[Token(Token = "0x6001EC5")]
	[Address(RVA = "0x537EDB0", Offset = "0x537DDB0", VA = "0x537EDB0")]
	internal void CopyFrom(IMethodMessage call)
	{
	}

	[Token(Token = "0x6001EC6")]
	[Address(RVA = "0x5392C60", Offset = "0x5391C60", VA = "0x5392C60", Slot = "19")]
	internal virtual void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001EC7")]
	[Address(RVA = "0x5393290", Offset = "0x5392290", VA = "0x5393290", Slot = "20")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001ECF")]
	[Address(RVA = "0x5395A20", Offset = "0x5394A20", VA = "0x5395A20", Slot = "22")]
	internal virtual void InitDictionary()
	{
	}

	[Token(Token = "0x6001ED5")]
	[Address(RVA = "0x5395C40", Offset = "0x5394C40", VA = "0x5395C40", Slot = "12")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001ED6")]
	[Address(RVA = "0x5395C70", Offset = "0x5394C70", VA = "0x5395C70", Slot = "23")]
	public virtual void Init()
	{
	}

	[Token(Token = "0x6001ED7")]
	[Address(RVA = "0x5395280", Offset = "0x5394280", VA = "0x5395280")]
	public void ResolveMethod()
	{
	}

	[Token(Token = "0x6001ED8")]
	[Address(RVA = "0x5395C80", Offset = "0x5394C80", VA = "0x5395C80")]
	private Type CastTo(string clientType, Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001ED9")]
	[Address(RVA = "0x5395E40", Offset = "0x5394E40", VA = "0x5395E40")]
	private static string GetTypeNameFromAssemblyQualifiedName(string aqname)
	{
		return null;
	}
}
