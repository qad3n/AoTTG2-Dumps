using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006AE")]
internal class SettingsSoundPanel : SettingsCategoryPanel
{
	[Token(Token = "0x400204C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Text _currentSongLabel;

	[Token(Token = "0x17000D0C")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60042C0")]
		[Address(RVA = "0x4038730", Offset = "0x4038730", VA = "0x4038730", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042C1")]
	[Address(RVA = "0x4038740", Offset = "0x4038740", VA = "0x4038740", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042C2")]
	[Address(RVA = "0x4039720", Offset = "0x4039720", VA = "0x4039720")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60042C3")]
	[Address(RVA = "0x4039CE0", Offset = "0x4039CE0", VA = "0x4039CE0")]
	private void Update()
	{
	}

	[Token(Token = "0x60042C4")]
	[Address(RVA = "0x4039E20", Offset = "0x4039E20", VA = "0x4039E20")]
	public SettingsSoundPanel()
	{
	}
}
