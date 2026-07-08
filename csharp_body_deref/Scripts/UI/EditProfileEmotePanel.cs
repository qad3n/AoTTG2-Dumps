using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200063A")]
internal class EditProfileEmotePanel : CategoryPanel
{
	[Token(Token = "0x17000C0C")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003EFF")]
		[Address(RVA = "0x3FE7100", Offset = "0x3FE7100", VA = "0x3FE7100", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C0D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003F00")]
		[Address(RVA = "0x3FE7110", Offset = "0x3FE7110", VA = "0x3FE7110", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003F01")]
	[Address(RVA = "0x3FE7120", Offset = "0x3FE7120", VA = "0x3FE7120", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F02")]
	[Address(RVA = "0x3FE7460", Offset = "0x3FE7460", VA = "0x3FE7460")]
	private string[] GetAvailableEmotes()
	{
		return null;
	}

	[Token(Token = "0x6003F03")]
	[Address(RVA = "0x3FE7920", Offset = "0x3FE7920", VA = "0x3FE7920")]
	private string[] GetEmotePaths(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003F04")]
	[Address(RVA = "0x3FE7C00", Offset = "0x3FE7C00", VA = "0x3FE7C00")]
	public EditProfileEmotePanel()
	{
	}
}
