// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureHasElementType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000527")]
internal abstract class SignatureHasElementType : System.Reflection.SignatureType
{
	[Token(Token = "0x400146E")]
	[FieldOffset(Offset = "0x18")]
	private readonly System.Reflection.SignatureType _elementType;

	[Token(Token = "0x170004F8")]
	public sealed override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x600255A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F9")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x600255E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FA")]
	public abstract override bool IsSZArray
	{
		[Token(Token = "0x6002560")]
		get;
	}

	[Token(Token = "0x170004FB")]
	public abstract override bool IsVariableBoundArray
	{
		[Token(Token = "0x6002561")]
		get;
	}

	[Token(Token = "0x170004FC")]
	public sealed override bool IsConstructedGenericType
	{
		[Token(Token = "0x6002562")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FD")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x6002563")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FE")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x6002564")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FF")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x6002565")]
		[Address(RVA = "0x1A561A0", Offset = "0x1A547A0", VA = "0x181A561A0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000500")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x6002566")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "135")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000501")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x600256A")]
		[Address(RVA = "0x1A56220", Offset = "0x1A54820", VA = "0x181A56220", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000502")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x600256B")]
		[Address(RVA = "0x1A561D0", Offset = "0x1A547D0", VA = "0x181A561D0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000503")]
	public sealed override string Name
	{
		[Token(Token = "0x600256C")]
		[Address(RVA = "0x1A56250", Offset = "0x1A54850", VA = "0x181A56250", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000504")]
	public sealed override string Namespace
	{
		[Token(Token = "0x600256D")]
		[Address(RVA = "0x1A56090", Offset = "0x1A54690", VA = "0x181A56090", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	protected abstract string Suffix
	{
		[Token(Token = "0x600256F")]
		get;
	}

	[Token(Token = "0x6002559")]
	[Address(RVA = "0x1A55A50", Offset = "0x1A54050", VA = "0x181A55A50")]
	protected SignatureHasElementType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x600255B")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "46")]
	protected sealed override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600255C")]
	protected abstract override bool IsArrayImpl();

	[Token(Token = "0x600255D")]
	protected abstract override bool IsByRefImpl();

	[Token(Token = "0x600255F")]
	protected abstract override bool IsPointerImpl();

	[Token(Token = "0x6002567")]
	public abstract override int GetArrayRank();

	[Token(Token = "0x6002568")]
	[Address(RVA = "0x1A560F0", Offset = "0x1A546F0", VA = "0x181A560F0", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002569")]
	[Address(RVA = "0x1A560C0", Offset = "0x1A546C0", VA = "0x181A560C0", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x600256E")]
	[Address(RVA = "0x1A56140", Offset = "0x1A54740", VA = "0x181A56140", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
