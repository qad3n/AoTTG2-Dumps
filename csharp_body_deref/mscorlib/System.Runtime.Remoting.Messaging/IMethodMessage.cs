// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.IMethodMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003E0")]
[ComVisible(true)]
public interface IMethodMessage : IMessage
{
	[Token(Token = "0x170003C1")]
	int ArgCount
	{
		[Token(Token = "0x6001EE0")]
		get;
	}

	[Token(Token = "0x170003C2")]
	object[] Args
	{
		[Token(Token = "0x6001EE1")]
		get;
	}

	[Token(Token = "0x170003C3")]
	LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EE2")]
		get;
	}

	[Token(Token = "0x170003C4")]
	MethodBase MethodBase
	{
		[Token(Token = "0x6001EE3")]
		get;
	}

	[Token(Token = "0x170003C5")]
	string MethodName
	{
		[Token(Token = "0x6001EE4")]
		get;
	}

	[Token(Token = "0x170003C6")]
	object MethodSignature
	{
		[Token(Token = "0x6001EE5")]
		get;
	}

	[Token(Token = "0x170003C7")]
	string TypeName
	{
		[Token(Token = "0x6001EE6")]
		get;
	}

	[Token(Token = "0x170003C8")]
	string Uri
	{
		[Token(Token = "0x6001EE7")]
		get;
	}

	[Token(Token = "0x6001EE8")]
	object GetArg(int argNum);
}
