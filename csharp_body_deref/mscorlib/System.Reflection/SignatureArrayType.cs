// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureArrayType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000524")]
internal sealed class SignatureArrayType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x400146A")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _rank;

	[Token(Token = "0x400146B")]
	[FieldOffset(Offset = "0x24")]
	private readonly bool _isMultiDim;

	[Token(Token = "0x170004E5")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x6002537")]
		[Address(RVA = "0x1A55940", Offset = "0x1A53F40", VA = "0x181A55940", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E6")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002538")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E7")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x600253A")]
		[Address(RVA = "0x1A55950", Offset = "0x1A53F50", VA = "0x181A55950", Slot = "136")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002533")]
	[Address(RVA = "0x1A558E0", Offset = "0x1A53EE0", VA = "0x181A558E0")]
	internal SignatureArrayType(System.Reflection.SignatureType elementType, int rank, bool isMultiDim)
	{
	}

	[Token(Token = "0x6002534")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002535")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002536")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002539")]
	[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
