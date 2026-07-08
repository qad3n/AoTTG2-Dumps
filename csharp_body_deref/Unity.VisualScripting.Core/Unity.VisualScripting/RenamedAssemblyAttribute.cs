using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000169")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public sealed class RenamedAssemblyAttribute : Attribute
{
	[Token(Token = "0x17000173")]
	public string previousName
	{
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x4A22B10", Offset = "0x4A22B10", VA = "0x4A22B10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000174")]
	public string newName
	{
		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x4A22B20", Offset = "0x4A22B20", VA = "0x4A22B20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x4A22AD0", Offset = "0x4A22AD0", VA = "0x4A22AD0")]
	public RenamedAssemblyAttribute(string previousName, string newName)
	{
	}
}
