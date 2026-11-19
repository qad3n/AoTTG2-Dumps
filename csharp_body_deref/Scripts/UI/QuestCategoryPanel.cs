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

[Token(Token = "0x2000886")]
internal class QuestCategoryPanel : CategoryPanel
{
	[Token(Token = "0x4002B19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected float QuestItemWidth;

	[Token(Token = "0x4002B1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	protected float QuestItemHeight;

	[Token(Token = "0x17000E33")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600512C")]
		[Address(RVA = "0x5C5A070", Offset = "0x5C59070", VA = "0x5C5A070", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E34")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600512D")]
		[Address(RVA = "0x5C5A0A0", Offset = "0x5C590A0", VA = "0x5C5A0A0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E35")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600512E")]
		[Address(RVA = "0x5C5A0B0", Offset = "0x5C590B0", VA = "0x5C5A0B0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E36")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600512F")]
		[Address(RVA = "0x5C5A0C0", Offset = "0x5C590C0", VA = "0x5C5A0C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E37")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6005130")]
		[Address(RVA = "0x5C5A0D0", Offset = "0x5C590D0", VA = "0x5C5A0D0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6005131")]
	[Address(RVA = "0x5C59100", Offset = "0x5C58100", VA = "0x5C59100", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005132")]
	[Address(RVA = "0x5C59420", Offset = "0x5C58420", VA = "0x5C59420")]
	protected void CreateQuestItems(List<QuestItem> items)
	{
	}

	[Token(Token = "0x6005133")]
	[Address(RVA = "0x5C5A710", Offset = "0x5C59710", VA = "0x5C5A710")]
	protected void SetRewardLabel(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6005134")]
	[Address(RVA = "0x5C5A0E0", Offset = "0x5C590E0", VA = "0x5C5A0E0")]
	protected void SetTitle(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6005135")]
	[Address(RVA = "0x5C5AC70", Offset = "0x5C59C70", VA = "0x5C5AC70")]
	private string HandleConditionVariable(string locale, int index, Dictionary<string, string> conditionToValue)
	{
		return null;
	}

	[Token(Token = "0x6005136")]
	[Address(RVA = "0x5C5AAD0", Offset = "0x5C59AD0", VA = "0x5C5AAD0")]
	protected void SetProgress(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6005137")]
	[Address(RVA = "0x5C5A050", Offset = "0x5C59050", VA = "0x5C5A050")]
	public QuestCategoryPanel()
	{
	}
}
