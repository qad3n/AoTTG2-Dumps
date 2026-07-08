using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapTile.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapMarshalling.h")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/Public/Tilemap.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/Grid.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
public sealed class Tilemap : GridLayout
{
	[Token(Token = "0x2000007")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct SyncTile
	{
		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Vector3Int m_Position;

		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal TileBase m_Tile;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal TileData m_TileData;
	}

	[Token(Token = "0x2000008")]
	internal struct SyncTileCallbackSettings
	{
		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool hasSyncTileCallback;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		internal bool hasPositionsChangedCallback;

		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
		internal bool isBufferSyncTile;
	}

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<Tilemap, SyncTile[]> tilemapTileChanged;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<Tilemap, NativeArray<Vector3Int>> tilemapPositionsChanged;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_BufferSyncTile;

	[Token(Token = "0x17000007")]
	internal bool bufferSyncTile
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4BC7E90", Offset = "0x4BC7E90", VA = "0x4BC7E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4BC7EA0", Offset = "0x4BC7EA0", VA = "0x4BC7EA0")]
	internal static bool HasSyncTileCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4BC7EE0", Offset = "0x4BC7EE0", VA = "0x4BC7EE0")]
	internal static bool HasPositionsChangedCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4BC7F20", Offset = "0x4BC7F20", VA = "0x4BC7F20")]
	private void HandleSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4BC8090", Offset = "0x4BC8090", VA = "0x4BC8090")]
	private void HandlePositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4BC7F80", Offset = "0x4BC7F80", VA = "0x4BC7F80")]
	private void SendTilemapTileChangedCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4BC8110", Offset = "0x4BC8110", VA = "0x4BC8110")]
	private void SendTilemapPositionsChangedCallback(NativeArray<Vector3Int> positions)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4BC70C0", Offset = "0x4BC70C0", VA = "0x4BC70C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "RefreshTileAsset")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4BC7580", Offset = "0x4BC7580", VA = "0x4BC7580")]
	[UnityEngine.Bindings.FreeFunction(Name = "TilemapBindings::RefreshTileAssetsNative", HasExplicitThis = true)]
	internal unsafe void RefreshTilesNative(void* positions, int count)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4BC82A0", Offset = "0x4BC82A0", VA = "0x4BC82A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void GetSyncTileCallbackSettings(ref SyncTileCallbackSettings settings)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4BC8320", Offset = "0x4BC8320", VA = "0x4BC8320")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4BC8380", Offset = "0x4BC8380", VA = "0x4BC8380")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoPositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4BC8220", Offset = "0x4BC8220", VA = "0x4BC8220")]
	private static extern void RefreshTile_Injected(IntPtr _unity_self, [In] ref Vector3Int position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4BC8260", Offset = "0x4BC8260", VA = "0x4BC8260")]
	private unsafe static extern void RefreshTilesNative_Injected(IntPtr _unity_self, void* positions, int count);
}
