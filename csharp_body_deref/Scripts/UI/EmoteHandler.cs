// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteHandler
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000634")]
internal class EmoteHandler : MonoBehaviour
{
	[Token(Token = "0x4001DDA")]
	[FieldOffset(Offset = "0x20")]
	private List<EmoteTextPopup> _emoteTextPopups;

	[Token(Token = "0x4001DDB")]
	[FieldOffset(Offset = "0x28")]
	private List<EmoteTextPopup> _emoteEmojiPopups;

	[Token(Token = "0x4001DDC")]
	[FieldOffset(Offset = "0x30")]
	private BasePopup _emoteWheelPopup;

	[Token(Token = "0x4001DDD")]
	[FieldOffset(Offset = "0x38")]
	private EmoteWheelState _currentEmoteWheelState;

	[Token(Token = "0x4001DDE")]
	[FieldOffset(Offset = "0x3C")]
	private float _currentEmoteCooldown;

	[Token(Token = "0x4001DDF")]
	public const float EmoteCooldown = 3f;

	[Token(Token = "0x4001DE0")]
	[FieldOffset(Offset = "0x40")]
	public bool IsActive;

	[Token(Token = "0x4001DE1")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4001DE2")]
	protected const float Range = 500f;

	[Token(Token = "0x4001DE3")]
	protected const float HumanOffset = 4f;

	[Token(Token = "0x4001DE4")]
	protected const float HumanVoiceChatOffset = 2f;

	[Token(Token = "0x4001DE5")]
	protected const float TitanOffset = 25f;

	[Token(Token = "0x4001DE6")]
	protected const float CrawlerOffset = 15f;

	[Token(Token = "0x4001DE7")]
	protected const float ShifterOffset = 70f;

	[Token(Token = "0x4001DE8")]
	protected const float ShowTime = 3f;

	[Token(Token = "0x4001DE9")]
	[FieldOffset(Offset = "0x50")]
	protected LayerMask CullMask;

	[Token(Token = "0x6003E54")]
	[Address(RVA = "0x42BC7A0", Offset = "0x42BC7A0", VA = "0x42BC7A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003E55")]
	[Address(RVA = "0x42BCAB0", Offset = "0x42BCAB0", VA = "0x42BCAB0")]
	public static void OnEmoteTextRPC(int viewId, string text, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E56")]
	[Address(RVA = "0x42BCE40", Offset = "0x42BCE40", VA = "0x42BCE40")]
	public static void OnEmoteEmojiRPC(int viewId, string emoji, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003E57")]
	[Address(RVA = "0x42BCDE0", Offset = "0x42BCDE0", VA = "0x42BCDE0")]
	private void ShowEmoteText(string text, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003E58")]
	[Address(RVA = "0x42BD0B0", Offset = "0x42BD0B0", VA = "0x42BD0B0")]
	private void ShowEmoteEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003E59")]
	[Address(RVA = "0x42BD5C0", Offset = "0x42BD5C0", VA = "0x42BD5C0")]
	private void ShowVoiceEmoji(string emoji, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003E5A")]
	[Address(RVA = "0x42BD6B0", Offset = "0x42BD6B0", VA = "0x42BD6B0")]
	private void StopInfinitePopup()
	{
	}

	[Token(Token = "0x6003E5B")]
	[Address(RVA = "0x42BD370", Offset = "0x42BD370", VA = "0x42BD370")]
	private Vector3 GetOffset(BaseCharacter character)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E5C")]
	[Address(RVA = "0x42BD7F0", Offset = "0x42BD7F0", VA = "0x42BD7F0")]
	public void ToggleEmoteWheel()
	{
	}

	[Token(Token = "0x6003E5D")]
	[Address(RVA = "0x42BD800", Offset = "0x42BD800", VA = "0x42BD800")]
	public void SetEmoteWheel(bool enable)
	{
	}

	[Token(Token = "0x6003E5E")]
	[Address(RVA = "0x42BE0D0", Offset = "0x42BE0D0", VA = "0x42BE0D0")]
	public void NextEmoteWheel()
	{
	}

	[Token(Token = "0x6003E5F")]
	[Address(RVA = "0x42BE250", Offset = "0x42BE250", VA = "0x42BE250")]
	private void OnEmoteWheelSelect()
	{
	}

	[Token(Token = "0x6003E60")]
	[Address(RVA = "0x42BDB80", Offset = "0x42BDB80", VA = "0x42BDB80")]
	private List<string> GetEmoteWheelOptions(EmoteWheelState state)
	{
		return null;
	}

	[Token(Token = "0x6003E61")]
	[Address(RVA = "0x42BD190", Offset = "0x42BD190", VA = "0x42BD190")]
	private EmoteTextPopup GetAvailablePopup(List<EmoteTextPopup> popups)
	{
		return null;
	}

	[Token(Token = "0x6003E62")]
	[Address(RVA = "0x42BE810", Offset = "0x42BE810", VA = "0x42BE810")]
	protected void UpdatePopup(EmoteTextPopup popup, bool inMenu)
	{
	}

	[Token(Token = "0x6003E63")]
	[Address(RVA = "0x42BEEF0", Offset = "0x42BEEF0", VA = "0x42BEEF0")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6003E64")]
	[Address(RVA = "0x42BCD70", Offset = "0x42BCD70", VA = "0x42BCD70")]
	public static string SanitizeText(string value)
	{
		return null;
	}

	[Token(Token = "0x6003E65")]
	[Address(RVA = "0x42BF1D0", Offset = "0x42BF1D0", VA = "0x42BF1D0")]
	public EmoteHandler()
	{
	}
}
