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
[Token(Token = "0x20005B8")]
[Obsolete("Please use StringComparer instead.")]
public class CaseInsensitiveHashCodeProvider : IHashCodeProvider
{
	[Token(Token = "0x40017E6")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x6002BF3")]
	[Address(RVA = "0x5452250", Offset = "0x5451250", VA = "0x5452250")]
	public CaseInsensitiveHashCodeProvider()
	{
	}

	[Token(Token = "0x6002BF4")]
	[Address(RVA = "0x54522E0", Offset = "0x54512E0", VA = "0x54522E0")]
	public CaseInsensitiveHashCodeProvider(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002BF5")]
	[Address(RVA = "0x5452370", Offset = "0x5451370", VA = "0x5452370", Slot = "4")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
