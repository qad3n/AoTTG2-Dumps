// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TypeDelegator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x200052F")]
public class TypeDelegator : TypeInfo
{
	[Token(Token = "0x4001490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Type typeImpl;

	[Token(Token = "0x17000527")]
	public override int MetadataToken
	{
		[Token(Token = "0x60025DD")]
		[Address(RVA = "0x1A58730", Offset = "0x1A56D30", VA = "0x181A58730", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000528")]
	public override Module Module
	{
		[Token(Token = "0x60025DF")]
		[Address(RVA = "0x1A58760", Offset = "0x1A56D60", VA = "0x181A58760", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000529")]
	public override Assembly Assembly
	{
		[Token(Token = "0x60025E0")]
		[Address(RVA = "0x1A58610", Offset = "0x1A56C10", VA = "0x181A58610", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052A")]
	public override RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x60025E1")]
		[Address(RVA = "0x1A58790", Offset = "0x1A56D90", VA = "0x181A58790", Slot = "116")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x1700052B")]
	public override string Name
	{
		[Token(Token = "0x60025E2")]
		[Address(RVA = "0x1A56060", Offset = "0x1A54660", VA = "0x181A56060", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052C")]
	public override string FullName
	{
		[Token(Token = "0x60025E3")]
		[Address(RVA = "0x1A58670", Offset = "0x1A56C70", VA = "0x181A58670", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052D")]
	public override string Namespace
	{
		[Token(Token = "0x60025E4")]
		[Address(RVA = "0x1A56090", Offset = "0x1A54690", VA = "0x181A56090", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052E")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x60025E5")]
		[Address(RVA = "0x1997300", Offset = "0x1995900", VA = "0x181997300", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052F")]
	public override Type BaseType
	{
		[Token(Token = "0x60025E6")]
		[Address(RVA = "0x1A58640", Offset = "0x1A56C40", VA = "0x181A58640", Slot = "118")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000530")]
	public override bool IsSZArray
	{
		[Token(Token = "0x60025F6")]
		[Address(RVA = "0x1A58700", Offset = "0x1A56D00", VA = "0x181A58700", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000531")]
	public override bool IsGenericMethodParameter
	{
		[Token(Token = "0x60025FA")]
		[Address(RVA = "0x1A586D0", Offset = "0x1A56CD0", VA = "0x181A586D0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000532")]
	public override bool IsByRefLike
	{
		[Token(Token = "0x60025FE")]
		[Address(RVA = "0x1A56030", Offset = "0x1A54630", VA = "0x181A56030", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000533")]
	public override bool IsConstructedGenericType
	{
		[Token(Token = "0x60025FF")]
		[Address(RVA = "0x1996760", Offset = "0x1994D60", VA = "0x181996760", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000534")]
	public override bool IsCollectible
	{
		[Token(Token = "0x6002600")]
		[Address(RVA = "0x1A586A0", Offset = "0x1A56CA0", VA = "0x181A586A0", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000535")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x6002603")]
		[Address(RVA = "0x1A587C0", Offset = "0x1A56DC0", VA = "0x181A587C0", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60025DC")]
	[Address(RVA = "0x1A58550", Offset = "0x1A56B50", VA = "0x181A58550")]
	public TypeDelegator(Type delegatingType)
	{
	}

	[Token(Token = "0x60025DE")]
	[Address(RVA = "0x1A58430", Offset = "0x1A56A30", VA = "0x181A58430", Slot = "119")]
	public override object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters)
	{
		return null;
	}

	[Token(Token = "0x60025E7")]
	[Address(RVA = "0x1A58040", Offset = "0x1A56640", VA = "0x181A58040", Slot = "83")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60025E8")]
	[Address(RVA = "0x1A58070", Offset = "0x1A56670", VA = "0x181A58070", Slot = "85")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025E9")]
	[Address(RVA = "0x1A58280", Offset = "0x1A56880", VA = "0x181A58280", Slot = "103")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60025EA")]
	[Address(RVA = "0x1A582C0", Offset = "0x1A568C0", VA = "0x181A582C0", Slot = "105")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025EB")]
	[Address(RVA = "0x1A58190", Offset = "0x1A56790", VA = "0x181A58190", Slot = "90")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025EC")]
	[Address(RVA = "0x1A581C0", Offset = "0x1A567C0", VA = "0x181A581C0", Slot = "92")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025ED")]
	[Address(RVA = "0x1A581F0", Offset = "0x1A567F0", VA = "0x181A581F0", Slot = "120")]
	public override Type[] GetInterfaces()
	{
		return null;
	}

	[Token(Token = "0x60025EE")]
	[Address(RVA = "0x1A58130", Offset = "0x1A56730", VA = "0x181A58130", Slot = "87")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025EF")]
	[Address(RVA = "0x1A58350", Offset = "0x1A56950", VA = "0x181A58350", Slot = "113")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60025F0")]
	[Address(RVA = "0x1A58320", Offset = "0x1A56920", VA = "0x181A58320", Slot = "115")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025F1")]
	[Address(RVA = "0x1A58160", Offset = "0x1A56760", VA = "0x181A58160", Slot = "88")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025F2")]
	[Address(RVA = "0x1A582F0", Offset = "0x1A568F0", VA = "0x181A582F0", Slot = "106")]
	public override Type GetNestedType(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025F3")]
	[Address(RVA = "0x1A58220", Offset = "0x1A56820", VA = "0x181A58220", Slot = "95")]
	public override MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025F4")]
	[Address(RVA = "0x1A58250", Offset = "0x1A56850", VA = "0x181A58250", Slot = "96")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60025F5")]
	[Address(RVA = "0x1A58020", Offset = "0x1A56620", VA = "0x181A58020", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x60025F7")]
	[Address(RVA = "0x1A58460", Offset = "0x1A56A60", VA = "0x181A58460", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025F8")]
	[Address(RVA = "0x1A58510", Offset = "0x1A56B10", VA = "0x181A58510", Slot = "76")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025F9")]
	[Address(RVA = "0x1A58480", Offset = "0x1A56A80", VA = "0x181A58480", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025FB")]
	[Address(RVA = "0x1A584F0", Offset = "0x1A56AF0", VA = "0x181A584F0", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025FC")]
	[Address(RVA = "0x1A58530", Offset = "0x1A56B30", VA = "0x181A58530", Slot = "78")]
	protected override bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60025FD")]
	[Address(RVA = "0x1A584A0", Offset = "0x1A56AA0", VA = "0x181A584A0", Slot = "68")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002601")]
	[Address(RVA = "0x1A58100", Offset = "0x1A56700", VA = "0x181A58100", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x6002602")]
	[Address(RVA = "0x1A58410", Offset = "0x1A56A10", VA = "0x181A58410", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6002604")]
	[Address(RVA = "0x1A580D0", Offset = "0x1A566D0", VA = "0x181A580D0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002605")]
	[Address(RVA = "0x1A580A0", Offset = "0x1A566A0", VA = "0x181A580A0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002606")]
	[Address(RVA = "0x1A584C0", Offset = "0x1A56AC0", VA = "0x181A584C0", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}
}
