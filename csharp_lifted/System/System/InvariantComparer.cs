// ==================== AoTTG2 cross-reference ====================
// Type: System.InvariantComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200007A")]
internal class InvariantComparer : IComparer
{
	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo m_compareInfo;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly InvariantComparer Default;

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x61D52E0", Offset = "0x61D42E0", VA = "0x61D52E0")]
	internal InvariantComparer()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x61D5360", Offset = "0x61D4360", VA = "0x61D5360", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
