using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A1")]
internal class CADMethodCallMessage : System.Runtime.Remoting.Messaging.CADMessageBase
{
	[Token(Token = "0x4000F62")]
	[FieldOffset(Offset = "0x38")]
	private string _uri;

	[Token(Token = "0x170003A7")]
	internal string Uri
	{
		[Token(Token = "0x6001E2D")]
		[Address(RVA = "0x4EA3A40", Offset = "0x4EA3A40", VA = "0x4EA3A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A8")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001E32")]
		[Address(RVA = "0x4EA3DE0", Offset = "0x4EA3DE0", VA = "0x4EA3DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x4E9BFF0", Offset = "0x4E9BFF0", VA = "0x4E9BFF0")]
	internal static System.Runtime.Remoting.Messaging.CADMethodCallMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x4EA3A50", Offset = "0x4EA3A50", VA = "0x4EA3A50")]
	internal CADMethodCallMessage(IMethodCallMessage callMsg)
	{
	}

	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x4EA3CA0", Offset = "0x4EA3CA0", VA = "0x4EA3CA0")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x4EA3DD0", Offset = "0x4EA3DD0", VA = "0x4EA3DD0")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}
}
