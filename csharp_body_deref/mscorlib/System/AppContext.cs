// ==================== AoTTG2 cross-reference ====================
// Type: System.AppContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000150")]
public static class AppContext
{
	[Token(Token = "0x2000151")]
	[Flags]
	private enum SwitchValueState
	{
		[Token(Token = "0x40004D0")]
		HasFalseValue = 1,
		[Token(Token = "0x40004D1")]
		HasTrueValue = 2,
		[Token(Token = "0x40004D2")]
		HasLookedForOverride = 4,
		[Token(Token = "0x40004D3")]
		UnknownValue = 8
	}

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, SwitchValueState> s_switchMap;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x8")]
	private static bool s_defaultsInitialized;

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x54E99F0", Offset = "0x54E89F0", VA = "0x54E99F0")]
	private static void InitializeDefaultSwitchValues()
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x54E9B50", Offset = "0x54E8B50", VA = "0x54E9B50")]
	public static bool TryGetSwitch(string switchName, out bool isEnabled)
	{
		return default(bool);
	}
}
