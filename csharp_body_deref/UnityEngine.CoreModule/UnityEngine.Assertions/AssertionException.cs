// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Assertions.AssertionException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Assertions;

[Token(Token = "0x200030E")]
public class AssertionException : Exception
{
	[Token(Token = "0x40007B8")]
	[FieldOffset(Offset = "0x90")]
	private string m_UserMessage;

	[Token(Token = "0x170002ED")]
	public override string Message
	{
		[Token(Token = "0x600127A")]
		[Address(RVA = "0x693C160", Offset = "0x693B160", VA = "0x693C160", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x693B8E0", Offset = "0x693A8E0", VA = "0x693B8E0")]
	public AssertionException(string message, string userMessage)
	{
	}
}
