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

[Token(Token = "0x20000B4")]
public static class GisketchChoiceOptionRenderer
{
	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GisketchChoiceOptionRenderContext>> Renderers;

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x3A93710", Offset = "0x3A93710", VA = "0x3A93710")]
	public static void Register(string key, Action<GisketchChoiceOptionRenderContext> renderer)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x3A8D5C0", Offset = "0x3A8D5C0", VA = "0x3A8D5C0")]
	public static bool TryRender(string key, GisketchChoiceOptionRenderContext context)
	{
		return default(bool);
	}
}
