// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorStatsPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorStatsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorStatsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007C5")]
internal class CharacterEditorStatsPanel : HeadedPanel
{
	[Token(Token = "0x17000D12")]
	protected override string Title
	{
		[Token(Token = "0x6004AED")]
		[Address(RVA = "0x5BD8990", Offset = "0x5BD7990", VA = "0x5BD8990", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D13")]
	protected override float Width
	{
		[Token(Token = "0x6004AEE")]
		[Address(RVA = "0x5BD89F0", Offset = "0x5BD79F0", VA = "0x5BD89F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D14")]
	protected override float Height
	{
		[Token(Token = "0x6004AEF")]
		[Address(RVA = "0x5BD8A00", Offset = "0x5BD7A00", VA = "0x5BD8A00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D15")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004AF0")]
		[Address(RVA = "0x5BD8A10", Offset = "0x5BD7A10", VA = "0x5BD8A10", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D16")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004AF1")]
		[Address(RVA = "0x5BD8A20", Offset = "0x5BD7A20", VA = "0x5BD8A20", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D17")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004AF2")]
		[Address(RVA = "0x5BD8A30", Offset = "0x5BD7A30", VA = "0x5BD8A30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004AF3")]
	[Address(RVA = "0x5BD8A40", Offset = "0x5BD7A40", VA = "0x5BD8A40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004AF4")]
	[Address(RVA = "0x5BD9440", Offset = "0x5BD8440", VA = "0x5BD9440")]
	protected void FitStatBarColumns(Transform[] statbars)
	{
	}

	[Token(Token = "0x6004AF5")]
	[Address(RVA = "0x5BD8FD0", Offset = "0x5BD7FD0", VA = "0x5BD8FD0")]
	protected Transform CreateStatBar(string title, int value)
	{
		return null;
	}

	[Token(Token = "0x6004AF6")]
	[Address(RVA = "0x5BD9880", Offset = "0x5BD8880", VA = "0x5BD9880")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6004AF7")]
	[Address(RVA = "0x5BD9C90", Offset = "0x5BD8C90", VA = "0x5BD9C90")]
	public CharacterEditorStatsPanel()
	{
	}
}
