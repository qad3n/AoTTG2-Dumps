using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000013")]
[AttributeUsage(AttributeTargets.Parameter)]
[VisibleToOtherModules]
internal class NotNullAttribute : Attribute
{
	[Token(Token = "0x17000012")]
	public string Exception
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4B76930", Offset = "0x4B76930", VA = "0x4B76930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4B76940", Offset = "0x4B76940", VA = "0x4B76940")]
	public NotNullAttribute(string exception = "ArgumentNullException")
	{
	}
}
