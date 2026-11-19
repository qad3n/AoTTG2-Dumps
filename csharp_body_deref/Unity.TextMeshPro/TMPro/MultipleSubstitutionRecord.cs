// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MultipleSubstitutionRecord
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66DAD40", Offset = "0x66D9D40", VA = "0x66DAD40")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x66DAD50", Offset = "0x66D9D50", VA = "0x66DAD50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public uint[] substituteGlyphIDs
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x66DAD60", Offset = "0x66D9D60", VA = "0x66DAD60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x66DAD70", Offset = "0x66D9D70", VA = "0x66DAD70")]
		set
		{
		}
	}
}
