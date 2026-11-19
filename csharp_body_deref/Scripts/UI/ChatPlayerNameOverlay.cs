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

[Token(Token = "0x200082E")]
[DisallowMultipleComponent]
internal sealed class ChatPlayerNameOverlay : MonoBehaviour
{
	[Token(Token = "0x40028C9")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _source;

	[Token(Token = "0x40028CA")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectLabel _label;

	[Token(Token = "0x40028CB")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _labelRect;

	[Token(Token = "0x40028CC")]
	[FieldOffset(Offset = "0x38")]
	private ChatDisplayNameRange _range;

	[Token(Token = "0x40028CD")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasRange;

	[Token(Token = "0x40028CE")]
	[FieldOffset(Offset = "0x48")]
	private string _nameText;

	[Token(Token = "0x17000D7F")]
	public NameEffectLabel Label
	{
		[Token(Token = "0x6004E03")]
		[Address(RVA = "0x5C1A0D0", Offset = "0x5C190D0", VA = "0x5C1A0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004E04")]
	[Address(RVA = "0x5C18100", Offset = "0x5C17100", VA = "0x5C18100")]
	public void Initialize(TextMeshProUGUI source)
	{
	}

	[Token(Token = "0x6004E05")]
	[Address(RVA = "0x5C19020", Offset = "0x5C18020", VA = "0x5C19020")]
	public void SetName(string name, TMP_FontAsset font, float fontSize, Color color, ChatDisplayNameRange range)
	{
	}

	[Token(Token = "0x6004E06")]
	[Address(RVA = "0x5C18840", Offset = "0x5C17840", VA = "0x5C18840")]
	public void SetRange(ChatDisplayNameRange range)
	{
	}

	[Token(Token = "0x6004E07")]
	[Address(RVA = "0x5C182A0", Offset = "0x5C172A0", VA = "0x5C182A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6004E08")]
	[Address(RVA = "0x5C1A480", Offset = "0x5C19480", VA = "0x5C1A480")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004E09")]
	[Address(RVA = "0x5C1A0E0", Offset = "0x5C190E0", VA = "0x5C1A0E0")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x6004E0A")]
	[Address(RVA = "0x5C1A550", Offset = "0x5C19550", VA = "0x5C1A550")]
	private void ConfigureLayoutFreeNameLabel(GameObject root)
	{
	}

	[Token(Token = "0x6004E0B")]
	[Address(RVA = "0x5C1A7A0", Offset = "0x5C197A0", VA = "0x5C1A7A0")]
	private static void DisableSegmentLayout(TextMeshProUGUI segment, bool active)
	{
	}

	[Token(Token = "0x6004E0C")]
	[Address(RVA = "0x5C1A880", Offset = "0x5C19880", VA = "0x5C1A880")]
	private void HideSourceName(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6004E0D")]
	[Address(RVA = "0x5C18880", Offset = "0x5C17880", VA = "0x5C18880")]
	public void SyncToSource()
	{
	}

	[Token(Token = "0x6004E0E")]
	[Address(RVA = "0x5C19200", Offset = "0x5C18200", VA = "0x5C19200")]
	public float PreferredNameWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004E0F")]
	[Address(RVA = "0x5C1AA10", Offset = "0x5C19A10", VA = "0x5C1AA10")]
	private bool TryGetSourceNameBounds(TMP_TextInfo textInfo, out Vector3 min, out Vector3 max, out float baseline, out int firstLine, out int lastLine)
	{
		return default(bool);
	}

	[Token(Token = "0x6004E10")]
	[Address(RVA = "0x5C1A3B0", Offset = "0x5C193B0", VA = "0x5C1A3B0")]
	private void SetRaycastTargets(bool value)
	{
	}

	[Token(Token = "0x6004E11")]
	[Address(RVA = "0x5C1AB50", Offset = "0x5C19B50", VA = "0x5C1AB50")]
	public ChatPlayerNameOverlay()
	{
	}
}
