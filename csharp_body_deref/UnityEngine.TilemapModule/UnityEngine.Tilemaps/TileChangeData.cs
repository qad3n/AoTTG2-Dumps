using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/TilemapScripting.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct TileChangeData
{
	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x0")]
	private Vector3Int m_Position;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x10")]
	private Object m_TileAsset;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x18")]
	private Color m_Color;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x28")]
	private Matrix4x4 m_Transform;
}
