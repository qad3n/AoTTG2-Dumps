// ==================== AoTTG2 cross-reference ====================
// Type: Map.DestructibleMapObject
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/DestructibleMapObject.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

namespace Map;

[Token(Token = "0x2000391")]
internal sealed class DestructibleMapObject
{
	[Token(Token = "0x4001277")]
	private const MeshUpdateFlags SliceUpdateFlags = MeshUpdateFlags.DontValidateIndices | MeshUpdateFlags.DontRecalculateBounds;

	[Token(Token = "0x4001278")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ProtectedAssetPrefixes;

	[Token(Token = "0x4001279")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] ProtectedNames;

	[Token(Token = "0x400127A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<string> DecorativeComponents;

	[Token(Token = "0x400127B")]
	[FieldOffset(Offset = "0x18")]
	private static int[] _degenerateIndices;

	[Token(Token = "0x400127C")]
	[FieldOffset(Offset = "0x10")]
	public readonly int Id;

	[Token(Token = "0x400127D")]
	[FieldOffset(Offset = "0x18")]
	public readonly Transform Root;

	[Token(Token = "0x400127E")]
	[FieldOffset(Offset = "0x20")]
	public readonly Bounds Bounds;

	[Token(Token = "0x400127F")]
	[FieldOffset(Offset = "0x38")]
	public readonly float Size;

	[Token(Token = "0x4001280")]
	[FieldOffset(Offset = "0x40")]
	public readonly MeshFilter[] Filters;

	[Token(Token = "0x4001281")]
	[FieldOffset(Offset = "0x48")]
	public readonly Collider[] Colliders;

	[Token(Token = "0x4001282")]
	[FieldOffset(Offset = "0x50")]
	private readonly BatchSlice[] _slices;

	[Token(Token = "0x4001283")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _hideOnly;

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x1E8A880", Offset = "0x1E88E80", VA = "0x181E8A880")]
	private DestructibleMapObject(MapObject mapObject, Bounds bounds, float size, List<MeshFilter> filters, List<BatchSlice> slices, bool hideOnly)
	{
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x1E88D90", Offset = "0x1E87390", VA = "0x181E88D90")]
	public static DestructibleMapObject Create(MapObject mapObject, Dictionary<Renderer, BatchSlice> batchSlices, float maxSize)
	{
		return null;
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x1E89800", Offset = "0x1E87E00", VA = "0x181E89800")]
	public void Destroy()
	{
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x1E89FD0", Offset = "0x1E885D0", VA = "0x181E89FD0")]
	private void Hide()
	{
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x1E88D00", Offset = "0x1E87300", VA = "0x181E88D00")]
	public bool Contains(Transform transform)
	{
		return default(bool);
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x1E89E50", Offset = "0x1E88450", VA = "0x181E89E50")]
	private static void HideSlice(BatchSlice slice)
	{
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x1E8A130", Offset = "0x1E88730", VA = "0x181E8A130")]
	private static bool IsAllowedAsset(string asset, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001699")]
	[Address(RVA = "0x1E89BD0", Offset = "0x1E881D0", VA = "0x181E89BD0")]
	private static bool HasOnlyDecorativeComponents(MapScriptSceneObject script)
	{
		return default(bool);
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x1E89D80", Offset = "0x1E88380", VA = "0x181E89D80")]
	private static bool HasSolidCollider(Collider[] colliders)
	{
		return default(bool);
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x1E8A3B0", Offset = "0x1E889B0", VA = "0x181E8A3B0")]
	private static bool IsAllowedShape(Vector3 size)
	{
		return default(bool);
	}
}
