using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000027")]
internal class ScrollViewState
{
	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x10")]
	public Rect position;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x20")]
	public Rect visibleRect;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x30")]
	public Rect viewRect;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x40")]
	public Vector2 scrollPosition;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x48")]
	public bool apply;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x49")]
	public bool isDuringTouchScroll;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x4C")]
	public Vector2 touchScrollStartMousePosition;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x54")]
	public Vector2 touchScrollStartPosition;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x5C")]
	public Vector2 velocity;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x64")]
	public float previousTimeSinceStartup;

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4B39DD0", Offset = "0x4B39DD0", VA = "0x4B39DD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public ScrollViewState()
	{
	}
}
