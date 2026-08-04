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

[Token(Token = "0x20000A4")]
internal sealed class AottgChoiceOptions
{
	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x10")]
	private readonly GisketchChoiceOptionDefinition[] _items;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x18")]
	private readonly IGisketchLocalizer _localizer;

	[Token(Token = "0x17000073")]
	public int Count
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x3A8B9A0", Offset = "0x3A8B9A0", VA = "0x3A8B9A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000074")]
	public int EnabledCount
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x3A8AA10", Offset = "0x3A8AA10", VA = "0x3A8AA10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x3A8D900", Offset = "0x3A8D900", VA = "0x3A8D900")]
	private AottgChoiceOptions(GisketchChoiceOptionDefinition[] items, IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x3A8A350", Offset = "0x3A8A350", VA = "0x3A8A350")]
	public static AottgChoiceOptions Create(GisketchNodeDefinition node, string value, string[] options, IGisketchLocalizer localizer)
	{
		return null;
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x3A8C260", Offset = "0x3A8C260", VA = "0x3A8C260")]
	public GisketchChoiceOptionDefinition Option(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x3A8A9C0", Offset = "0x3A8A9C0", VA = "0x3A8A9C0")]
	public bool Enabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x3A8D530", Offset = "0x3A8D530", VA = "0x3A8D530")]
	public string Value(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x3A8C0C0", Offset = "0x3A8C0C0", VA = "0x3A8C0C0")]
	public string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x3A8A820", Offset = "0x3A8A820", VA = "0x3A8A820")]
	public int NextEnabledIndex(int start, int step)
	{
		return default(int);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x3A8D940", Offset = "0x3A8D940", VA = "0x3A8D940")]
	public static void ApplyDisabledArrowVisual(GameObject go, bool enabled)
	{
	}
}
