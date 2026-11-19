// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CaseInsensitiveComparer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005B7")]
public class CaseInsensitiveComparer : IComparer
{
	[Token(Token = "0x40017E5")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo _compareInfo;

	[Token(Token = "0x6002BF0")]
	[Address(RVA = "0x5452060", Offset = "0x5451060", VA = "0x5452060")]
	public CaseInsensitiveComparer()
	{
	}

	[Token(Token = "0x6002BF1")]
	[Address(RVA = "0x54520F0", Offset = "0x54510F0", VA = "0x54520F0")]
	public CaseInsensitiveComparer(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002BF2")]
	[Address(RVA = "0x5452180", Offset = "0x5451180", VA = "0x5452180", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
