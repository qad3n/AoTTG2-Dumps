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

[Token(Token = "0x200078F")]
internal class EmoteHandler : MonoBehaviour
{
	[Token(Token = "0x400258F")]
	[FieldOffset(Offset = "0x20")]
	private List<EmoteTextPopup> _emoteTextPopups;

	[Token(Token = "0x4002590")]
	[FieldOffset(Offset = "0x28")]
	private List<EmoteTextPopup> _emoteEmojiPopups;

	[Token(Token = "0x4002591")]
	[FieldOffset(Offset = "0x30")]
	private BasePopup _emoteWheelPopup;

	[Token(Token = "0x4002592")]
	[FieldOffset(Offset = "0x38")]
	private EmoteWheelState _currentEmoteWheelState;

	[Token(Token = "0x4002593")]
	[FieldOffset(Offset = "0x3C")]
	private float _currentEmoteCooldown;

	[Token(Token = "0x4002594")]
	public const float EmoteCooldown = 3f;

	[Token(Token = "0x4002595")]
	[FieldOffset(Offset = "0x40")]
	public bool IsActive;

	[Token(Token = "0x4002596")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002597")]
	protected const float Range = 500f;

	[Token(Token = "0x4002598")]
	protected const float HumanOffset = 4f;

	[Token(Token = "0x4002599")]
	protected const float HumanVoiceChatOffset = 2f;

	[Token(Token = "0x400259A")]
	protected const float TitanOffset = 25f;

	[Token(Token = "0x400259B")]
	protected const float CrawlerOffset = 15f;

	[Token(Token = "0x400259C")]
	protected const float ShifterOffset = 70f;

	[Token(Token = "0x400259D")]
	protected const float ShowTime = 3f;

	[Token(Token = "0x400259E")]
	[FieldOffset(Offset = "0x50")]
	protected LayerMask CullMask;

	[Token(Token = "0x6004946")]
	[Address(RVA = "0x2241E70", Offset = "0x2240470", VA = "0x182241E70")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004947")]
	[Address(RVA = "0x2243450", Offset = "0x2241A50", VA = "0x182243450")]
	public static void OnEmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004948")]
	[Address(RVA = "0x2243120", Offset = "0x2241720", VA = "0x182243120")]
	public static void OnEmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004949")]
	[Address(RVA = "0x2244120", Offset = "0x2242720", VA = "0x182244120")]
	private void ShowEmoteText(string text, BaseCharacter character)
	{
	}

	[Token(Token = "0x600494A")]
	[Address(RVA = "0x2244030", Offset = "0x2242630", VA = "0x182244030")]
	private void ShowEmoteEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x600494B")]
	[Address(RVA = "0x22441B0", Offset = "0x22427B0", VA = "0x1822441B0")]
	private void ShowVoiceEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x600494C")]
	[Address(RVA = "0x22442E0", Offset = "0x22428E0", VA = "0x1822442E0")]
	private void StopInfinitePopup()
	{
	}

	[Token(Token = "0x600494D")]
	[Address(RVA = "0x2242990", Offset = "0x2240F90", VA = "0x182242990")]
	private Vector3 GetOffset(BaseCharacter character)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600494E")]
	[Address(RVA = "0x22443F0", Offset = "0x22429F0", VA = "0x1822443F0")]
	public void ToggleEmoteWheel()
	{
	}

	[Token(Token = "0x600494F")]
	[Address(RVA = "0x2243E80", Offset = "0x2242480", VA = "0x182243E80")]
	public void SetEmoteWheel(bool enable)
	{
	}

	[Token(Token = "0x6004950")]
	[Address(RVA = "0x2242F60", Offset = "0x2241560", VA = "0x182242F60")]
	public void NextEmoteWheel()
	{
	}

	[Token(Token = "0x6004951")]
	[Address(RVA = "0x2242920", Offset = "0x2240F20", VA = "0x182242920")]
	private string GetEmoteWheelTitle()
	{
		return null;
	}

	[Token(Token = "0x6004952")]
	[Address(RVA = "0x2243730", Offset = "0x2241D30", VA = "0x182243730")]
	private void OnEmoteWheelSelect()
	{
	}

	[Token(Token = "0x6004953")]
	[Address(RVA = "0x2242410", Offset = "0x2240A10", VA = "0x182242410")]
	private List<string> GetEmoteWheelOptions(EmoteWheelState state)
	{
		return null;
	}

	[Token(Token = "0x6004954")]
	[Address(RVA = "0x2242270", Offset = "0x2240870", VA = "0x182242270")]
	private EmoteTextPopup GetAvailablePopup(List<EmoteTextPopup> popups)
	{
		return null;
	}

	[Token(Token = "0x6004955")]
	[Address(RVA = "0x2244490", Offset = "0x2242A90", VA = "0x182244490")]
	protected void UpdatePopup(EmoteTextPopup popup, bool inMenu)
	{
	}

	[Token(Token = "0x6004956")]
	[Address(RVA = "0x2242CD0", Offset = "0x22412D0", VA = "0x182242CD0")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6004957")]
	[Address(RVA = "0x2243E00", Offset = "0x2242400", VA = "0x182243E00")]
	public static string SanitizeText(string value)
	{
		return null;
	}

	[Token(Token = "0x6004958")]
	[Address(RVA = "0x2244A60", Offset = "0x2243060", VA = "0x182244A60")]
	public EmoteHandler()
	{
	}
}
