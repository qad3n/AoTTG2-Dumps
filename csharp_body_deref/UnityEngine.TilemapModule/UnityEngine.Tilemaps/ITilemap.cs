// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.ITilemap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x2000002")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ITilemap
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	internal static ITilemap s_Instance;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x10")]
	internal Tilemap m_Tilemap;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x18")]
	internal bool m_AddToList;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x1C")]
	internal int m_RefreshCount;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x20")]
	internal NativeArray<Vector3Int> m_RefreshPos;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4EEE800", Offset = "0x4EEE800", VA = "0x4EEE800")]
	internal ITilemap()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4EEE810", Offset = "0x4EEE810", VA = "0x4EEE810")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4EEEAA0", Offset = "0x4EEEAA0", VA = "0x4EEEAA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static ITilemap CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4EEEB10", Offset = "0x4EEEB10", VA = "0x4EEEB10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FindAllRefreshPositions(ITilemap tilemap, int count, IntPtr oldTilesIntPtr, IntPtr newTilesIntPtr, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4EEEF60", Offset = "0x4EEEF60", VA = "0x4EEEF60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void GetAllTileData(ITilemap tilemap, int count, IntPtr tilesIntPtr, IntPtr positionsIntPtr, IntPtr outTileDataIntPtr)
	{
	}
}
