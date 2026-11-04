// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardMutePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardMutePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007BC")]
internal class ScoreboardMutePopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002713")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Toggle _muteEmote;

	[Token(Token = "0x4002714")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Toggle _muteText;

	[Token(Token = "0x4002715")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Toggle _muteVoice;

	[Token(Token = "0x4002716")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private AottgSliderControl _voiceVolume;

	[Token(Token = "0x4002717")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Player _player;

	[Token(Token = "0x17000D73")]
	protected override string DialogId
	{
		[Token(Token = "0x6004B12")]
		[Address(RVA = "0x226A3D0", Offset = "0x22689D0", VA = "0x18226A3D0", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004B13")]
	[Address(RVA = "0x226A040", Offset = "0x2268640", VA = "0x18226A040", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B14")]
	[Address(RVA = "0x226A1F0", Offset = "0x22687F0", VA = "0x18226A1F0")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6004B15")]
	[Address(RVA = "0x2269F90", Offset = "0x2268590", VA = "0x182269F90")]
	private void HandleMute(string type, bool mute, bool isMuted)
	{
	}

	[Token(Token = "0x6004B16")]
	[Address(RVA = "0x2269D30", Offset = "0x2268330", VA = "0x182269D30")]
	internal void Confirm()
	{
	}

	[Token(Token = "0x6004B17")]
	[Address(RVA = "0x225DAF0", Offset = "0x225C0F0", VA = "0x18225DAF0")]
	public ScoreboardMutePopup()
	{
	}
}
