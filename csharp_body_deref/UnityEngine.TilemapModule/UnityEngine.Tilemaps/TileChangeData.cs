// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.TileChangeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
