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
		[Address(RVA = "0x4EA7490", Offset = "0x4EA7490", VA = "0x4EA7490", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B4")]
	public object[] Args
	{
		[Token(Token = "0x6001E5F")]
		[Address(RVA = "0x4EA74A0", Offset = "0x4EA74A0", VA = "0x4EA74A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B5")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001E60")]
		[Address(RVA = "0x4EA74B0", Offset = "0x4EA74B0", VA = "0x4EA74B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B6")]
	public string MethodName
	{
		[Token(Token = "0x6001E61")]
		[Address(RVA = "0x4EA74C0", Offset = "0x4EA74C0", VA = "0x4EA74C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B7")]
	public object MethodSignature
	{
		[Token(Token = "0x6001E62")]
		[Address(RVA = "0x4EA74F0", Offset = "0x4EA74F0", VA = "0x4EA74F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001E63")]
		[Address(RVA = "0x4EA7500", Offset = "0x4EA7500", VA = "0x4EA7500", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public string TypeName
	{
		[Token(Token = "0x6001E64")]
		[Address(RVA = "0x4EA7510", Offset = "0x4EA7510", VA = "0x4EA7510", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BA")]
	public string Uri
	{
		[Token(Token = "0x6001E65")]
		[Address(RVA = "0x4EA7540", Offset = "0x4EA7540", VA = "0x4EA7540", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BB")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001E67")]
		[Address(RVA = "0x4EA7560", Offset = "0x4EA7560", VA = "0x4EA7560", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x4E9BA00", Offset = "0x4E9BA00", VA = "0x4E9BA00")]
	public ErrorMessage()
	{
	}

	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x4EA7550", Offset = "0x4EA7550", VA = "0x4EA7550", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}
}
