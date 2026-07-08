using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000F2")]
public class MemberInfoComparer : EqualityComparer<MemberInfo>
{
	[Token(Token = "0x6000649")]
	[Address(RVA = "0x49A5F50", Offset = "0x49A5F50", VA = "0x49A5F50", Slot = "8")]
	public override bool Equals(MemberInfo x, MemberInfo y)
	{
		return default(bool);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x49A6050", Offset = "0x49A6050", VA = "0x49A6050", Slot = "9")]
	public override int GetHashCode(MemberInfo obj)
	{
		return default(int);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x49A6080", Offset = "0x49A6080", VA = "0x49A6080")]
	public MemberInfoComparer()
	{
	}
}
