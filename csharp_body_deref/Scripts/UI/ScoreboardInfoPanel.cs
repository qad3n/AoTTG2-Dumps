// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardInfoPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardInfoPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007AC")]
internal class ScoreboardInfoPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x40026C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private AottgInGameView _view;

	[Token(Token = "0x17000D6D")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004AA1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D6E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004AA2")]
		[Address(RVA = "0x2182AB0", Offset = "0x21810B0", VA = "0x182182AB0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D6F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004AA3")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004AA4")]
	[Address(RVA = "0x22624B0", Offset = "0x2260AB0", VA = "0x1822624B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004AA5")]
	[Address(RVA = "0x22615E0", Offset = "0x225FBE0", VA = "0x1822615E0")]
	private void CreateDivider(Transform panel)
	{
	}

	[Token(Token = "0x6004AA6")]
	[Address(RVA = "0x22616B0", Offset = "0x225FCB0", VA = "0x1822616B0")]
	private void CreateLabel(Transform panel, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
	}

	[Token(Token = "0x6004AA7")]
	[Address(RVA = "0x2261A00", Offset = "0x2260000", VA = "0x182261A00")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, OrderedDictionary settings)
	{
	}

	[Token(Token = "0x6004AA8")]
	[Address(RVA = "0x2262480", Offset = "0x2260A80", VA = "0x182262480")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, BaseSettingsContainer container)
	{
	}

	[Token(Token = "0x6004AA9")]
	[Address(RVA = "0x22617F0", Offset = "0x225FDF0", VA = "0x1822617F0")]
	private void CreateLabels(ElementStyle style, Transform panel, string category, Dictionary<string, BaseSetting> settings)
	{
	}

	[Token(Token = "0x6004AAA")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public ScoreboardInfoPanel()
	{
	}
}
