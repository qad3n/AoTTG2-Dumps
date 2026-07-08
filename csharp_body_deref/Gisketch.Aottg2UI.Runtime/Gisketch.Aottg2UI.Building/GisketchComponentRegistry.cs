using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000088")]
public sealed class GisketchComponentRegistry
{
	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GisketchComponentRegistry Default;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GisketchComponentFactory> _factories;

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x39F90A0", Offset = "0x39F90A0", VA = "0x39F90A0")]
	public void Register(string type, GisketchComponentFactory factory)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3A074D0", Offset = "0x3A074D0", VA = "0x3A074D0")]
	public bool TryBuild(string type, GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x3A07590", Offset = "0x3A07590", VA = "0x3A07590")]
	public GisketchComponentRegistry()
	{
	}
}
