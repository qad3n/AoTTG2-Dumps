using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000630")]
internal class AboutVersionPanel : CategoryPanel
{
	[Token(Token = "0x17000BFD")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003EA0")]
		[Address(RVA = "0x3FDE8D0", Offset = "0x3FDE8D0", VA = "0x3FDE8D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BFE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003EA1")]
		[Address(RVA = "0x3FDE8E0", Offset = "0x3FDE8E0", VA = "0x3FDE8E0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003EA2")]
	[Address(RVA = "0x3FDE8F0", Offset = "0x3FDE8F0", VA = "0x3FDE8F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003EA3")]
	[Address(RVA = "0x3FDE9F0", Offset = "0x3FDE9F0", VA = "0x3FDE9F0")]
	public AboutVersionPanel()
	{
	}
}
