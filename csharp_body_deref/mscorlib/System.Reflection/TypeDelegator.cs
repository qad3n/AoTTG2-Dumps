using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FF")]
public class TypeDelegator : TypeInfo
{
	[Token(Token = "0x4001490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Type typeImpl;

	[Token(Token = "0x17000524")]
	public override int MetadataToken
	{
		[Token(Token = "0x600255B")]
		[Address(RVA = "0x4EF1F30", Offset = "0x4EF1F30", VA = "0x4EF1F30", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000525")]
	public override Module Module
	{
		[Token(Token = "0x600255D")]
		[Address(RVA = "0x4EF1F90", Offset = "0x4EF1F90", VA = "0x4EF1F90", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000526")]
	public override Assembly Assembly
	{
		[Token(Token = "0x600255E")]
		[Address(RVA = "0x4EF1FC0", Offset = "0x4EF1FC0", VA = "0x4EF1FC0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000527")]
	public override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x600255F")]
		[Address(RVA = "0x4EF1FF0", Offset = "0x4EF1FF0", VA = "0x4EF1FF0", Slot = "114")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x17000528")]
	public override string Name
	{
		[Token(Token = "0x6002560")]
		[Address(RVA = "0x4EF2020", Offset = "0x4EF2020", VA = "0x4EF2020", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000529")]
	public override string FullName
	{
		[Token(Token = "0x6002561")]
		[Address(RVA = "0x4EF2050", Offset = "0x4EF2050", VA = "0x4EF2050", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052A")]
	public override string Namespace
	{
		[Token(Token = "0x6002562")]
		[Address(RVA = "0x4EF2080", Offset = "0x4EF2080", VA = "0x4EF2080", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052B")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x6002563")]
		[Address(RVA = "0x4EF20B0", Offset = "0x4EF20B0", VA = "0x4EF20B0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052C")]
	public override Type BaseType
	{
		[Token(Token = "0x6002564")]
		[Address(RVA = "0x4EF20E0", Offset = "0x4EF20E0", VA = "0x4EF20E0", Slot = "116")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052D")]
	public override bool IsSZArray
	{
		[Token(Token = "0x6002574")]
		[Address(RVA = "0x4EF2440", Offset = "0x4EF2440", VA = "0x4EF2440", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700052E")]
	public override bool IsGenericMethodParameter
	{
		[Token(Token = "0x6002578")]
		[Address(RVA = "0x4EF24D0", Offset = "0x4EF24D0", VA = "0x4EF24D0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700052F")]
	public override bool IsByRefLike
	{
		[Token(Token = "0x600257C")]
		[Address(RVA = "0x4EF2560", Offset = "0x4EF2560", VA = "0x4EF2560", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000530")]
	public override bool IsConstructedGenericType
	{
		[Token(Token = "0x600257D")]
		[Address(RVA = "0x4EF2590", Offset = "0x4EF2590", VA = "0x4EF2590", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000531")]
	public override bool IsCollectible
	{
		[Token(Token = "0x600257E")]
		[Address(RVA = "0x4EF25C0", Offset = "0x4EF25C0", VA = "0x4EF25C0", Slot = "70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000532")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x6002581")]
		[Address(RVA = "0x4EF2640", Offset = "0x4EF2640", VA = "0x4EF2640", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600255A")]
	[Address(RVA = "0x4EEC5A0", Offset = "0x4EEC5A0", VA = "0x4EEC5A0")]
	public TypeDelegator(Type delegatingType)
	{
	}

	[Token(Token = "0x600255C")]
	[Address(RVA = "0x4EF1F60", Offset = "0x4EF1F60", VA = "0x4EF1F60", Slot = "117")]
	public override object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters)
	{
		return null;
	}

	[Token(Token = "0x6002565")]
	[Address(RVA = "0x4EF2110", Offset = "0x4EF2110", VA = "0x4EF2110", Slot = "82")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6002566")]
	[Address(RVA = "0x4EF2130", Offset = "0x4EF2130", VA = "0x4EF2130", Slot = "84")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002567")]
	[Address(RVA = "0x4EF2160", Offset = "0x4EF2160", VA = "0x4EF2160", Slot = "102")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6002568")]
	[Address(RVA = "0x4EF2190", Offset = "0x4EF2190", VA = "0x4EF2190", Slot = "104")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002569")]
	[Address(RVA = "0x4EF21C0", Offset = "0x4EF21C0", VA = "0x4EF21C0", Slot = "89")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600256A")]
	[Address(RVA = "0x4EF21F0", Offset = "0x4EF21F0", VA = "0x4EF21F0", Slot = "91")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600256B")]
	[Address(RVA = "0x4EF2220", Offset = "0x4EF2220", VA = "0x4EF2220", Slot = "118")]
	public override Type[] GetInterfaces()
	{
		return null;
	}

	[Token(Token = "0x600256C")]
	[Address(RVA = "0x4EF2250", Offset = "0x4EF2250", VA = "0x4EF2250", Slot = "86")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600256D")]
	[Address(RVA = "0x4EF2280", Offset = "0x4EF2280", VA = "0x4EF2280", Slot = "112")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x600256E")]
	[Address(RVA = "0x4EF2330", Offset = "0x4EF2330", VA = "0x4EF2330", Slot = "113")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600256F")]
	[Address(RVA = "0x4EF2360", Offset = "0x4EF2360", VA = "0x4EF2360", Slot = "87")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002570")]
	[Address(RVA = "0x4EF2390", Offset = "0x4EF2390", VA = "0x4EF2390", Slot = "105")]
	public override Type GetNestedType(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002571")]
	[Address(RVA = "0x4EF23C0", Offset = "0x4EF23C0", VA = "0x4EF23C0", Slot = "94")]
	public override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002572")]
	[Address(RVA = "0x4EF23F0", Offset = "0x4EF23F0", VA = "0x4EF23F0", Slot = "95")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002573")]
	[Address(RVA = "0x4EF2420", Offset = "0x4EF2420", VA = "0x4EF2420", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x6002575")]
	[Address(RVA = "0x4EF2470", Offset = "0x4EF2470", VA = "0x4EF2470", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002576")]
	[Address(RVA = "0x4EF2490", Offset = "0x4EF2490", VA = "0x4EF2490", Slot = "75")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002577")]
	[Address(RVA = "0x4EF24B0", Offset = "0x4EF24B0", VA = "0x4EF24B0", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002579")]
	[Address(RVA = "0x4EF2500", Offset = "0x4EF2500", VA = "0x4EF2500", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600257A")]
	[Address(RVA = "0x4EF2520", Offset = "0x4EF2520", VA = "0x4EF2520", Slot = "77")]
	protected override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600257B")]
	[Address(RVA = "0x4EF2540", Offset = "0x4EF2540", VA = "0x4EF2540", Slot = "67")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600257F")]
	[Address(RVA = "0x4EF25F0", Offset = "0x4EF25F0", VA = "0x4EF25F0", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x6002580")]
	[Address(RVA = "0x4EF2620", Offset = "0x4EF2620", VA = "0x4EF2620", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002582")]
	[Address(RVA = "0x4EF2670", Offset = "0x4EF2670", VA = "0x4EF2670", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002583")]
	[Address(RVA = "0x4EF26A0", Offset = "0x4EF26A0", VA = "0x4EF26A0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002584")]
	[Address(RVA = "0x4EF26D0", Offset = "0x4EF26D0", VA = "0x4EF26D0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}
}
