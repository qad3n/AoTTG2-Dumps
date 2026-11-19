// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchRtlTextLines
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002C")]
[RequireComponent(typeof(Text))]
public sealed class GisketchRtlTextLines : BaseMeshEffect
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<float> LineShift;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<float> LineRight;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<bool> LineReversed;

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x52318E0", Offset = "0x52308E0", VA = "0x52318E0", Slot = "20")]
	public override void ModifyMesh(VertexHelper helper)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x5232D60", Offset = "0x5231D60", VA = "0x5232D60")]
	private static bool EndsParagraph(string value, int nextLineStart)
	{
		return default(bool);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x5232D90", Offset = "0x5231D90", VA = "0x5232D90")]
	private static int LineAt(IList<UILineInfo> lines, float y)
	{
		return default(int);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x5232FE0", Offset = "0x5231FE0", VA = "0x5232FE0")]
	public GisketchRtlTextLines()
	{
	}
}
