// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectApplier
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000EF")]
[RequireComponent(typeof(Text))]
public class NameEffectApplier : MonoBehaviour
{
	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x20")]
	private Text _legacyText;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _tmpOverlay;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x38")]
	private NameEffectController _controller;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x40")]
	private bool _styleActive;

	[Token(Token = "0x170000B7")]
	public bool IsEffectActive
	{
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x4228B60", Offset = "0x4228B60", VA = "0x4228B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4227880", Offset = "0x4227880", VA = "0x4227880")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x42278D0", Offset = "0x42278D0", VA = "0x42278D0")]
	public void ApplyForPlayer(Player player)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x42286F0", Offset = "0x42286F0", VA = "0x42286F0")]
	public void SyncText()
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4227BB0", Offset = "0x4227BB0", VA = "0x4227BB0")]
	public void ClearEffect()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x42281B0", Offset = "0x42281B0", VA = "0x42281B0")]
	private void EnsureOverlay()
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x42287C0", Offset = "0x42287C0", VA = "0x42287C0")]
	private void ApplyEffect(ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4228A20", Offset = "0x4228A20", VA = "0x4228A20")]
	private void ClearController()
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x42285A0", Offset = "0x42285A0", VA = "0x42285A0")]
	private void SyncLegacyTextStyle()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x42292F0", Offset = "0x42292F0", VA = "0x42292F0")]
	private static TextAlignmentOptions ToTmpAlignment(TextAnchor alignment)
	{
		return default(TextAlignmentOptions);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4229310", Offset = "0x4229310", VA = "0x4229310")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4229390", Offset = "0x4229390", VA = "0x4229390")]
	public NameEffectApplier()
	{
	}
}
