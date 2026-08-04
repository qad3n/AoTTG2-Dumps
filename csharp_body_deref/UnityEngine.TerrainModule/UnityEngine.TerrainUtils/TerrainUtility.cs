// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TerrainUtils.TerrainUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4EA20C0", Offset = "0x4EA20C0", VA = "0x4EA20C0")]
	internal static bool ValidTerrainsExist()
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4EA2130", Offset = "0x4EA2130", VA = "0x4EA2130")]
	internal static void ClearConnectivity()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4EA2290", Offset = "0x4EA2290", VA = "0x4EA2290")]
	internal static Dictionary<int, TerrainMap> CollectTerrains(bool onlyAutoConnectedTerrains = true)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4EA27D0", Offset = "0x4EA27D0", VA = "0x4EA27D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void AutoConnect()
	{
	}
}
