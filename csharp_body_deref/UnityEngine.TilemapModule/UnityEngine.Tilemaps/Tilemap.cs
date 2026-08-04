// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.Tilemap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EEF7C0", Offset = "0x4EEF7C0", VA = "0x4EEF7C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4EEF7D0", Offset = "0x4EEF7D0", VA = "0x4EEF7D0")]
	internal static bool HasSyncTileCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4EEF810", Offset = "0x4EEF810", VA = "0x4EEF810")]
	internal static bool HasPositionsChangedCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4EEF850", Offset = "0x4EEF850", VA = "0x4EEF850")]
	private void HandleSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4EEF9C0", Offset = "0x4EEF9C0", VA = "0x4EEF9C0")]
	private void HandlePositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4EEF8B0", Offset = "0x4EEF8B0", VA = "0x4EEF8B0")]
	private void SendTilemapTileChangedCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4EEFA40", Offset = "0x4EEFA40", VA = "0x4EEFA40")]
	private void SendTilemapPositionsChangedCallback(NativeArray<Vector3Int> positions)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4EEE9F0", Offset = "0x4EEE9F0", VA = "0x4EEE9F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "RefreshTileAsset")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4EEEEB0", Offset = "0x4EEEEB0", VA = "0x4EEEEB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "TilemapBindings::RefreshTileAssetsNative", HasExplicitThis = true)]
	internal unsafe void RefreshTilesNative(void* positions, int count)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4EEFBD0", Offset = "0x4EEFBD0", VA = "0x4EEFBD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void GetSyncTileCallbackSettings(ref SyncTileCallbackSettings settings)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4EEFC50", Offset = "0x4EEFC50", VA = "0x4EEFC50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4EEFCB0", Offset = "0x4EEFCB0", VA = "0x4EEFCB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoPositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4EEFB50", Offset = "0x4EEFB50", VA = "0x4EEFB50")]
	private static extern void RefreshTile_Injected(IntPtr _unity_self, [In] ref Vector3Int position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4EEFB90", Offset = "0x4EEFB90", VA = "0x4EEFB90")]
	private unsafe static extern void RefreshTilesNative_Injected(IntPtr _unity_self, void* positions, int count);
}
