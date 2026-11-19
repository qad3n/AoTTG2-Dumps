// ==================== AoTTG2 cross-reference ====================
// Type: Map.DestructibleMapObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/DestructibleMapObject.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Map;

[Token(Token = "0x20003EC")]
internal sealed class DestructibleMapObject
{
	[Token(Token = "0x4001409")]
	private const MeshUpdateFlags SliceUpdateFlags = MeshUpdateFlags.DontValidateIndices | MeshUpdateFlags.DontRecalculateBounds;

	[Token(Token = "0x400140A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ProtectedAssetPrefixes;

	[Token(Token = "0x400140B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ProtectedNames;

	[Token(Token = "0x400140C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<string> DecorativeComponents;

	[Token(Token = "0x400140D")]
	[FieldOffset(Offset = "0x18")]
	private static int[] _degenerateIndices;

	[Token(Token = "0x400140E")]
	[FieldOffset(Offset = "0x10")]
	public readonly int Id;

	[Token(Token = "0x400140F")]
	[FieldOffset(Offset = "0x18")]
	public readonly Transform Root;

	[Token(Token = "0x4001410")]
	[FieldOffset(Offset = "0x20")]
	public readonly Bounds Bounds;

	[Token(Token = "0x4001411")]
	[FieldOffset(Offset = "0x38")]
	public readonly float Size;

	[Token(Token = "0x4001412")]
	[FieldOffset(Offset = "0x40")]
	public readonly MeshFilter[] Filters;

	[Token(Token = "0x4001413")]
	[FieldOffset(Offset = "0x48")]
	public readonly Collider[] Colliders;

	[Token(Token = "0x4001414")]
	[FieldOffset(Offset = "0x50")]
	private readonly BatchSlice[] _slices;

	[Token(Token = "0x4001415")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _hideOnly;

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x5877D40", Offset = "0x5876D40", VA = "0x5877D40")]
	private DestructibleMapObject(MapObject mapObject, Bounds bounds, float size, List<MeshFilter> filters, List<BatchSlice> slices, bool hideOnly)
	{
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x5877E70", Offset = "0x5876E70", VA = "0x5877E70")]
	public static DestructibleMapObject Create(MapObject mapObject, Dictionary<Renderer, BatchSlice> batchSlices, float maxSize)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x5878F80", Offset = "0x5877F80", VA = "0x5878F80")]
	public void Destroy()
	{
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x58790B0", Offset = "0x58780B0", VA = "0x58790B0")]
	private void Hide()
	{
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x5879390", Offset = "0x5878390", VA = "0x5879390")]
	public bool Contains(Transform transform)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x5879210", Offset = "0x5878210", VA = "0x5879210")]
	private static void HideSlice(BatchSlice slice)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x5878A10", Offset = "0x5877A10", VA = "0x5878A10")]
	private static bool IsAllowedAsset(string asset, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001900")]
	[Address(RVA = "0x5878840", Offset = "0x5877840", VA = "0x5878840")]
	private static bool HasOnlyDecorativeComponents(MapScriptSceneObject script)
	{
		return default(bool);
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x5878CD0", Offset = "0x5877CD0", VA = "0x5878CD0")]
	private static bool HasSolidCollider(Collider[] colliders)
	{
		return default(bool);
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x5878F00", Offset = "0x5877F00", VA = "0x5878F00")]
	private static bool IsAllowedShape(Vector3 size)
	{
		return default(bool);
	}
}
