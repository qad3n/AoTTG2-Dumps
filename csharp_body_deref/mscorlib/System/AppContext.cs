// ==================== AoTTG2 cross-reference ====================
// Type: System.AppContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000178")]
public static class AppContext
{
	[Token(Token = "0x2000179")]
	[Flags]
	private enum SwitchValueState
	{
		[Token(Token = "0x4000572")]
		HasFalseValue = 1,
		[Token(Token = "0x4000573")]
		HasTrueValue = 2,
		[Token(Token = "0x4000574")]
		HasLookedForOverride = 4,
		[Token(Token = "0x4000575")]
		UnknownValue = 8
	}

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, SwitchValueState> s_switchMap;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x8")]
	private static bool s_defaultsInitialized;

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x1B5A960", Offset = "0x1B58F60", VA = "0x181B5A960")]
	private static void InitializeDefaultSwitchValues()
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x1B5AAB0", Offset = "0x1B590B0", VA = "0x181B5AAB0")]
	public static bool TryGetSwitch(string switchName, out bool isEnabled)
	{
		return default(bool);
	}
}
