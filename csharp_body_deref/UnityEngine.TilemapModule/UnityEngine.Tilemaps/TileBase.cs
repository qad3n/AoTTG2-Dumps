using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x2000005")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class TileBase : ScriptableObject
{
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4BC7D10", Offset = "0x4BC7D10", VA = "0x4BC7D10", Slot = "4")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual void RefreshTile(Vector3Int position, ITilemap tilemap)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4BC7D30", Offset = "0x4BC7D30", VA = "0x4BC7D30", Slot = "5")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4BC7D40", Offset = "0x4BC7D40", VA = "0x4BC7D40")]
	private TileData GetTileDataNoRef(Vector3Int position, ITilemap tilemap)
	{
		return default(TileData);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4BC7DD0", Offset = "0x4BC7DD0", VA = "0x4BC7DD0", Slot = "6")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual bool GetTileAnimationData(Vector3Int position, ITilemap tilemap, ref TileAnimationData tileAnimationData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4BC7DE0", Offset = "0x4BC7DE0", VA = "0x4BC7DE0")]
	private TileAnimationData GetTileAnimationDataNoRef(Vector3Int position, ITilemap tilemap)
	{
		return default(TileAnimationData);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4BC7E40", Offset = "0x4BC7E40", VA = "0x4BC7E40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetTileAnimationDataRef(Vector3Int position, ITilemap tilemap, ref TileAnimationData tileAnimationData, ref bool hasAnimation)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4BC7E60", Offset = "0x4BC7E60", VA = "0x4BC7E60", Slot = "7")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public virtual bool StartUp(Vector3Int position, ITilemap tilemap, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4BC7E70", Offset = "0x4BC7E70", VA = "0x4BC7E70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void StartUpRef(Vector3Int position, ITilemap tilemap, GameObject go, ref bool startUpInvokedByUser)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4BC7D00", Offset = "0x4BC7D00", VA = "0x4BC7D00")]
	protected TileBase()
	{
	}
}
