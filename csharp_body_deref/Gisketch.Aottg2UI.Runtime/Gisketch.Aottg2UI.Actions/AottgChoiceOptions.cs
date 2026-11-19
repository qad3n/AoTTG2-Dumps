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

[Token(Token = "0x20000CB")]
internal sealed class AottgChoiceOptions
{
	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x10")]
	private readonly GisketchChoiceOptionDefinition[] _items;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x18")]
	private readonly IGisketchLocalizer _localizer;

	[Token(Token = "0x170000A3")]
	public int Count
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x5296350", Offset = "0x5295350", VA = "0x5296350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A4")]
	public int EnabledCount
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x5295380", Offset = "0x5294380", VA = "0x5295380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x5298440", Offset = "0x5297440", VA = "0x5298440")]
	private AottgChoiceOptions(GisketchChoiceOptionDefinition[] items, IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x5294BC0", Offset = "0x5293BC0", VA = "0x5294BC0")]
	public static AottgChoiceOptions Create(GisketchNodeDefinition node, string value, string[] options, IGisketchLocalizer localizer)
	{
		return null;
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x5296C10", Offset = "0x5295C10", VA = "0x5296C10")]
	public GisketchChoiceOptionDefinition Option(int index)
	{
		return null;
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x5295330", Offset = "0x5294330", VA = "0x5295330")]
	public bool Enabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x5295240", Offset = "0x5294240", VA = "0x5295240")]
	public string Value(int index)
	{
		return null;
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x5296A70", Offset = "0x5295A70", VA = "0x5296A70")]
	public string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x52950A0", Offset = "0x52940A0", VA = "0x52950A0")]
	public int NextEnabledIndex(int start, int step)
	{
		return default(int);
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x5298480", Offset = "0x5297480", VA = "0x5298480")]
	public static void ApplyDisabledArrowVisual(GameObject go, bool enabled)
	{
	}
}
