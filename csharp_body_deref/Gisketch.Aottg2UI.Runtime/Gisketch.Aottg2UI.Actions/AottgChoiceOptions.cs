// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C5")]
internal sealed class AottgChoiceOptions
{
	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x10")]
	private readonly GisketchChoiceOptionDefinition[] _items;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x18")]
	private readonly IGisketchLocalizer _localizer;

	[Token(Token = "0x170000A3")]
	public int Count
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x92B6E0", Offset = "0x929CE0", VA = "0x18092B6E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A4")]
	public int EnabledCount
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x18F7970", Offset = "0x18F5F70", VA = "0x1818F7970")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	private AottgChoiceOptions(GisketchChoiceOptionDefinition[] items, IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x18F73F0", Offset = "0x18F59F0", VA = "0x1818F73F0")]
	public static AottgChoiceOptions Create(GisketchNodeDefinition node, string value, string[] options, IGisketchLocalizer localizer)
	{
		return null;
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x18F7720", Offset = "0x18F5D20", VA = "0x1818F7720")]
	public GisketchChoiceOptionDefinition Option(int index)
	{
		return null;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x18F7610", Offset = "0x18F5C10", VA = "0x1818F7610")]
	public bool Enabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x18F78F0", Offset = "0x18F5EF0", VA = "0x1818F78F0")]
	public string Value(int index)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x18F7770", Offset = "0x18F5D70", VA = "0x1818F7770")]
	public string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x18F7670", Offset = "0x18F5C70", VA = "0x1818F7670")]
	public int NextEnabledIndex(int start, int step)
	{
		return default(int);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x18F7360", Offset = "0x18F5960", VA = "0x1818F7360")]
	public static void ApplyDisabledArrowVisual(GameObject go, bool enabled)
	{
	}
}
