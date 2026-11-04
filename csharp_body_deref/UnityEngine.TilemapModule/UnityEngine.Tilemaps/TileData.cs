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
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/TilemapScripting.h")]
public struct TileData
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private int m_Sprite;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x4")]
	private Color m_Color;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x14")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x54")]
	private int m_GameObject;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x58")]
	private TileFlags m_Flags;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x5C")]
	private Tile.ColliderType m_ColliderType;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly TileData Default;

	[Token(Token = "0x17000008")]
	public Sprite sprite
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3060D10", Offset = "0x305F310", VA = "0x183060D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public Color color
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2CF7460", Offset = "0x2CF5A60", VA = "0x182CF7460")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3060DA0", Offset = "0x305F3A0", VA = "0x183060DA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3060C80", Offset = "0x305F280", VA = "0x183060C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public TileFlags flags
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Tile.ColliderType colliderType
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		set
		{
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3060A10", Offset = "0x305F010", VA = "0x183060A10")]
	private static TileData CreateDefault()
	{
		return default(TileData);
	}
}
