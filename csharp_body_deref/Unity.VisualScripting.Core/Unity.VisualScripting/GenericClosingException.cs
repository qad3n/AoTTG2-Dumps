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
	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x2DA7C10", Offset = "0x2DA6210", VA = "0x182DA7C10")]
	public GenericClosingException(string message)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x2DA7B80", Offset = "0x2DA6180", VA = "0x182DA7B80")]
	public GenericClosingException(Type open, Type closed)
	{
	}
}
