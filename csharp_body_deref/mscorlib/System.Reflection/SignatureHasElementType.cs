using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F7")]
internal abstract class SignatureHasElementType : System.Reflection.SignatureType
{
	[Token(Token = "0x400146E")]
	[FieldOffset(Offset = "0x18")]
	private readonly System.Reflection.SignatureType _elementType;

	[Token(Token = "0x170004F5")]
	public sealed override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x60024D8")]
		[Address(RVA = "0x4EEFAC0", Offset = "0x4EEFAC0", VA = "0x4EEFAC0", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F6")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x60024DC")]
		[Address(RVA = "0x4EEFAE0", Offset = "0x4EEFAE0", VA = "0x4EEFAE0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F7")]
	public abstract override bool IsSZArray
	{
		[Token(Token = "0x60024DE")]
		get;
	}

	[Token(Token = "0x170004F8")]
	public abstract override bool IsVariableBoundArray
	{
		[Token(Token = "0x60024DF")]
		get;
	}

	[Token(Token = "0x170004F9")]
	public sealed override bool IsConstructedGenericType
	{
		[Token(Token = "0x60024E0")]
		[Address(RVA = "0x4EEFAF0", Offset = "0x4EEFAF0", VA = "0x4EEFAF0", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FA")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x60024E1")]
		[Address(RVA = "0x4EEFB00", Offset = "0x4EEFB00", VA = "0x4EEFB00", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FB")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x60024E2")]
		[Address(RVA = "0x4EEFB10", Offset = "0x4EEFB10", VA = "0x4EEFB10", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FC")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x60024E3")]
		[Address(RVA = "0x4EEFB20", Offset = "0x4EEFB20", VA = "0x4EEFB20", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FD")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x60024E4")]
		[Address(RVA = "0x4EEFB50", Offset = "0x4EEFB50", VA = "0x4EEFB50", Slot = "133")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004FE")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x60024E8")]
		[Address(RVA = "0x4EEFC70", Offset = "0x4EEFC70", VA = "0x4EEFC70", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004FF")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x60024E9")]
		[Address(RVA = "0x4EEFD30", Offset = "0x4EEFD30", VA = "0x4EEFD30", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000500")]
	public sealed override string Name
	{
		[Token(Token = "0x60024EA")]
		[Address(RVA = "0x4EEFD80", Offset = "0x4EEFD80", VA = "0x4EEFD80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000501")]
	public sealed override string Namespace
	{
		[Token(Token = "0x60024EB")]
		[Address(RVA = "0x4EEFDD0", Offset = "0x4EEFDD0", VA = "0x4EEFDD0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000502")]
	protected abstract string Suffix
	{
		[Token(Token = "0x60024ED")]
		get;
	}

	[Token(Token = "0x60024D7")]
	[Address(RVA = "0x4EEF200", Offset = "0x4EEF200", VA = "0x4EEF200")]
	protected SignatureHasElementType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x60024D9")]
	[Address(RVA = "0x4EEFAD0", Offset = "0x4EEFAD0", VA = "0x4EEFAD0", Slot = "46")]
	protected sealed override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024DA")]
	protected abstract override bool IsArrayImpl();

	[Token(Token = "0x60024DB")]
	protected abstract override bool IsByRefImpl();

	[Token(Token = "0x60024DD")]
	protected abstract override bool IsPointerImpl();

	[Token(Token = "0x60024E5")]
	public abstract override int GetArrayRank();

	[Token(Token = "0x60024E6")]
	[Address(RVA = "0x4EEFB60", Offset = "0x4EEFB60", VA = "0x4EEFB60", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x60024E7")]
	[Address(RVA = "0x4EEFBB0", Offset = "0x4EEFBB0", VA = "0x4EEFBB0", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x60024EC")]
	[Address(RVA = "0x4EEFE00", Offset = "0x4EEFE00", VA = "0x4EEFE00", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
