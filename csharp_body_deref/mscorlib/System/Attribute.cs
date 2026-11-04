// ==================== AoTTG2 cross-reference ====================
// Type: System.Attribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000181")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public abstract class Attribute
{
	[Token(Token = "0x1700012D")]
	public virtual object TypeId
	{
		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x1B530C0", Offset = "0x1B516C0", VA = "0x181B530C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x1B5CDC0", Offset = "0x1B5B3C0", VA = "0x181B5CDC0")]
	private static Attribute[] InternalGetCustomAttributes(PropertyInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x1B5CD10", Offset = "0x1B5B310", VA = "0x181B5CD10")]
	private static Attribute[] InternalGetCustomAttributes(EventInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x1B5CF50", Offset = "0x1B5B550", VA = "0x181B5CF50")]
	private static Attribute[] InternalParamGetCustomAttributes(ParameterInfo parameter, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x1B5CEE0", Offset = "0x1B5B4E0", VA = "0x181B5CEE0")]
	private static bool InternalIsDefined(PropertyInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x1B5CE70", Offset = "0x1B5B470", VA = "0x181B5CE70")]
	private static bool InternalIsDefined(EventInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x1B5BD90", Offset = "0x1B5A390", VA = "0x181B5BD90")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x1B5C160", Offset = "0x1B5A760", VA = "0x181B5C160")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x1B5BA80", Offset = "0x1B5A080", VA = "0x181B5BA80")]
	public static Attribute[] GetCustomAttributes(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x1B5C960", Offset = "0x1B5AF60", VA = "0x181B5C960")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x1B5D430", Offset = "0x1B5BA30", VA = "0x181B5D430")]
	public static bool IsDefined(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x1B5D440", Offset = "0x1B5BA40", VA = "0x181B5D440")]
	public static bool IsDefined(MemberInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x1B5B7E0", Offset = "0x1B59DE0", VA = "0x181B5B7E0")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x1B5B730", Offset = "0x1B59D30", VA = "0x181B5B730")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x1B5BA90", Offset = "0x1B5A090", VA = "0x181B5BA90")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x1B5B890", Offset = "0x1B59E90", VA = "0x181B5B890")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x1B5C010", Offset = "0x1B5A610", VA = "0x181B5C010")]
	public static Attribute[] GetCustomAttributes(Module element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x1B5C480", Offset = "0x1B5AA80", VA = "0x181B5C480")]
	public static Attribute[] GetCustomAttributes(Module element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x1B5BA70", Offset = "0x1B5A070", VA = "0x181B5BA70")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x1B5BDA0", Offset = "0x1B5A3A0", VA = "0x181B5BDA0")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x1B5C840", Offset = "0x1B5AE40", VA = "0x181B5C840")]
	public static Attribute[] GetCustomAttributes(Assembly element)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x1B5C710", Offset = "0x1B5AD10", VA = "0x181B5C710")]
	public static Attribute[] GetCustomAttributes(Assembly element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x1B5B680", Offset = "0x1B59C80", VA = "0x181B5B680")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x1B5B5D0", Offset = "0x1B59BD0", VA = "0x181B5B5D0")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Attribute()
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x1B5B370", Offset = "0x1B59970", VA = "0x181B5B370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x1B5B1D0", Offset = "0x1B597D0", VA = "0x181B5B1D0")]
	private static bool AreFieldValuesEqual(object thisValue, object thatValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x1B5CB90", Offset = "0x1B5B190", VA = "0x181B5CB90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x1B5D780", Offset = "0x1B5BD80", VA = "0x181B5D780", Slot = "5")]
	public virtual bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public virtual bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
