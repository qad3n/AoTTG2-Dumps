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

[Token(Token = "0x20003AB")]
internal class CADSerializer
{
	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x19F0F10", Offset = "0x19EF510", VA = "0x1819F0F10")]
	internal static IMessage DeserializeMessage(MemoryStream mem, IMethodCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x19F1100", Offset = "0x19EF700", VA = "0x1819F1100")]
	internal static MemoryStream SerializeMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E0E")]
	[Address(RVA = "0x19F0F50", Offset = "0x19EF550", VA = "0x1819F0F50")]
	internal static object DeserializeObjectSafe(byte[] mem)
	{
		return null;
	}

	[Token(Token = "0x6001E0F")]
	[Address(RVA = "0x19F11E0", Offset = "0x19EF7E0", VA = "0x1819F11E0")]
	internal static MemoryStream SerializeObject(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001E10")]
	[Address(RVA = "0x19F1060", Offset = "0x19EF660", VA = "0x1819F1060")]
	internal static object DeserializeObject(MemoryStream mem)
	{
		return null;
	}
}
