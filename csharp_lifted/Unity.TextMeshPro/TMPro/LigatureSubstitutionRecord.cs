// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.LigatureSubstitutionRecord
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
[Token(Token = "0x200000E")]
public struct LigatureSubstitutionRecord
{
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint[] m_ComponentGlyphIDs;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private uint m_LigatureGlyphID;

	[Token(Token = "0x1700000F")]
	public uint[] componentGlyphIDs
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x66DAD80", Offset = "0x66D9D80", VA = "0x66DAD80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x66DAD90", Offset = "0x66D9D90", VA = "0x66DAD90")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public uint ligatureGlyphID
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x66DADA0", Offset = "0x66D9DA0", VA = "0x66DADA0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x66DADB0", Offset = "0x66D9DB0", VA = "0x66DADB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x66DADC0", Offset = "0x66D9DC0", VA = "0x66DADC0")]
	public static bool operator ==(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x66DAE30", Offset = "0x66D9E30", VA = "0x66DAE30")]
	public static bool operator !=(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs)
	{
		return default(bool);
	}
}
