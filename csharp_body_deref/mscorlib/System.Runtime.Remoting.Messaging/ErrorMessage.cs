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
[Token(Token = "0x20003D8")]
internal class ErrorMessage : IMethodCallMessage, IMethodMessage, IMessage
{
	[Token(Token = "0x4000F7C")]
	[FieldOffset(Offset = "0x10")]
	private string _uri;

	[Token(Token = "0x170003B5")]
	public int ArgCount
	{
		[Token(Token = "0x6001ECD")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B6")]
	public object[] Args
	{
		[Token(Token = "0x6001ECE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B7")]
	public MethodBase MethodBase
	{
		[Token(Token = "0x6001ECF")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B8")]
	public string MethodName
	{
		[Token(Token = "0x6001ED0")]
		[Address(RVA = "0x19FAC00", Offset = "0x19F9200", VA = "0x1819FAC00", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public object MethodSignature
	{
		[Token(Token = "0x6001ED1")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BA")]
	public virtual IDictionary Properties
	{
		[Token(Token = "0x6001ED2")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BB")]
	public string TypeName
	{
		[Token(Token = "0x6001ED3")]
		[Address(RVA = "0x19FAC30", Offset = "0x19F9230", VA = "0x1819FAC30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BC")]
	public string Uri
	{
		[Token(Token = "0x6001ED4")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BD")]
	public LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001ED6")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001ECC")]
	[Address(RVA = "0x19FABB0", Offset = "0x19F91B0", VA = "0x1819FABB0")]
	public ErrorMessage()
	{
	}

	[Token(Token = "0x6001ED5")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
	public object GetArg(int arg_num)
	{
		return null;
	}
}
