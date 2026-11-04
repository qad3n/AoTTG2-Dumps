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
	[Address(RVA = "0x2FFBFE0", Offset = "0x2FFA5E0", VA = "0x182FFBFE0")]
	internal static bool ValidTerrainsExist()
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2FFBB90", Offset = "0x2FFA190", VA = "0x182FFBB90")]
	internal static void ClearConnectivity()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2FFBD30", Offset = "0x2FFA330", VA = "0x182FFBD30")]
	internal static Dictionary<int, TerrainMap> CollectTerrains(bool onlyAutoConnectedTerrains = true)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2FFB600", Offset = "0x2FF9C00", VA = "0x182FFB600")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void AutoConnect()
	{
	}
}
