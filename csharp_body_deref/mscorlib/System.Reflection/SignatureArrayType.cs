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
		[Address(RVA = "0x4EEF280", Offset = "0x4EEF280", VA = "0x4EEF280", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E3")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x60024B6")]
		[Address(RVA = "0x4EEF290", Offset = "0x4EEF290", VA = "0x4EEF290", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E4")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x60024B8")]
		[Address(RVA = "0x4EEF2B0", Offset = "0x4EEF2B0", VA = "0x4EEF2B0", Slot = "134")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024B1")]
	[Address(RVA = "0x4EEF1A0", Offset = "0x4EEF1A0", VA = "0x4EEF1A0")]
	internal SignatureArrayType(System.Reflection.SignatureType elementType, int rank, bool isMultiDim)
	{
	}

	[Token(Token = "0x60024B2")]
	[Address(RVA = "0x4EEF250", Offset = "0x4EEF250", VA = "0x4EEF250", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024B3")]
	[Address(RVA = "0x4EEF260", Offset = "0x4EEF260", VA = "0x4EEF260", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024B4")]
	[Address(RVA = "0x4EEF270", Offset = "0x4EEF270", VA = "0x4EEF270", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024B7")]
	[Address(RVA = "0x4EEF2A0", Offset = "0x4EEF2A0", VA = "0x4EEF2A0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
