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

[Token(Token = "0x20003B9")]
[ComVisible(true)]
public interface IMethodMessage : IMessage
{
	[Token(Token = "0x170003C0")]
	int ArgCount
	{
		[Token(Token = "0x6001EB6")]
		get;
	}

	[Token(Token = "0x170003C1")]
	object[] Args
	{
		[Token(Token = "0x6001EB7")]
		get;
	}

	[Token(Token = "0x170003C2")]
	LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001EB8")]
		get;
	}

	[Token(Token = "0x170003C3")]
	MethodBase MethodBase
	{
		[Token(Token = "0x6001EB9")]
		get;
	}

	[Token(Token = "0x170003C4")]
	string MethodName
	{
		[Token(Token = "0x6001EBA")]
		get;
	}

	[Token(Token = "0x170003C5")]
	object MethodSignature
	{
		[Token(Token = "0x6001EBB")]
		get;
	}

	[Token(Token = "0x170003C6")]
	string TypeName
	{
		[Token(Token = "0x6001EBC")]
		get;
	}

	[Token(Token = "0x170003C7")]
	string Uri
	{
		[Token(Token = "0x6001EBD")]
		get;
	}

	[Token(Token = "0x6001EBE")]
	object GetArg(int argNum);
}
