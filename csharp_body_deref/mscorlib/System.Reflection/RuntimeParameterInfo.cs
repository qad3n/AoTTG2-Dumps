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
[Token(Token = "0x200054A")]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_ParameterInfo))]
[ComVisible(true)]
internal class RuntimeParameterInfo : ParameterInfo
{
	[Token(Token = "0x400154B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal MarshalAsAttribute marshalAs;

	[Token(Token = "0x17000587")]
	public override object DefaultValue
	{
		[Token(Token = "0x600276E")]
		[Address(RVA = "0x1A717C0", Offset = "0x1A6FDC0", VA = "0x181A717C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000588")]
	public override bool HasDefaultValue
	{
		[Token(Token = "0x6002775")]
		[Address(RVA = "0x1A71AE0", Offset = "0x1A700E0", VA = "0x181A71AE0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600276A")]
	[Address(RVA = "0x1A71550", Offset = "0x1A6FB50", VA = "0x181A71550")]
	internal RuntimeParameterInfo(string name, Type type, int position, int attrs, object defaultValue, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x600276B")]
	[Address(RVA = "0x1A706C0", Offset = "0x1A6ECC0", VA = "0x181A706C0")]
	internal static void FormatParameters(StringBuilder sb, ParameterInfo[] p, CallingConventions callingConvention, bool serialization)
	{
	}

	[Token(Token = "0x600276C")]
	[Address(RVA = "0x1A71660", Offset = "0x1A6FC60", VA = "0x181A71660")]
	internal RuntimeParameterInfo(ParameterInfo pinfo, MemberInfo member)
	{
	}

	[Token(Token = "0x600276D")]
	[Address(RVA = "0x1A715E0", Offset = "0x1A6FBE0", VA = "0x181A715E0")]
	internal RuntimeParameterInfo(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x600276F")]
	[Address(RVA = "0x1A70920", Offset = "0x1A6EF20", VA = "0x181A70920", Slot = "16")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002770")]
	[Address(RVA = "0x1A708C0", Offset = "0x1A6EEC0", VA = "0x181A708C0", Slot = "17")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002771")]
	[Address(RVA = "0x1A70970", Offset = "0x1A6EF70", VA = "0x181A70970")]
	internal object GetDefaultValueImpl(ParameterInfo pinfo)
	{
		return null;
	}

	[Token(Token = "0x6002772")]
	[Address(RVA = "0x1A712A0", Offset = "0x1A6F8A0", VA = "0x181A712A0", Slot = "15")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002773")]
	[Address(RVA = "0x1A70FE0", Offset = "0x1A6F5E0", VA = "0x181A70FE0")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x6002774")]
	[Address(RVA = "0x1A70A20", Offset = "0x1A6F020", VA = "0x181A70A20")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x6002776")]
	[Address(RVA = "0x1A71310", Offset = "0x1A6F910", VA = "0x181A71310")]
	internal static ParameterInfo New(ParameterInfo pinfo, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6002777")]
	[Address(RVA = "0x1A714A0", Offset = "0x1A6FAA0", VA = "0x181A714A0")]
	internal static ParameterInfo New(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
		return null;
	}
}
