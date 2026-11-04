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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public NotNullWhenAttribute(bool returnValue)
	{
	}
}
