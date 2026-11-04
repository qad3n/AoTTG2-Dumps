// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.LigatureSubstitutionRecord
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
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public uint ligatureGlyphID
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2CDDFC0", Offset = "0x2CDC5C0", VA = "0x182CDDFC0")]
	public static bool operator ==(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2CDE040", Offset = "0x2CDC640", VA = "0x182CDE040")]
	public static bool operator !=(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs)
	{
		return default(bool);
	}
}
