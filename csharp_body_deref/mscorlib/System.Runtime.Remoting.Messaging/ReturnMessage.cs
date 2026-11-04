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

[Token(Token = "0x20003EE")]
[ComVisible(true)]
public class ReturnMessage : IMethodReturnMessage, IMethodMessage, IMessage, System.Runtime.Remoting.Messaging.IInternalMessage
{
	[Token(Token = "0x4000FB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _outArgs;

	[Token(Token = "0x4000FB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object[] _args;

	[Token(Token = "0x4000FB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private LogicalCallContext _callCtx;

	[Token(Token = "0x4000FBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _returnValue;

	[Token(Token = "0x4000FBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _uri;

	[Token(Token = "0x4000FBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Exception _exception;

	[Token(Token = "0x4000FBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private MethodBase _methodBase;

	[Token(Token = "0x4000FBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _methodName;

	[Token(Token = "0x4000FBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Type[] _methodSignature;

	[Token(Token = "0x4000FC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string _typeName;

	[Token(Token = "0x4000FC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties;

	[Token(Token = "0x4000FC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.Runtime.Remoting.Identity _targetIdentity;

	[Token(Token = "0x4000FC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo;

	[Token(Token = "0x17000404")]
	public int ArgCount
	{
		[Token(Token = "0x6001F68")]
		[Address(RVA = "0x1A07BE0", Offset = "0x1A061E0", VA = "0x181A07BE0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000405")]
	public object[] Args
	{
		[Token(Token = "0x6001F69")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000406")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001F6A")]
		[Address(RVA = "0x1A07C00", Offset = "0x1A06200", VA = "0x181A07C00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000407")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001F6B")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000408")]
	public string MethodName
	{
		[Token(Token = "0x6001F6C")]
		[Address(RVA = "0x1A07C70", Offset = "0x1A06270", VA = "0x181A07C70", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000409")]
	public object MethodSignature
	{
		[Token(Token = "0x6001F6D")]
		[Address(RVA = "0x1A07CD0", Offset = "0x1A062D0", VA = "0x181A07CD0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040A")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001F6E")]
		[Address(RVA = "0x1A07EF0", Offset = "0x1A064F0", VA = "0x181A07EF0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040B")]
	public string TypeName
	{
		[Token(Token = "0x6001F6F")]
		[Address(RVA = "0x1A07F60", Offset = "0x1A06560", VA = "0x181A07F60", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040C")]
	public string Uri
	{
		[Token(Token = "0x6001F70")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F71")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700040D")]
	private string System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002EUri
	{
		[Token(Token = "0x6001F72")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F73")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700040E")]
	public Exception Exception
	{
		[Token(Token = "0x6001F75")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040F")]
	public object[] OutArgs
	{
		[Token(Token = "0x6001F76")]
		[Address(RVA = "0x1A07E30", Offset = "0x1A06430", VA = "0x181A07E30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000410")]
	public virtual object ReturnValue
	{
		[Token(Token = "0x6001F77")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000411")]
	private System.Runtime.Remoting.Identity System_002ERuntime_002ERemoting_002EMessaging_002EIInternalMessage_002ETargetIdentity
	{
		[Token(Token = "0x6001F78")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F79")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x1A07AE0", Offset = "0x1A060E0", VA = "0x181A07AE0")]
	public ReturnMessage(object ret, object[] outArgs, int outArgsCount, LogicalCallContext callCtx, IMethodCallMessage mcm)
	{
	}

	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x1A07A00", Offset = "0x1A06000", VA = "0x181A07A00")]
	public ReturnMessage(Exception e, IMethodCallMessage mcm)
	{
	}

	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x1A079D0", Offset = "0x1A05FD0", VA = "0x181A079D0", Slot = "15")]
	public object GetArg(int argNum)
	{
		return null;
	}
}
