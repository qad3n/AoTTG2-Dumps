// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TargetInvocationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x200052C")]
public sealed class TargetInvocationException : ApplicationException
{
	[Token(Token = "0x60025D6")]
	[Address(RVA = "0x1A57F30", Offset = "0x1A56530", VA = "0x181A57F30")]
	public TargetInvocationException(Exception inner)
	{
	}

	[Token(Token = "0x60025D7")]
	[Address(RVA = "0x1A57F90", Offset = "0x1A56590", VA = "0x181A57F90")]
	public TargetInvocationException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60025D8")]
	[Address(RVA = "0x1A464A0", Offset = "0x1A44AA0", VA = "0x181A464A0")]
	internal TargetInvocationException(SerializationInfo info, StreamingContext context)
	{
	}
}
