// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardMutePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardMutePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200065E")]
internal class ScoreboardMutePopup : PromptPopup
{
	[Token(Token = "0x4001F46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected BoolSetting _muteEmote;

	[Token(Token = "0x4001F47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BoolSetting _muteText;

	[Token(Token = "0x4001F48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected BoolSetting _muteVoice;

	[Token(Token = "0x4001F49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected FloatSetting _voiceVolume;

	[Token(Token = "0x4001F4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Player _player;

	[Token(Token = "0x17000C21")]
	protected override string Title
	{
		[Token(Token = "0x600400B")]
		[Address(RVA = "0x42E3F30", Offset = "0x42E3F30", VA = "0x42E3F30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C22")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600400C")]
		[Address(RVA = "0x42E3FD0", Offset = "0x42E3FD0", VA = "0x42E3FD0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C23")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600400D")]
		[Address(RVA = "0x42E3FE0", Offset = "0x42E3FE0", VA = "0x42E3FE0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C24")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600400E")]
		[Address(RVA = "0x42E3FF0", Offset = "0x42E3FF0", VA = "0x42E3FF0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C25")]
	protected override float Width
	{
		[Token(Token = "0x600400F")]
		[Address(RVA = "0x42E4000", Offset = "0x42E4000", VA = "0x42E4000", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C26")]
	protected override float Height
	{
		[Token(Token = "0x6004010")]
		[Address(RVA = "0x42E4010", Offset = "0x42E4010", VA = "0x42E4010", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C27")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004011")]
		[Address(RVA = "0x42E4020", Offset = "0x42E4020", VA = "0x42E4020", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004012")]
	[Address(RVA = "0x42E4030", Offset = "0x42E4030", VA = "0x42E4030", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004013")]
	[Address(RVA = "0x42E4410", Offset = "0x42E4410", VA = "0x42E4410")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6004014")]
	[Address(RVA = "0x42E45A0", Offset = "0x42E45A0", VA = "0x42E45A0")]
	protected void HandleMute(Player player, string type, bool mute, bool isMuted)
	{
	}

	[Token(Token = "0x6004015")]
	[Address(RVA = "0x42E4650", Offset = "0x42E4650", VA = "0x42E4650")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004016")]
	[Address(RVA = "0x42E4A60", Offset = "0x42E4A60", VA = "0x42E4A60")]
	public ScoreboardMutePopup()
	{
	}
}
