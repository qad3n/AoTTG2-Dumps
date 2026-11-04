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
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal ITilemap()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x3060490", Offset = "0x305EA90", VA = "0x183060490")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x305FDC0", Offset = "0x305E3C0", VA = "0x18305FDC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static ITilemap CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x305FE40", Offset = "0x305E440", VA = "0x18305FE40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FindAllRefreshPositions(ITilemap tilemap, int count, IntPtr oldTilesIntPtr, IntPtr newTilesIntPtr, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3060210", Offset = "0x305E810", VA = "0x183060210")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void GetAllTileData(ITilemap tilemap, int count, IntPtr tilesIntPtr, IntPtr positionsIntPtr, IntPtr outTileDataIntPtr)
	{
	}
}
