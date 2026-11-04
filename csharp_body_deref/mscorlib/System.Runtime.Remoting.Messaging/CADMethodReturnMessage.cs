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

[Token(Token = "0x20003D1")]
internal class CADMethodReturnMessage : System.Runtime.Remoting.Messaging.CADMessageBase
{
	[Token(Token = "0x4000F6D")]
	[FieldOffset(Offset = "0x38")]
	private object _returnValue;

	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x40")]
	private System.Runtime.Remoting.Messaging.CADArgHolder _exception;

	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x48")]
	private Type[] _sig;

	[Token(Token = "0x170003AB")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001EA2")]
	[Address(RVA = "0x19F0920", Offset = "0x19EEF20", VA = "0x1819F0920")]
	internal static System.Runtime.Remoting.Messaging.CADMethodReturnMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001EA3")]
	[Address(RVA = "0x19F0C20", Offset = "0x19EF220", VA = "0x1819F0C20")]
	internal CADMethodReturnMessage(IMethodReturnMessage retMsg)
	{
	}

	[Token(Token = "0x6001EA4")]
	[Address(RVA = "0x19F09B0", Offset = "0x19EEFB0", VA = "0x1819F09B0")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x19EFBE0", Offset = "0x19EE1E0", VA = "0x1819EFBE0")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x19F0C10", Offset = "0x19EF210", VA = "0x1819F0C10")]
	internal object GetReturnValue(ArrayList args)
	{
		return null;
	}

	[Token(Token = "0x6001EA7")]
	[Address(RVA = "0x19F0B60", Offset = "0x19EF160", VA = "0x1819F0B60")]
	internal Exception GetException(ArrayList args)
	{
		return null;
	}
}
