// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardInfoPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardInfoPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000857")]
internal class ScoreboardInfoPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4002A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> HiddenSettings;

	[Token(Token = "0x4002A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private AottgInGameView _view;

	[Token(Token = "0x17000DDE")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004FB8")]
		[Address(RVA = "0x5C3C810", Offset = "0x5C3B810", VA = "0x5C3C810", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DDF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004FB9")]
		[Address(RVA = "0x5C3C820", Offset = "0x5C3B820", VA = "0x5C3C820", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DE0")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004FBA")]
		[Address(RVA = "0x5C3C830", Offset = "0x5C3B830", VA = "0x5C3C830", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004FBB")]
	[Address(RVA = "0x5C3C840", Offset = "0x5C3B840", VA = "0x5C3C840", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004FBC")]
	[Address(RVA = "0x5C3E170", Offset = "0x5C3D170", VA = "0x5C3E170")]
	private static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x6004FBD")]
	[Address(RVA = "0x5C3DA70", Offset = "0x5C3CA70", VA = "0x5C3DA70")]
	private static string SandboxLocale(string item)
	{
		return null;
	}

	[Token(Token = "0x6004FBE")]
	[Address(RVA = "0x5C3E200", Offset = "0x5C3D200", VA = "0x5C3E200")]
	private void CreateDivider(Transform panel)
	{
	}

	[Token(Token = "0x6004FBF")]
	[Address(RVA = "0x5C3DB00", Offset = "0x5C3CB00", VA = "0x5C3DB00")]
	private void CreateLabel(Transform panel, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
	}

	[Token(Token = "0x6004FC0")]
	[Address(RVA = "0x5C3DC30", Offset = "0x5C3CC30", VA = "0x5C3DC30")]
	private void CreateLabels(ElementStyle style, Transform panel, string prefix, IDictionary settings)
	{
	}

	[Token(Token = "0x6004FC1")]
	[Address(RVA = "0x5C3E2B0", Offset = "0x5C3D2B0", VA = "0x5C3E2B0")]
	private static string SettingValue(string id, BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6004FC2")]
	[Address(RVA = "0x5C3E850", Offset = "0x5C3D850", VA = "0x5C3E850")]
	public ScoreboardInfoPanel()
	{
	}
}
