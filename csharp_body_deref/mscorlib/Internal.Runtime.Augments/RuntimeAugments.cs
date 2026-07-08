using System;
using Il2CppDummyDll;

namespace Internal.Runtime.Augments;

[Token(Token = "0x2000062")]
internal class RuntimeAugments
{
	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x0")]
	private static Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks s_reflectionExecutionDomainCallbacks;

	[Token(Token = "0x1700003B")]
	internal static Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks Callbacks
	{
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x4E0D9E0", Offset = "0x4E0D9E0", VA = "0x4E0D9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4E0D9C0", Offset = "0x4E0D9C0", VA = "0x4E0D9C0")]
	public static void ReportUnhandledException(Exception exception)
	{
	}
}
