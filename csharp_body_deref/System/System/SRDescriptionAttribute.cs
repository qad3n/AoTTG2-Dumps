using System.ComponentModel;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000097")]
[AttributeUsage(AttributeTargets.All)]
internal class SRDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x18")]
	private bool isReplaced;

	[Token(Token = "0x17000087")]
	public override string Description
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x45DAF70", Offset = "0x45DAF70", VA = "0x45DAF70", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x45DAF10", Offset = "0x45DAF10", VA = "0x45DAF10")]
	public SRDescriptionAttribute(string description)
	{
	}
}
