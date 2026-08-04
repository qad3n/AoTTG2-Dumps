// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.Tile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Serializable]
[Token(Token = "0x2000003")]
[UnityEngine.Scripting.RequiredByNativeCode]
[HelpURL("https://docs.unity3d.com/Manual/Tilemap-TileAsset.html")]
public class Tile : TileBase
{
	[Token(Token = "0x2000004")]
	public enum ColliderType
	{
		[Token(Token = "0x400000D")]
		None,
		[Token(Token = "0x400000E")]
		Sprite,
		[Token(Token = "0x400000F")]
		Grid
	}

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Sprite m_Sprite;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Color m_Color;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private GameObject m_InstancedGameObject;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private TileFlags m_Flags;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private ColliderType m_ColliderType;

	[Token(Token = "0x17000001")]
	public Sprite sprite
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4EEF1D0", Offset = "0x4EEF1D0", VA = "0x4EEF1D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4EEF1E0", Offset = "0x4EEF1E0", VA = "0x4EEF1E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Color color
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4EEF1F0", Offset = "0x4EEF1F0", VA = "0x4EEF1F0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4EEF200", Offset = "0x4EEF200", VA = "0x4EEF200")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4EEF210", Offset = "0x4EEF210", VA = "0x4EEF210")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4EEF240", Offset = "0x4EEF240", VA = "0x4EEF240")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public GameObject gameObject
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4EEF270", Offset = "0x4EEF270", VA = "0x4EEF270")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4EEF280", Offset = "0x4EEF280", VA = "0x4EEF280")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public TileFlags flags
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4EEF290", Offset = "0x4EEF290", VA = "0x4EEF290")]
		get
		{
			return default(TileFlags);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4EEF2A0", Offset = "0x4EEF2A0", VA = "0x4EEF2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public ColliderType colliderType
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4EEF2B0", Offset = "0x4EEF2B0", VA = "0x4EEF2B0")]
		get
		{
			return default(ColliderType);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4EEF2C0", Offset = "0x4EEF2C0", VA = "0x4EEF2C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4EEF2D0", Offset = "0x4EEF2D0", VA = "0x4EEF2D0", Slot = "5")]
	public override void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4EEF5B0", Offset = "0x4EEF5B0", VA = "0x4EEF5B0")]
	public Tile()
	{
	}
}
