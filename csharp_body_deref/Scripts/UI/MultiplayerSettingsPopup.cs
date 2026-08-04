// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiplayerSettingsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiplayerSettingsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerSettingsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006A6")]
internal class MultiplayerSettingsPopup : PromptPopup
{
	[Token(Token = "0x17000CCD")]
	protected override string Title
	{
		[Token(Token = "0x6004260")]
		[Address(RVA = "0x430E920", Offset = "0x430E920", VA = "0x430E920", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CCE")]
	protected override float Width
	{
		[Token(Token = "0x6004261")]
		[Address(RVA = "0x430E9C0", Offset = "0x430E9C0", VA = "0x430E9C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCF")]
	protected override float Height
	{
		[Token(Token = "0x6004262")]
		[Address(RVA = "0x430E9D0", Offset = "0x430E9D0", VA = "0x430E9D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD0")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004263")]
		[Address(RVA = "0x430E9E0", Offset = "0x430E9E0", VA = "0x430E9E0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CD1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004264")]
		[Address(RVA = "0x430E9F0", Offset = "0x430E9F0", VA = "0x430E9F0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004265")]
	[Address(RVA = "0x430EA00", Offset = "0x430EA00", VA = "0x430EA00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004266")]
	[Address(RVA = "0x430EEE0", Offset = "0x430EEE0", VA = "0x430EEE0")]
	protected void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x6004267")]
	[Address(RVA = "0x430EF50", Offset = "0x430EF50", VA = "0x430EF50")]
	public MultiplayerSettingsPopup()
	{
	}
}
