// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MultipleSubstitutionRecord
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200000C")]
public struct MultipleSubstitutionRecord
{
	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint m_TargetGlyphID;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private uint[] m_SubstituteGlyphIDs;

	[Token(Token = "0x1700000D")]
	public uint targetGlyphID
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public uint[] substituteGlyphIDs
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		set
		{
		}
	}
}
