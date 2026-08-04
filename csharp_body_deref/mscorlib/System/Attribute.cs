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
[Token(Token = "0x2000157")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public abstract class Attribute
{
	[Token(Token = "0x1700012C")]
	public virtual object TypeId
	{
		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x3CEA250", Offset = "0x3CEA250", VA = "0x3CEA250", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x3CE7E40", Offset = "0x3CE7E40", VA = "0x3CE7E40")]
	private static Attribute[] InternalGetCustomAttributes(PropertyInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x3CE7EE0", Offset = "0x3CE7EE0", VA = "0x3CE7EE0")]
	private static Attribute[] InternalGetCustomAttributes(EventInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x3CE7F80", Offset = "0x3CE7F80", VA = "0x3CE7F80")]
	private static Attribute[] InternalParamGetCustomAttributes(ParameterInfo parameter, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x3CE8520", Offset = "0x3CE8520", VA = "0x3CE8520")]
	private static bool InternalIsDefined(PropertyInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x3CE8580", Offset = "0x3CE8580", VA = "0x3CE8580")]
	private static bool InternalIsDefined(EventInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x3CE85E0", Offset = "0x3CE85E0", VA = "0x3CE85E0")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x3CE85F0", Offset = "0x3CE85F0", VA = "0x3CE85F0")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x3CE8980", Offset = "0x3CE8980", VA = "0x3CE8980")]
	public static Attribute[] GetCustomAttributes(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x3CE8990", Offset = "0x3CE8990", VA = "0x3CE8990")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x3CE8C80", Offset = "0x3CE8C80", VA = "0x3CE8C80")]
	public static bool IsDefined(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x3CE8C90", Offset = "0x3CE8C90", VA = "0x3CE8C90")]
	public static bool IsDefined(MemberInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x3CE8FB0", Offset = "0x3CE8FB0", VA = "0x3CE8FB0")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x3CE8FC0", Offset = "0x3CE8FC0", VA = "0x3CE8FC0")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x3CE9050", Offset = "0x3CE9050", VA = "0x3CE9050")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x3CE9310", Offset = "0x3CE9310", VA = "0x3CE9310")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x3CE94D0", Offset = "0x3CE94D0", VA = "0x3CE94D0")]
	public static Attribute[] GetCustomAttributes(Module element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x3CE9620", Offset = "0x3CE9620", VA = "0x3CE9620")]
	public static Attribute[] GetCustomAttributes(Module element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x3CE9870", Offset = "0x3CE9870", VA = "0x3CE9870")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x3CE9880", Offset = "0x3CE9880", VA = "0x3CE9880")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x3CE9AB0", Offset = "0x3CE9AB0", VA = "0x3CE9AB0")]
	public static Attribute[] GetCustomAttributes(Assembly element)
	{
		return null;
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x3CE9AC0", Offset = "0x3CE9AC0", VA = "0x3CE9AC0")]
	public static Attribute[] GetCustomAttributes(Assembly element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x3CE9BE0", Offset = "0x3CE9BE0", VA = "0x3CE9BE0")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x3CE9BF0", Offset = "0x3CE9BF0", VA = "0x3CE9BF0")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x3CE5780", Offset = "0x3CE5780", VA = "0x3CE5780")]
	protected Attribute()
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x3CE9C80", Offset = "0x3CE9C80", VA = "0x3CE9C80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x3CE9F10", Offset = "0x3CE9F10", VA = "0x3CE9F10")]
	private static bool AreFieldValuesEqual(object thisValue, object thatValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x3CEA0C0", Offset = "0x3CEA0C0", VA = "0x3CEA0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x3CEA260", Offset = "0x3CEA260", VA = "0x3CEA260", Slot = "5")]
	public virtual bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x3CEA280", Offset = "0x3CEA280", VA = "0x3CEA280", Slot = "6")]
	public virtual bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
