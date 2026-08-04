// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureHasElementType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BD55E0", Offset = "0x3BD55E0", VA = "0x3BD55E0", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F6")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x60024DC")]
		[Address(RVA = "0x3BD5600", Offset = "0x3BD5600", VA = "0x3BD5600", Slot = "44")]
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
		[Address(RVA = "0x3BD5610", Offset = "0x3BD5610", VA = "0x3BD5610", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FA")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x60024E1")]
		[Address(RVA = "0x3BD5620", Offset = "0x3BD5620", VA = "0x3BD5620", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FB")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x60024E2")]
		[Address(RVA = "0x3BD5630", Offset = "0x3BD5630", VA = "0x3BD5630", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FC")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x60024E3")]
		[Address(RVA = "0x3BD5640", Offset = "0x3BD5640", VA = "0x3BD5640", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FD")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x60024E4")]
		[Address(RVA = "0x3BD5670", Offset = "0x3BD5670", VA = "0x3BD5670", Slot = "133")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004FE")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x60024E8")]
		[Address(RVA = "0x3BD5790", Offset = "0x3BD5790", VA = "0x3BD5790", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004FF")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x60024E9")]
		[Address(RVA = "0x3BD5850", Offset = "0x3BD5850", VA = "0x3BD5850", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000500")]
	public sealed override string Name
	{
		[Token(Token = "0x60024EA")]
		[Address(RVA = "0x3BD58A0", Offset = "0x3BD58A0", VA = "0x3BD58A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000501")]
	public sealed override string Namespace
	{
		[Token(Token = "0x60024EB")]
		[Address(RVA = "0x3BD58F0", Offset = "0x3BD58F0", VA = "0x3BD58F0", Slot = "24")]
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
	[Address(RVA = "0x3BD4D20", Offset = "0x3BD4D20", VA = "0x3BD4D20")]
	protected SignatureHasElementType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x60024D9")]
	[Address(RVA = "0x3BD55F0", Offset = "0x3BD55F0", VA = "0x3BD55F0", Slot = "46")]
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
	[Address(RVA = "0x3BD5680", Offset = "0x3BD5680", VA = "0x3BD5680", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x60024E7")]
	[Address(RVA = "0x3BD56D0", Offset = "0x3BD56D0", VA = "0x3BD56D0", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x60024EC")]
	[Address(RVA = "0x3BD5920", Offset = "0x3BD5920", VA = "0x3BD5920", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
