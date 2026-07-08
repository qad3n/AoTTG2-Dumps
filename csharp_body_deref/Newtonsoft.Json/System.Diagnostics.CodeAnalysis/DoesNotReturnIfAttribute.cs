using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.CodeAnalysis;

[Token(Token = "0x200000A")]
[AttributeUsage(AttributeTargets.Parameter, Inherited = false)]
internal class DoesNotReturnIfAttribute : Attribute
{
	[Token(Token = "0x17000002")]
	public bool ParameterValue
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x3A5ED20", Offset = "0x3A5ED20", VA = "0x3A5ED20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3A5ED00", Offset = "0x3A5ED00", VA = "0x3A5ED00")]
	public DoesNotReturnIfAttribute(bool parameterValue)
	{
	}
}
