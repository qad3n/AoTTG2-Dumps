// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameProgress;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000804")]
internal class QuestCategoryPanel : CategoryPanel
{
	[Token(Token = "0x400285C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected float QuestItemWidth;

	[Token(Token = "0x400285D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	protected float QuestItemHeight;

	[Token(Token = "0x17000E1F")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004D67")]
		[Address(RVA = "0x22993F0", Offset = "0x22979F0", VA = "0x1822993F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E20")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004D68")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E21")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004D69")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E22")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004D6A")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E23")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004D6B")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004D6C")]
	[Address(RVA = "0x2278860", Offset = "0x2276E60", VA = "0x182278860", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D6D")]
	[Address(RVA = "0x2297AA0", Offset = "0x22960A0", VA = "0x182297AA0")]
	protected void CreateQuestItems(List<QuestItem> items)
	{
	}

	[Token(Token = "0x6004D6E")]
	[Address(RVA = "0x2298AF0", Offset = "0x22970F0", VA = "0x182298AF0")]
	protected void SetRewardLabel(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6004D6F")]
	[Address(RVA = "0x2298ED0", Offset = "0x22974D0", VA = "0x182298ED0")]
	protected void SetTitle(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6004D70")]
	[Address(RVA = "0x2298790", Offset = "0x2296D90", VA = "0x182298790")]
	private string HandleConditionVariable(string locale, int index, Dictionary<string, string> conditionToValue)
	{
		return null;
	}

	[Token(Token = "0x6004D71")]
	[Address(RVA = "0x2298940", Offset = "0x2296F40", VA = "0x182298940")]
	protected void SetProgress(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6004D72")]
	[Address(RVA = "0x2297A80", Offset = "0x2296080", VA = "0x182297A80")]
	public QuestCategoryPanel()
	{
	}
}
