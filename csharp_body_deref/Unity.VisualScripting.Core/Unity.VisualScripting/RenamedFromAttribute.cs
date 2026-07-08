using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200016A")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true, Inherited = true)]
public sealed class RenamedFromAttribute : Attribute
{
	[Token(Token = "0x17000175")]
	public string previousName
	{
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x4A22B60", Offset = "0x4A22B60", VA = "0x4A22B60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x4A22B30", Offset = "0x4A22B30", VA = "0x4A22B30")]
	public RenamedFromAttribute(string previousName)
	{
	}
}
