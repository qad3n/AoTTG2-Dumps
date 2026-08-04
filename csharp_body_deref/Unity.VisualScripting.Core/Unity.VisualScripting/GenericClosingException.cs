// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GenericClosingException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000EA")]
public sealed class GenericClosingException : Exception
{
	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4CC1DA0", Offset = "0x4CC1DA0", VA = "0x4CC1DA0")]
	public GenericClosingException(string message)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4CC1E00", Offset = "0x4CC1E00", VA = "0x4CC1E00")]
	public GenericClosingException(Type open, Type closed)
	{
	}
}
