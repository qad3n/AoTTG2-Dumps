// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchChoiceOptionRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D5")]
public static class GisketchChoiceOptionRenderer
{
	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GisketchChoiceOptionRenderContext>> Renderers;

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x18FCE90", Offset = "0x18FB490", VA = "0x1818FCE90")]
	public static void Register(string key, Action<GisketchChoiceOptionRenderContext> renderer)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x18FCF30", Offset = "0x18FB530", VA = "0x1818FCF30")]
	public static bool TryRender(string key, GisketchChoiceOptionRenderContext context)
	{
		return default(bool);
	}
}
