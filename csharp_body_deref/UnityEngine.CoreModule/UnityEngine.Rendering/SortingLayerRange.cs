// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SortingLayerRange
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039E")]
public struct SortingLayerRange : IEquatable<SortingLayerRange>
{
	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x0")]
	private short m_LowerBound;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x2")]
	private short m_UpperBound;

	[Token(Token = "0x1700038B")]
	public static SortingLayerRange all
	{
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x695AF90", Offset = "0x6959F90", VA = "0x695AF90")]
		get
		{
			return default(SortingLayerRange);
		}
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x6962830", Offset = "0x6961830", VA = "0x6962830", Slot = "4")]
	public bool Equals(SortingLayerRange other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BB")]
	[Address(RVA = "0x6962850", Offset = "0x6961850", VA = "0x6962850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x69628C0", Offset = "0x69618C0", VA = "0x69628C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
