using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005E9")]
internal class EmoteHandler : MonoBehaviour
{
	[Token(Token = "0x4001C9D")]
	[FieldOffset(Offset = "0x20")]
	private List<EmoteTextPopup> _emoteTextPopups;

	[Token(Token = "0x4001C9E")]
	[FieldOffset(Offset = "0x28")]
	private List<EmoteTextPopup> _emoteEmojiPopups;

	[Token(Token = "0x4001C9F")]
	[FieldOffset(Offset = "0x30")]
	private BasePopup _emoteWheelPopup;

	[Token(Token = "0x4001CA0")]
	[FieldOffset(Offset = "0x38")]
	private EmoteWheelState _currentEmoteWheelState;

	[Token(Token = "0x4001CA1")]
	[FieldOffset(Offset = "0x3C")]
	private float _currentEmoteCooldown;

	[Token(Token = "0x4001CA2")]
	public const float EmoteCooldown = 3f;

	[Token(Token = "0x4001CA3")]
	[FieldOffset(Offset = "0x40")]
	public bool IsActive;

	[Token(Token = "0x4001CA4")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4001CA5")]
	protected const float Range = 500f;

	[Token(Token = "0x4001CA6")]
	protected const float HumanOffset = 4f;

	[Token(Token = "0x4001CA7")]
	protected const float HumanVoiceChatOffset = 2f;

	[Token(Token = "0x4001CA8")]
	protected const float TitanOffset = 25f;

	[Token(Token = "0x4001CA9")]
	protected const float CrawlerOffset = 15f;

	[Token(Token = "0x4001CAA")]
	protected const float ShifterOffset = 70f;

	[Token(Token = "0x4001CAB")]
	protected const float ShowTime = 3f;

	[Token(Token = "0x4001CAC")]
	[FieldOffset(Offset = "0x50")]
	protected LayerMask CullMask;

	[Token(Token = "0x6003C0A")]
	[Address(RVA = "0x3FAA6B0", Offset = "0x3FAA6B0", VA = "0x3FAA6B0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003C0B")]
	[Address(RVA = "0x3FAA9C0", Offset = "0x3FAA9C0", VA = "0x3FAA9C0")]
	public static void OnEmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003C0C")]
	[Address(RVA = "0x3FAAD50", Offset = "0x3FAAD50", VA = "0x3FAAD50")]
	public static void OnEmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003C0D")]
	[Address(RVA = "0x3FAACF0", Offset = "0x3FAACF0", VA = "0x3FAACF0")]
	private void ShowEmoteText(string text, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C0E")]
	[Address(RVA = "0x3FAAFC0", Offset = "0x3FAAFC0", VA = "0x3FAAFC0")]
	private void ShowEmoteEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C0F")]
	[Address(RVA = "0x3FAB4D0", Offset = "0x3FAB4D0", VA = "0x3FAB4D0")]
	private void ShowVoiceEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C10")]
	[Address(RVA = "0x3FAB5C0", Offset = "0x3FAB5C0", VA = "0x3FAB5C0")]
	private void StopInfinitePopup()
	{
	}

	[Token(Token = "0x6003C11")]
	[Address(RVA = "0x3FAB280", Offset = "0x3FAB280", VA = "0x3FAB280")]
	private Vector3 GetOffset(BaseCharacter character)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003C12")]
	[Address(RVA = "0x3FAB700", Offset = "0x3FAB700", VA = "0x3FAB700")]
	public void ToggleEmoteWheel()
	{
	}

	[Token(Token = "0x6003C13")]
	[Address(RVA = "0x3FAB710", Offset = "0x3FAB710", VA = "0x3FAB710")]
	public void SetEmoteWheel(bool enable)
	{
	}

	[Token(Token = "0x6003C14")]
	[Address(RVA = "0x3FABFE0", Offset = "0x3FABFE0", VA = "0x3FABFE0")]
	public void NextEmoteWheel()
	{
	}

	[Token(Token = "0x6003C15")]
	[Address(RVA = "0x3FAC160", Offset = "0x3FAC160", VA = "0x3FAC160")]
	private void OnEmoteWheelSelect()
	{
	}

	[Token(Token = "0x6003C16")]
	[Address(RVA = "0x3FABA90", Offset = "0x3FABA90", VA = "0x3FABA90")]
	private List<string> GetEmoteWheelOptions(EmoteWheelState state)
	{
		return null;
	}

	[Token(Token = "0x6003C17")]
	[Address(RVA = "0x3FAB0A0", Offset = "0x3FAB0A0", VA = "0x3FAB0A0")]
	private EmoteTextPopup GetAvailablePopup(List<EmoteTextPopup> popups)
	{
		return null;
	}

	[Token(Token = "0x6003C18")]
	[Address(RVA = "0x3FAC720", Offset = "0x3FAC720", VA = "0x3FAC720")]
	protected void UpdatePopup(EmoteTextPopup popup, bool inMenu)
	{
	}

	[Token(Token = "0x6003C19")]
	[Address(RVA = "0x3FACE00", Offset = "0x3FACE00", VA = "0x3FACE00")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6003C1A")]
	[Address(RVA = "0x3FAAC80", Offset = "0x3FAAC80", VA = "0x3FAAC80")]
	public static string SanitizeText(string value)
	{
		return null;
	}

	[Token(Token = "0x6003C1B")]
	[Address(RVA = "0x3FAD0E0", Offset = "0x3FAD0E0", VA = "0x3FAD0E0")]
	public EmoteHandler()
	{
	}
}
