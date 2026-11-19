// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureArrayType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FD")]
internal sealed class SignatureArrayType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x40013CA")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _rank;

	[Token(Token = "0x40013CB")]
	[FieldOffset(Offset = "0x24")]
	private readonly bool _isMultiDim;

	[Token(Token = "0x170004E4")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x6002505")]
		[Address(RVA = "0x53DBF60", Offset = "0x53DAF60", VA = "0x53DBF60", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E5")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002506")]
		[Address(RVA = "0x53DBF70", Offset = "0x53DAF70", VA = "0x53DBF70", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E6")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x6002508")]
		[Address(RVA = "0x53DBF90", Offset = "0x53DAF90", VA = "0x53DBF90", Slot = "136")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002501")]
	[Address(RVA = "0x53DBE80", Offset = "0x53DAE80", VA = "0x53DBE80")]
	internal SignatureArrayType(System.Reflection.SignatureType elementType, int rank, bool isMultiDim)
	{
	}

	[Token(Token = "0x6002502")]
	[Address(RVA = "0x53DBF30", Offset = "0x53DAF30", VA = "0x53DBF30", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002503")]
	[Address(RVA = "0x53DBF40", Offset = "0x53DAF40", VA = "0x53DBF40", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002504")]
	[Address(RVA = "0x53DBF50", Offset = "0x53DAF50", VA = "0x53DBF50", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002507")]
	[Address(RVA = "0x53DBF80", Offset = "0x53DAF80", VA = "0x53DBF80", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
