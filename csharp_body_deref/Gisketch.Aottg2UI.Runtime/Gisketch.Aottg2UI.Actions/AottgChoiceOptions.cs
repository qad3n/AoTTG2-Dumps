using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A2")]
internal sealed class AottgChoiceOptions
{
	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x10")]
	private readonly GisketchChoiceOptionDefinition[] _items;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x18")]
	private readonly IGisketchLocalizer _localizer;

	[Token(Token = "0x17000071")]
	public int Count
	{
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x3A1F7E0", Offset = "0x3A1F7E0", VA = "0x3A1F7E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public int EnabledCount
	{
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x3A1E850", Offset = "0x3A1E850", VA = "0x3A1E850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x3A21860", Offset = "0x3A21860", VA = "0x3A21860")]
	private AottgChoiceOptions(GisketchChoiceOptionDefinition[] items, IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x3A1E190", Offset = "0x3A1E190", VA = "0x3A1E190")]
	public static AottgChoiceOptions Create(GisketchNodeDefinition node, string value, string[] options, IGisketchLocalizer localizer)
	{
		return null;
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x3A200A0", Offset = "0x3A200A0", VA = "0x3A200A0")]
	public GisketchChoiceOptionDefinition Option(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x3A1E800", Offset = "0x3A1E800", VA = "0x3A1E800")]
	public bool Enabled(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x3A213D0", Offset = "0x3A213D0", VA = "0x3A213D0")]
	public string Value(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x3A1FF00", Offset = "0x3A1FF00", VA = "0x3A1FF00")]
	public string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x3A1E660", Offset = "0x3A1E660", VA = "0x3A1E660")]
	public int NextEnabledIndex(int start, int step)
	{
		return default(int);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x3A218A0", Offset = "0x3A218A0", VA = "0x3A218A0")]
	public static void ApplyDisabledArrowVisual(GameObject go, bool enabled)
	{
	}
}
