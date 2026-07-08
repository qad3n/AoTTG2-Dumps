using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006B0")]
internal class SnapshotViewerMainPanel : HeadedPanel
{
	[Token(Token = "0x400204D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private SnapshotViewerMenu _menu;

	[Token(Token = "0x400204E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Text _indexLabel;

	[Token(Token = "0x400204F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _index;

	[Token(Token = "0x17000D0E")]
	protected override string Title
	{
		[Token(Token = "0x60042CB")]
		[Address(RVA = "0x403C230", Offset = "0x403C230", VA = "0x403C230", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D0F")]
	protected override float Width
	{
		[Token(Token = "0x60042CC")]
		[Address(RVA = "0x403C2D0", Offset = "0x403C2D0", VA = "0x403C2D0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D10")]
	protected override float Height
	{
		[Token(Token = "0x60042CD")]
		[Address(RVA = "0x403C2E0", Offset = "0x403C2E0", VA = "0x403C2E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D11")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60042CE")]
		[Address(RVA = "0x403C2F0", Offset = "0x403C2F0", VA = "0x403C2F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D12")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60042CF")]
		[Address(RVA = "0x403C300", Offset = "0x403C300", VA = "0x403C300", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D13")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60042D0")]
		[Address(RVA = "0x403C310", Offset = "0x403C310", VA = "0x403C310", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60042D1")]
	[Address(RVA = "0x403C320", Offset = "0x403C320", VA = "0x403C320", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042D2")]
	[Address(RVA = "0x403CA90", Offset = "0x403CA90", VA = "0x403CA90")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60042D3")]
	[Address(RVA = "0x403C890", Offset = "0x403C890", VA = "0x403C890")]
	private void UpdateIndexLabel()
	{
	}

	[Token(Token = "0x60042D4")]
	[Address(RVA = "0x403D150", Offset = "0x403D150", VA = "0x403D150")]
	public SnapshotViewerMainPanel()
	{
	}
}
