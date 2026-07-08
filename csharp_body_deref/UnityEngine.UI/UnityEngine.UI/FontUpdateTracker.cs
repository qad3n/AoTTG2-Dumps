using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200001D")]
public static class FontUpdateTracker
{
	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Font, HashSet<Text>> m_Tracked;

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4BD5370", Offset = "0x4BD5370", VA = "0x4BD5370")]
	public static void TrackText(Text t)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4BD55C0", Offset = "0x4BD55C0", VA = "0x4BD55C0")]
	private static void RebuildForFont(Font f)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4BD5780", Offset = "0x4BD5780", VA = "0x4BD5780")]
	public static void UntrackText(Text t)
	{
	}
}
