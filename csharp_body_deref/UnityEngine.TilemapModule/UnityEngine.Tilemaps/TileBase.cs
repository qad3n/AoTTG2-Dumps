// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.TileBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x2000005")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class TileBase : ScriptableObject
{
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4EEF640", Offset = "0x4EEF640", VA = "0x4EEF640", Slot = "4")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual void RefreshTile(Vector3Int position, ITilemap tilemap)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4EEF660", Offset = "0x4EEF660", VA = "0x4EEF660", Slot = "5")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4EEF670", Offset = "0x4EEF670", VA = "0x4EEF670")]
	private TileData GetTileDataNoRef(Vector3Int position, ITilemap tilemap)
	{
		return default(TileData);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4EEF700", Offset = "0x4EEF700", VA = "0x4EEF700", Slot = "6")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual bool GetTileAnimationData(Vector3Int position, ITilemap tilemap, ref TileAnimationData tileAnimationData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4EEF710", Offset = "0x4EEF710", VA = "0x4EEF710")]
	private TileAnimationData GetTileAnimationDataNoRef(Vector3Int position, ITilemap tilemap)
	{
		return default(TileAnimationData);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4EEF770", Offset = "0x4EEF770", VA = "0x4EEF770")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetTileAnimationDataRef(Vector3Int position, ITilemap tilemap, ref TileAnimationData tileAnimationData, ref bool hasAnimation)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4EEF790", Offset = "0x4EEF790", VA = "0x4EEF790", Slot = "7")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual bool StartUp(Vector3Int position, ITilemap tilemap, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4EEF7A0", Offset = "0x4EEF7A0", VA = "0x4EEF7A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void StartUpRef(Vector3Int position, ITilemap tilemap, GameObject go, ref bool startUpInvokedByUser)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4EEF630", Offset = "0x4EEF630", VA = "0x4EEF630")]
	protected TileBase()
	{
	}
}
