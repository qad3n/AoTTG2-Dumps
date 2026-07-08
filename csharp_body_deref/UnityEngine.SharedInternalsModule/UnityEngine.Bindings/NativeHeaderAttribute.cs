using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000A")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
[VisibleToOtherModules]
internal class NativeHeaderAttribute : Attribute
{
	[Token(Token = "0x17000006")]
	public string Header
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B76310", Offset = "0x4B76310", VA = "0x4B76310", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4B76320", Offset = "0x4B76320", VA = "0x4B76320")]
	public NativeHeaderAttribute(string header)
	{
	}
}
