// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ErrorMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003A9")]
internal class ErrorMessage : IMethodCallMessage, IMethodMessage, IMessage
{
	[Token(Token = "0x4000F72")]
	[FieldOffset(Offset = "0x10")]
	private string _uri;

	[Token(Token = "0x170003B3")]
	public int ArgCount
	{
		[Token(Token = "0x6001E5E")]
		[Address(RVA = "0x3B8CFB0", Offset = "0x3B8CFB0", VA = "0x3B8CFB0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B4")]
	public object[] Args
	{
		[Token(Token = "0x6001E5F")]
		[Address(RVA = "0x3B8CFC0", Offset = "0x3B8CFC0", VA = "0x3B8CFC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B5")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001E60")]
		[Address(RVA = "0x3B8CFD0", Offset = "0x3B8CFD0", VA = "0x3B8CFD0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B6")]
	public string MethodName
	{
		[Token(Token = "0x6001E61")]
		[Address(RVA = "0x3B8CFE0", Offset = "0x3B8CFE0", VA = "0x3B8CFE0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B7")]
	public object MethodSignature
	{
		[Token(Token = "0x6001E62")]
		[Address(RVA = "0x3B8D010", Offset = "0x3B8D010", VA = "0x3B8D010", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001E63")]
		[Address(RVA = "0x3B8D020", Offset = "0x3B8D020", VA = "0x3B8D020", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public string TypeName
	{
		[Token(Token = "0x6001E64")]
		[Address(RVA = "0x3B8D030", Offset = "0x3B8D030", VA = "0x3B8D030", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BA")]
	public string Uri
	{
		[Token(Token = "0x6001E65")]
		[Address(RVA = "0x3B8D060", Offset = "0x3B8D060", VA = "0x3B8D060", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BB")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001E67")]
		[Address(RVA = "0x3B8D080", Offset = "0x3B8D080", VA = "0x3B8D080", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x3B81520", Offset = "0x3B81520", VA = "0x3B81520")]
	public ErrorMessage()
	{
	}

	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x3B8D070", Offset = "0x3B8D070", VA = "0x3B8D070", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}
}
