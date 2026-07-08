using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/TilemapScripting.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct TileDataNative
{
	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	private int m_Sprite;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x4")]
	private Color m_Color;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x14")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x54")]
	private int m_GameObject;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x58")]
	private TileFlags m_Flags;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x5C")]
	private Tile.ColliderType m_ColliderType;
}
