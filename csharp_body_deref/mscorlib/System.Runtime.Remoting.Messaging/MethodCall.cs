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
[Token(Token = "0x20003E2")]
[CLSCompliant(false)]
[ComVisible(true)]
public class MethodCall : IMethodCallMessage, IMethodMessage, IMessage, ISerializable, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000F7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _uri;

	[Token(Token = "0x4000F7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _typeName;

	[Token(Token = "0x4000F7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _methodName;

	[Token(Token = "0x4000F80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object[] _args;

	[Token(Token = "0x4000F81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000F82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000F83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LogicalCallContext _callContext;

	[Token(Token = "0x4000F84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000F85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type[] _genericArguments;

	[Token(Token = "0x4000F86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected IDictionary ExternalProperties;

	[Token(Token = "0x4000F87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected IDictionary InternalProperties;

	[Token(Token = "0x170003CC")]
	public int ArgCount
	{
		[Token(Token = "0x6001EF2")]
		[Address(RVA = "0x1A01C70", Offset = "0x1A00270", VA = "0x181A01C70", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003CD")]
	public object[] Args
	{
		[Token(Token = "0x6001EF3")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EF4")]
		[Address(RVA = "0x1A01D10", Offset = "0x1A00310", VA = "0x181A01D10", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CF")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001EF5")]
		[Address(RVA = "0x1A01D80", Offset = "0x1A00380", VA = "0x181A01D80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D0")]
	public string MethodName
	{
		[Token(Token = "0x6001EF6")]
		[Address(RVA = "0x1A01DB0", Offset = "0x1A003B0", VA = "0x181A01DB0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public object MethodSignature
	{
		[Token(Token = "0x6001EF7")]
		[Address(RVA = "0x1A01E00", Offset = "0x1A00400", VA = "0x181A01E00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001EF8")]
		[Address(RVA = "0x19F5860", Offset = "0x19F3E60", VA = "0x1819F5860", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D3")]
	public string TypeName
	{
		[Token(Token = "0x6001EFA")]
		[Address(RVA = "0x1A01F60", Offset = "0x1A00560", VA = "0x181A01F60", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D4")]
	public string Uri
	{
		[Token(Token = "0x6001EFB")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EFC")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170003D5")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001EFD")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001EFE")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003D6")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F04")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "15")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F05")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x170003D7")]
	private Type[] GenericArguments
	{
		[Token(Token = "0x6001F06")]
		[Address(RVA = "0x1A01C90", Offset = "0x1A00290", VA = "0x181A01C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001EEC")]
	[Address(RVA = "0x19F5610", Offset = "0x19F3C10", VA = "0x1819F5610")]
	internal MethodCall(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001EED")]
	[Address(RVA = "0x1A01930", Offset = "0x19FFF30", VA = "0x181A01930")]
	internal MethodCall(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
	{
	}

	[Token(Token = "0x6001EEE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal MethodCall()
	{
	}

	[Token(Token = "0x6001EEF")]
	[Address(RVA = "0x1A006C0", Offset = "0x19FECC0", VA = "0x181A006C0")]
	internal void CopyFrom(IMethodMessage call)
	{
	}

	[Token(Token = "0x6001EF0")]
	[Address(RVA = "0x1A00D40", Offset = "0x19FF340", VA = "0x181A00D40", Slot = "19")]
	internal virtual void InitMethodProperty(string key, object value)
	{
	}

	[Token(Token = "0x6001EF1")]
	[Address(RVA = "0x1A008C0", Offset = "0x19FEEC0", VA = "0x181A008C0", Slot = "20")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001EF9")]
	[Address(RVA = "0x1A00C90", Offset = "0x19FF290", VA = "0x181A00C90", Slot = "22")]
	internal virtual void InitDictionary()
	{
	}

	[Token(Token = "0x6001EFF")]
	[Address(RVA = "0x1A00890", Offset = "0x19FEE90", VA = "0x181A00890", Slot = "12")]
	public object GetArg(int argNum)
	{
		return null;
	}

	[Token(Token = "0x6001F00")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "23")]
	public virtual void Init()
	{
	}

	[Token(Token = "0x6001F01")]
	[Address(RVA = "0x1A01230", Offset = "0x19FF830", VA = "0x181A01230")]
	public void ResolveMethod()
	{
	}

	[Token(Token = "0x6001F02")]
	[Address(RVA = "0x1A004D0", Offset = "0x19FEAD0", VA = "0x181A004D0")]
	private Type CastTo(string clientType, Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001F03")]
	[Address(RVA = "0x1A00C00", Offset = "0x19FF200", VA = "0x181A00C00")]
	private static string GetTypeNameFromAssemblyQualifiedName(string aqname)
	{
		return null;
	}
}
