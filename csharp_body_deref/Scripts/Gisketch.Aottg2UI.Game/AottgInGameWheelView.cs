// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgInGameWheelView
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgInGameWheelView.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000262")]
internal sealed class AottgInGameWheelView
{
	[Token(Token = "0x4000C50")]
	public const int SlotCount = 8;

	[Token(Token = "0x4000C51")]
	[FieldOffset(Offset = "0x10")]
	private readonly Button[] _buttons;

	[Token(Token = "0x4000C52")]
	[FieldOffset(Offset = "0x18")]
	private readonly TMP_Text[] _shortcuts;

	[Token(Token = "0x4000C53")]
	[FieldOffset(Offset = "0x20")]
	private readonly TMP_Text[] _labels;

	[Token(Token = "0x4000C54")]
	[FieldOffset(Offset = "0x28")]
	private readonly TMP_Text _title;

	[Token(Token = "0x4000C55")]
	[FieldOffset(Offset = "0x30")]
	private readonly TMP_Text _hint;

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x1DDFA50", Offset = "0x1DDE050", VA = "0x181DDFA50")]
	public AottgInGameWheelView(Transform parent)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x1DDF820", Offset = "0x1DDDE20", VA = "0x181DDF820")]
	public void Show(string title, string hint, IReadOnlyList<string> options, IReadOnlyList<string> shortcuts)
	{
	}
}
