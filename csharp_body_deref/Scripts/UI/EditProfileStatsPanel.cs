// ==================== AoTTG2 cross-reference ====================
// Type: UI.EditProfileStatsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EditProfileStatsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileStatsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007EA")]
internal class EditProfileStatsPanel : CategoryPanel
{
	[Token(Token = "0x17000DD6")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004C94")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DD7")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6004C95")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DD8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004C96")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DD9")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004C97")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004C98")]
	[Address(RVA = "0x22891B0", Offset = "0x22877B0", VA = "0x1822891B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004C99")]
	[Address(RVA = "0x2289070", Offset = "0x2287670", VA = "0x182289070")]
	protected void CreateStatLabel(Transform panel, ElementStyle style, string title, string value)
	{
	}

	[Token(Token = "0x6004C9A")]
	[Address(RVA = "0x2289120", Offset = "0x2287720", VA = "0x182289120")]
	protected void CreateTitleLabel(Transform panel, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6004C9B")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public EditProfileStatsPanel()
	{
	}
}
