using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006A2")]
internal class SettingsSkinsCityPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D00")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600428D")]
		[Address(RVA = "0x4033860", Offset = "0x4033860", VA = "0x4033860", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D01")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600428E")]
		[Address(RVA = "0x4033870", Offset = "0x4033870", VA = "0x4033870", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600428F")]
	[Address(RVA = "0x4033880", Offset = "0x4033880", VA = "0x4033880", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004290")]
	[Address(RVA = "0x4033890", Offset = "0x4033890", VA = "0x4033890")]
	public SettingsSkinsCityPanel()
	{
	}
}
