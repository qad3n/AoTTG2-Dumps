using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameProgress;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200065D")]
internal class QuestCategoryPanel : CategoryPanel
{
	[Token(Token = "0x4001F33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected float QuestItemWidth;

	[Token(Token = "0x4001F34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	protected float QuestItemHeight;

	[Token(Token = "0x17000C5F")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004016")]
		[Address(RVA = "0x3FFCE90", Offset = "0x3FFCE90", VA = "0x3FFCE90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C60")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004017")]
		[Address(RVA = "0x3FFCEC0", Offset = "0x3FFCEC0", VA = "0x3FFCEC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C61")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004018")]
		[Address(RVA = "0x3FFCED0", Offset = "0x3FFCED0", VA = "0x3FFCED0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C62")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004019")]
		[Address(RVA = "0x3FFCEE0", Offset = "0x3FFCEE0", VA = "0x3FFCEE0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C63")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600401A")]
		[Address(RVA = "0x3FFCEF0", Offset = "0x3FFCEF0", VA = "0x3FFCEF0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600401B")]
	[Address(RVA = "0x3FFBA50", Offset = "0x3FFBA50", VA = "0x3FFBA50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600401C")]
	[Address(RVA = "0x3FFBD40", Offset = "0x3FFBD40", VA = "0x3FFBD40")]
	protected void CreateQuestItems(List<QuestItem> items)
	{
	}

	[Token(Token = "0x600401D")]
	[Address(RVA = "0x3FFD690", Offset = "0x3FFD690", VA = "0x3FFD690")]
	protected void SetRewardLabel(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x600401E")]
	[Address(RVA = "0x3FFCF00", Offset = "0x3FFCF00", VA = "0x3FFCF00")]
	protected void SetTitle(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x600401F")]
	[Address(RVA = "0x3FFDC20", Offset = "0x3FFDC20", VA = "0x3FFDC20")]
	private string HandleConditionVariable(string locale, int index, Dictionary<string, string> conditionToValue)
	{
		return null;
	}

	[Token(Token = "0x6004020")]
	[Address(RVA = "0x3FFDA70", Offset = "0x3FFDA70", VA = "0x3FFDA70")]
	protected void SetProgress(QuestItem item, Transform panel)
	{
	}

	[Token(Token = "0x6004021")]
	[Address(RVA = "0x3FFCE70", Offset = "0x3FFCE70", VA = "0x3FFCE70")]
	public QuestCategoryPanel()
	{
	}
}
