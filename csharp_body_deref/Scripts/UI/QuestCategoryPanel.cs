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

[Token(Token = "0x20006A9")]
internal class QuestCategoryPanel : CategoryPanel
{
	[Token(Token = "0x4002088")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected float QuestItemWidth;

	[Token(Token = "0x4002089")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	protected float QuestItemHeight;

	[Token(Token = "0x17000CD9")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004273")]
		[Address(RVA = "0x43111D0", Offset = "0x43111D0", VA = "0x43111D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CDA")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004274")]
		[Address(RVA = "0x4311200", Offset = "0x4311200", VA = "0x4311200", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDB")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004275")]
		[Address(RVA = "0x4311210", Offset = "0x4311210", VA = "0x4311210", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CDC")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004276")]
		[Address(RVA = "0x4311220", Offset = "0x4311220", VA = "0x4311220", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CDD")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004277")]
		[Address(RVA = "0x4311230", Offset = "0x4311230", VA = "0x4311230", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004278")]
	[Address(RVA = "0x430FD90", Offset = "0x430FD90", VA = "0x430FD90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004279")]
	[Address(RVA = "0x4310080", Offset = "0x4310080", VA = "0x4310080")]
	protected void CreateQuestItems(List<QuestItem> items)
	{
	}

	[Token(Token = "0x600427A")]
	[Address(RVA = "0x43119D0", Offset = "0x43119D0", VA = "0x43119D0")]
	protected void SetRewardLabel(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x600427B")]
	[Address(RVA = "0x4311240", Offset = "0x4311240", VA = "0x4311240")]
	protected void SetTitle(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x600427C")]
	[Address(RVA = "0x4311F60", Offset = "0x4311F60", VA = "0x4311F60")]
	private string HandleConditionVariable(string locale, int index, Dictionary<string, string> conditionToValue)
	{
		return null;
	}

	[Token(Token = "0x600427D")]
	[Address(RVA = "0x4311DB0", Offset = "0x4311DB0", VA = "0x4311DB0")]
	protected void SetProgress(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x600427E")]
	[Address(RVA = "0x43111B0", Offset = "0x43111B0", VA = "0x43111B0")]
	public QuestCategoryPanel()
	{
	}
}
