using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000006")]
internal static class LocalAppContextSwitches
{
	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	private static int s_allowArbitraryTypeInstantiation;

	[Token(Token = "0x17000001")]
	public static bool AllowArbitraryTypeInstantiation
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x24E4100", Offset = "0x24E2700", VA = "0x1824E4100")]
		get
		{
			return default(bool);
		}
	}
}
