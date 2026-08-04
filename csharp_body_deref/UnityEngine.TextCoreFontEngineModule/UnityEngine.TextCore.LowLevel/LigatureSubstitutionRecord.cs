// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000018")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct LigatureSubstitutionRecord
{
	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("componentGlyphs")]
	private uint[] m_ComponentGlyphIDs;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("ligatureGlyph")]
	private uint m_LigatureGlyphID;

	[Token(Token = "0x17000039")]
	public uint[] componentGlyphIDs
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x4EA6900", Offset = "0x4EA6900", VA = "0x4EA6900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	public uint ligatureGlyphID
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x4EA6910", Offset = "0x4EA6910", VA = "0x4EA6910")]
		get
		{
			return default(uint);
		}
	}
}
