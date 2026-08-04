// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B89FF0", Offset = "0x3B89FF0", VA = "0x3B89FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x3B89910", Offset = "0x3B89910", VA = "0x3B89910")]
	internal static System.Runtime.Remoting.Messaging.CADMethodReturnMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x3B89990", Offset = "0x3B89990", VA = "0x3B89990")]
	internal CADMethodReturnMessage(IMethodReturnMessage retMsg)
	{
	}

	[Token(Token = "0x6001E35")]
	[Address(RVA = "0x3B89E00", Offset = "0x3B89E00", VA = "0x3B89E00")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001E36")]
	[Address(RVA = "0x3B89F30", Offset = "0x3B89F30", VA = "0x3B89F30")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x3B89F40", Offset = "0x3B89F40", VA = "0x3B89F40")]
	internal object GetReturnValue(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x3B89F50", Offset = "0x3B89F50", VA = "0x3B89F50")]
	internal Exception GetException(ArrayList args)
	{
		return null;
	}
}
