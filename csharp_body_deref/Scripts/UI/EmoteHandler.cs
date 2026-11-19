// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/EmoteHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace UI;

[Token(Token = "0x200083A")]
internal class EmoteHandler : MonoBehaviour
{
	[Token(Token = "0x4002900")]
	[FieldOffset(Offset = "0x20")]
	private List<EmoteTextPopup> _emoteTextPopups;

	[Token(Token = "0x4002901")]
	[FieldOffset(Offset = "0x28")]
	private List<EmoteTextPopup> _emoteEmojiPopups;

	[Token(Token = "0x4002902")]
	[FieldOffset(Offset = "0x30")]
	private BasePopup _emoteWheelPopup;

	[Token(Token = "0x4002903")]
	[FieldOffset(Offset = "0x38")]
	private EmoteWheelState _currentEmoteWheelState;

	[Token(Token = "0x4002904")]
	[FieldOffset(Offset = "0x3C")]
	private float _currentEmoteCooldown;

	[Token(Token = "0x4002905")]
	public const float EmoteCooldown = 3f;

	[Token(Token = "0x4002906")]
	[FieldOffset(Offset = "0x40")]
	public bool IsActive;

	[Token(Token = "0x4002907")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002908")]
	protected const float Range = 500f;

	[Token(Token = "0x4002909")]
	protected const float HumanOffset = 4f;

	[Token(Token = "0x400290A")]
	protected const float HumanVoiceChatOffset = 2f;

	[Token(Token = "0x400290B")]
	protected const float TitanOffset = 25f;

	[Token(Token = "0x400290C")]
	protected const float CrawlerOffset = 15f;

	[Token(Token = "0x400290D")]
	protected const float ShifterOffset = 70f;

	[Token(Token = "0x400290E")]
	protected const float ShowTime = 3f;

	[Token(Token = "0x400290F")]
	[FieldOffset(Offset = "0x50")]
	protected LayerMask CullMask;

	[Token(Token = "0x6004E6C")]
	[Address(RVA = "0x5C1E380", Offset = "0x5C1D380", VA = "0x5C1E380")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004E6D")]
	[Address(RVA = "0x5C1E750", Offset = "0x5C1D750", VA = "0x5C1E750")]
	public static void OnEmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004E6E")]
	[Address(RVA = "0x5C1EAA0", Offset = "0x5C1DAA0", VA = "0x5C1EAA0")]
	public static void OnEmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004E6F")]
	[Address(RVA = "0x5C1EA40", Offset = "0x5C1DA40", VA = "0x5C1EA40")]
	private void ShowEmoteText(string text, BaseCharacter character)
	{
	}

	[Token(Token = "0x6004E70")]
	[Address(RVA = "0x5C1ED20", Offset = "0x5C1DD20", VA = "0x5C1ED20")]
	private void ShowEmoteEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x6004E71")]
	[Address(RVA = "0x5C1F200", Offset = "0x5C1E200", VA = "0x5C1F200")]
	private void ShowVoiceEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x6004E72")]
	[Address(RVA = "0x5C1F2F0", Offset = "0x5C1E2F0", VA = "0x5C1F2F0")]
	private void StopInfinitePopup()
	{
	}

	[Token(Token = "0x6004E73")]
	[Address(RVA = "0x5C1EF70", Offset = "0x5C1DF70", VA = "0x5C1EF70")]
	private Vector3 GetOffset(BaseCharacter character)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004E74")]
	[Address(RVA = "0x5C1F430", Offset = "0x5C1E430", VA = "0x5C1F430")]
	public void ToggleEmoteWheel()
	{
	}

	[Token(Token = "0x6004E75")]
	[Address(RVA = "0x5C1F440", Offset = "0x5C1E440", VA = "0x5C1F440")]
	public void SetEmoteWheel(bool enable)
	{
	}

	[Token(Token = "0x6004E76")]
	[Address(RVA = "0x5C1FE20", Offset = "0x5C1EE20", VA = "0x5C1FE20")]
	public void NextEmoteWheel()
	{
	}

	[Token(Token = "0x6004E77")]
	[Address(RVA = "0x5C1FDC0", Offset = "0x5C1EDC0", VA = "0x5C1FDC0")]
	private string GetEmoteWheelTitle()
	{
		return null;
	}

	[Token(Token = "0x6004E78")]
	[Address(RVA = "0x5C20000", Offset = "0x5C1F000", VA = "0x5C20000")]
	private void OnEmoteWheelSelect()
	{
	}

	[Token(Token = "0x6004E79")]
	[Address(RVA = "0x5C1F880", Offset = "0x5C1E880", VA = "0x5C1F880")]
	private List<string> GetEmoteWheelOptions(EmoteWheelState state)
	{
		return null;
	}

	[Token(Token = "0x6004E7A")]
	[Address(RVA = "0x5C205D0", Offset = "0x5C1F5D0", VA = "0x5C205D0")]
	public static string ActionLabel(string action)
	{
		return null;
	}

	[Token(Token = "0x6004E7B")]
	[Address(RVA = "0x5C1EDD0", Offset = "0x5C1DDD0", VA = "0x5C1EDD0")]
	private EmoteTextPopup GetAvailablePopup(List<EmoteTextPopup> popups)
	{
		return null;
	}

	[Token(Token = "0x6004E7C")]
	[Address(RVA = "0x5C20660", Offset = "0x5C1F660", VA = "0x5C20660")]
	protected void UpdatePopup(EmoteTextPopup popup, bool inMenu)
	{
	}

	[Token(Token = "0x6004E7D")]
	[Address(RVA = "0x5C20D20", Offset = "0x5C1FD20", VA = "0x5C20D20")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6004E7E")]
	[Address(RVA = "0x5C1E9D0", Offset = "0x5C1D9D0", VA = "0x5C1E9D0")]
	public static string SanitizeText(string value)
	{
		return null;
	}

	[Token(Token = "0x6004E7F")]
	[Address(RVA = "0x5C20FD0", Offset = "0x5C1FFD0", VA = "0x5C20FD0")]
	public EmoteHandler()
	{
	}
}
