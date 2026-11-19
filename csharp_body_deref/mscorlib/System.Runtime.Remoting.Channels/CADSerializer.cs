// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.CADSerializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x2000384")]
internal class CADSerializer
{
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x5389980", Offset = "0x5388980", VA = "0x5389980")]
	internal static IMessage DeserializeMessage(MemoryStream mem, IMethodCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x5389330", Offset = "0x5388330", VA = "0x5389330")]
	internal static MemoryStream SerializeMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x538A230", Offset = "0x5389230", VA = "0x538A230")]
	internal static object DeserializeObjectSafe(byte[] mem)
	{
		return null;
	}

	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x538A350", Offset = "0x5389350", VA = "0x538A350")]
	internal static MemoryStream SerializeObject(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x538A2C0", Offset = "0x53892C0", VA = "0x538A2C0")]
	internal static object DeserializeObject(MemoryStream mem)
	{
		return null;
	}
}
