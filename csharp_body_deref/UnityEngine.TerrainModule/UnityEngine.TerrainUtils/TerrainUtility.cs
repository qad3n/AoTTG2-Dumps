using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.TerrainUtils;

[Token(Token = "0x200000D")]
[MovedFrom("UnityEngine.Experimental.TerrainAPI")]
public static class TerrainUtility
{
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4B7A790", Offset = "0x4B7A790", VA = "0x4B7A790")]
	internal static bool ValidTerrainsExist()
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4B7A800", Offset = "0x4B7A800", VA = "0x4B7A800")]
	internal static void ClearConnectivity()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4B7A960", Offset = "0x4B7A960", VA = "0x4B7A960")]
	internal static Dictionary<int, TerrainMap> CollectTerrains(bool onlyAutoConnectedTerrains = true)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4B7AEA0", Offset = "0x4B7AEA0", VA = "0x4B7AEA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void AutoConnect()
	{
	}
}
