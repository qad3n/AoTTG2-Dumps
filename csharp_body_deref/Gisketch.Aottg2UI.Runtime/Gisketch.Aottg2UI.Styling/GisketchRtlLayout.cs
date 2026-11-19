// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchRtlLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002B")]
public static class GisketchRtlLayout
{
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x5231010", Offset = "0x5230010", VA = "0x5231010")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void Install()
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x5231130", Offset = "0x5230130", VA = "0x5231130")]
	private static void OnTextChanged(Object changed)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x5231430", Offset = "0x5230430", VA = "0x5231430")]
	private static bool EndsParagraph(TMP_TextInfo info, int line)
	{
		return default(bool);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x5231490", Offset = "0x5230490", VA = "0x5231490")]
	private static bool EndsRightToLeft(TMP_TextInfo info, int firstLine, int lastLine)
	{
		return default(bool);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x5231630", Offset = "0x5230630", VA = "0x5231630")]
	private static void ReverseLines(TMP_TextInfo info, int firstLine, int lastLine, bool rightAlign)
	{
	}
}
