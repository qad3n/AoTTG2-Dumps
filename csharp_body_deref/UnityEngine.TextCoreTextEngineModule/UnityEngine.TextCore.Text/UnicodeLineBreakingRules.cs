using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000045")]
public class UnicodeLineBreakingRules
{
	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x0")]
	private static UnicodeLineBreakingRules s_Instance;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private UnityEngine.TextAsset m_UnicodeLineBreakingRules;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private UnityEngine.TextAsset m_LeadingCharacters;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private UnityEngine.TextAsset m_FollowingCharacters;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x8")]
	private static HashSet<uint> s_LeadingCharactersLookup;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x10")]
	private static HashSet<uint> s_FollowingCharactersLookup;

	[Token(Token = "0x17000059")]
	public UnityEngine.TextAsset leadingCharacters
	{
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x4BC4250", Offset = "0x4BC4250", VA = "0x4BC4250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public UnityEngine.TextAsset followingCharacters
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x4BC4260", Offset = "0x4BC4260", VA = "0x4BC4260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	internal HashSet<uint> leadingCharactersLookup
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x4BC4270", Offset = "0x4BC4270", VA = "0x4BC4270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	internal HashSet<uint> followingCharactersLookup
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x4BC45E0", Offset = "0x4BC45E0", VA = "0x4BC45E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public bool useModernHangulLineBreakingRules
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x4BC46B0", Offset = "0x4BC46B0", VA = "0x4BC46B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4BC1770", Offset = "0x4BC1770", VA = "0x4BC1770")]
	internal static void LoadLineBreakingRules()
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4BC4340", Offset = "0x4BC4340", VA = "0x4BC4340")]
	internal static void LoadLineBreakingRules(UnityEngine.TextAsset leadingRules, UnityEngine.TextAsset followingRules)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4BC46C0", Offset = "0x4BC46C0", VA = "0x4BC46C0")]
	private static HashSet<uint> GetCharacters(UnityEngine.TextAsset file)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4BC1760", Offset = "0x4BC1760", VA = "0x4BC1760")]
	public UnicodeLineBreakingRules()
	{
	}
}
