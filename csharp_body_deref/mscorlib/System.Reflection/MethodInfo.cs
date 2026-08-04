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
[Token(Token = "0x20004E8")]
public abstract class MethodInfo : MethodBase
{
	[Token(Token = "0x170004C6")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x600245C")]
		[Address(RVA = "0x3BD33D0", Offset = "0x3BD33D0", VA = "0x3BD33D0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004C7")]
	public virtual ParameterInfo ReturnParameter
	{
		[Token(Token = "0x600245D")]
		[Address(RVA = "0x3BD33E0", Offset = "0x3BD33E0", VA = "0x3BD33E0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C8")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x600245E")]
		[Address(RVA = "0x3BD3410", Offset = "0x3BD3410", VA = "0x3BD3410", Slot = "41")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C9")]
	internal virtual int GenericParameterCount
	{
		[Token(Token = "0x6002469")]
		[Address(RVA = "0x3BD35F0", Offset = "0x3BD35F0", VA = "0x3BD35F0", Slot = "47")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600245B")]
	[Address(RVA = "0x3BD33C0", Offset = "0x3BD33C0", VA = "0x3BD33C0")]
	protected MethodInfo()
	{
	}

	[Token(Token = "0x600245F")]
	[Address(RVA = "0x3BD3440", Offset = "0x3BD3440", VA = "0x3BD3440", Slot = "29")]
	public override Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6002460")]
	[Address(RVA = "0x3BD3490", Offset = "0x3BD3490", VA = "0x3BD3490", Slot = "42")]
	public virtual MethodInfo GetGenericMethodDefinition()
	{
		return null;
	}

	[Token(Token = "0x6002461")]
	[Address(RVA = "0x3BD34E0", Offset = "0x3BD34E0", VA = "0x3BD34E0", Slot = "43")]
	public virtual MethodInfo MakeGenericMethod(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6002462")]
	public abstract MethodInfo GetBaseDefinition();

	[Token(Token = "0x6002463")]
	[Address(RVA = "0x3BD3530", Offset = "0x3BD3530", VA = "0x3BD3530", Slot = "45")]
	public virtual Delegate CreateDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6002464")]
	[Address(RVA = "0x3BD3580", Offset = "0x3BD3580", VA = "0x3BD3580", Slot = "46")]
	public virtual Delegate CreateDelegate(Type delegateType, object target)
	{
		return null;
	}

	[Token(Token = "0x6002465")]
	[Address(RVA = "0x3BD35D0", Offset = "0x3BD35D0", VA = "0x3BD35D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002466")]
	[Address(RVA = "0x3BD35E0", Offset = "0x3BD35E0", VA = "0x3BD35E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002467")]
	[Address(RVA = "0x3BD2CF0", Offset = "0x3BD2CF0", VA = "0x3BD2CF0")]
	public static bool operator ==(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002468")]
	[Address(RVA = "0x3BD2CC0", Offset = "0x3BD2CC0", VA = "0x3BD2CC0")]
	public static bool operator !=(MethodInfo left, MethodInfo right)
	{
		return default(bool);
	}
}
