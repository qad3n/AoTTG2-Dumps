// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CaseInsensitiveHashCodeProvider
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005DD")]
[Obsolete("Please use StringComparer instead.")]
public class CaseInsensitiveHashCodeProvider : IHashCodeProvider
{
	[Token(Token = "0x400187F")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x170006CE")]
	public static CaseInsensitiveHashCodeProvider Default
	{
		[Token(Token = "0x6002C17")]
		[Address(RVA = "0x1AB81C0", Offset = "0x1AB67C0", VA = "0x181AB81C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C15")]
	[Address(RVA = "0x1AB8090", Offset = "0x1AB6690", VA = "0x181AB8090")]
	public CaseInsensitiveHashCodeProvider()
	{
	}

	[Token(Token = "0x6002C16")]
	[Address(RVA = "0x1AB8120", Offset = "0x1AB6720", VA = "0x181AB8120")]
	public CaseInsensitiveHashCodeProvider(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002C18")]
	[Address(RVA = "0x1AB7FD0", Offset = "0x1AB65D0", VA = "0x181AB7FD0", Slot = "4")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
