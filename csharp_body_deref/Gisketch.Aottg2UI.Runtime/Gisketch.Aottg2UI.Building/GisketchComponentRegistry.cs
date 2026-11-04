// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchComponentRegistry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchComponentRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000A4")]
public sealed class GisketchComponentRegistry
{
	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchComponentRegistry Default;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GisketchComponentFactory> _factories;

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x18DA6C0", Offset = "0x18D8CC0", VA = "0x1818DA6C0")]
	public void Register(string type, GisketchComponentFactory factory)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x18DA740", Offset = "0x18D8D40", VA = "0x1818DA740")]
	public bool TryBuild(string type, GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x18DA940", Offset = "0x18D8F40", VA = "0x1818DA940")]
	public GisketchComponentRegistry()
	{
	}
}
