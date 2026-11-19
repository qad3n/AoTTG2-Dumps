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
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapTile.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/Grid.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/Public/Tilemap.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapMarshalling.h")]
public sealed class Tilemap : GridLayout
{
	[Token(Token = "0x2000007")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public struct SyncTile
	{
		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Vector3Int m_Position;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal TileBase m_Tile;

		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal TileData m_TileData;
	}

	[Token(Token = "0x2000008")]
	internal struct SyncTileCallbackSettings
	{
		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool hasSyncTileCallback;

		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		internal bool hasPositionsChangedCallback;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
		internal bool isBufferSyncTile;
	}

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<Tilemap, SyncTile[]> tilemapTileChanged;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<Tilemap, NativeArray<Vector3Int>> tilemapPositionsChanged;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<Tilemap, NativeArray<Vector3Int>> loopEndedForTileAnimation;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_BufferSyncTile;

	[Token(Token = "0x17000007")]
	internal bool bufferSyncTile
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x6A5C7C0", Offset = "0x6A5B7C0", VA = "0x6A5C7C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6A5C7D0", Offset = "0x6A5B7D0", VA = "0x6A5C7D0")]
	internal static bool HasLoopEndedForTileAnimationCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6A5C810", Offset = "0x6A5B810", VA = "0x6A5C810")]
	private void HandleLoopEndedForTileAnimationCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6A5C8A0", Offset = "0x6A5B8A0", VA = "0x6A5C8A0")]
	private void SendLoopEndedForTileAnimationCallback(NativeArray<Vector3Int> positions)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6A5C9B0", Offset = "0x6A5B9B0", VA = "0x6A5C9B0")]
	internal static bool HasSyncTileCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6A5C9F0", Offset = "0x6A5B9F0", VA = "0x6A5C9F0")]
	internal static bool HasPositionsChangedCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6A5CA30", Offset = "0x6A5BA30", VA = "0x6A5CA30")]
	private void HandleSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6A5CBA0", Offset = "0x6A5BBA0", VA = "0x6A5CBA0")]
	private void HandlePositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6A5CA90", Offset = "0x6A5BA90", VA = "0x6A5CA90")]
	private void SendTilemapTileChangedCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6A5CC30", Offset = "0x6A5BC30", VA = "0x6A5CC30")]
	private void SendTilemapPositionsChangedCallback(NativeArray<Vector3Int> positions)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6A5BA60", Offset = "0x6A5AA60", VA = "0x6A5BA60")]
	[UnityEngine.Bindings.NativeMethod(Name = "RefreshTileAsset")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6A5BF00", Offset = "0x6A5AF00", VA = "0x6A5BF00")]
	[UnityEngine.Bindings.FreeFunction(Name = "TilemapBindings::RefreshTileAssetsNative", HasExplicitThis = true)]
	internal unsafe void RefreshTilesNative(void* positions, int count)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6A5CDC0", Offset = "0x6A5BDC0", VA = "0x6A5CDC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void GetLoopEndedForTileAnimationCallbackSettings(ref bool hasEndLoopForTileAnimationCallback)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6A5CE00", Offset = "0x6A5BE00", VA = "0x6A5CE00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoLoopEndedForTileAnimationCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6A5CE90", Offset = "0x6A5BE90", VA = "0x6A5CE90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void GetSyncTileCallbackSettings(ref SyncTileCallbackSettings settings)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6A5CF10", Offset = "0x6A5BF10", VA = "0x6A5CF10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6A5CF70", Offset = "0x6A5BF70", VA = "0x6A5CF70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoPositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6A5CD40", Offset = "0x6A5BD40", VA = "0x6A5CD40")]
	private static extern void RefreshTile_Injected(IntPtr _unity_self, [In] ref Vector3Int position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6A5CD80", Offset = "0x6A5BD80", VA = "0x6A5CD80")]
	private unsafe static extern void RefreshTilesNative_Injected(IntPtr _unity_self, void* positions, int count);
}
