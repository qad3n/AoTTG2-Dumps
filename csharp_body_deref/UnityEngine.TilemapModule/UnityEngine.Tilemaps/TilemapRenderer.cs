// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.TilemapRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.U2D;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/Public/TilemapMarshalling.h")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/Public/TilemapRenderer.h")]
[RequireComponent(typeof(Tilemap))]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/TilemapRendererJobs.h")]
public sealed class TilemapRenderer : Renderer
{
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4EEFD30", Offset = "0x4EEFD30", VA = "0x4EEFD30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void RegisterSpriteAtlasRegistered()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4EEFDA0", Offset = "0x4EEFDA0", VA = "0x4EEFDA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void UnregisterSpriteAtlasRegistered()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4EEFE10", Offset = "0x4EEFE10", VA = "0x4EEFE10")]
	internal void OnSpriteAtlasRegistered(SpriteAtlas atlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4EEFF10", Offset = "0x4EEFF10", VA = "0x4EEFF10")]
	private static extern void OnSpriteAtlasRegistered_Injected(IntPtr _unity_self, IntPtr atlas);
}
