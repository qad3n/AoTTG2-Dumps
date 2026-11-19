// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardMutePopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000868")]
internal class ScoreboardMutePopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Toggle _muteEmote;

	[Token(Token = "0x4002A94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Toggle _muteText;

	[Token(Token = "0x4002A95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Toggle _muteVoice;

	[Token(Token = "0x4002A96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private AottgSliderControl _voiceVolume;

	[Token(Token = "0x4002A97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Player _player;

	[Token(Token = "0x17000DE4")]
	protected override string DialogId
	{
		[Token(Token = "0x6005031")]
		[Address(RVA = "0x5C48AF0", Offset = "0x5C47AF0", VA = "0x5C48AF0", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005032")]
	[Address(RVA = "0x5C48B20", Offset = "0x5C47B20", VA = "0x5C48B20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005033")]
	[Address(RVA = "0x5C48CD0", Offset = "0x5C47CD0", VA = "0x5C48CD0")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6005034")]
	[Address(RVA = "0x5C48EA0", Offset = "0x5C47EA0", VA = "0x5C48EA0")]
	private void HandleMute(string type, bool mute, bool isMuted)
	{
	}

	[Token(Token = "0x6005035")]
	[Address(RVA = "0x5C48F60", Offset = "0x5C47F60", VA = "0x5C48F60")]
	internal void Confirm()
	{
	}

	[Token(Token = "0x6005036")]
	[Address(RVA = "0x5C49340", Offset = "0x5C48340", VA = "0x5C49340")]
	public ScoreboardMutePopup()
	{
	}
}
