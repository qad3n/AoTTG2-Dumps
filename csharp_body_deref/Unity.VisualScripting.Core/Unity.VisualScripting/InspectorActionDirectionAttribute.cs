using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000042")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorActionDirectionAttribute : Attribute
{
	[Token(Token = "0x17000064")]
	public ActionDirection direction
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x497EED0", Offset = "0x497EED0", VA = "0x497EED0")]
		[CompilerGenerated]
		get
		{
			return default(ActionDirection);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x497EEE0", Offset = "0x497EEE0", VA = "0x497EEE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x497EEB0", Offset = "0x497EEB0", VA = "0x497EEB0")]
	public InspectorActionDirectionAttribute(ActionDirection direction)
	{
	}
}
