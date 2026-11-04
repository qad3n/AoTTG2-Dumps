// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000529")]
internal abstract class SignatureType : Type
{
	[Token(Token = "0x17000509")]
	public sealed override bool IsSignatureType
	{
		[Token(Token = "0x6002578")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "79")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050A")]
	public abstract override bool IsSZArray
	{
		[Token(Token = "0x600257B")]
		get;
	}

	[Token(Token = "0x1700050B")]
	public abstract override bool IsVariableBoundArray
	{
		[Token(Token = "0x600257C")]
		get;
	}

	[Token(Token = "0x1700050C")]
	public abstract override bool IsByRefLike
	{
		[Token(Token = "0x600257E")]
		get;
	}

	[Token(Token = "0x1700050D")]
	public sealed override bool IsGenericType
	{
		[Token(Token = "0x6002580")]
		[Address(RVA = "0x1A57CE0", Offset = "0x1A562E0", VA = "0x181A57CE0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050E")]
	public abstract override bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6002581")]
		get;
	}

	[Token(Token = "0x1700050F")]
	public abstract override bool IsConstructedGenericType
	{
		[Token(Token = "0x6002582")]
		get;
	}

	[Token(Token = "0x17000510")]
	public abstract override bool IsGenericParameter
	{
		[Token(Token = "0x6002583")]
		get;
	}

	[Token(Token = "0x17000511")]
	public abstract override bool IsGenericMethodParameter
	{
		[Token(Token = "0x6002584")]
		get;
	}

	[Token(Token = "0x17000512")]
	public abstract override bool ContainsGenericParameters
	{
		[Token(Token = "0x6002585")]
		get;
	}

	[Token(Token = "0x17000513")]
	public sealed override MemberTypes MemberType
	{
		[Token(Token = "0x6002586")]
		[Address(RVA = "0x846F70", Offset = "0x845570", VA = "0x180846F70", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x17000514")]
	public abstract override Type[] GenericTypeArguments
	{
		[Token(Token = "0x600258F")]
		get;
	}

	[Token(Token = "0x17000515")]
	public abstract override int GenericParameterPosition
	{
		[Token(Token = "0x6002591")]
		get;
	}

	[Token(Token = "0x17000516")]
	internal abstract System.Reflection.SignatureType ElementType
	{
		[Token(Token = "0x6002592")]
		get;
	}

	[Token(Token = "0x17000517")]
	public sealed override Type UnderlyingSystemType
	{
		[Token(Token = "0x6002593")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000518")]
	public abstract override string Name
	{
		[Token(Token = "0x6002594")]
		get;
	}

	[Token(Token = "0x17000519")]
	public abstract override string Namespace
	{
		[Token(Token = "0x6002595")]
		get;
	}

	[Token(Token = "0x1700051A")]
	public sealed override string FullName
	{
		[Token(Token = "0x6002596")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051B")]
	public sealed override string AssemblyQualifiedName
	{
		[Token(Token = "0x6002597")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051C")]
	public sealed override Assembly Assembly
	{
		[Token(Token = "0x6002599")]
		[Address(RVA = "0x1A57B00", Offset = "0x1A56100", VA = "0x181A57B00", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051D")]
	public sealed override Module Module
	{
		[Token(Token = "0x600259A")]
		[Address(RVA = "0x1A57DC0", Offset = "0x1A563C0", VA = "0x181A57DC0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051E")]
	public sealed override Type ReflectedType
	{
		[Token(Token = "0x600259B")]
		[Address(RVA = "0x1A57E10", Offset = "0x1A56410", VA = "0x181A57E10", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051F")]
	public sealed override Type BaseType
	{
		[Token(Token = "0x600259C")]
		[Address(RVA = "0x1A57B50", Offset = "0x1A56150", VA = "0x181A57B50", Slot = "118")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000520")]
	public sealed override int MetadataToken
	{
		[Token(Token = "0x600259F")]
		[Address(RVA = "0x1A57D70", Offset = "0x1A56370", VA = "0x181A57D70", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000521")]
	public sealed override Type DeclaringType
	{
		[Token(Token = "0x60025A0")]
		[Address(RVA = "0x1A57BF0", Offset = "0x1A561F0", VA = "0x181A57BF0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000522")]
	public sealed override MethodBase DeclaringMethod
	{
		[Token(Token = "0x60025A1")]
		[Address(RVA = "0x1A57BA0", Offset = "0x1A561A0", VA = "0x181A57BA0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000523")]
	public sealed override GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x60025A3")]
		[Address(RVA = "0x1A57C40", Offset = "0x1A56240", VA = "0x181A57C40", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x17000524")]
	public sealed override bool IsEnum
	{
		[Token(Token = "0x60025C0")]
		[Address(RVA = "0x1A57C90", Offset = "0x1A56290", VA = "0x181A57C90", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000525")]
	public sealed override bool IsSerializable
	{
		[Token(Token = "0x60025C4")]
		[Address(RVA = "0x1A57D20", Offset = "0x1A56320", VA = "0x181A57D20", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000526")]
	public sealed override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x60025C7")]
		[Address(RVA = "0x1A57E60", Offset = "0x1A56460", VA = "0x181A57E60", Slot = "116")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x6002579")]
	protected abstract override bool HasElementTypeImpl();

	[Token(Token = "0x600257A")]
	protected abstract override bool IsArrayImpl();

	[Token(Token = "0x600257D")]
	protected abstract override bool IsByRefImpl();

	[Token(Token = "0x600257F")]
	protected abstract override bool IsPointerImpl();

	[Token(Token = "0x6002587")]
	[Address(RVA = "0x1A57830", Offset = "0x1A55E30", VA = "0x181A57830", Slot = "125")]
	public sealed override Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6002588")]
	[Address(RVA = "0x1A578B0", Offset = "0x1A55EB0", VA = "0x181A578B0", Slot = "126")]
	public sealed override Type MakeArrayType(int rank)
	{
		return null;
	}

	[Token(Token = "0x6002589")]
	[Address(RVA = "0x1A57980", Offset = "0x1A55F80", VA = "0x181A57980", Slot = "127")]
	public sealed override Type MakeByRefType()
	{
		return null;
	}

	[Token(Token = "0x600258A")]
	[Address(RVA = "0x1A57A50", Offset = "0x1A56050", VA = "0x181A57A50", Slot = "129")]
	public sealed override Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x600258B")]
	[Address(RVA = "0x1A57A00", Offset = "0x1A56000", VA = "0x181A57A00", Slot = "128")]
	public sealed override Type MakeGenericType(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x600258C")]
	[Address(RVA = "0x1A56E60", Offset = "0x1A55460", VA = "0x181A56E60", Slot = "47")]
	public sealed override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x600258D")]
	public abstract override int GetArrayRank();

	[Token(Token = "0x600258E")]
	public abstract override Type GetGenericTypeDefinition();

	[Token(Token = "0x6002590")]
	public abstract override Type[] GetGenericArguments();

	[Token(Token = "0x6002598")]
	public abstract override string ToString();

	[Token(Token = "0x600259D")]
	[Address(RVA = "0x1A57150", Offset = "0x1A55750", VA = "0x181A57150", Slot = "120")]
	public sealed override Type[] GetInterfaces()
	{
		return null;
	}

	[Token(Token = "0x600259E")]
	[Address(RVA = "0x1A574C0", Offset = "0x1A55AC0", VA = "0x181A574C0", Slot = "22")]
	public sealed override bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x60025A2")]
	[Address(RVA = "0x1A57100", Offset = "0x1A55700", VA = "0x181A57100", Slot = "54")]
	public sealed override Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x60025A4")]
	[Address(RVA = "0x1A57600", Offset = "0x1A55C00", VA = "0x181A57600", Slot = "16")]
	public sealed override bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60025A5")]
	[Address(RVA = "0x1A56E80", Offset = "0x1A55480", VA = "0x181A56E80", Slot = "17")]
	public sealed override string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x60025A6")]
	[Address(RVA = "0x1A56ED0", Offset = "0x1A554D0", VA = "0x181A56ED0", Slot = "18")]
	public sealed override string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x60025A7")]
	[Address(RVA = "0x1A56F20", Offset = "0x1A55520", VA = "0x181A56F20", Slot = "123")]
	public sealed override Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x60025A8")]
	[Address(RVA = "0x1A56F70", Offset = "0x1A55570", VA = "0x181A56F70", Slot = "124")]
	public sealed override Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x60025A9")]
	[Address(RVA = "0x1A57420", Offset = "0x1A55A20", VA = "0x181A57420", Slot = "117")]
	protected sealed override TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60025AA")]
	[Address(RVA = "0x1A56CD0", Offset = "0x1A552D0", VA = "0x181A56CD0", Slot = "56")]
	protected sealed override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x60025AB")]
	[Address(RVA = "0x1A56D70", Offset = "0x1A55370", VA = "0x181A56D70", Slot = "85")]
	public sealed override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025AC")]
	[Address(RVA = "0x1A56FC0", Offset = "0x1A555C0", VA = "0x181A56FC0", Slot = "87")]
	public sealed override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025AD")]
	[Address(RVA = "0x1A57010", Offset = "0x1A55610", VA = "0x181A57010", Slot = "88")]
	public sealed override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025AE")]
	[Address(RVA = "0x1A57060", Offset = "0x1A55660", VA = "0x181A57060", Slot = "90")]
	public sealed override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025AF")]
	[Address(RVA = "0x1A570B0", Offset = "0x1A556B0", VA = "0x181A570B0", Slot = "92")]
	public sealed override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B0")]
	[Address(RVA = "0x1A57240", Offset = "0x1A55840", VA = "0x181A57240", Slot = "96")]
	public sealed override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B1")]
	[Address(RVA = "0x1A572E0", Offset = "0x1A558E0", VA = "0x181A572E0", Slot = "105")]
	public sealed override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B2")]
	[Address(RVA = "0x1A57330", Offset = "0x1A55930", VA = "0x181A57330", Slot = "106")]
	public sealed override Type GetNestedType(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B3")]
	[Address(RVA = "0x1A57380", Offset = "0x1A55980", VA = "0x181A57380", Slot = "115")]
	public sealed override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B4")]
	[Address(RVA = "0x1A57470", Offset = "0x1A55A70", VA = "0x181A57470", Slot = "119")]
	public sealed override object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters)
	{
		return null;
	}

	[Token(Token = "0x60025B5")]
	[Address(RVA = "0x1A57290", Offset = "0x1A55890", VA = "0x181A57290", Slot = "103")]
	protected sealed override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60025B6")]
	[Address(RVA = "0x1A573D0", Offset = "0x1A559D0", VA = "0x181A573D0", Slot = "113")]
	protected sealed override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60025B7")]
	[Address(RVA = "0x1A571F0", Offset = "0x1A557F0", VA = "0x181A571F0", Slot = "94")]
	public sealed override MemberInfo[] GetMember(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B8")]
	[Address(RVA = "0x1A571A0", Offset = "0x1A557A0", VA = "0x181A571A0", Slot = "95")]
	public sealed override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025B9")]
	[Address(RVA = "0x1A56DC0", Offset = "0x1A553C0", VA = "0x181A56DC0", Slot = "13")]
	public sealed override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025BA")]
	[Address(RVA = "0x1A56E10", Offset = "0x1A55410", VA = "0x181A56E10", Slot = "14")]
	public sealed override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025BB")]
	[Address(RVA = "0x1A575B0", Offset = "0x1A55BB0", VA = "0x181A575B0", Slot = "12")]
	public sealed override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60025BC")]
	[Address(RVA = "0x1A56D20", Offset = "0x1A55320", VA = "0x181A56D20", Slot = "83")]
	protected sealed override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60025BD")]
	[Address(RVA = "0x1A57510", Offset = "0x1A55B10", VA = "0x181A57510", Slot = "68")]
	protected sealed override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025BE")]
	[Address(RVA = "0x1A57740", Offset = "0x1A55D40", VA = "0x181A57740", Slot = "76")]
	protected sealed override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025BF")]
	[Address(RVA = "0x1A57560", Offset = "0x1A55B60", VA = "0x181A57560", Slot = "70")]
	protected sealed override bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C1")]
	[Address(RVA = "0x1A57650", Offset = "0x1A55C50", VA = "0x181A57650", Slot = "122")]
	public sealed override bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x60025C2")]
	[Address(RVA = "0x1A576A0", Offset = "0x1A55CA0", VA = "0x181A576A0", Slot = "121")]
	public sealed override bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60025C3")]
	[Address(RVA = "0x1A576F0", Offset = "0x1A55CF0", VA = "0x181A576F0", Slot = "74")]
	protected sealed override bool IsMarshalByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C5")]
	[Address(RVA = "0x1A57790", Offset = "0x1A55D90", VA = "0x181A57790", Slot = "21")]
	public sealed override bool IsSubclassOf(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x60025C6")]
	[Address(RVA = "0x1A577E0", Offset = "0x1A55DE0", VA = "0x181A577E0", Slot = "78")]
	protected sealed override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C8")]
	[Address(RVA = "0x1A57AD0", Offset = "0x1A560D0", VA = "0x181A57AD0")]
	protected SignatureType()
	{
	}
}
