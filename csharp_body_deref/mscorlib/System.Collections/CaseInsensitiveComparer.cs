// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CaseInsensitiveComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000608")]
public class CaseInsensitiveComparer : IComparer
{
	[Token(Token = "0x4001A63")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x6002F02")]
	[Address(RVA = "0x3C7EEA0", Offset = "0x3C7EEA0", VA = "0x3C7EEA0")]
	public CaseInsensitiveComparer()
	{
	}

	[Token(Token = "0x6002F03")]
	[Address(RVA = "0x3C7EF20", Offset = "0x3C7EF20", VA = "0x3C7EF20")]
	public CaseInsensitiveComparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002F04")]
	[Address(RVA = "0x3C7EFB0", Offset = "0x3C7EFB0", VA = "0x3C7EFB0", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
