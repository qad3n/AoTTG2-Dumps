using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000141")]
public sealed class AottgTruncatedTextTooltip : MonoBehaviour
{
	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x30")]
	private string _lastText;

	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _lastSize;

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x40C35F0", Offset = "0x40C35F0", VA = "0x40C35F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x40C3740", Offset = "0x40C3740", VA = "0x40C3740")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x40C38F0", Offset = "0x40C38F0", VA = "0x40C38F0")]
	public AottgTruncatedTextTooltip()
	{
	}
}
