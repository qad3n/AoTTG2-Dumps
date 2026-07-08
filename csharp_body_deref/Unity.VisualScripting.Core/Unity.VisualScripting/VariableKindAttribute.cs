using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D7")]
[Obsolete("Set VariableKind via VariableDeclarations.Kind")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class VariableKindAttribute : Attribute
{
	[Token(Token = "0x170001ED")]
	public VariableKind kind
	{
		[Token(Token = "0x600113B")]
		[Address(RVA = "0x4A42A50", Offset = "0x4A42A50", VA = "0x4A42A50")]
		[CompilerGenerated]
		get
		{
			return default(VariableKind);
		}
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x4A42A30", Offset = "0x4A42A30", VA = "0x4A42A30")]
	public VariableKindAttribute(VariableKind kind)
	{
	}
}
