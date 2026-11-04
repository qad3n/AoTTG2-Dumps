// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AttachmentIndexArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039B")]
public struct AttachmentIndexArray
{
	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x0")]
	public static AttachmentIndexArray Emtpy;

	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x0")]
	private int a0;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0x4")]
	private int a1;

	[Token(Token = "0x4000B1F")]
	[FieldOffset(Offset = "0x8")]
	private int a2;

	[Token(Token = "0x4000B20")]
	[FieldOffset(Offset = "0xC")]
	private int a3;

	[Token(Token = "0x4000B21")]
	[FieldOffset(Offset = "0x10")]
	private int a4;

	[Token(Token = "0x4000B22")]
	[FieldOffset(Offset = "0x14")]
	private int a5;

	[Token(Token = "0x4000B23")]
	[FieldOffset(Offset = "0x18")]
	private int a6;

	[Token(Token = "0x4000B24")]
	[FieldOffset(Offset = "0x1C")]
	private int a7;

	[Token(Token = "0x4000B25")]
	[FieldOffset(Offset = "0x20")]
	private int activeAttachments;

	[Token(Token = "0x17000340")]
	public int this[int index]
	{
		[Token(Token = "0x60015DE")]
		[Address(RVA = "0x2F5FBE0", Offset = "0x2F5E1E0", VA = "0x182F5FBE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015DF")]
		[Address(RVA = "0x2F5FD00", Offset = "0x2F5E300", VA = "0x182F5FD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000341")]
	public int Length
	{
		[Token(Token = "0x60015E0")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x2F5FB20", Offset = "0x2F5E120", VA = "0x182F5FB20")]
	public AttachmentIndexArray(int numAttachments)
	{
	}
}
