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

[Token(Token = "0x200068F")]
internal class EditProfileStatsPanel : CategoryPanel
{
	[Token(Token = "0x17000C90")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x600419F")]
		[Address(RVA = "0x4300410", Offset = "0x4300410", VA = "0x4300410", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C91")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x60041A0")]
		[Address(RVA = "0x4300420", Offset = "0x4300420", VA = "0x4300420", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C92")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60041A1")]
		[Address(RVA = "0x4300430", Offset = "0x4300430", VA = "0x4300430", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C93")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60041A2")]
		[Address(RVA = "0x4300440", Offset = "0x4300440", VA = "0x4300440", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60041A3")]
	[Address(RVA = "0x4300450", Offset = "0x4300450", VA = "0x4300450", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60041A4")]
	[Address(RVA = "0x4301AC0", Offset = "0x4301AC0", VA = "0x4301AC0")]
	protected void CreateStatLabel(Transform panel, ElementStyle style, string title, string value)
	{
	}

	[Token(Token = "0x60041A5")]
	[Address(RVA = "0x4301A50", Offset = "0x4301A50", VA = "0x4301A50")]
	protected void CreateTitleLabel(Transform panel, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x60041A6")]
	[Address(RVA = "0x4301B60", Offset = "0x4301B60", VA = "0x4301B60")]
	public EditProfileStatsPanel()
	{
	}
}
