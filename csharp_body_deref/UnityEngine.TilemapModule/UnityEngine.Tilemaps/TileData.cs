// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.TileData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EEF460", Offset = "0x4EEF460", VA = "0x4EEF460")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Color color
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4EEF4D0", Offset = "0x4EEF4D0", VA = "0x4EEF4D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4EEF4E0", Offset = "0x4EEF4E0", VA = "0x4EEF4E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4EEF510", Offset = "0x4EEF510", VA = "0x4EEF510")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public TileFlags flags
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4EEF590", Offset = "0x4EEF590", VA = "0x4EEF590")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Tile.ColliderType colliderType
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4EEF5A0", Offset = "0x4EEF5A0", VA = "0x4EEF5A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4EEFF50", Offset = "0x4EEFF50", VA = "0x4EEFF50")]
	private static TileData CreateDefault()
	{
		return default(TileData);
	}
}
