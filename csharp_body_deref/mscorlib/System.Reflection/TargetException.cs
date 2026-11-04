// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TargetException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x200052B")]
public class TargetException : ApplicationException
{
	[Token(Token = "0x60025D2")]
	[Address(RVA = "0x1A57ED0", Offset = "0x1A564D0", VA = "0x181A57ED0")]
	public TargetException()
	{
	}

	[Token(Token = "0x60025D3")]
	[Address(RVA = "0x1A57F00", Offset = "0x1A56500", VA = "0x181A57F00")]
	public TargetException(string message)
	{
	}

	[Token(Token = "0x60025D4")]
	[Address(RVA = "0x1A57EB0", Offset = "0x1A564B0", VA = "0x181A57EB0")]
	public TargetException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60025D5")]
	[Address(RVA = "0x1A464A0", Offset = "0x1A44AA0", VA = "0x181A464A0")]
	protected TargetException(SerializationInfo info, StreamingContext context)
	{
	}
}
