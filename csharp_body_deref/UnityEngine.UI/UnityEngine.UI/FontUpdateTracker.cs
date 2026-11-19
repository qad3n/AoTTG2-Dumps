// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.FontUpdateTracker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200001B")]
public static class FontUpdateTracker
{
	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Font, HashSet<Text>> m_Tracked;

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x6A69D10", Offset = "0x6A68D10", VA = "0x6A69D10")]
	public static void TrackText(Text t)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x6A69F60", Offset = "0x6A68F60", VA = "0x6A69F60")]
	private static void RebuildForFont(Font f)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x6A6A1A0", Offset = "0x6A691A0", VA = "0x6A6A1A0")]
	public static void UntrackText(Text t)
	{
	}
}
