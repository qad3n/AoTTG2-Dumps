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

[Token(Token = "0x2000356")]
public class AssertionException : Exception
{
	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x90")]
	private string m_UserMessage;

	[Token(Token = "0x170002CC")]
	public override string Message
	{
		[Token(Token = "0x60011DC")]
		[Address(RVA = "0x4E3C470", Offset = "0x4E3C470", VA = "0x4E3C470", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x4E3BBF0", Offset = "0x4E3BBF0", VA = "0x4E3BBF0")]
	public AssertionException(string message, string userMessage)
	{
	}
}
