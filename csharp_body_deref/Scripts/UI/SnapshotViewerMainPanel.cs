// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotViewerMainPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SnapshotViewerMainPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMainPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006FE")]
internal class SnapshotViewerMainPanel : HeadedPanel
{
	[Token(Token = "0x40021AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private SnapshotViewerMenu _menu;

	[Token(Token = "0x40021AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Text _indexLabel;

	[Token(Token = "0x40021AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _index;

	[Token(Token = "0x17000D88")]
	protected override string Title
	{
		[Token(Token = "0x6004532")]
		[Address(RVA = "0x4351600", Offset = "0x4351600", VA = "0x4351600", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D89")]
	protected override float Width
	{
		[Token(Token = "0x6004533")]
		[Address(RVA = "0x43516A0", Offset = "0x43516A0", VA = "0x43516A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8A")]
	protected override float Height
	{
		[Token(Token = "0x6004534")]
		[Address(RVA = "0x43516B0", Offset = "0x43516B0", VA = "0x43516B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8B")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004535")]
		[Address(RVA = "0x43516C0", Offset = "0x43516C0", VA = "0x43516C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8C")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004536")]
		[Address(RVA = "0x43516D0", Offset = "0x43516D0", VA = "0x43516D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D8D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004537")]
		[Address(RVA = "0x43516E0", Offset = "0x43516E0", VA = "0x43516E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004538")]
	[Address(RVA = "0x43516F0", Offset = "0x43516F0", VA = "0x43516F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004539")]
	[Address(RVA = "0x4351E60", Offset = "0x4351E60", VA = "0x4351E60")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600453A")]
	[Address(RVA = "0x4351C60", Offset = "0x4351C60", VA = "0x4351C60")]
	private void UpdateIndexLabel()
	{
	}

	[Token(Token = "0x600453B")]
	[Address(RVA = "0x4352520", Offset = "0x4352520", VA = "0x4352520")]
	public SnapshotViewerMainPanel()
	{
	}
}
