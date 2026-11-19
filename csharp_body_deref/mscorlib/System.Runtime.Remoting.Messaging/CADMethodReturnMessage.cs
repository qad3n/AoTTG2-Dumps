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

[Token(Token = "0x20003AA")]
internal class CADMethodReturnMessage : System.Runtime.Remoting.Messaging.CADMessageBase
{
	[Token(Token = "0x4000ECD")]
	[FieldOffset(Offset = "0x38")]
	private object _returnValue;

	[Token(Token = "0x4000ECE")]
	[FieldOffset(Offset = "0x40")]
	private System.Runtime.Remoting.Messaging.CADArgHolder _exception;

	[Token(Token = "0x4000ECF")]
	[FieldOffset(Offset = "0x48")]
	private Type[] _sig;

	[Token(Token = "0x170003AA")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001E7E")]
		[Address(RVA = "0x5391D50", Offset = "0x5390D50", VA = "0x5391D50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E78")]
	[Address(RVA = "0x5391670", Offset = "0x5390670", VA = "0x5391670")]
	internal static System.Runtime.Remoting.Messaging.CADMethodReturnMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E79")]
	[Address(RVA = "0x53916F0", Offset = "0x53906F0", VA = "0x53916F0")]
	internal CADMethodReturnMessage(IMethodReturnMessage retMsg)
	{
	}

	[Token(Token = "0x6001E7A")]
	[Address(RVA = "0x5391B60", Offset = "0x5390B60", VA = "0x5391B60")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001E7B")]
	[Address(RVA = "0x5391C90", Offset = "0x5390C90", VA = "0x5391C90")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E7C")]
	[Address(RVA = "0x5391CA0", Offset = "0x5390CA0", VA = "0x5391CA0")]
	internal object GetReturnValue(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x5391CB0", Offset = "0x5390CB0", VA = "0x5391CB0")]
	internal Exception GetException(ArrayList args)
	{
		return null;
	}
}
