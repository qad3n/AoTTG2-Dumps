// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShadowSliceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001A9")]
public struct ShadowSliceData
{
	[Token(Token = "0x4000931")]
	[FieldOffset(Offset = "0x0")]
	public Matrix4x4 viewMatrix;

	[Token(Token = "0x4000932")]
	[FieldOffset(Offset = "0x40")]
	public Matrix4x4 projectionMatrix;

	[Token(Token = "0x4000933")]
	[FieldOffset(Offset = "0x80")]
	public Matrix4x4 shadowTransform;

	[Token(Token = "0x4000934")]
	[FieldOffset(Offset = "0xC0")]
	public int offsetX;

	[Token(Token = "0x4000935")]
	[FieldOffset(Offset = "0xC4")]
	public int offsetY;

	[Token(Token = "0x4000936")]
	[FieldOffset(Offset = "0xC8")]
	public int resolution;

	[Token(Token = "0x4000937")]
	[FieldOffset(Offset = "0xCC")]
	public ShadowSplitData splitData;

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x2C948C0", Offset = "0x2C92EC0", VA = "0x182C948C0")]
	public void Clear()
	{
	}
}
