using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F6")]
internal sealed class SignatureConstructedGenericType : System.Reflection.SignatureType
{
	[Token(Token = "0x400146C")]
	[FieldOffset(Offset = "0x18")]
	private readonly Type _genericTypeDefinition;

	[Token(Token = "0x400146D")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type[] _genericTypeArguments;

	[Token(Token = "0x170004E8")]
	public sealed override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x60024C2")]
		[Address(RVA = "0x4EEF690", Offset = "0x4EEF690", VA = "0x4EEF690", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E9")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x60024C6")]
		[Address(RVA = "0x4EEF6D0", Offset = "0x4EEF6D0", VA = "0x4EEF6D0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EA")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x60024C8")]
		[Address(RVA = "0x4EEF710", Offset = "0x4EEF710", VA = "0x4EEF710", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EB")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x60024C9")]
		[Address(RVA = "0x4EEF720", Offset = "0x4EEF720", VA = "0x4EEF720", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EC")]
	public sealed override bool IsConstructedGenericType
	{
		[Token(Token = "0x60024CA")]
		[Address(RVA = "0x4EEF730", Offset = "0x4EEF730", VA = "0x4EEF730", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004ED")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x60024CB")]
		[Address(RVA = "0x4EEF740", Offset = "0x4EEF740", VA = "0x4EEF740", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EE")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x60024CC")]
		[Address(RVA = "0x4EEF750", Offset = "0x4EEF750", VA = "0x4EEF750", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EF")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x60024CD")]
		[Address(RVA = "0x4EEF760", Offset = "0x4EEF760", VA = "0x4EEF760", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F0")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x60024CE")]
		[Address(RVA = "0x4EEF7E0", Offset = "0x4EEF7E0", VA = "0x4EEF7E0", Slot = "133")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F1")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x60024D2")]
		[Address(RVA = "0x4EEF870", Offset = "0x4EEF870", VA = "0x4EEF870", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F2")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x60024D3")]
		[Address(RVA = "0x4EEF8F0", Offset = "0x4EEF8F0", VA = "0x4EEF8F0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004F3")]
	public sealed override string Name
	{
		[Token(Token = "0x60024D4")]
		[Address(RVA = "0x4EEF940", Offset = "0x4EEF940", VA = "0x4EEF940", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F4")]
	public sealed override string Namespace
	{
		[Token(Token = "0x60024D5")]
		[Address(RVA = "0x4EEF970", Offset = "0x4EEF970", VA = "0x4EEF970", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024C1")]
	[Address(RVA = "0x4EEF470", Offset = "0x4EEF470", VA = "0x4EEF470")]
	internal SignatureConstructedGenericType(Type genericTypeDefinition, Type[] typeArguments)
	{
	}

	[Token(Token = "0x60024C3")]
	[Address(RVA = "0x4EEF6A0", Offset = "0x4EEF6A0", VA = "0x4EEF6A0", Slot = "46")]
	protected sealed override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024C4")]
	[Address(RVA = "0x4EEF6B0", Offset = "0x4EEF6B0", VA = "0x4EEF6B0", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024C5")]
	[Address(RVA = "0x4EEF6C0", Offset = "0x4EEF6C0", VA = "0x4EEF6C0", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024C7")]
	[Address(RVA = "0x4EEF700", Offset = "0x4EEF700", VA = "0x4EEF700", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60024CF")]
	[Address(RVA = "0x4EEF7F0", Offset = "0x4EEF7F0", VA = "0x4EEF7F0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x60024D0")]
	[Address(RVA = "0x4EEF840", Offset = "0x4EEF840", VA = "0x4EEF840", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x60024D1")]
	[Address(RVA = "0x4EEF850", Offset = "0x4EEF850", VA = "0x4EEF850", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x60024D6")]
	[Address(RVA = "0x4EEF9A0", Offset = "0x4EEF9A0", VA = "0x4EEF9A0", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
