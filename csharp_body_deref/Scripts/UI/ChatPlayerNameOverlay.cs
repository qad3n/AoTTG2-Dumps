// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatPlayerNameOverlay
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatPlayerNameOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000783")]
[DisallowMultipleComponent]
internal sealed class ChatPlayerNameOverlay : MonoBehaviour
{
	[Token(Token = "0x4002558")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _source;

	[Token(Token = "0x4002559")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectLabel _label;

	[Token(Token = "0x400255A")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _labelRect;

	[Token(Token = "0x400255B")]
	[FieldOffset(Offset = "0x38")]
	private ChatDisplayNameRange _range;

	[Token(Token = "0x400255C")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasRange;

	[Token(Token = "0x400255D")]
	[FieldOffset(Offset = "0x48")]
	private string _nameText;

	[Token(Token = "0x17000D03")]
	public NameEffectLabel Label
	{
		[Token(Token = "0x60048DD")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60048DE")]
	[Address(RVA = "0x223DBD0", Offset = "0x223C1D0", VA = "0x18223DBD0")]
	public void Initialize(TextMeshProUGUI source)
	{
	}

	[Token(Token = "0x60048DF")]
	[Address(RVA = "0x223DEF0", Offset = "0x223C4F0", VA = "0x18223DEF0")]
	public void SetName(string name, TMP_FontAsset font, float fontSize, Color color, ChatDisplayNameRange range)
	{
	}

	[Token(Token = "0x60048E0")]
	[Address(RVA = "0x223E0B0", Offset = "0x223C6B0", VA = "0x18223E0B0")]
	public void SetRange(ChatDisplayNameRange range)
	{
	}

	[Token(Token = "0x60048E1")]
	[Address(RVA = "0x223D300", Offset = "0x223B900", VA = "0x18223D300")]
	public void Clear()
	{
	}

	[Token(Token = "0x60048E2")]
	[Address(RVA = "0x223DCC0", Offset = "0x223C2C0", VA = "0x18223DCC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60048E3")]
	[Address(RVA = "0x223D010", Offset = "0x223B610", VA = "0x18223D010")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x60048E4")]
	[Address(RVA = "0x223D420", Offset = "0x223BA20", VA = "0x18223D420")]
	private void ConfigureLayoutFreeNameLabel(GameObject root)
	{
	}

	[Token(Token = "0x60048E5")]
	[Address(RVA = "0x223D690", Offset = "0x223BC90", VA = "0x18223D690")]
	private static void DisableSegmentLayout(TextMeshProUGUI segment, bool active)
	{
	}

	[Token(Token = "0x60048E6")]
	[Address(RVA = "0x223D780", Offset = "0x223BD80", VA = "0x18223D780")]
	private void HideSourceName(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60048E7")]
	[Address(RVA = "0x223E1E0", Offset = "0x223C7E0", VA = "0x18223E1E0")]
	public void SyncToSource()
	{
	}

	[Token(Token = "0x60048E8")]
	[Address(RVA = "0x223DD90", Offset = "0x223C390", VA = "0x18223DD90")]
	public float PreferredNameWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60048E9")]
	[Address(RVA = "0x223E830", Offset = "0x223CE30", VA = "0x18223E830")]
	private bool TryGetSourceNameBounds(TMP_TextInfo textInfo, out Vector3 min, out Vector3 max, out float baseline, out int firstLine, out int lastLine)
	{
		return default(bool);
	}

	[Token(Token = "0x60048EA")]
	[Address(RVA = "0x223E100", Offset = "0x223C700", VA = "0x18223E100")]
	private void SetRaycastTargets(bool value)
	{
	}

	[Token(Token = "0x60048EB")]
	[Address(RVA = "0x223EA80", Offset = "0x223D080", VA = "0x18223EA80")]
	public ChatPlayerNameOverlay()
	{
	}
}
