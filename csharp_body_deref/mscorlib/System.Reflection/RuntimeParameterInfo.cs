// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.RuntimeParameterInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BE52E0", Offset = "0x3BE52E0", VA = "0x3BE52E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000585")]
	public override bool HasDefaultValue
	{
		[Token(Token = "0x60026F2")]
		[Address(RVA = "0x3BE5FB0", Offset = "0x3BE5FB0", VA = "0x3BE5FB0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60026E7")]
	[Address(RVA = "0x3BE5030", Offset = "0x3BE5030", VA = "0x3BE5030")]
	internal RuntimeParameterInfo(string name, Type type, int position, int attrs, object defaultValue, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x60026E8")]
	[Address(RVA = "0x3BE1FC0", Offset = "0x3BE1FC0", VA = "0x3BE1FC0")]
	internal static void FormatParameters(StringBuilder sb, ParameterInfo[] p, CallingConventions callingConvention, bool serialization)
	{
	}

	[Token(Token = "0x60026E9")]
	[Address(RVA = "0x3BE50D0", Offset = "0x3BE50D0", VA = "0x3BE50D0")]
	internal RuntimeParameterInfo(ParameterInfo pinfo, MemberInfo member)
	{
	}

	[Token(Token = "0x60026EA")]
	[Address(RVA = "0x3BE5260", Offset = "0x3BE5260", VA = "0x3BE5260")]
	internal RuntimeParameterInfo(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x60026EC")]
	[Address(RVA = "0x3BE55E0", Offset = "0x3BE55E0", VA = "0x3BE55E0", Slot = "16")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026ED")]
	[Address(RVA = "0x3BE5630", Offset = "0x3BE5630", VA = "0x3BE5630", Slot = "17")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60026EE")]
	[Address(RVA = "0x3BE51A0", Offset = "0x3BE51A0", VA = "0x3BE51A0")]
	internal object GetDefaultValueImpl(ParameterInfo pinfo)
	{
		return null;
	}

	[Token(Token = "0x60026EF")]
	[Address(RVA = "0x3BE5690", Offset = "0x3BE5690", VA = "0x3BE5690", Slot = "15")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60026F0")]
	[Address(RVA = "0x3BE56F0", Offset = "0x3BE56F0", VA = "0x3BE56F0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x60026F1")]
	[Address(RVA = "0x3BE59B0", Offset = "0x3BE59B0", VA = "0x3BE59B0")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x60026F3")]
	[Address(RVA = "0x3BE60B0", Offset = "0x3BE60B0", VA = "0x3BE60B0")]
	internal static ParameterInfo New(ParameterInfo pinfo, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60026F4")]
	[Address(RVA = "0x3BE1C40", Offset = "0x3BE1C40", VA = "0x3BE1C40")]
	internal static ParameterInfo New(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
		return null;
	}
}
