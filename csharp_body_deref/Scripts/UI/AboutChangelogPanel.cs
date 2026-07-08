using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200062A")]
internal class AboutChangelogPanel : CategoryPanel
{
	[Token(Token = "0x17000BF3")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003E85")]
		[Address(RVA = "0x3FDD9D0", Offset = "0x3FDD9D0", VA = "0x3FDD9D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF4")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003E86")]
		[Address(RVA = "0x3FDD9E0", Offset = "0x3FDD9E0", VA = "0x3FDD9E0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003E87")]
	[Address(RVA = "0x3FDD9F0", Offset = "0x3FDD9F0", VA = "0x3FDD9F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E88")]
	[Address(RVA = "0x3FDDB10", Offset = "0x3FDDB10", VA = "0x3FDDB10")]
	public AboutChangelogPanel()
	{
	}
}
