using System.Globalization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection.Emit;

[Token(Token = "0x2000530")]
public sealed class TypeBuilder : TypeInfo
{
	[Token(Token = "0x4001567")]
	public const int UnspecifiedTypeSize = 0;

	[Token(Token = "0x170005BD")]
	public override Assembly Assembly
	{
		[Token(Token = "0x60027A0")]
		[Address(RVA = "0x4F038F0", Offset = "0x4F038F0", VA = "0x4F038F0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BE")]
	public override string AssemblyQualifiedName
	{
		[Token(Token = "0x60027A1")]
		[Address(RVA = "0x4F03930", Offset = "0x4F03930", VA = "0x4F03930", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BF")]
	public override Type BaseType
	{
		[Token(Token = "0x60027A2")]
		[Address(RVA = "0x4F03970", Offset = "0x4F03970", VA = "0x4F03970", Slot = "116")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C0")]
	public override string FullName
	{
		[Token(Token = "0x60027A3")]
		[Address(RVA = "0x4F039B0", Offset = "0x4F039B0", VA = "0x4F039B0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C1")]
	public override Module Module
	{
		[Token(Token = "0x60027A4")]
		[Address(RVA = "0x4F039F0", Offset = "0x4F039F0", VA = "0x4F039F0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C2")]
	public override string Name
	{
		[Token(Token = "0x60027A5")]
		[Address(RVA = "0x4F03A30", Offset = "0x4F03A30", VA = "0x4F03A30", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C3")]
	public override string Namespace
	{
		[Token(Token = "0x60027A6")]
		[Address(RVA = "0x4F03A70", Offset = "0x4F03A70", VA = "0x4F03A70", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C4")]
	public override Type UnderlyingSystemType
	{
		[Token(Token = "0x60027A7")]
		[Address(RVA = "0x4F03AB0", Offset = "0x4F03AB0", VA = "0x4F03AB0", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60027A8")]
	[Address(RVA = "0x4F03AF0", Offset = "0x4F03AF0", VA = "0x4F03AF0", Slot = "56")]
	protected override TypeAttributes GetAttributeFlagsImpl()
	{
		return default(TypeAttributes);
	}

	[Token(Token = "0x60027A9")]
	[Address(RVA = "0x4F03B30", Offset = "0x4F03B30", VA = "0x4F03B30", Slot = "82")]
	protected override ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60027AA")]
	[Address(RVA = "0x4F03B70", Offset = "0x4F03B70", VA = "0x4F03B70", Slot = "84")]
	[ComVisible(true)]
	public override ConstructorInfo[] GetConstructors(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027AB")]
	[Address(RVA = "0x4F03BB0", Offset = "0x4F03BB0", VA = "0x4F03BB0", Slot = "13")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60027AC")]
	[Address(RVA = "0x4F03BF0", Offset = "0x4F03BF0", VA = "0x4F03BF0", Slot = "14")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60027AD")]
	[Address(RVA = "0x4F03C30", Offset = "0x4F03C30", VA = "0x4F03C30", Slot = "47")]
	public override Type GetElementType()
	{
		return null;
	}

	[Token(Token = "0x60027AE")]
	[Address(RVA = "0x4F03C70", Offset = "0x4F03C70", VA = "0x4F03C70", Slot = "86")]
	public override EventInfo GetEvent(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027AF")]
	[Address(RVA = "0x4F03CB0", Offset = "0x4F03CB0", VA = "0x4F03CB0", Slot = "87")]
	public override EventInfo[] GetEvents(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B0")]
	[Address(RVA = "0x4F03CF0", Offset = "0x4F03CF0", VA = "0x4F03CF0", Slot = "89")]
	public override FieldInfo GetField(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B1")]
	[Address(RVA = "0x4F03D30", Offset = "0x4F03D30", VA = "0x4F03D30", Slot = "91")]
	public override FieldInfo[] GetFields(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B2")]
	[Address(RVA = "0x4F03D70", Offset = "0x4F03D70", VA = "0x4F03D70", Slot = "118")]
	public override Type[] GetInterfaces()
	{
		return null;
	}

	[Token(Token = "0x60027B3")]
	[Address(RVA = "0x4F03DB0", Offset = "0x4F03DB0", VA = "0x4F03DB0", Slot = "95")]
	public override MemberInfo[] GetMembers(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B4")]
	[Address(RVA = "0x4F03DF0", Offset = "0x4F03DF0", VA = "0x4F03DF0", Slot = "102")]
	protected override MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60027B5")]
	[Address(RVA = "0x4F03E30", Offset = "0x4F03E30", VA = "0x4F03E30", Slot = "104")]
	public override MethodInfo[] GetMethods(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B6")]
	[Address(RVA = "0x4F03E70", Offset = "0x4F03E70", VA = "0x4F03E70", Slot = "105")]
	public override Type GetNestedType(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B7")]
	[Address(RVA = "0x4F03EB0", Offset = "0x4F03EB0", VA = "0x4F03EB0", Slot = "113")]
	public override PropertyInfo[] GetProperties(BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60027B8")]
	[Address(RVA = "0x4F03EF0", Offset = "0x4F03EF0", VA = "0x4F03EF0", Slot = "112")]
	protected override PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x60027B9")]
	[Address(RVA = "0x4F03F30", Offset = "0x4F03F30", VA = "0x4F03F30", Slot = "46")]
	protected override bool HasElementTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60027BA")]
	[Address(RVA = "0x4F03F70", Offset = "0x4F03F70", VA = "0x4F03F70", Slot = "117")]
	public override object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters)
	{
		return null;
	}

	[Token(Token = "0x60027BB")]
	[Address(RVA = "0x4F03FB0", Offset = "0x4F03FB0", VA = "0x4F03FB0", Slot = "32")]
	protected override bool IsArrayImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60027BC")]
	[Address(RVA = "0x4F03FF0", Offset = "0x4F03FF0", VA = "0x4F03FF0", Slot = "34")]
	protected override bool IsByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60027BD")]
	[Address(RVA = "0x4F04030", Offset = "0x4F04030", VA = "0x4F04030", Slot = "67")]
	protected override bool IsCOMObjectImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60027BE")]
	[Address(RVA = "0x4F04070", Offset = "0x4F04070", VA = "0x4F04070", Slot = "12")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60027BF")]
	[Address(RVA = "0x4F040B0", Offset = "0x4F040B0", VA = "0x4F040B0", Slot = "36")]
	protected override bool IsPointerImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x60027C0")]
	[Address(RVA = "0x4F040F0", Offset = "0x4F040F0", VA = "0x4F040F0", Slot = "75")]
	protected override bool IsPrimitiveImpl()
	{
		return default(bool);
	}
}
