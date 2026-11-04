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
	[Address(RVA = "0x3060800", Offset = "0x305EE00", VA = "0x183060800", Slot = "4")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual void RefreshTile(Vector3Int position, ITilemap tilemap)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3060720", Offset = "0x305ED20", VA = "0x183060720")]
	private TileData GetTileDataNoRef(Vector3Int position, ITilemap tilemap)
	{
		return default(TileData);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "6")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual bool GetTileAnimationData(Vector3Int position, ITilemap tilemap, ref TileAnimationData tileAnimationData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3060650", Offset = "0x305EC50", VA = "0x183060650")]
	private TileAnimationData GetTileAnimationDataNoRef(Vector3Int position, ITilemap tilemap)
	{
		return default(TileAnimationData);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x30606E0", Offset = "0x305ECE0", VA = "0x1830606E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetTileAnimationDataRef(Vector3Int position, ITilemap tilemap, ref TileAnimationData tileAnimationData, ref bool hasAnimation)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "7")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual bool StartUp(Vector3Int position, ITilemap tilemap, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x30609D0", Offset = "0x305EFD0", VA = "0x1830609D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void StartUpRef(Vector3Int position, ITilemap tilemap, GameObject go, ref bool startUpInvokedByUser)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected TileBase()
	{
	}
}
