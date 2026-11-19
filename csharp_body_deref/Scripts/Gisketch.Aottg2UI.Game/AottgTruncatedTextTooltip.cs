// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgTruncatedTextTooltip
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgTruncatedTextTooltip.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200029F")]
public sealed class AottgTruncatedTextTooltip : MonoBehaviour
{
	[Token(Token = "0x4000D64")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x30")]
	private string _lastText;

	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _lastSize;

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x57BC950", Offset = "0x57BB950", VA = "0x57BC950")]
	private void Awake()
	{
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x57BCAA0", Offset = "0x57BBAA0", VA = "0x57BCAA0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x57BCC70", Offset = "0x57BBC70", VA = "0x57BCC70")]
	public AottgTruncatedTextTooltip()
	{
	}
}
