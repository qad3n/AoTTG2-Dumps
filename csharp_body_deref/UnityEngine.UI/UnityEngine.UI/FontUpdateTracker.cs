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

[Token(Token = "0x200001D")]
public static class FontUpdateTracker
{
	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Font, HashSet<Text>> m_Tracked;

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4EFCCA0", Offset = "0x4EFCCA0", VA = "0x4EFCCA0")]
	public static void TrackText(Text t)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4EFCEF0", Offset = "0x4EFCEF0", VA = "0x4EFCEF0")]
	private static void RebuildForFont(Font f)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4EFD0B0", Offset = "0x4EFD0B0", VA = "0x4EFD0B0")]
	public static void UntrackText(Text t)
	{
	}
}
