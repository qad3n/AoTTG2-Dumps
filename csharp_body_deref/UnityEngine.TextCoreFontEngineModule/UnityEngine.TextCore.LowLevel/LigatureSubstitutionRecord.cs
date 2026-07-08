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
		[Address(RVA = "0x4B7EFD0", Offset = "0x4B7EFD0", VA = "0x4B7EFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	public uint ligatureGlyphID
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x4B7EFE0", Offset = "0x4B7EFE0", VA = "0x4B7EFE0")]
		get
		{
			return default(uint);
		}
	}
}
