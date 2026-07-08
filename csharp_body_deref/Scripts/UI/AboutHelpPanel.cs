using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200062B")]
internal class AboutHelpPanel : CategoryPanel
{
	[Token(Token = "0x17000BF5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003E89")]
		[Address(RVA = "0x3FDDB20", Offset = "0x3FDDB20", VA = "0x3FDDB20", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003E8A")]
	[Address(RVA = "0x3FDDB30", Offset = "0x3FDDB30", VA = "0x3FDDB30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E8B")]
	[Address(RVA = "0x3FDDDF0", Offset = "0x3FDDDF0", VA = "0x3FDDDF0")]
	private void CreateLink(ElementStyle style, string title, string link)
	{
	}

	[Token(Token = "0x6003E8C")]
	[Address(RVA = "0x3FDDF60", Offset = "0x3FDDF60", VA = "0x3FDDF60")]
	public AboutHelpPanel()
	{
	}
}
