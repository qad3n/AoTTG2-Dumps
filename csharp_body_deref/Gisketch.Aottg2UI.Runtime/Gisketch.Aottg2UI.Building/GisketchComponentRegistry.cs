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

[Token(Token = "0x20000AA")]
public sealed class GisketchComponentRegistry
{
	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchComponentRegistry Default;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GisketchComponentFactory> _factories;

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x526B2F0", Offset = "0x526A2F0", VA = "0x526B2F0")]
	public void Register(string type, GisketchComponentFactory factory)
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x527B730", Offset = "0x527A730", VA = "0x527B730")]
	public bool TryBuild(string type, GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x527B7F0", Offset = "0x527A7F0", VA = "0x527B7F0")]
	public GisketchComponentRegistry()
	{
	}
}
