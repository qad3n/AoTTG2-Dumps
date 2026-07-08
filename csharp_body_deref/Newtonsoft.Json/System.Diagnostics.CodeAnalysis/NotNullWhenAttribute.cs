using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.CodeAnalysis;

[Token(Token = "0x2000007")]
[AttributeUsage(AttributeTargets.Parameter, AllowMultiple = false)]
internal sealed class NotNullWhenAttribute : Attribute
{
	[Token(Token = "0x17000001")]
	public bool ReturnValue
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3A5ECD0", Offset = "0x3A5ECD0", VA = "0x3A5ECD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3A5ECB0", Offset = "0x3A5ECB0", VA = "0x3A5ECB0")]
	public NotNullWhenAttribute(bool returnValue)
	{
	}
}
