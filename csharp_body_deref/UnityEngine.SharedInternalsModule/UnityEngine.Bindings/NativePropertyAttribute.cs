using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000F")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Property)]
internal class NativePropertyAttribute : NativeMethodAttribute
{
	[Token(Token = "0x1700000E")]
	public TargetType TargetType
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4B76700", Offset = "0x4B76700", VA = "0x4B76700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B76710", Offset = "0x4B76710", VA = "0x4B76710")]
	public NativePropertyAttribute()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B76720", Offset = "0x4B76720", VA = "0x4B76720")]
	public NativePropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B76730", Offset = "0x4B76730", VA = "0x4B76730")]
	public NativePropertyAttribute(string name, bool isFree, TargetType targetType)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B76750", Offset = "0x4B76750", VA = "0x4B76750")]
	public NativePropertyAttribute(string name, bool isFree, TargetType targetType, bool isThreadSafe)
	{
	}
}
