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

[Token(Token = "0x20007EF")]
internal class LeaderboardDefaultPanel : CategoryPanel
{
	[Token(Token = "0x17000DDE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004CB1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DDF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004CB2")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DE0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004CB3")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DE1")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004CB4")]
		[Address(RVA = "0x228CFC0", Offset = "0x228B5C0", VA = "0x18228CFC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004CB5")]
	[Address(RVA = "0x228B620", Offset = "0x2289C20", VA = "0x18228B620", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004CB6")]
	[Address(RVA = "0x228AAD0", Offset = "0x22890D0", VA = "0x18228AAD0")]
	private void CreateRank(Transform parent, ElementStyle style, int rank)
	{
	}

	[Token(Token = "0x6004CB7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004CB8")]
	[Address(RVA = "0x228B140", Offset = "0x2289740", VA = "0x18228B140")]
	private string[] GetCategoryNames()
	{
		return null;
	}

	[Token(Token = "0x6004CB9")]
	[Address(RVA = "0x228B3A0", Offset = "0x22899A0", VA = "0x18228B3A0")]
	private string[] GetSubcategoryNames(JSONNode category)
	{
		return null;
	}

	[Token(Token = "0x6004CBA")]
	[Address(RVA = "0x228AD40", Offset = "0x2289340", VA = "0x18228AD40")]
	private JSONNode FindCategory(string name)
	{
		return null;
	}

	[Token(Token = "0x6004CBB")]
	[Address(RVA = "0x228AEF0", Offset = "0x22894F0", VA = "0x18228AEF0")]
	private JSONNode FindSubcategory(JSONNode category, string subcategoryName)
	{
		return null;
	}

	[Token(Token = "0x6004CBC")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public LeaderboardDefaultPanel()
	{
	}
}
