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
[Token(Token = "0x20003B1")]
internal class ErrorMessage : IMethodCallMessage, IMethodMessage, IMessage
{
	[Token(Token = "0x4000EDC")]
	[FieldOffset(Offset = "0x10")]
	private string _uri;

	[Token(Token = "0x170003B4")]
	public int ArgCount
	{
		[Token(Token = "0x6001EA3")]
		[Address(RVA = "0x5394C70", Offset = "0x5393C70", VA = "0x5394C70", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B5")]
	public object[] Args
	{
		[Token(Token = "0x6001EA4")]
		[Address(RVA = "0x5394C80", Offset = "0x5393C80", VA = "0x5394C80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B6")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001EA5")]
		[Address(RVA = "0x5394C90", Offset = "0x5393C90", VA = "0x5394C90", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B7")]
	public string MethodName
	{
		[Token(Token = "0x6001EA6")]
		[Address(RVA = "0x5394CA0", Offset = "0x5393CA0", VA = "0x5394CA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public object MethodSignature
	{
		[Token(Token = "0x6001EA7")]
		[Address(RVA = "0x5394CD0", Offset = "0x5393CD0", VA = "0x5394CD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0x5394CE0", Offset = "0x5393CE0", VA = "0x5394CE0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BA")]
	public string TypeName
	{
		[Token(Token = "0x6001EA9")]
		[Address(RVA = "0x5394CF0", Offset = "0x5393CF0", VA = "0x5394CF0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BB")]
	public string Uri
	{
		[Token(Token = "0x6001EAA")]
		[Address(RVA = "0x5394D20", Offset = "0x5393D20", VA = "0x5394D20", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BC")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EAC")]
		[Address(RVA = "0x5394D40", Offset = "0x5393D40", VA = "0x5394D40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001EA2")]
	[Address(RVA = "0x53892E0", Offset = "0x53882E0", VA = "0x53892E0")]
	public ErrorMessage()
	{
	}

	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x5394D30", Offset = "0x5393D30", VA = "0x5394D30", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}
}
