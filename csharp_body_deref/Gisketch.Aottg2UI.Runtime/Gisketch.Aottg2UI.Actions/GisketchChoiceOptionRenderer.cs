using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B1")]
public static class GisketchChoiceOptionRenderer
{
	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GisketchChoiceOptionRenderContext>> Renderers;

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x3A27600", Offset = "0x3A27600", VA = "0x3A27600")]
	public static void Register(string key, Action<GisketchChoiceOptionRenderContext> renderer)
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x3A21460", Offset = "0x3A21460", VA = "0x3A21460")]
	public static bool TryRender(string key, GisketchChoiceOptionRenderContext context)
	{
		return default(bool);
	}
}
