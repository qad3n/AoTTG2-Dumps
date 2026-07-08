using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003B1")]
[ComVisible(true)]
public interface IMethodMessage : IMessage
{
	[Token(Token = "0x170003BF")]
	int ArgCount
	{
		[Token(Token = "0x6001E71")]
		get;
	}

	[Token(Token = "0x170003C0")]
	object[] Args
	{
		[Token(Token = "0x6001E72")]
		get;
	}

	[Token(Token = "0x170003C1")]
	LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001E73")]
		get;
	}

	[Token(Token = "0x170003C2")]
	MethodBase MethodBase
	{
		[Token(Token = "0x6001E74")]
		get;
	}

	[Token(Token = "0x170003C3")]
	string MethodName
	{
		[Token(Token = "0x6001E75")]
		get;
	}

	[Token(Token = "0x170003C4")]
	object MethodSignature
	{
		[Token(Token = "0x6001E76")]
		get;
	}

	[Token(Token = "0x170003C5")]
	string TypeName
	{
		[Token(Token = "0x6001E77")]
		get;
	}

	[Token(Token = "0x170003C6")]
	string Uri
	{
		[Token(Token = "0x6001E78")]
		get;
	}

	[Token(Token = "0x6001E79")]
	object GetArg(int argNum);
}
