// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.UnicodeLineBreakingRules
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000071")]
public class UnicodeLineBreakingRules
{
	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private UnityEngine.TextAsset m_UnicodeLineBreakingRules;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private UnityEngine.TextAsset m_LeadingCharacters;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private UnityEngine.TextAsset m_FollowingCharacters;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x30")]
	private HashSet<uint> m_LeadingCharactersLookup;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x38")]
	private HashSet<uint> m_FollowingCharactersLookup;

	[Token(Token = "0x1700008E")]
	internal HashSet<uint> leadingCharactersLookup
	{
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x305C900", Offset = "0x305AF00", VA = "0x18305C900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	internal HashSet<uint> followingCharactersLookup
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x305C8D0", Offset = "0x305AED0", VA = "0x18305C8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x305C6E0", Offset = "0x305ACE0", VA = "0x18305C6E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void LoadLineBreakingRules()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x305C610", Offset = "0x305AC10", VA = "0x18305C610")]
	private static HashSet<uint> GetCharacters(UnityEngine.TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UnicodeLineBreakingRules()
	{
	}
}
