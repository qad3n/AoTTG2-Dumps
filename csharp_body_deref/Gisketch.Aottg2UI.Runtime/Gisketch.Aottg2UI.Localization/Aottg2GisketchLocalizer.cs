// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocalizer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Localization;

[Token(Token = "0x2000042")]
public sealed class Aottg2GisketchLocalizer : IGisketchLocalizer, IGisketchLocaleAvailability
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type UIManagerType;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo GetLocaleMethod;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly MethodInfo HasLocaleMethod;

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x3A59DE0", Offset = "0x3A59DE0", VA = "0x3A59DE0", Slot = "4")]
	public string GetText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x3A5A200", Offset = "0x3A5A200", VA = "0x3A5A200", Slot = "5")]
	public bool HasText(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x3A5A5D0", Offset = "0x3A5A5D0", VA = "0x3A5A5D0")]
	public Aottg2GisketchLocalizer()
	{
	}
}
