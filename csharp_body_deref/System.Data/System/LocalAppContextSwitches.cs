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
		[Address(RVA = "0x5E615B0", Offset = "0x5E605B0", VA = "0x5E615B0")]
		get
		{
			return default(bool);
		}
	}
}
