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
[UnityEngine.Bindings.NativeHeader("Modules/Tilemap/TilemapRendererJobs.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
[RequireComponent(typeof(Tilemap))]
public sealed class TilemapRenderer : Renderer
{
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6A5D000", Offset = "0x6A5C000", VA = "0x6A5D000")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void RegisterSpriteAtlasRegistered()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6A5D070", Offset = "0x6A5C070", VA = "0x6A5D070")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void UnregisterSpriteAtlasRegistered()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6A5D0E0", Offset = "0x6A5C0E0", VA = "0x6A5D0E0")]
	internal void OnSpriteAtlasRegistered(SpriteAtlas atlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6A5D1B0", Offset = "0x6A5C1B0", VA = "0x6A5D1B0")]
	private static extern void OnSpriteAtlasRegistered_Injected(IntPtr _unity_self, IntPtr atlas);
}
