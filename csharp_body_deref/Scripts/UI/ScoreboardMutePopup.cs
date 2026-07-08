using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000613")]
internal class ScoreboardMutePopup : PromptPopup
{
	[Token(Token = "0x4001DFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected BoolSetting _muteEmote;

	[Token(Token = "0x4001E00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BoolSetting _muteText;

	[Token(Token = "0x4001E01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected BoolSetting _muteVoice;

	[Token(Token = "0x4001E02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected FloatSetting _voiceVolume;

	[Token(Token = "0x4001E03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Player _player;

	[Token(Token = "0x17000BA9")]
	protected override string Title
	{
		[Token(Token = "0x6003DBE")]
		[Address(RVA = "0x3FD1530", Offset = "0x3FD1530", VA = "0x3FD1530", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BAA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003DBF")]
		[Address(RVA = "0x3FD15D0", Offset = "0x3FD15D0", VA = "0x3FD15D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BAB")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003DC0")]
		[Address(RVA = "0x3FD15E0", Offset = "0x3FD15E0", VA = "0x3FD15E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BAC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003DC1")]
		[Address(RVA = "0x3FD15F0", Offset = "0x3FD15F0", VA = "0x3FD15F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BAD")]
	protected override float Width
	{
		[Token(Token = "0x6003DC2")]
		[Address(RVA = "0x3FD1600", Offset = "0x3FD1600", VA = "0x3FD1600", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BAE")]
	protected override float Height
	{
		[Token(Token = "0x6003DC3")]
		[Address(RVA = "0x3FD1610", Offset = "0x3FD1610", VA = "0x3FD1610", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BAF")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003DC4")]
		[Address(RVA = "0x3FD1620", Offset = "0x3FD1620", VA = "0x3FD1620", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003DC5")]
	[Address(RVA = "0x3FD1630", Offset = "0x3FD1630", VA = "0x3FD1630", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003DC6")]
	[Address(RVA = "0x3FD1A10", Offset = "0x3FD1A10", VA = "0x3FD1A10")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6003DC7")]
	[Address(RVA = "0x3FD1BA0", Offset = "0x3FD1BA0", VA = "0x3FD1BA0")]
	protected void HandleMute(Player player, string type, bool mute, bool isMuted)
	{
	}

	[Token(Token = "0x6003DC8")]
	[Address(RVA = "0x3FD1C50", Offset = "0x3FD1C50", VA = "0x3FD1C50")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003DC9")]
	[Address(RVA = "0x3FD2060", Offset = "0x3FD2060", VA = "0x3FD2060")]
	public ScoreboardMutePopup()
	{
	}
}
