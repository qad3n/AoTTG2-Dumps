using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CD")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorVariableNameAttribute : Attribute
{
	[Token(Token = "0x170001E1")]
	public ActionDirection direction
	{
		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x4A3F7E0", Offset = "0x4A3F7E0", VA = "0x4A3F7E0")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x60010FB")]
		[Address(RVA = "0x4A3F7F0", Offset = "0x4A3F7F0", VA = "0x4A3F7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x4A3F7C0", Offset = "0x4A3F7C0", VA = "0x4A3F7C0")]
	public InspectorVariableNameAttribute(ActionDirection direction)
	{
	}
}
