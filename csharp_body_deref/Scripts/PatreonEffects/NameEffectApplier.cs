// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectApplier
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectApplier.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x2000084")]
[RequireComponent(typeof(Text))]
public class NameEffectApplier : MonoBehaviour
{
	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x20")]
	private Text _legacyText;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _tmpOverlay;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x38")]
	private NameEffectController _controller;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x40")]
	private bool _styleActive;

	[Token(Token = "0x17000091")]
	public bool IsEffectActive
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x58C1F20", Offset = "0x58C0F20", VA = "0x58C1F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x58C0C80", Offset = "0x58BFC80", VA = "0x58C0C80")]
	private void Awake()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x58C0CD0", Offset = "0x58BFCD0", VA = "0x58C0CD0")]
	public void ApplyForPlayer(Player player)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x58C1B00", Offset = "0x58C0B00", VA = "0x58C1B00")]
	public void SyncText()
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x58C0FD0", Offset = "0x58BFFD0", VA = "0x58C0FD0")]
	public void ClearEffect()
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x58C15C0", Offset = "0x58C05C0", VA = "0x58C15C0")]
	private void EnsureOverlay()
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x58C1BD0", Offset = "0x58C0BD0", VA = "0x58C1BD0")]
	private void ApplyEffect(ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x58C1DE0", Offset = "0x58C0DE0", VA = "0x58C1DE0")]
	private void ClearController()
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x58C19B0", Offset = "0x58C09B0", VA = "0x58C19B0")]
	private void SyncLegacyTextStyle()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x58C2060", Offset = "0x58C1060", VA = "0x58C2060")]
	private static TextAlignmentOptions ToTmpAlignment(TextAnchor alignment)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x58C2080", Offset = "0x58C1080", VA = "0x58C2080")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x58C2100", Offset = "0x58C1100", VA = "0x58C2100")]
	public NameEffectApplier()
	{
	}
}
