using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000186")]
public struct RTHandleProperties
{
	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0x0")]
	public Vector2Int previousViewportSize;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x8")]
	public Vector2Int previousRenderTargetSize;

	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0x10")]
	public Vector2Int currentViewportSize;

	[Token(Token = "0x40006B4")]
	[FieldOffset(Offset = "0x18")]
	public Vector2Int currentRenderTargetSize;

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 rtHandleScale;
}
