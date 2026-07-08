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
	[Address(RVA = "0x4BC8400", Offset = "0x4BC8400", VA = "0x4BC8400")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void RegisterSpriteAtlasRegistered()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4BC8470", Offset = "0x4BC8470", VA = "0x4BC8470")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal void UnregisterSpriteAtlasRegistered()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4BC84E0", Offset = "0x4BC84E0", VA = "0x4BC84E0")]
	internal void OnSpriteAtlasRegistered(SpriteAtlas atlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4BC85E0", Offset = "0x4BC85E0", VA = "0x4BC85E0")]
	private static extern void OnSpriteAtlasRegistered_Injected(IntPtr _unity_self, IntPtr atlas);
}
