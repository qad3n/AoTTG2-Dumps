// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardProfilePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardProfilePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000661")]
internal class ScoreboardProfilePopup : PromptPopup
{
	[Token(Token = "0x4001F51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ProfileSettings _profile;

	[Token(Token = "0x4001F52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _items;

	[Token(Token = "0x17000C30")]
	protected override string Title
	{
		[Token(Token = "0x600402D")]
		[Address(RVA = "0x42E5960", Offset = "0x42E5960", VA = "0x42E5960", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C31")]
	protected override float Width
	{
		[Token(Token = "0x600402E")]
		[Address(RVA = "0x42E59C0", Offset = "0x42E59C0", VA = "0x42E59C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C32")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600402F")]
		[Address(RVA = "0x42E59D0", Offset = "0x42E59D0", VA = "0x42E59D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C33")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004030")]
		[Address(RVA = "0x42E59E0", Offset = "0x42E59E0", VA = "0x42E59E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C34")]
	protected override float Height
	{
		[Token(Token = "0x6004031")]
		[Address(RVA = "0x42E59F0", Offset = "0x42E59F0", VA = "0x42E59F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004032")]
	[Address(RVA = "0x42E5A00", Offset = "0x42E5A00", VA = "0x42E5A00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004033")]
	[Address(RVA = "0x42E5C60", Offset = "0x42E5C60", VA = "0x42E5C60")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6004034")]
	[Address(RVA = "0x42E6D90", Offset = "0x42E6D90", VA = "0x42E6D90")]
	private string GetAuthoritativeDisplayName(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004035")]
	[Address(RVA = "0x42E6ED0", Offset = "0x42E6ED0", VA = "0x42E6ED0")]
	private string GetDisplayUserId(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004036")]
	[Address(RVA = "0x42E6FA0", Offset = "0x42E6FA0", VA = "0x42E6FA0")]
	private string GetPatreonTierLabel(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004037")]
	[Address(RVA = "0x42E6AB0", Offset = "0x42E6AB0", VA = "0x42E6AB0")]
	private void AddEffectRow(ElementStyle style, Player player, string labelKey, string value, bool enabled, string effectName, Color colorA, Color colorB, Color colorC, Color colorD)
	{
	}

	[Token(Token = "0x6004038")]
	[Address(RVA = "0x42E5A20", Offset = "0x42E5A20", VA = "0x42E5A20")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004039")]
	[Address(RVA = "0x42E7010", Offset = "0x42E7010", VA = "0x42E7010")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600403A")]
	[Address(RVA = "0x42E7080", Offset = "0x42E7080", VA = "0x42E7080")]
	public ScoreboardProfilePopup()
	{
	}
}
