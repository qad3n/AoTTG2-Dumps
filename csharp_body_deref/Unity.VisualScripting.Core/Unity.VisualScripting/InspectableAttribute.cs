using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003F")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class InspectableAttribute : Attribute, IInspectableAttribute
{
	[Token(Token = "0x17000061")]
	public int order
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x497EE20", Offset = "0x497EE20", VA = "0x497EE20", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x497EE30", Offset = "0x497EE30", VA = "0x497EE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x497EE10", Offset = "0x497EE10", VA = "0x497EE10")]
	public InspectableAttribute()
	{
	}
}
