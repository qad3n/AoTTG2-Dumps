// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AttachmentIndexArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200036F")]
public struct AttachmentIndexArray
{
	[Token(Token = "0x40009FC")]
	[FieldOffset(Offset = "0x0")]
	public static AttachmentIndexArray Emtpy;

	[Token(Token = "0x40009FD")]
	[FieldOffset(Offset = "0x0")]
	private int a0;

	[Token(Token = "0x40009FE")]
	[FieldOffset(Offset = "0x4")]
	private int a1;

	[Token(Token = "0x40009FF")]
	[FieldOffset(Offset = "0x8")]
	private int a2;

	[Token(Token = "0x4000A00")]
	[FieldOffset(Offset = "0xC")]
	private int a3;

	[Token(Token = "0x4000A01")]
	[FieldOffset(Offset = "0x10")]
	private int a4;

	[Token(Token = "0x4000A02")]
	[FieldOffset(Offset = "0x14")]
	private int a5;

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x18")]
	private int a6;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x1C")]
	private int a7;

	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x20")]
	private int activeAttachments;

	[Token(Token = "0x1700032E")]
	public int this[int index]
	{
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x6955F10", Offset = "0x6954F10", VA = "0x6955F10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x6955FC0", Offset = "0x6954FC0", VA = "0x6955FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700032F")]
	public int Length
	{
		[Token(Token = "0x6001585")]
		[Address(RVA = "0x6956070", Offset = "0x6955070", VA = "0x6956070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x6955E70", Offset = "0x6954E70", VA = "0x6955E70")]
	public AttachmentIndexArray(int numAttachments)
	{
	}
}
