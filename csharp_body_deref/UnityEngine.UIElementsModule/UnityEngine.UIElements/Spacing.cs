// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Spacing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000264")]
internal struct Spacing
{
	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x0")]
	public float left;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x4")]
	public float top;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x8")]
	public float right;

	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0xC")]
	public float bottom;

	[Token(Token = "0x1700030C")]
	public float horizontal
	{
		[Token(Token = "0x6000FCA")]
		[Address(RVA = "0x5078250", Offset = "0x5078250", VA = "0x5078250")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700030D")]
	public float vertical
	{
		[Token(Token = "0x6000FCB")]
		[Address(RVA = "0x5078260", Offset = "0x5078260", VA = "0x5078260")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x5078270", Offset = "0x5078270", VA = "0x5078270")]
	public Spacing(float left, float top, float right, float bottom)
	{
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x5078290", Offset = "0x5078290", VA = "0x5078290")]
	public static Rect operator -(Rect r, Spacing a)
	{
		return default(Rect);
	}
}
