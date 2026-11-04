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
[Token(Token = "0x20000B9")]
internal class InvariantComparer : IComparer
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo m_compareInfo;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly InvariantComparer Default;

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x2830D20", Offset = "0x282F320", VA = "0x182830D20")]
	internal InvariantComparer()
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x2830B70", Offset = "0x282F170", VA = "0x182830B70", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
