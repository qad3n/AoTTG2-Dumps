using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000DA")]
[AttributeUsage(AttributeTargets.All)]
public class MonitoringDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x170000EB")]
	public override string Description
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x46073E0", Offset = "0x46073E0", VA = "0x46073E0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4607380", Offset = "0x4607380", VA = "0x4607380")]
	public MonitoringDescriptionAttribute(string description)
	{
	}
}
