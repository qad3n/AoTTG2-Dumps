using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000043")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = true)]
public sealed class InspectorAdaptiveWidthAttribute : Attribute
{
	[Token(Token = "0x17000065")]
	public float width
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x497EF20", Offset = "0x497EF20", VA = "0x497EF20")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x497EF30", Offset = "0x497EF30", VA = "0x497EF30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x497EEF0", Offset = "0x497EEF0", VA = "0x497EEF0")]
	public InspectorAdaptiveWidthAttribute(float width)
	{
	}
}
