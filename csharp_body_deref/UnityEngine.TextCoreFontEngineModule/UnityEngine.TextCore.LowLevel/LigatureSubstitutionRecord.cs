// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord
// Update status: CHANGED in this game update
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
[Token(Token = "0x200001A")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule", "UnityEditor.TextCoreTextEngineModule" })]
internal struct LigatureSubstitutionRecord : IEquatable<LigatureSubstitutionRecord>
{
	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("componentGlyphs")]
	[SerializeField]
	private uint[] m_ComponentGlyphIDs;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("ligatureGlyph")]
	private uint m_LigatureGlyphID;

	[Token(Token = "0x17000039")]
	public uint[] componentGlyphIDs
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public uint ligatureGlyphID
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0xA50840", Offset = "0xA4EE40", VA = "0x180A50840")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3002E60", Offset = "0x3001460", VA = "0x183002E60", Slot = "4")]
	public bool Equals(LigatureSubstitutionRecord other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3002EE0", Offset = "0x30014E0", VA = "0x183002EE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2369FF0", Offset = "0x23685F0", VA = "0x182369FF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3002FC0", Offset = "0x30015C0", VA = "0x183002FC0")]
	public static bool operator ==(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs)
	{
		return default(bool);
	}
}
