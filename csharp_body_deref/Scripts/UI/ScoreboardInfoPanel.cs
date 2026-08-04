// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardInfoPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardInfoPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200064E")]
internal class ScoreboardInfoPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x17000C1C")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003F9F")]
		[Address(RVA = "0x42D9F70", Offset = "0x42D9F70", VA = "0x42D9F70", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C1D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003FA0")]
		[Address(RVA = "0x42D9F80", Offset = "0x42D9F80", VA = "0x42D9F80", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003FA1")]
		[Address(RVA = "0x42D9F90", Offset = "0x42D9F90", VA = "0x42D9F90", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003FA2")]
	[Address(RVA = "0x42D9FA0", Offset = "0x42D9FA0", VA = "0x42D9FA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FA3")]
	[Address(RVA = "0x42DABD0", Offset = "0x42DABD0", VA = "0x42DABD0")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, OrderedDictionary settings)
	{
	}

	[Token(Token = "0x6003FA4")]
	[Address(RVA = "0x42DA960", Offset = "0x42DA960", VA = "0x42DA960")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, BaseSettingsContainer container)
	{
	}

	[Token(Token = "0x6003FA5")]
	[Address(RVA = "0x42DA980", Offset = "0x42DA980", VA = "0x42DA980")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, Dictionary<string, BaseSetting> settings)
	{
	}

	[Token(Token = "0x6003FA6")]
	[Address(RVA = "0x42DB9D0", Offset = "0x42DB9D0", VA = "0x42DB9D0")]
	public ScoreboardInfoPanel()
	{
	}
}
