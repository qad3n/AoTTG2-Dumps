using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F9")]
internal abstract class SignatureType : Type
{
	[Token(Token = "0x17000506")]
	public sealed override bool IsSignatureType
	{
		[Token(Token = "0x60024F6")]
		[Address(RVA = "0x4EEFF70", Offset = "0x4EEFF70", VA = "0x4EEFF70", Slot = "78")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000507")]
	public abstract override bool IsSZArray
	{
		[Token(Token = "0x60024F9")]
		get;
	}

	[Token(Token = "0x17000508")]
	public abstract override bool IsVariableBoundArray
	{
		[Token(Token = "0x60024FA")]
		get;
	}

	[Token(Token = "0x17000509")]
	public abstract override bool IsByRefLike
	{
		[Token(Token = "0x60024FC")]
		get;
	}

	[Token(Token = "0x1700050A")]
	public sealed override bool IsGenericType
	{
		[Token(Token = "0x60024FE")]
		[Address(RVA = "0x4EEFF80", Offset = "0x4EEFF80", VA = "0x4EEFF80", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050B")]
	public abstract override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x60024FF")]
		get;
	}

	[Token(Token = "0x1700050C")]
	public abstract override bool IsConstructedGenericType
	{
		[Token(Token = "0x6002500")]
		get;
	}

	[Token(Token = "0x1700050D")]
	public abstract override bool IsGenericParameter
	{
		[Token(Token = "0x6002501")]
		get;
	}

	[Token(Token = "0x1700050E")]
	public abstract override bool IsGenericMethodParameter
	{
		[Token(Token = "0x6002502")]
		get;
	}

	[Token(Token = "0x1700050F")]
	public abstract override bool ContainsGenericParameters
	{
		[Token(Token = "0x6002503")]
		get;
	}

	[Token(Token = "0x17000510")]
	public sealed override MemberTypes MemberType
	{
		[Token(Token = "0x6002504")]
		[Address(RVA = "0x4EEFFC0", Offset = "0x4EEFFC0", VA = "0x4EEFFC0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x17000511")]
	public abstract override Type[] GenericTypeArguments
	{
		[Token(Token = "0x600250D")]
		get;
	}

	[Token(Token = "0x17000512")]
	public abstract override int GenericParameterPosition
	{
		[Token(Token = "0x600250F")]
		get;
	}

	[Token(Token = "0x17000513")]
	internal abstract System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x6002510")]
		get;
	}

	[Token(Token = "0x17000514")]
	public sealed override Type UnderlyingSystemType
	{
		[Token(Token = "0x6002511")]
		[Address(RVA = "0x4EF0290", Offset = "0x4EF0290", VA = "0x4EF0290", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000515")]
	public abstract override string Name
	{
		[Token(Token = "0x6002512")]
		get;
	}

	[Token(Token = "0x17000516")]
	public abstract override string Namespace
	{
		[Token(Token = "0x6002513")]
		get;
	}

	[Token(Token = "0x17000517")]
	public sealed override string FullName
	{
		[Token(Token = "0x6002514")]
		[Address(RVA = "0x4EF02A0", Offset = "0x4EF02A0", VA = "0x4EF02A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000518")]
	public sealed override string AssemblyQualifiedName
	{
		[Token(Token = "0x6002515")]
		[Address(RVA = "0x4EF02B0", Offset = "0x4EF02B0", VA = "0x4EF02B0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000519")]
	public sealed override Assembly Assembly
	{
		[Token(Token = "0x6002517")]
		[Address(RVA = "0x4EF02C0", Offset = "0x4EF02C0", VA = "0x4EF02C0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051A")]
	public sealed override Module Module
	{
		[Token(Token = "0x6002518")]
		[Address(RVA = "0x4EF0310", Offset = "0x4EF0310", VA = "0x4EF0310", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051B")]
	public sealed override Type ReflectedType
	{
		[Token(Token = "0x6002519")]
		[Address(RVA = "0x4EF0360", Offset = "0x4EF0360", VA = "0x4EF0360", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051C")]
	public sealed override Type BaseType
	{
		[Token(Token = "0x600251A")]
		[Address(RVA = "0x4EF03B0", Offset = "0x4EF03B0", VA = "0x4EF03B0", Slot = "116")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051D")]
	public sealed override int MetadataToken
	{
		[Token(Token = "0x600251D")]
		[Address(RVA = "0x4EF04A0", Offset = "0x4EF04A0", VA = "0x4EF04A0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700051E")]
	public sealed override Type DeclaringType
	{
		[Token(Token = "0x600251E")]
		[Address(RVA = "0x4EF04F0", Offset = "0x4EF04F0", VA = "0x4EF04F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051F")]
	public sealed override MethodBase DeclaringMethod
	{
		[Token(Token = "0x600251F")]
		[Address(RVA = "0x4EF0540", Offset = "0x4EF0540", VA = "0x4EF0540", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000520")]
	public sealed override GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6002521")]
		[Address(RVA = "0x4EF05E0", Offset = "0x4EF05E0", VA = "0x4EF05E0", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x17000521")]
	public sealed override bool IsEnum
	{
		[Token(Token = "0x600253E")]
		[Address(RVA = "0x4EF0EF0", Offset = "0x4EF0EF0", VA = "0x4EF0EF0", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000522")]
	public sealed override bool IsSerializable
	{
		[Token(Token = "0x6002542")]
		[Address(RVA = "0x4EF1030", Offset = "0x4EF1030", VA = "0x4EF1030", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000523")]
	public sealed override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6002545")]
		[Address(RVA = "0x4EF1120", Offset = "0x4EF1120", VA = "0x4EF1120", Slot = "114")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x60024F7")]
	protected abstract override bool HasElementTypeImpl();

	[Token(Token = "0x60024F8")]
	protected abstract override bool IsArrayImpl();

	[Token(Token = "0x60024FB")]
	protected abstract override bool IsByRefImpl();

	[Token(Token = "0x60024FD")]
	protected abstract override bool IsPointerImpl();

	[Token(Token = "0x6002505")]
	[Address(RVA = "0x4EEFFD0", Offset = "0x4EEFFD0", VA = "0x4EEFFD0", Slot = "123")]
	public sealed override Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6002506")]
	[Address(RVA = "0x4EF0060", Offset = "0x4EF0060", VA = "0x4EF0060", Slot = "124")]
	public sealed override Type MakeArrayType(int rank)
	{
		return null;
	}

	[Token(Token = "0x6002507")]
	[Address(RVA = "0x4EF0120", Offset = "0x4EF0120", VA = "0x4EF0120", Slot = "125")]
	public sealed override Type MakeByRefType()
	{
		return null;
	}

	[Token(Token = "0x6002508")]
	[Address(RVA = "0x4EF01A0", Offset = "0x4EF01A0", VA = "0x4EF01A0", Slot = "127")]
	public sealed override Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6002509")]
	[Address(RVA = "0x4EF0220", Offset = "0x4EF0220", VA = "0x4EF0220", Slot = "126")]
	public sealed override Type MakeGenericType(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x600250A")]
	[Address(RVA = "0x4EF0270", Offset = "0x4EF0270", VA = "0x4EF0270", Slot = "47")]
	public sealed override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x600250B")]
	public abstract override int GetArrayRank();

	[Token(Token = "0x600250C")]
	public abstract override Type GetGenericTypeDefinition();

	[Token(Token = "0x600250E")]
	public abstract override Type[] GetGenericArguments();

	[Token(Token = "0x6002516")]
	public abstract override string ToString();

	[Token(Token = "0x600251B")]
	[Address(RVA = "0x4EF0400", Offset = "0x4EF0400", VA = "0x4EF0400", Slot = "118")]
	public sealed override Type[] GetInterfaces()
	{
		return null;
	}

	[Token(Token = "0x600251C")]
	[Address(RVA = "0x4EF0450", Offset = "0x4EF0450", VA = "0x4EF0450", Slot = "22")]
	public sealed override bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002520")]
	[Address(RVA = "0x4EF0590", Offset = "0x4EF0590", VA = "0x4EF0590", Slot = "54")]
	public sealed override Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6002522")]
	[Address(RVA = "0x4EF0630", Offset = "0x4EF0630", VA = "0x4EF0630", Slot = "16")]
	public sealed override bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002523")]
	[Address(RVA = "0x4EF0680", Offset = "0x4EF0680", VA = "0x4EF0680", Slot = "17")]
	public sealed override string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6002524")]
	[Address(RVA = "0x4EF06D0", Offset = "0x4EF06D0", VA = "0x4EF06D0", Slot = "18")]
	public sealed override string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6002525")]
	[Address(RVA = "0x4EF0720", Offset = "0x4EF0720", VA = "0x4EF0720", Slot = "121")]
	public sealed override Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6002526")]
	[Address(RVA = "0x4EF0770", Offset = "0x4EF0770", VA = "0x4EF0770", Slot = "122")]
	public sealed override Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6002527")]
	[Address(RVA = "0x4EF07C0", Offset = "0x4EF07C0", VA = "0x4EF07C0", Slot = "115")]
	protected sealed override TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6002528")]
	[Address(RVA = "0x4EF0810", Offset = "0x4EF0810", VA = "0x4EF0810", Slot = "56")]
	protected sealed override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x6002529")]
	[Address(RVA = "0x4EF0860", Offset = "0x4EF0860", VA = "0x4EF0860", Slot = "84")]
	public sealed override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600252A")]
	[Address(RVA = "0x4EF08B0", Offset = "0x4EF08B0", VA = "0x4EF08B0", Slot = "86")]
	public sealed override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600252B")]
	[Address(RVA = "0x4EF0900", Offset = "0x4EF0900", VA = "0x4EF0900", Slot = "87")]
	public sealed override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600252C")]
	[Address(RVA = "0x4EF0950", Offset = "0x4EF0950", VA = "0x4EF0950", Slot = "89")]
	public sealed override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600252D")]
	[Address(RVA = "0x4EF09A0", Offset = "0x4EF09A0", VA = "0x4EF09A0", Slot = "91")]
	public sealed override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600252E")]
	[Address(RVA = "0x4EF09F0", Offset = "0x4EF09F0", VA = "0x4EF09F0", Slot = "95")]
	public sealed override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x600252F")]
	[Address(RVA = "0x4EF0A40", Offset = "0x4EF0A40", VA = "0x4EF0A40", Slot = "104")]
	public sealed override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002530")]
	[Address(RVA = "0x4EF0A90", Offset = "0x4EF0A90", VA = "0x4EF0A90", Slot = "105")]
	public sealed override Type GetNestedType(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002531")]
	[Address(RVA = "0x4EF0AE0", Offset = "0x4EF0AE0", VA = "0x4EF0AE0", Slot = "113")]
	public sealed override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002532")]
	[Address(RVA = "0x4EF0B30", Offset = "0x4EF0B30", VA = "0x4EF0B30", Slot = "117")]
	public sealed override object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters)
	{
		return null;
	}

	[Token(Token = "0x6002533")]
	[Address(RVA = "0x4EF0B80", Offset = "0x4EF0B80", VA = "0x4EF0B80", Slot = "102")]
	protected sealed override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6002534")]
	[Address(RVA = "0x4EF0BD0", Offset = "0x4EF0BD0", VA = "0x4EF0BD0", Slot = "112")]
	protected sealed override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6002535")]
	[Address(RVA = "0x4EF0C20", Offset = "0x4EF0C20", VA = "0x4EF0C20", Slot = "93")]
	public sealed override MemberInfo[] GetMember(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002536")]
	[Address(RVA = "0x4EF0C70", Offset = "0x4EF0C70", VA = "0x4EF0C70", Slot = "94")]
	public sealed override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6002537")]
	[Address(RVA = "0x4EF0CC0", Offset = "0x4EF0CC0", VA = "0x4EF0CC0", Slot = "13")]
	public sealed override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002538")]
	[Address(RVA = "0x4EF0D10", Offset = "0x4EF0D10", VA = "0x4EF0D10", Slot = "14")]
	public sealed override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002539")]
	[Address(RVA = "0x4EF0D60", Offset = "0x4EF0D60", VA = "0x4EF0D60", Slot = "12")]
	public sealed override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600253A")]
	[Address(RVA = "0x4EF0DB0", Offset = "0x4EF0DB0", VA = "0x4EF0DB0", Slot = "82")]
	protected sealed override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x600253B")]
	[Address(RVA = "0x4EF0E00", Offset = "0x4EF0E00", VA = "0x4EF0E00", Slot = "67")]
	protected sealed override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600253C")]
	[Address(RVA = "0x4EF0E50", Offset = "0x4EF0E50", VA = "0x4EF0E50", Slot = "75")]
	protected sealed override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600253D")]
	[Address(RVA = "0x4EF0EA0", Offset = "0x4EF0EA0", VA = "0x4EF0EA0", Slot = "69")]
	protected sealed override bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x600253F")]
	[Address(RVA = "0x4EF0F40", Offset = "0x4EF0F40", VA = "0x4EF0F40", Slot = "120")]
	public sealed override bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002540")]
	[Address(RVA = "0x4EF0F90", Offset = "0x4EF0F90", VA = "0x4EF0F90", Slot = "119")]
	public sealed override bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002541")]
	[Address(RVA = "0x4EF0FE0", Offset = "0x4EF0FE0", VA = "0x4EF0FE0", Slot = "73")]
	protected sealed override bool IsMarshalByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002543")]
	[Address(RVA = "0x4EF1080", Offset = "0x4EF1080", VA = "0x4EF1080", Slot = "21")]
	public sealed override bool IsSubclassOf(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002544")]
	[Address(RVA = "0x4EF10D0", Offset = "0x4EF10D0", VA = "0x4EF10D0", Slot = "77")]
	protected sealed override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002546")]
	[Address(RVA = "0x4EEF650", Offset = "0x4EEF650", VA = "0x4EEF650")]
	protected SignatureType()
	{
	}
}
