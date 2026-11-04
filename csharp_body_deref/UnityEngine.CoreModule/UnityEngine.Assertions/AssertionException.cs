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
	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x90")]
	private string m_UserMessage;

	[Token(Token = "0x170002E8")]
	public override string Message
	{
		[Token(Token = "0x6001266")]
		[Address(RVA = "0x2F2E820", Offset = "0x2F2CE20", VA = "0x182F2E820", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x2F2E7A0", Offset = "0x2F2CDA0", VA = "0x182F2E7A0")]
	public AssertionException(string message, string userMessage)
	{
	}
}
