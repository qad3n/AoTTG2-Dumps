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
[Token(Token = "0x2000159")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public abstract class Attribute
{
	[Token(Token = "0x1700012D")]
	public virtual object TypeId
	{
		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x54EE710", Offset = "0x54ED710", VA = "0x54EE710", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x54EC2F0", Offset = "0x54EB2F0", VA = "0x54EC2F0")]
	private static Attribute[] InternalGetCustomAttributes(PropertyInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x54EC390", Offset = "0x54EB390", VA = "0x54EC390")]
	private static Attribute[] InternalGetCustomAttributes(EventInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x54EC430", Offset = "0x54EB430", VA = "0x54EC430")]
	private static Attribute[] InternalParamGetCustomAttributes(ParameterInfo parameter, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x54ECA90", Offset = "0x54EBA90", VA = "0x54ECA90")]
	private static bool InternalIsDefined(PropertyInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x54ECAF0", Offset = "0x54EBAF0", VA = "0x54ECAF0")]
	private static bool InternalIsDefined(EventInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x54ECB50", Offset = "0x54EBB50", VA = "0x54ECB50")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x54ECB60", Offset = "0x54EBB60", VA = "0x54ECB60")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x54ECEE0", Offset = "0x54EBEE0", VA = "0x54ECEE0")]
	public static Attribute[] GetCustomAttributes(MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x54ECEF0", Offset = "0x54EBEF0", VA = "0x54ECEF0")]
	public static Attribute[] GetCustomAttributes(MemberInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x54ED1D0", Offset = "0x54EC1D0", VA = "0x54ED1D0")]
	public static bool IsDefined(MemberInfo element, Type attributeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x54ED1E0", Offset = "0x54EC1E0", VA = "0x54ED1E0")]
	public static bool IsDefined(MemberInfo element, Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x54ED4F0", Offset = "0x54EC4F0", VA = "0x54ED4F0")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x54ED500", Offset = "0x54EC500", VA = "0x54ED500")]
	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x54ED590", Offset = "0x54EC590", VA = "0x54ED590")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x54ED850", Offset = "0x54EC850", VA = "0x54ED850")]
	public static Attribute[] GetCustomAttributes(ParameterInfo element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x54EDA10", Offset = "0x54ECA10", VA = "0x54EDA10")]
	public static Attribute[] GetCustomAttributes(Module element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x54EDB60", Offset = "0x54ECB60", VA = "0x54EDB60")]
	public static Attribute[] GetCustomAttributes(Module element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x54EDDB0", Offset = "0x54ECDB0", VA = "0x54EDDB0")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x54EDDC0", Offset = "0x54ECDC0", VA = "0x54EDDC0")]
	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x54EDFF0", Offset = "0x54ECFF0", VA = "0x54EDFF0")]
	public static Attribute[] GetCustomAttributes(Assembly element)
	{
		return null;
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x54EE000", Offset = "0x54ED000", VA = "0x54EE000")]
	public static Attribute[] GetCustomAttributes(Assembly element, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x54EE120", Offset = "0x54ED120", VA = "0x54EE120")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x54EE130", Offset = "0x54ED130", VA = "0x54EE130")]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x54E9980", Offset = "0x54E8980", VA = "0x54E9980")]
	protected Attribute()
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x54EE1C0", Offset = "0x54ED1C0", VA = "0x54EE1C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x54EE410", Offset = "0x54ED410", VA = "0x54EE410")]
	private static bool AreFieldValuesEqual(object thisValue, object thatValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x54EE5D0", Offset = "0x54ED5D0", VA = "0x54EE5D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x54EE720", Offset = "0x54ED720", VA = "0x54EE720", Slot = "5")]
	public virtual bool Match(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x54EE740", Offset = "0x54ED740", VA = "0x54EE740", Slot = "6")]
	public virtual bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
