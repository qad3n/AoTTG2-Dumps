using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006A4")]
internal class SettingsSkinsForestPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D04")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004295")]
		[Address(RVA = "0x40362C0", Offset = "0x40362C0", VA = "0x40362C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D05")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004296")]
		[Address(RVA = "0x40362D0", Offset = "0x40362D0", VA = "0x40362D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004297")]
	[Address(RVA = "0x40362E0", Offset = "0x40362E0", VA = "0x40362E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004298")]
	[Address(RVA = "0x40362F0", Offset = "0x40362F0", VA = "0x40362F0")]
	public SettingsSkinsForestPanel()
	{
	}
}
