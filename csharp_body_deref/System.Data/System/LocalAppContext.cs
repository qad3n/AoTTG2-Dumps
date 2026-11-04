// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalAppContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000007")]
internal class LocalAppContext
{
	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_isDisableCachingInitialized;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x1")]
	private static bool s_disableCaching;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static object s_syncObject;

	[Token(Token = "0x17000002")]
	private static bool DisableCaching
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x24E4340", Offset = "0x24E2940", VA = "0x1824E4340")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x24E4320", Offset = "0x24E2920", VA = "0x1824E4320")]
	internal static bool GetCachedSwitchValue(string switchName, ref int switchValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x24E4170", Offset = "0x24E2770", VA = "0x1824E4170")]
	private static bool GetCachedSwitchValueInternal(string switchName, ref int switchValue)
	{
		return default(bool);
	}
}
