using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003E")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct, AllowMultiple = false, Inherited = true)]
public sealed class IncludeInSettingsAttribute : Attribute
{
	[Token(Token = "0x17000060")]
	public bool include
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x497EDF0", Offset = "0x497EDF0", VA = "0x497EDF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x497EE00", Offset = "0x497EE00", VA = "0x497EE00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x497EDD0", Offset = "0x497EDD0", VA = "0x497EDD0")]
	public IncludeInSettingsAttribute(bool include)
	{
	}
}
