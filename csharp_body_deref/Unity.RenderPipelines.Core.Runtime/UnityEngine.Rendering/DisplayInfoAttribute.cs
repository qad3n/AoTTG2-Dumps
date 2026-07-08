using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200006B")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Field, AllowMultiple = false)]
public class DisplayInfoAttribute : Attribute
{
	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x18")]
	public int order;

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x4871430", Offset = "0x4871430", VA = "0x4871430")]
	public DisplayInfoAttribute()
	{
	}
}
