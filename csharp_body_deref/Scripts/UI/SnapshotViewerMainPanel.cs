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

[Token(Token = "0x200087D")]
internal class SnapshotViewerMainPanel : HeadedPanel
{
	[Token(Token = "0x4002A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private SnapshotViewerMenu _menu;

	[Token(Token = "0x4002A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Text _indexLabel;

	[Token(Token = "0x4002A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _index;

	[Token(Token = "0x17000EE8")]
	protected override string Title
	{
		[Token(Token = "0x600516B")]
		[Address(RVA = "0x22FD3B0", Offset = "0x22FB9B0", VA = "0x1822FD3B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EE9")]
	protected override float Width
	{
		[Token(Token = "0x600516C")]
		[Address(RVA = "0x21DDA70", Offset = "0x21DC070", VA = "0x1821DDA70", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EEA")]
	protected override float Height
	{
		[Token(Token = "0x600516D")]
		[Address(RVA = "0x22FD3A0", Offset = "0x22FB9A0", VA = "0x1822FD3A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EEB")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600516E")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EEC")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600516F")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EED")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005170")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6005171")]
	[Address(RVA = "0x22FCCE0", Offset = "0x22FB2E0", VA = "0x1822FCCE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005172")]
	[Address(RVA = "0x22FCB10", Offset = "0x22FB110", VA = "0x1822FCB10")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005173")]
	[Address(RVA = "0x22FD200", Offset = "0x22FB800", VA = "0x1822FD200")]
	private void UpdateIndexLabel()
	{
	}

	[Token(Token = "0x6005174")]
	[Address(RVA = "0x21D6E20", Offset = "0x21D5420", VA = "0x1821D6E20")]
	public SnapshotViewerMainPanel()
	{
	}
}
