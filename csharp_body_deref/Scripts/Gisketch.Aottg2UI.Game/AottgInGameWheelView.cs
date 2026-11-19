// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgInGameWheelView
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000288")]
internal sealed class AottgInGameWheelView
{
	[Token(Token = "0x4000CFD")]
	public const int SlotCount = 8;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x10")]
	private readonly Button[] _buttons;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x18")]
	private readonly TMP_Text[] _shortcuts;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x20")]
	private readonly TMP_Text[] _labels;

	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x28")]
	private readonly TMP_FontAsset[] _labelFonts;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x30")]
	private readonly TMP_Text _title;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x38")]
	private readonly TMP_Text _hint;

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x57B2850", Offset = "0x57B1850", VA = "0x57B2850")]
	public AottgInGameWheelView(Transform parent)
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x57B3490", Offset = "0x57B2490", VA = "0x57B3490")]
	public void Show(string title, string hint, IReadOnlyList<string> options, IReadOnlyList<string> shortcuts)
	{
	}
}
