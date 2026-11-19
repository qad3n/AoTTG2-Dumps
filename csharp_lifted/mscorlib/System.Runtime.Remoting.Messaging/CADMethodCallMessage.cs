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

[Token(Token = "0x20003A9")]
internal class CADMethodCallMessage : System.Runtime.Remoting.Messaging.CADMessageBase
{
	[Token(Token = "0x4000ECC")]
	[FieldOffset(Offset = "0x38")]
	private string _uri;

	[Token(Token = "0x170003A8")]
	internal string Uri
	{
		[Token(Token = "0x6001E72")]
		[Address(RVA = "0x53912C0", Offset = "0x53902C0", VA = "0x53912C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A9")]
	internal int PropertiesCount
	{
		[Token(Token = "0x6001E77")]
		[Address(RVA = "0x5391660", Offset = "0x5390660", VA = "0x5391660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x5389900", Offset = "0x5388900", VA = "0x5389900")]
	internal static System.Runtime.Remoting.Messaging.CADMethodCallMessage Create(IMessage callMsg)
	{
		return null;
	}

	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x53912D0", Offset = "0x53902D0", VA = "0x53912D0")]
	internal CADMethodCallMessage(IMethodCallMessage callMsg)
	{
	}

	[Token(Token = "0x6001E75")]
	[Address(RVA = "0x5391520", Offset = "0x5390520", VA = "0x5391520")]
	internal ArrayList GetArguments()
	{
		return null;
	}

	[Token(Token = "0x6001E76")]
	[Address(RVA = "0x5391650", Offset = "0x5390650", VA = "0x5391650")]
	internal object[] GetArgs(ArrayList args)
	{
		return null;
	}
}
