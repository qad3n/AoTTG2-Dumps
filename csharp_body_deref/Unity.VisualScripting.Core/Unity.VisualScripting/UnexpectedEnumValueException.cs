// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnexpectedEnumValueException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000067")]
public class UnexpectedEnumValueException<T> : Exception
{
	[Token(Token = "0x1700009B")]
	public T Value
	{
		[Token(Token = "0x60002BC")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60002BD")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002BB")]
	public UnexpectedEnumValueException(T value)
	{
	}
}
