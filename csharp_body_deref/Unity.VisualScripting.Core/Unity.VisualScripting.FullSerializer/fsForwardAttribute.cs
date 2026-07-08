using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001EC")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface)]
public sealed class fsForwardAttribute : Attribute
{
	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x10")]
	public string MemberName;

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x4A4D680", Offset = "0x4A4D680", VA = "0x4A4D680")]
	public fsForwardAttribute(string memberName)
	{
	}
}
