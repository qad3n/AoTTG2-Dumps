// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CADMethodCallMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003D0")]
internal class CADMethodCallMessage : System.Runtime.Remoting.Messaging.CADMessageBase
{
	[Token(Token = "0x4000F6C")]
	[FieldOffset(Offset = "0x38")]
	private string _uri;

	[Token(Token = "0x170003A9")]
	internal string Uri
	{
		[Token(Token = "0x6001E9C")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AA")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001EA1")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E9D")]
	[Address(RVA = "0x19EFB50", Offset = "0x19EE150", VA = "0x1819EFB50")]
	internal static System.Runtime.Remoting.Messaging.CADMethodCallMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x19EFDA0", Offset = "0x19EE3A0", VA = "0x1819EFDA0")]
	internal CADMethodCallMessage(IMethodCallMessage callMsg)
	{
	}

	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x19EFBF0", Offset = "0x19EE1F0", VA = "0x1819EFBF0")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x19EFBE0", Offset = "0x19EE1E0", VA = "0x1819EFBE0")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}
}
