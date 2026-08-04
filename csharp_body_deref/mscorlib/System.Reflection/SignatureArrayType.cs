// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureArrayType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F4")]
internal sealed class SignatureArrayType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x400146A")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _rank;

	[Token(Token = "0x400146B")]
	[FieldOffset(Offset = "0x24")]
	private readonly bool _isMultiDim;

	[Token(Token = "0x170004E2")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x60024B5")]
		[Address(RVA = "0x3BD4DA0", Offset = "0x3BD4DA0", VA = "0x3BD4DA0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E3")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x60024B6")]
		[Address(RVA = "0x3BD4DB0", Offset = "0x3BD4DB0", VA = "0x3BD4DB0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E4")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x60024B8")]
		[Address(RVA = "0x3BD4DD0", Offset = "0x3BD4DD0", VA = "0x3BD4DD0", Slot = "134")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024B1")]
	[Address(RVA = "0x3BD4CC0", Offset = "0x3BD4CC0", VA = "0x3BD4CC0")]
	internal SignatureArrayType(System.Reflection.SignatureType elementType, int rank, bool isMultiDim)
	{
	}

	[Token(Token = "0x60024B2")]
	[Address(RVA = "0x3BD4D70", Offset = "0x3BD4D70", VA = "0x3BD4D70", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024B3")]
	[Address(RVA = "0x3BD4D80", Offset = "0x3BD4D80", VA = "0x3BD4D80", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024B4")]
	[Address(RVA = "0x3BD4D90", Offset = "0x3BD4D90", VA = "0x3BD4D90", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024B7")]
	[Address(RVA = "0x3BD4DC0", Offset = "0x3BD4DC0", VA = "0x3BD4DC0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
