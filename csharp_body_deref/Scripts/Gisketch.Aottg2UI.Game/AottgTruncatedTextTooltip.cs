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

[Token(Token = "0x2000173")]
public sealed class AottgTruncatedTextTooltip : MonoBehaviour
{
	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x30")]
	private string _lastText;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _lastSize;

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x43F44D0", Offset = "0x43F44D0", VA = "0x43F44D0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x43F4620", Offset = "0x43F4620", VA = "0x43F4620")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x43F47D0", Offset = "0x43F47D0", VA = "0x43F47D0")]
	public AottgTruncatedTextTooltip()
	{
	}
}
