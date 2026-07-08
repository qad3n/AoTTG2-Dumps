using System.Reflection;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000157")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public abstract class Attribute
{
	[Token(Token = "0x1700012C")]
	public virtual object TypeId
	{
		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x5004730", Offset = "0x5004730", VA = "0x5004730", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x5002320", Offset = "0x5002320", VA = "0x5002320")]
	private static Attribute[] InternalGetCustomAttributes(PropertyInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x50023C0", Offset = "0x50023C0", VA = "0x50023C0")]
	private static Attribute[] InternalGetCustomAttributes(EventInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x5002460", Offset = "0x5002460", VA = "0x5002460")]
	private static Attribute[] InternalParamGetCustomAttributes(ParameterInfo parameter, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x5002A00", Offset = "0x5002A00", VA = "0x5002A00")]
	private static bool InternalIsDefined(PropertyInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x5002A60", Offset = "0x5002A60", VA = "0x5002A60")]
	private static bool InternalIsDefined(EventInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x5002AC0", Offset = "0x5002AC0", VA = "0x5002AC0")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x5002AD0", Offset = "0x5002AD0", VA = "0x5002AD0")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x5002E60", Offset = "0x5002E60", VA = "0x5002E60")]
	public static Attribute[] GetCustomAttributes(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x5002E70", Offset = "0x5002E70", VA = "0x5002E70")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x5003160", Offset = "0x5003160", VA = "0x5003160")]
	public static bool IsDefined(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x5003170", Offset = "0x5003170", VA = "0x5003170")]
	public static bool IsDefined(MemberInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x5003490", Offset = "0x5003490", VA = "0x5003490")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x50034A0", Offset = "0x50034A0", VA = "0x50034A0")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x5003530", Offset = "0x5003530", VA = "0x5003530")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x50037F0", Offset = "0x50037F0", VA = "0x50037F0")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x50039B0", Offset = "0x50039B0", VA = "0x50039B0")]
	public static Attribute[] GetCustomAttributes(Module element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x5003B00", Offset = "0x5003B00", VA = "0x5003B00")]
	public static Attribute[] GetCustomAttributes(Module element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x5003D50", Offset = "0x5003D50", VA = "0x5003D50")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x5003D60", Offset = "0x5003D60", VA = "0x5003D60")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x5003F90", Offset = "0x5003F90", VA = "0x5003F90")]
	public static Attribute[] GetCustomAttributes(Assembly element)
	{
		return null;
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x5003FA0", Offset = "0x5003FA0", VA = "0x5003FA0")]
	public static Attribute[] GetCustomAttributes(Assembly element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x50040C0", Offset = "0x50040C0", VA = "0x50040C0")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x50040D0", Offset = "0x50040D0", VA = "0x50040D0")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x4FFFC60", Offset = "0x4FFFC60", VA = "0x4FFFC60")]
	protected Attribute()
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x5004160", Offset = "0x5004160", VA = "0x5004160", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x50043F0", Offset = "0x50043F0", VA = "0x50043F0")]
	private static bool AreFieldValuesEqual(object thisValue, object thatValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x50045A0", Offset = "0x50045A0", VA = "0x50045A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x5004740", Offset = "0x5004740", VA = "0x5004740", Slot = "5")]
	public virtual bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x5004760", Offset = "0x5004760", VA = "0x5004760", Slot = "6")]
	public virtual bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
