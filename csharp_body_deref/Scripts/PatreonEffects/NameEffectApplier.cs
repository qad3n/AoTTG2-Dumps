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

[Token(Token = "0x2000110")]
[RequireComponent(typeof(Text))]
public class NameEffectApplier : MonoBehaviour
{
	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x20")]
	private Text _legacyText;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _tmpOverlay;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x38")]
	private NameEffectController _controller;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x40")]
	private bool _styleActive;

	[Token(Token = "0x170000C6")]
	public bool IsEffectActive
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x20C43C0", Offset = "0x20C29C0", VA = "0x1820C43C0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x20C3FB0", Offset = "0x20C25B0", VA = "0x1820C3FB0")]
	public void ApplyForPlayer(Player player)
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x20C4CD0", Offset = "0x20C32D0", VA = "0x1820C4CD0")]
	public void SyncText()
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x20C4560", Offset = "0x20C2B60", VA = "0x1820C4560")]
	public void ClearEffect()
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x20C4630", Offset = "0x20C2C30", VA = "0x1820C4630")]
	private void EnsureOverlay()
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x20C3DB0", Offset = "0x20C23B0", VA = "0x1820C3DB0")]
	private void ApplyEffect(ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x20C4410", Offset = "0x20C2A10", VA = "0x1820C4410")]
	private void ClearController()
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x20C4AE0", Offset = "0x20C30E0", VA = "0x1820C4AE0")]
	private void SyncLegacyTextStyle()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x20C4DA0", Offset = "0x20C33A0", VA = "0x1820C4DA0")]
	private static TextAlignmentOptions ToTmpAlignment(TextAnchor alignment)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x20C4A50", Offset = "0x20C3050", VA = "0x1820C4A50")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public NameEffectApplier()
	{
	}
}
