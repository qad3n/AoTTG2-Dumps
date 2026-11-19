// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.UnicodeLineBreakingRules
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A581A0", Offset = "0x6A571A0", VA = "0x6A581A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	internal HashSet<uint> followingCharactersLookup
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x6A583D0", Offset = "0x6A573D0", VA = "0x6A583D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x6A583F0", Offset = "0x6A573F0", VA = "0x6A583F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x6A581C0", Offset = "0x6A571C0", VA = "0x6A581C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void LoadLineBreakingRules()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x6A58400", Offset = "0x6A57400", VA = "0x6A58400")]
	private static HashSet<uint> GetCharacters(UnityEngine.TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x6A584E0", Offset = "0x6A574E0", VA = "0x6A584E0")]
	public UnicodeLineBreakingRules()
	{
	}
}
