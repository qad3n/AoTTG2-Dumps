using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Localization;

[Token(Token = "0x2000041")]
public sealed class Aottg2GisketchLocalizer : IGisketchLocalizer
{
	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type UIManagerType;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x8")]
	private static readonly MethodInfo GetLocaleMethod;

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x39EF4C0", Offset = "0x39EF4C0", VA = "0x39EF4C0", Slot = "4")]
	public string GetText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x39EF8E0", Offset = "0x39EF8E0", VA = "0x39EF8E0")]
	public Aottg2GisketchLocalizer()
	{
	}
}
