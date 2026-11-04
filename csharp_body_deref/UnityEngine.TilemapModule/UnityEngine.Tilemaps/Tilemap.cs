// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.Tilemap
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/Grid.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapTile.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapMarshalling.h")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/Public/Tilemap.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0x2E85230", Offset = "0x2E83830", VA = "0x182E85230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x30614A0", Offset = "0x305FAA0", VA = "0x1830614A0")]
	internal static bool HasLoopEndedForTileAnimationCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3061200", Offset = "0x305F800", VA = "0x183061200")]
	private void HandleLoopEndedForTileAnimationCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3061740", Offset = "0x305FD40", VA = "0x183061740")]
	private void SendLoopEndedForTileAnimationCallback(NativeArray<Vector3Int> positions)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3061520", Offset = "0x305FB20", VA = "0x183061520")]
	internal static bool HasSyncTileCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x30614E0", Offset = "0x305FAE0", VA = "0x1830614E0")]
	internal static bool HasPositionsChangedCallback()
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3061360", Offset = "0x305F960", VA = "0x183061360")]
	private void HandleSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x30612B0", Offset = "0x305F8B0", VA = "0x1830612B0")]
	private void HandlePositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x30618A0", Offset = "0x305FEA0", VA = "0x1830618A0")]
	private void SendTilemapTileChangedCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x30617F0", Offset = "0x305FDF0", VA = "0x1830617F0")]
	private void SendTilemapPositionsChangedCallback(NativeArray<Vector3Int> positions)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x30615B0", Offset = "0x305FBB0", VA = "0x1830615B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "RefreshTileAsset")]
	public void RefreshTile(Vector3Int position)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x30616A0", Offset = "0x305FCA0", VA = "0x1830616A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "TilemapBindings::RefreshTileAssetsNative", HasExplicitThis = true)]
	internal unsafe void RefreshTilesNative(void* positions, int count)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x30613C0", Offset = "0x305F9C0", VA = "0x1830613C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void GetLoopEndedForTileAnimationCallbackSettings(ref bool hasEndLoopForTileAnimationCallback)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3061200", Offset = "0x305F800", VA = "0x183061200")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoLoopEndedForTileAnimationCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3061410", Offset = "0x305FA10", VA = "0x183061410")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void GetSyncTileCallbackSettings(ref SyncTileCallbackSettings settings)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3061360", Offset = "0x305F960", VA = "0x183061360")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoSyncTileCallback(SyncTile[] syncTiles)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x30612B0", Offset = "0x305F8B0", VA = "0x1830612B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void DoPositionsChangedCallback(int count, IntPtr positionsIntPtr)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3061560", Offset = "0x305FB60", VA = "0x183061560")]
	private static extern void RefreshTile_Injected(IntPtr _unity_self, [In] ref Vector3Int position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3061640", Offset = "0x305FC40", VA = "0x183061640")]
	private unsafe static extern void RefreshTilesNative_Injected(IntPtr _unity_self, void* positions, int count);
}
