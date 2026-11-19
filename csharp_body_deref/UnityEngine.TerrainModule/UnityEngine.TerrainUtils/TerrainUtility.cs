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

[Token(Token = "0x200000F")]
[MovedFrom("UnityEngine.Experimental.TerrainAPI")]
public static class TerrainUtility
{
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x69F6400", Offset = "0x69F5400", VA = "0x69F6400")]
	internal static bool ValidTerrainsExist()
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x69F6470", Offset = "0x69F5470", VA = "0x69F6470")]
	internal static void ClearConnectivity()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x69F65B0", Offset = "0x69F55B0", VA = "0x69F65B0")]
	internal static Dictionary<int, TerrainMap> CollectTerrains(bool onlyAutoConnectedTerrains = true)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x69F6A90", Offset = "0x69F5A90", VA = "0x69F6A90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void AutoConnect()
	{
	}
}
