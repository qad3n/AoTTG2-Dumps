using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x200051A")]
[ComDefaultInterface(typeof(_ParameterInfo))]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
internal class RuntimeParameterInfo : ParameterInfo
{
	[Token(Token = "0x400154C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal MarshalAsAttribute marshalAs;

	[Token(Token = "0x17000584")]
	public override object DefaultValue
	{
		[Token(Token = "0x60026EB")]
		[Address(RVA = "0x4EFF7C0", Offset = "0x4EFF7C0", VA = "0x4EFF7C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000585")]
	public override bool HasDefaultValue
	{
		[Token(Token = "0x60026F2")]
		[Address(RVA = "0x4F00490", Offset = "0x4F00490", VA = "0x4F00490", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60026E7")]
	[Address(RVA = "0x4EFF510", Offset = "0x4EFF510", VA = "0x4EFF510")]
	internal RuntimeParameterInfo(string name, Type type, int position, int attrs, object defaultValue, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x60026E8")]
	[Address(RVA = "0x4EFC4A0", Offset = "0x4EFC4A0", VA = "0x4EFC4A0")]
	internal static void FormatParameters(StringBuilder sb, ParameterInfo[] p, CallingConventions callingConvention, bool serialization)
	{
	}

	[Token(Token = "0x60026E9")]
	[Address(RVA = "0x4EFF5B0", Offset = "0x4EFF5B0", VA = "0x4EFF5B0")]
	internal RuntimeParameterInfo(ParameterInfo pinfo, MemberInfo member)
	{
	}

	[Token(Token = "0x60026EA")]
	[Address(RVA = "0x4EFF740", Offset = "0x4EFF740", VA = "0x4EFF740")]
	internal RuntimeParameterInfo(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x60026EC")]
	[Address(RVA = "0x4EFFAC0", Offset = "0x4EFFAC0", VA = "0x4EFFAC0", Slot = "16")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026ED")]
	[Address(RVA = "0x4EFFB10", Offset = "0x4EFFB10", VA = "0x4EFFB10", Slot = "17")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026EE")]
	[Address(RVA = "0x4EFF680", Offset = "0x4EFF680", VA = "0x4EFF680")]
	internal object GetDefaultValueImpl(ParameterInfo pinfo)
	{
		return null;
	}

	[Token(Token = "0x60026EF")]
	[Address(RVA = "0x4EFFB70", Offset = "0x4EFFB70", VA = "0x4EFFB70", Slot = "15")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026F0")]
	[Address(RVA = "0x4EFFBD0", Offset = "0x4EFFBD0", VA = "0x4EFFBD0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x60026F1")]
	[Address(RVA = "0x4EFFE90", Offset = "0x4EFFE90", VA = "0x4EFFE90")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x60026F3")]
	[Address(RVA = "0x4F00590", Offset = "0x4F00590", VA = "0x4F00590")]
	internal static ParameterInfo New(ParameterInfo pinfo, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60026F4")]
	[Address(RVA = "0x4EFC120", Offset = "0x4EFC120", VA = "0x4EFC120")]
	internal static ParameterInfo New(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
		return null;
	}
}
