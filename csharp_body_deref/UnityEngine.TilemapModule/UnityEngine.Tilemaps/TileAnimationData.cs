// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Tilemaps.TileAnimationData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Tilemaps;

[Token(Token = "0x200000F")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(Header = "Modules/Tilemap/TilemapScripting.h")]
public struct TileAnimationData
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	private Sprite[] m_AnimatedSprites;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x8")]
	private float m_AnimationSpeed;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0xC")]
	private float m_AnimationStartTime;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x10")]
	private TileAnimationFlags m_Flags;
}
