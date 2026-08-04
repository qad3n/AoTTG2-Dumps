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
		[Address(RVA = "0x3B89560", Offset = "0x3B89560", VA = "0x3B89560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A8")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001E32")]
		[Address(RVA = "0x3B89900", Offset = "0x3B89900", VA = "0x3B89900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x3B81B10", Offset = "0x3B81B10", VA = "0x3B81B10")]
	internal static System.Runtime.Remoting.Messaging.CADMethodCallMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x3B89570", Offset = "0x3B89570", VA = "0x3B89570")]
	internal CADMethodCallMessage(IMethodCallMessage callMsg)
	{
	}

	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x3B897C0", Offset = "0x3B897C0", VA = "0x3B897C0")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x3B898F0", Offset = "0x3B898F0", VA = "0x3B898F0")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}
}
