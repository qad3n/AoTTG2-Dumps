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

[Token(Token = "0x200008B")]
public sealed class GisketchComponentRegistry
{
	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchComponentRegistry Default;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GisketchComponentFactory> _factories;

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x3A641F0", Offset = "0x3A641F0", VA = "0x3A641F0")]
	public void Register(string type, GisketchComponentFactory factory)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x3A73490", Offset = "0x3A73490", VA = "0x3A73490")]
	public bool TryBuild(string type, GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x3A73550", Offset = "0x3A73550", VA = "0x3A73550")]
	public GisketchComponentRegistry()
	{
	}
}
