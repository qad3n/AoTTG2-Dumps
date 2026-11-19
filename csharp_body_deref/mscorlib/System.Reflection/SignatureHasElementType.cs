// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureHasElementType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000500")]
internal abstract class SignatureHasElementType : System.Reflection.SignatureType
{
	[Token(Token = "0x40013CE")]
	[FieldOffset(Offset = "0x18")]
	private readonly System.Reflection.SignatureType _elementType;

	[Token(Token = "0x170004F7")]
	public sealed override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6002528")]
		[Address(RVA = "0x53DC790", Offset = "0x53DB790", VA = "0x53DC790", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F8")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x600252C")]
		[Address(RVA = "0x53DC7B0", Offset = "0x53DB7B0", VA = "0x53DC7B0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F9")]
	public abstract override bool IsSZArray
	{
		[Token(Token = "0x600252E")]
		get;
	}

	[Token(Token = "0x170004FA")]
	public abstract override bool IsVariableBoundArray
	{
		[Token(Token = "0x600252F")]
		get;
	}

	[Token(Token = "0x170004FB")]
	public sealed override bool IsConstructedGenericType
	{
		[Token(Token = "0x6002530")]
		[Address(RVA = "0x53DC7C0", Offset = "0x53DB7C0", VA = "0x53DC7C0", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FC")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x6002531")]
		[Address(RVA = "0x53DC7D0", Offset = "0x53DB7D0", VA = "0x53DC7D0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FD")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x6002532")]
		[Address(RVA = "0x53DC7E0", Offset = "0x53DB7E0", VA = "0x53DC7E0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FE")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x6002533")]
		[Address(RVA = "0x53DC7F0", Offset = "0x53DB7F0", VA = "0x53DC7F0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FF")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x6002534")]
		[Address(RVA = "0x53DC820", Offset = "0x53DB820", VA = "0x53DC820", Slot = "135")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000500")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x6002538")]
		[Address(RVA = "0x53DC940", Offset = "0x53DB940", VA = "0x53DC940", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000501")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x6002539")]
		[Address(RVA = "0x53DCA00", Offset = "0x53DBA00", VA = "0x53DCA00", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000502")]
	public sealed override string Name
	{
		[Token(Token = "0x600253A")]
		[Address(RVA = "0x53DCA50", Offset = "0x53DBA50", VA = "0x53DCA50", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000503")]
	public sealed override string Namespace
	{
		[Token(Token = "0x600253B")]
		[Address(RVA = "0x53DCAA0", Offset = "0x53DBAA0", VA = "0x53DCAA0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000504")]
	protected abstract string Suffix
	{
		[Token(Token = "0x600253D")]
		get;
	}

	[Token(Token = "0x6002527")]
	[Address(RVA = "0x53DBEE0", Offset = "0x53DAEE0", VA = "0x53DBEE0")]
	protected SignatureHasElementType(System.Reflection.SignatureType elementType)
	{
	}

	[Token(Token = "0x6002529")]
	[Address(RVA = "0x53DC7A0", Offset = "0x53DB7A0", VA = "0x53DC7A0", Slot = "46")]
	protected sealed override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600252A")]
	protected abstract override bool IsArrayImpl();

	[Token(Token = "0x600252B")]
	protected abstract override bool IsByRefImpl();

	[Token(Token = "0x600252D")]
	protected abstract override bool IsPointerImpl();

	[Token(Token = "0x6002535")]
	public abstract override int GetArrayRank();

	[Token(Token = "0x6002536")]
	[Address(RVA = "0x53DC830", Offset = "0x53DB830", VA = "0x53DC830", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002537")]
	[Address(RVA = "0x53DC880", Offset = "0x53DB880", VA = "0x53DC880", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x600253C")]
	[Address(RVA = "0x53DCAD0", Offset = "0x53DBAD0", VA = "0x53DCAD0", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
