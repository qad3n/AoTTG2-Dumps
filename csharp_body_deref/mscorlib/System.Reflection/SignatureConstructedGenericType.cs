// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureConstructedGenericType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000526")]
internal sealed class SignatureConstructedGenericType : System.Reflection.SignatureType
{
	[Token(Token = "0x400146C")]
	[FieldOffset(Offset = "0x18")]
	private readonly Type _genericTypeDefinition;

	[Token(Token = "0x400146D")]
	[FieldOffset(Offset = "0x20")]
	private readonly Type[] _genericTypeArguments;

	[Token(Token = "0x170004EB")]
	public sealed override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6002544")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EC")]
	public sealed override bool IsByRefLike
	{
		[Token(Token = "0x6002548")]
		[Address(RVA = "0x1A56030", Offset = "0x1A54630", VA = "0x181A56030", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004ED")]
	public sealed override bool IsSZArray
	{
		[Token(Token = "0x600254A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EE")]
	public sealed override bool IsVariableBoundArray
	{
		[Token(Token = "0x600254B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004EF")]
	public sealed override bool IsConstructedGenericType
	{
		[Token(Token = "0x600254C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F0")]
	public sealed override bool IsGenericParameter
	{
		[Token(Token = "0x600254D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F1")]
	public sealed override bool IsGenericMethodParameter
	{
		[Token(Token = "0x600254E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F2")]
	public sealed override bool ContainsGenericParameters
	{
		[Token(Token = "0x600254F")]
		[Address(RVA = "0x1A55ED0", Offset = "0x1A544D0", VA = "0x181A55ED0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F3")]
	internal sealed override System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x6002550")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "135")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F4")]
	public sealed override Type[] GenericTypeArguments
	{
		[Token(Token = "0x6002554")]
		[Address(RVA = "0x1A55FB0", Offset = "0x1A545B0", VA = "0x181A55FB0", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F5")]
	public sealed override int GenericParameterPosition
	{
		[Token(Token = "0x6002555")]
		[Address(RVA = "0x1A55F60", Offset = "0x1A54560", VA = "0x181A55F60", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004F6")]
	public sealed override string Name
	{
		[Token(Token = "0x6002556")]
		[Address(RVA = "0x1A56060", Offset = "0x1A54660", VA = "0x181A56060", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F7")]
	public sealed override string Namespace
	{
		[Token(Token = "0x6002557")]
		[Address(RVA = "0x1A56090", Offset = "0x1A54690", VA = "0x181A56090", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002543")]
	[Address(RVA = "0x1A55C80", Offset = "0x1A54280", VA = "0x181A55C80")]
	internal SignatureConstructedGenericType(Type genericTypeDefinition, Type[] typeArguments)
	{
	}

	[Token(Token = "0x6002545")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "46")]
	protected sealed override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002546")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "32")]
	protected sealed override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002547")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
	protected sealed override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002549")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "36")]
	protected sealed override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002551")]
	[Address(RVA = "0x1A55AD0", Offset = "0x1A540D0", VA = "0x181A55AD0", Slot = "48")]
	public sealed override int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6002552")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "49")]
	public sealed override Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002553")]
	[Address(RVA = "0x1A55B20", Offset = "0x1A54120", VA = "0x181A55B20", Slot = "51")]
	public sealed override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6002558")]
	[Address(RVA = "0x1A55B40", Offset = "0x1A54140", VA = "0x181A55B40", Slot = "3")]
	public sealed override string ToString()
	{
		return null;
	}
}
