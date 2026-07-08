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
		[Address(RVA = "0x4BC78A0", Offset = "0x4BC78A0", VA = "0x4BC78A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4BC78B0", Offset = "0x4BC78B0", VA = "0x4BC78B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Color color
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4BC78C0", Offset = "0x4BC78C0", VA = "0x4BC78C0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4BC78D0", Offset = "0x4BC78D0", VA = "0x4BC78D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4BC78E0", Offset = "0x4BC78E0", VA = "0x4BC78E0")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4BC7910", Offset = "0x4BC7910", VA = "0x4BC7910")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public GameObject gameObject
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4BC7940", Offset = "0x4BC7940", VA = "0x4BC7940")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4BC7950", Offset = "0x4BC7950", VA = "0x4BC7950")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public TileFlags flags
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4BC7960", Offset = "0x4BC7960", VA = "0x4BC7960")]
		get
		{
			return default(TileFlags);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4BC7970", Offset = "0x4BC7970", VA = "0x4BC7970")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public ColliderType colliderType
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4BC7980", Offset = "0x4BC7980", VA = "0x4BC7980")]
		get
		{
			return default(ColliderType);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4BC7990", Offset = "0x4BC7990", VA = "0x4BC7990")]
		set
		{
		}
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4BC79A0", Offset = "0x4BC79A0", VA = "0x4BC79A0", Slot = "5")]
	public override void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4BC7C80", Offset = "0x4BC7C80", VA = "0x4BC7C80")]
	public Tile()
	{
	}
}
