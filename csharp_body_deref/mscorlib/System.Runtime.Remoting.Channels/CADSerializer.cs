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

[Token(Token = "0x200037C")]
internal class CADSerializer
{
	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x3B81B90", Offset = "0x3B81B90", VA = "0x3B81B90")]
	internal static IMessage DeserializeMessage(MemoryStream mem, IMethodCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x3B81570", Offset = "0x3B81570", VA = "0x3B81570")]
	internal static MemoryStream SerializeMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x3B82330", Offset = "0x3B82330", VA = "0x3B82330")]
	internal static object DeserializeObjectSafe(byte[] mem)
	{
		return null;
	}

	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x3B82450", Offset = "0x3B82450", VA = "0x3B82450")]
	internal static MemoryStream SerializeObject(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x3B823C0", Offset = "0x3B823C0", VA = "0x3B823C0")]
	internal static object DeserializeObject(MemoryStream mem)
	{
		return null;
	}
}
