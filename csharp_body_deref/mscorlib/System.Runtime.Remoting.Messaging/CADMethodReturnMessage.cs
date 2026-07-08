using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A2")]
internal class CADMethodReturnMessage : System.Runtime.Remoting.Messaging.CADMessageBase
{
	[Token(Token = "0x4000F63")]
	[FieldOffset(Offset = "0x38")]
	private object _returnValue;

	[Token(Token = "0x4000F64")]
	[FieldOffset(Offset = "0x40")]
	private System.Runtime.Remoting.Messaging.CADArgHolder _exception;

	[Token(Token = "0x4000F65")]
	[FieldOffset(Offset = "0x48")]
	private Type[] _sig;

	[Token(Token = "0x170003A9")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001E39")]
		[Address(RVA = "0x4EA44D0", Offset = "0x4EA44D0", VA = "0x4EA44D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x4EA3DF0", Offset = "0x4EA3DF0", VA = "0x4EA3DF0")]
	internal static System.Runtime.Remoting.Messaging.CADMethodReturnMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x4EA3E70", Offset = "0x4EA3E70", VA = "0x4EA3E70")]
	internal CADMethodReturnMessage(IMethodReturnMessage retMsg)
	{
	}

	[Token(Token = "0x6001E35")]
	[Address(RVA = "0x4EA42E0", Offset = "0x4EA42E0", VA = "0x4EA42E0")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001E36")]
	[Address(RVA = "0x4EA4410", Offset = "0x4EA4410", VA = "0x4EA4410")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x4EA4420", Offset = "0x4EA4420", VA = "0x4EA4420")]
	internal object GetReturnValue(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x4EA4430", Offset = "0x4EA4430", VA = "0x4EA4430")]
	internal Exception GetException(ArrayList args)
	{
		return null;
	}
}
