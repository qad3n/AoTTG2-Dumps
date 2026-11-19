// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Spacing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002E7")]
internal struct Spacing
{
	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x0")]
	public float left;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x4")]
	public float top;

	[Token(Token = "0x4000B52")]
	[FieldOffset(Offset = "0x8")]
	public float right;

	[Token(Token = "0x4000B53")]
	[FieldOffset(Offset = "0xC")]
	public float bottom;

	[Token(Token = "0x17000403")]
	public float horizontal
	{
		[Token(Token = "0x60013C0")]
		[Address(RVA = "0x6CC3B60", Offset = "0x6CC2B60", VA = "0x6CC3B60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000404")]
	public float vertical
	{
		[Token(Token = "0x60013C1")]
		[Address(RVA = "0x6CC3B70", Offset = "0x6CC2B70", VA = "0x6CC3B70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x6CC3B80", Offset = "0x6CC2B80", VA = "0x6CC3B80")]
	public Spacing(float left, float top, float right, float bottom)
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x6CC3BA0", Offset = "0x6CC2BA0", VA = "0x6CC3BA0")]
	public static Rect operator -(Rect r, Spacing a)
	{
		return default(Rect);
	}
}
