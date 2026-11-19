// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureConstructedGenericType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FF")]
internal sealed class SignatureConstructedGenericType : System.Reflection.SignatureType
{
	[Token(Token = "0x40013CC")]
	[FieldOffset(Offset = "0x18")]
	private readonly Type _genericTypeDefinition;

	[Token(Token = "0x40013CD")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type[] _genericTypeArguments;

	[Token(Token = "0x170004EA")]
	public sealed override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6002512")]
		[Address(RVA = "0x53DC370", Offset = "0x53DB370", VA = "0x53DC370", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EB")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x6002516")]
		[Address(RVA = "0x53DC3B0", Offset = "0x53DB3B0", VA = "0x53DC3B0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EC")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x6002518")]
		[Address(RVA = "0x53DC3F0", Offset = "0x53DB3F0", VA = "0x53DC3F0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004ED")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002519")]
		[Address(RVA = "0x53DC400", Offset = "0x53DB400", VA = "0x53DC400", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EE")]
	public sealed override bool IsConstructedGenericType
	{
		[Token(Token = "0x600251A")]
		[Address(RVA = "0x53DC410", Offset = "0x53DB410", VA = "0x53DC410", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EF")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x600251B")]
		[Address(RVA = "0x53DC420", Offset = "0x53DB420", VA = "0x53DC420", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F0")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x600251C")]
		[Address(RVA = "0x53DC430", Offset = "0x53DB430", VA = "0x53DC430", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F1")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x600251D")]
		[Address(RVA = "0x53DC440", Offset = "0x53DB440", VA = "0x53DC440", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F2")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x600251E")]
		[Address(RVA = "0x53DC4B0", Offset = "0x53DB4B0", VA = "0x53DC4B0", Slot = "135")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F3")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x6002522")]
		[Address(RVA = "0x53DC540", Offset = "0x53DB540", VA = "0x53DC540", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F4")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x6002523")]
		[Address(RVA = "0x53DC5C0", Offset = "0x53DB5C0", VA = "0x53DC5C0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004F5")]
	public sealed override string Name
	{
		[Token(Token = "0x6002524")]
		[Address(RVA = "0x53DC610", Offset = "0x53DB610", VA = "0x53DC610", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F6")]
	public sealed override string Namespace
	{
		[Token(Token = "0x6002525")]
		[Address(RVA = "0x53DC640", Offset = "0x53DB640", VA = "0x53DC640", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002511")]
	[Address(RVA = "0x53DC150", Offset = "0x53DB150", VA = "0x53DC150")]
	internal SignatureConstructedGenericType(Type genericTypeDefinition, Type[] typeArguments)
	{
	}

	[Token(Token = "0x6002513")]
	[Address(RVA = "0x53DC380", Offset = "0x53DB380", VA = "0x53DC380", Slot = "46")]
	protected sealed override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002514")]
	[Address(RVA = "0x53DC390", Offset = "0x53DB390", VA = "0x53DC390", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002515")]
	[Address(RVA = "0x53DC3A0", Offset = "0x53DB3A0", VA = "0x53DC3A0", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002517")]
	[Address(RVA = "0x53DC3E0", Offset = "0x53DB3E0", VA = "0x53DC3E0", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600251F")]
	[Address(RVA = "0x53DC4C0", Offset = "0x53DB4C0", VA = "0x53DC4C0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6002520")]
	[Address(RVA = "0x53DC510", Offset = "0x53DB510", VA = "0x53DC510", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002521")]
	[Address(RVA = "0x53DC520", Offset = "0x53DB520", VA = "0x53DC520", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6002526")]
	[Address(RVA = "0x53DC670", Offset = "0x53DB670", VA = "0x53DC670", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
