using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004E8")]
public abstract class MethodInfo : MethodBase
{
	[Token(Token = "0x170004C6")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x600245C")]
		[Address(RVA = "0x4EED8B0", Offset = "0x4EED8B0", VA = "0x4EED8B0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004C7")]
	public virtual ParameterInfo ReturnParameter
	{
		[Token(Token = "0x600245D")]
		[Address(RVA = "0x4EED8C0", Offset = "0x4EED8C0", VA = "0x4EED8C0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C8")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x600245E")]
		[Address(RVA = "0x4EED8F0", Offset = "0x4EED8F0", VA = "0x4EED8F0", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C9")]
	internal virtual int GenericParameterCount
	{
		[Token(Token = "0x6002469")]
		[Address(RVA = "0x4EEDAD0", Offset = "0x4EEDAD0", VA = "0x4EEDAD0", Slot = "47")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600245B")]
	[Address(RVA = "0x4EED8A0", Offset = "0x4EED8A0", VA = "0x4EED8A0")]
	protected MethodInfo()
	{
	}

	[Token(Token = "0x600245F")]
	[Address(RVA = "0x4EED920", Offset = "0x4EED920", VA = "0x4EED920", Slot = "29")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6002460")]
	[Address(RVA = "0x4EED970", Offset = "0x4EED970", VA = "0x4EED970", Slot = "42")]
	public virtual MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002461")]
	[Address(RVA = "0x4EED9C0", Offset = "0x4EED9C0", VA = "0x4EED9C0", Slot = "43")]
	public virtual MethodInfo MakeGenericMethod(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6002462")]
	public abstract MethodInfo GetBaseDefinition();

	[Token(Token = "0x6002463")]
	[Address(RVA = "0x4EEDA10", Offset = "0x4EEDA10", VA = "0x4EEDA10", Slot = "45")]
	public virtual Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6002464")]
	[Address(RVA = "0x4EEDA60", Offset = "0x4EEDA60", VA = "0x4EEDA60", Slot = "46")]
	public virtual Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x6002465")]
	[Address(RVA = "0x4EEDAB0", Offset = "0x4EEDAB0", VA = "0x4EEDAB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002466")]
	[Address(RVA = "0x4EEDAC0", Offset = "0x4EEDAC0", VA = "0x4EEDAC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002467")]
	[Address(RVA = "0x4EED1D0", Offset = "0x4EED1D0", VA = "0x4EED1D0")]
	public static bool operator ==(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002468")]
	[Address(RVA = "0x4EED1A0", Offset = "0x4EED1A0", VA = "0x4EED1A0")]
	public static bool operator !=(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}
}
