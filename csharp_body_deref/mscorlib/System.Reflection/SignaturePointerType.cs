using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F8")]
internal sealed class SignaturePointerType : System.Reflection.SignatureHasElementType
{
	[Token(Token = "0x17000503")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x60024F2")]
		[Address(RVA = "0x4EEFED0", Offset = "0x4EEFED0", VA = "0x4EEFED0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000504")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x60024F3")]
		[Address(RVA = "0x4EEFEE0", Offset = "0x4EEFEE0", VA = "0x4EEFEE0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000505")]
	protected sealed override string Suffix
	{
		[Token(Token = "0x60024F5")]
		[Address(RVA = "0x4EEFF40", Offset = "0x4EEFF40", VA = "0x4EEFF40", Slot = "134")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024EE")]
	[Address(RVA = "0x4EEFE50", Offset = "0x4EEFE50", VA = "0x4EEFE50")]
	internal SignaturePointerType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x60024EF")]
	[Address(RVA = "0x4EEFEA0", Offset = "0x4EEFEA0", VA = "0x4EEFEA0", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024F0")]
	[Address(RVA = "0x4EEFEB0", Offset = "0x4EEFEB0", VA = "0x4EEFEB0", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024F1")]
	[Address(RVA = "0x4EEFEC0", Offset = "0x4EEFEC0", VA = "0x4EEFEC0", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024F4")]
	[Address(RVA = "0x4EEFEF0", Offset = "0x4EEFEF0", VA = "0x4EEFEF0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}
}
