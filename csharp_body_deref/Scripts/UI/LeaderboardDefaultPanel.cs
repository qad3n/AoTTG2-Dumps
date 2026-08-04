// ==================== AoTTG2 cross-reference ====================
// Type: UI.LeaderboardDefaultPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LeaderboardDefaultPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000694")]
internal class LeaderboardDefaultPanel : CategoryPanel
{
	[Token(Token = "0x17000C98")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60041BC")]
		[Address(RVA = "0x4302A30", Offset = "0x4302A30", VA = "0x4302A30", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C99")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60041BD")]
		[Address(RVA = "0x4302A40", Offset = "0x4302A40", VA = "0x4302A40", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C9A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60041BE")]
		[Address(RVA = "0x4302A50", Offset = "0x4302A50", VA = "0x4302A50", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9B")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60041BF")]
		[Address(RVA = "0x4302A60", Offset = "0x4302A60", VA = "0x4302A60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60041C0")]
	[Address(RVA = "0x4302A90", Offset = "0x4302A90", VA = "0x4302A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60041C1")]
	[Address(RVA = "0x43050C0", Offset = "0x43050C0", VA = "0x43050C0")]
	private void CreateRank(Transform parent, ElementStyle style, int rank)
	{
	}

	[Token(Token = "0x60041C2")]
	[Address(RVA = "0x4305330", Offset = "0x4305330", VA = "0x4305330")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60041C3")]
	[Address(RVA = "0x4304B10", Offset = "0x4304B10", VA = "0x4304B10")]
	private string[] GetCategoryNames()
	{
		return null;
	}

	[Token(Token = "0x60041C4")]
	[Address(RVA = "0x4304DE0", Offset = "0x4304DE0", VA = "0x4304DE0")]
	private string[] GetSubcategoryNames(JSONNode category)
	{
		return null;
	}

	[Token(Token = "0x60041C5")]
	[Address(RVA = "0x4304740", Offset = "0x4304740", VA = "0x4304740")]
	private JSONNode FindCategory(string name)
	{
		return null;
	}

	[Token(Token = "0x60041C6")]
	[Address(RVA = "0x43048D0", Offset = "0x43048D0", VA = "0x43048D0")]
	private JSONNode FindSubcategory(JSONNode category, string subcategoryName)
	{
		return null;
	}

	[Token(Token = "0x60041C7")]
	[Address(RVA = "0x4305340", Offset = "0x4305340", VA = "0x4305340")]
	public LeaderboardDefaultPanel()
	{
	}
}
