// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatPlayerNameOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ChatPlayerNameOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000628")]
[DisallowMultipleComponent]
internal sealed class ChatPlayerNameOverlay : MonoBehaviour
{
	[Token(Token = "0x4001DA3")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _source;

	[Token(Token = "0x4001DA4")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectLabel _label;

	[Token(Token = "0x4001DA5")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _labelRect;

	[Token(Token = "0x4001DA6")]
	[FieldOffset(Offset = "0x38")]
	private ChatDisplayNameRange _range;

	[Token(Token = "0x4001DA7")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasRange;

	[Token(Token = "0x4001DA8")]
	[FieldOffset(Offset = "0x48")]
	private string _nameText;

	[Token(Token = "0x17000BB4")]
	public NameEffectLabel Label
	{
		[Token(Token = "0x6003DF0")]
		[Address(RVA = "0x42B8650", Offset = "0x42B8650", VA = "0x42B8650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003DF1")]
	[Address(RVA = "0x42B5CF0", Offset = "0x42B5CF0", VA = "0x42B5CF0")]
	public void Initialize(TextMeshProUGUI source)
	{
	}

	[Token(Token = "0x6003DF2")]
	[Address(RVA = "0x42B75B0", Offset = "0x42B75B0", VA = "0x42B75B0")]
	public void SetName(string name, TMP_FontAsset font, float fontSize, Color color, ChatDisplayNameRange range)
	{
	}

	[Token(Token = "0x6003DF3")]
	[Address(RVA = "0x42B6EE0", Offset = "0x42B6EE0", VA = "0x42B6EE0")]
	public void SetRange(ChatDisplayNameRange range)
	{
	}

	[Token(Token = "0x6003DF4")]
	[Address(RVA = "0x42B6AA0", Offset = "0x42B6AA0", VA = "0x42B6AA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003DF5")]
	[Address(RVA = "0x42B8A00", Offset = "0x42B8A00", VA = "0x42B8A00")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003DF6")]
	[Address(RVA = "0x42B8660", Offset = "0x42B8660", VA = "0x42B8660")]
	private void BuildIfNeeded()
	{
	}

	[Token(Token = "0x6003DF7")]
	[Address(RVA = "0x42B8AD0", Offset = "0x42B8AD0", VA = "0x42B8AD0")]
	private void ConfigureLayoutFreeNameLabel(GameObject root)
	{
	}

	[Token(Token = "0x6003DF8")]
	[Address(RVA = "0x42B8D20", Offset = "0x42B8D20", VA = "0x42B8D20")]
	private static void DisableSegmentLayout(TextMeshProUGUI segment, bool active)
	{
	}

	[Token(Token = "0x6003DF9")]
	[Address(RVA = "0x42B8E00", Offset = "0x42B8E00", VA = "0x42B8E00")]
	private void HideSourceName(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6003DFA")]
	[Address(RVA = "0x42B6F30", Offset = "0x42B6F30", VA = "0x42B6F30")]
	public void SyncToSource()
	{
	}

	[Token(Token = "0x6003DFB")]
	[Address(RVA = "0x42B7780", Offset = "0x42B7780", VA = "0x42B7780")]
	public float PreferredNameWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003DFC")]
	[Address(RVA = "0x42B8FA0", Offset = "0x42B8FA0", VA = "0x42B8FA0")]
	private bool TryGetSourceNameBounds(TMP_TextInfo textInfo, out Vector3 min, out Vector3 max, out float baseline, out int firstLine, out int lastLine)
	{
		return default(bool);
	}

	[Token(Token = "0x6003DFD")]
	[Address(RVA = "0x42B8930", Offset = "0x42B8930", VA = "0x42B8930")]
	private void SetRaycastTargets(bool value)
	{
	}

	[Token(Token = "0x6003DFE")]
	[Address(RVA = "0x42B9180", Offset = "0x42B9180", VA = "0x42B9180")]
	public ChatPlayerNameOverlay()
	{
	}
}
