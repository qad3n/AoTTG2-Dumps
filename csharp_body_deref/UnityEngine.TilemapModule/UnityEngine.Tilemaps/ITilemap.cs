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
	[Address(RVA = "0x4BC6ED0", Offset = "0x4BC6ED0", VA = "0x4BC6ED0")]
	internal ITilemap()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4BC6EE0", Offset = "0x4BC6EE0", VA = "0x4BC6EE0")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4BC7170", Offset = "0x4BC7170", VA = "0x4BC7170")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static ITilemap CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4BC71E0", Offset = "0x4BC71E0", VA = "0x4BC71E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FindAllRefreshPositions(ITilemap tilemap, int count, IntPtr oldTilesIntPtr, IntPtr newTilesIntPtr, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4BC7630", Offset = "0x4BC7630", VA = "0x4BC7630")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void GetAllTileData(ITilemap tilemap, int count, IntPtr tilesIntPtr, IntPtr positionsIntPtr, IntPtr outTileDataIntPtr)
	{
	}
}
