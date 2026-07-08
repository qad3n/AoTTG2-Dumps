using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine;

[Token(Token = "0x2000003")]
[MovedFrom("UnityEngine.Experimental.TerrainAPI")]
public static class TerrainCallbacks
{
	[Token(Token = "0x2000004")]
	public delegate void HeightmapChangedCallback(Terrain terrain, RectInt heightRegion, bool synched);

	[Token(Token = "0x2000005")]
	public delegate void TextureChangedCallback(Terrain terrain, string textureName, RectInt texelRegion, bool synched);

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static HeightmapChangedCallback heightmapChanged;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static TextureChangedCallback textureChanged;

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4B780B0", Offset = "0x4B780B0", VA = "0x4B780B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeHeightmapChangedCallback(TerrainData terrainData, RectInt heightRegion, bool synched)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4B78250", Offset = "0x4B78250", VA = "0x4B78250")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeTextureChangedCallback(TerrainData terrainData, string textureName, RectInt texelRegion, bool synched)
	{
	}
}
