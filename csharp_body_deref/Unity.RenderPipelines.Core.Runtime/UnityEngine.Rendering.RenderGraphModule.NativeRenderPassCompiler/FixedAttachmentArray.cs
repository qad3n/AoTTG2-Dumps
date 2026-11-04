// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.FixedAttachmentArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002B7")]
public struct FixedAttachmentArray<DataType> where DataType : struct
{
	[Token(Token = "0x4000C50")]
	[FieldOffset(Offset = "0x0")]
	public static FixedAttachmentArray<DataType> Empty;

	[Token(Token = "0x4000C51")]
	public const int MaxAttachments = 8;

	[Token(Token = "0x4000C52")]
	[FieldOffset(Offset = "0x0")]
	private DataType a0;

	[Token(Token = "0x4000C53")]
	[FieldOffset(Offset = "0x0")]
	private DataType a1;

	[Token(Token = "0x4000C54")]
	[FieldOffset(Offset = "0x0")]
	private DataType a2;

	[Token(Token = "0x4000C55")]
	[FieldOffset(Offset = "0x0")]
	private DataType a3;

	[Token(Token = "0x4000C56")]
	[FieldOffset(Offset = "0x0")]
	private DataType a4;

	[Token(Token = "0x4000C57")]
	[FieldOffset(Offset = "0x0")]
	private DataType a5;

	[Token(Token = "0x4000C58")]
	[FieldOffset(Offset = "0x0")]
	private DataType a6;

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x0")]
	private DataType a7;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x0")]
	private int activeAttachments;

	[Token(Token = "0x17000267")]
	public int size
	{
		[Token(Token = "0x6001361")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000268")]
	public unsafe ref DataType this[int index]
	{
		[Token(Token = "0x6001364")]
		get
		{
			return ref *(DataType*)null;
		}
	}

	[Token(Token = "0x600135E")]
	public FixedAttachmentArray(int numAttachments)
	{
	}

	[Token(Token = "0x600135F")]
	public FixedAttachmentArray(DataType[] attachments)
	{
	}

	[Token(Token = "0x6001360")]
	public FixedAttachmentArray(NativeArray<DataType> attachments)
	{
	}

	[Token(Token = "0x6001362")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001363")]
	public int Add(in DataType data)
	{
		return default(int);
	}
}
