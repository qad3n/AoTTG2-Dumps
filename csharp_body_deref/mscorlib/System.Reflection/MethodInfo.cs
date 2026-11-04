// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000518")]
public abstract class MethodInfo : MethodBase
{
	[Token(Token = "0x170004C9")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x60024DE")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004CA")]
	public virtual ParameterInfo ReturnParameter
	{
		[Token(Token = "0x60024DF")]
		[Address(RVA = "0x1A4B010", Offset = "0x1A49610", VA = "0x181A4B010", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CB")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x60024E0")]
		[Address(RVA = "0x1A4B040", Offset = "0x1A49640", VA = "0x181A4B040", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	internal virtual int GenericParameterCount
	{
		[Token(Token = "0x60024EB")]
		[Address(RVA = "0x1A4AFE0", Offset = "0x1A495E0", VA = "0x181A4AFE0", Slot = "47")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60024DD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected MethodInfo()
	{
	}

	[Token(Token = "0x60024E1")]
	[Address(RVA = "0x1A4AEF0", Offset = "0x1A494F0", VA = "0x181A4AEF0", Slot = "29")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x60024E2")]
	[Address(RVA = "0x1A4AF40", Offset = "0x1A49540", VA = "0x181A4AF40", Slot = "42")]
	public virtual MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x60024E3")]
	[Address(RVA = "0x1A4AF90", Offset = "0x1A49590", VA = "0x181A4AF90", Slot = "43")]
	public virtual MethodInfo MakeGenericMethod(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x60024E4")]
	public abstract MethodInfo GetBaseDefinition();

	[Token(Token = "0x60024E5")]
	[Address(RVA = "0x1A4AE50", Offset = "0x1A49450", VA = "0x181A4AE50", Slot = "45")]
	public virtual Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x60024E6")]
	[Address(RVA = "0x1A4AEA0", Offset = "0x1A494A0", VA = "0x181A4AEA0", Slot = "46")]
	public virtual Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x60024E7")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024E8")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024E9")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024EA")]
	[Address(RVA = "0x1A44730", Offset = "0x1A42D30", VA = "0x181A44730")]
	public static bool operator !=(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}
}
