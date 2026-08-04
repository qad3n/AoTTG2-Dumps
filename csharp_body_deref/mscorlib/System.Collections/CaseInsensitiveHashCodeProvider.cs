// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CaseInsensitiveHashCodeProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000609")]
[Obsolete("Please use StringComparer instead.")]
public class CaseInsensitiveHashCodeProvider : IHashCodeProvider
{
	[Token(Token = "0x4001A64")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x6002F05")]
	[Address(RVA = "0x3C7F080", Offset = "0x3C7F080", VA = "0x3C7F080")]
	public CaseInsensitiveHashCodeProvider()
	{
	}

	[Token(Token = "0x6002F06")]
	[Address(RVA = "0x3C7F100", Offset = "0x3C7F100", VA = "0x3C7F100")]
	public CaseInsensitiveHashCodeProvider(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002F07")]
	[Address(RVA = "0x3C7F190", Offset = "0x3C7F190", VA = "0x3C7F190", Slot = "4")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
