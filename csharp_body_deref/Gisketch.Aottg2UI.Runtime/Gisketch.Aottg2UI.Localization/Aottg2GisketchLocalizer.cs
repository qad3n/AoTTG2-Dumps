// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Localization/Aottg2GisketchLocalizer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Localization;

[Token(Token = "0x2000054")]
public sealed class Aottg2GisketchLocalizer : IGisketchLocalizer, IGisketchLocaleAvailability
{
	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type UIManagerType;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo GetLocaleMethod;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly MethodInfo HasLocaleMethod;

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x18C01A0", Offset = "0x18BE7A0", VA = "0x1818C01A0", Slot = "4")]
	public string GetText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x18C0560", Offset = "0x18BEB60", VA = "0x1818C0560", Slot = "5")]
	public bool HasText(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Aottg2GisketchLocalizer()
	{
	}
}
