using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200001A")]
[AttributeUsage(AttributeTargets.Field)]
[VisibleToOtherModules]
internal class IgnoreAttribute : Attribute
{
	[Token(Token = "0x17000016")]
	public bool DoesNotContributeToSize
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4B76AA0", Offset = "0x4B76AA0", VA = "0x4B76AA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B76AB0", Offset = "0x4B76AB0", VA = "0x4B76AB0")]
	public IgnoreAttribute()
	{
	}
}
