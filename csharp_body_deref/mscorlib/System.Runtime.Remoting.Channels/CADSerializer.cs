using System.IO;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x200037C")]
internal class CADSerializer
{
	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x4E9C070", Offset = "0x4E9C070", VA = "0x4E9C070")]
	internal static IMessage DeserializeMessage(MemoryStream mem, IMethodCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x4E9BA50", Offset = "0x4E9BA50", VA = "0x4E9BA50")]
	internal static MemoryStream SerializeMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x4E9C810", Offset = "0x4E9C810", VA = "0x4E9C810")]
	internal static object DeserializeObjectSafe(byte[] mem)
	{
		return null;
	}

	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x4E9C930", Offset = "0x4E9C930", VA = "0x4E9C930")]
	internal static MemoryStream SerializeObject(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x4E9C8A0", Offset = "0x4E9C8A0", VA = "0x4E9C8A0")]
	internal static object DeserializeObject(MemoryStream mem)
	{
		return null;
	}
}
