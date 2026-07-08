using System.ComponentModel;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000367")]
[AttributeUsage(AttributeTargets.All)]
public class IODescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x1700050A")]
	public override string Description
	{
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x45C9C40", Offset = "0x45C9C40", VA = "0x45C9C40", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x45C9BE0", Offset = "0x45C9BE0", VA = "0x45C9BE0")]
	public IODescriptionAttribute(string description)
	{
	}
}
