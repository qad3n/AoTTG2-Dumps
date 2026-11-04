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

[Token(Token = "0x2000279")]
public sealed class AottgTruncatedTextTooltip : MonoBehaviour
{
	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x30")]
	private string _lastText;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _lastSize;

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x1DE7810", Offset = "0x1DE5E10", VA = "0x181DE7810")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x1DE7960", Offset = "0x1DE5F60", VA = "0x181DE7960")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgTruncatedTextTooltip()
	{
	}
}
