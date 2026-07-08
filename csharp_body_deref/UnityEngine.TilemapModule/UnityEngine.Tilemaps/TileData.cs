using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/TilemapScripting.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct TileData
{
	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	private int m_Sprite;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x4")]
	private Color m_Color;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x14")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x54")]
	private int m_GameObject;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x58")]
	private TileFlags m_Flags;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x5C")]
	private Tile.ColliderType m_ColliderType;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly TileData Default;

	[Token(Token = "0x17000008")]
	public Sprite sprite
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4BC7B30", Offset = "0x4BC7B30", VA = "0x4BC7B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Color color
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4BC7BA0", Offset = "0x4BC7BA0", VA = "0x4BC7BA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4BC7BB0", Offset = "0x4BC7BB0", VA = "0x4BC7BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4BC7BE0", Offset = "0x4BC7BE0", VA = "0x4BC7BE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public TileFlags flags
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4BC7C60", Offset = "0x4BC7C60", VA = "0x4BC7C60")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Tile.ColliderType colliderType
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4BC7C70", Offset = "0x4BC7C70", VA = "0x4BC7C70")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4BC8620", Offset = "0x4BC8620", VA = "0x4BC8620")]
	private static TileData CreateDefault()
	{
		return default(TileData);
	}
}
