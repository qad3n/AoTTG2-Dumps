// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TerrainCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static HeightmapChangedCallback heightmapChanged;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static TextureChangedCallback textureChanged;

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2FF8BD0", Offset = "0x2FF71D0", VA = "0x182FF8BD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeHeightmapChangedCallback(TerrainData terrainData, RectInt heightRegion, bool synched)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2FF8D30", Offset = "0x2FF7330", VA = "0x182FF8D30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeTextureChangedCallback(TerrainData terrainData, string textureName, RectInt texelRegion, bool synched)
	{
	}
}
