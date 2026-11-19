// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignaturePointerType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000501")]
internal sealed class SignaturePointerType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x17000505")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x6002542")]
		[Address(RVA = "0x53DCBA0", Offset = "0x53DBBA0", VA = "0x53DCBA0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000506")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002543")]
		[Address(RVA = "0x53DCBB0", Offset = "0x53DBBB0", VA = "0x53DCBB0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000507")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x6002545")]
		[Address(RVA = "0x53DCC10", Offset = "0x53DBC10", VA = "0x53DCC10", Slot = "136")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600253E")]
	[Address(RVA = "0x53DCB20", Offset = "0x53DBB20", VA = "0x53DCB20")]
	internal SignaturePointerType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x600253F")]
	[Address(RVA = "0x53DCB70", Offset = "0x53DBB70", VA = "0x53DCB70", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002540")]
	[Address(RVA = "0x53DCB80", Offset = "0x53DBB80", VA = "0x53DCB80", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002541")]
	[Address(RVA = "0x53DCB90", Offset = "0x53DBB90", VA = "0x53DCB90", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002544")]
	[Address(RVA = "0x53DCBC0", Offset = "0x53DBBC0", VA = "0x53DCBC0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
