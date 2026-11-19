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
[Token(Token = "0x2000523")]
[ClassInterface(ClassInterfaceType.None)]
[ComDefaultInterface(typeof(_ParameterInfo))]
[ComVisible(true)]
internal class RuntimeParameterInfo : ParameterInfo
{
	[Token(Token = "0x40014AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal MarshalAsAttribute marshalAs;

	[Token(Token = "0x17000586")]
	public override object DefaultValue
	{
		[Token(Token = "0x600273C")]
		[Address(RVA = "0x53EBF60", Offset = "0x53EAF60", VA = "0x53EBF60", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000587")]
	public override bool HasDefaultValue
	{
		[Token(Token = "0x6002743")]
		[Address(RVA = "0x53ECC10", Offset = "0x53EBC10", VA = "0x53ECC10", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002738")]
	[Address(RVA = "0x53EBCB0", Offset = "0x53EACB0", VA = "0x53EBCB0")]
	internal RuntimeParameterInfo(string name, Type type, int position, int attrs, object defaultValue, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x6002739")]
	[Address(RVA = "0x53E8B90", Offset = "0x53E7B90", VA = "0x53E8B90")]
	internal static void FormatParameters(StringBuilder sb, ParameterInfo[] p, CallingConventions callingConvention, bool serialization)
	{
	}

	[Token(Token = "0x600273A")]
	[Address(RVA = "0x53EBD50", Offset = "0x53EAD50", VA = "0x53EBD50")]
	internal RuntimeParameterInfo(ParameterInfo pinfo, MemberInfo member)
	{
	}

	[Token(Token = "0x600273B")]
	[Address(RVA = "0x53EBEE0", Offset = "0x53EAEE0", VA = "0x53EBEE0")]
	internal RuntimeParameterInfo(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
	}

	[Token(Token = "0x600273D")]
	[Address(RVA = "0x53EC260", Offset = "0x53EB260", VA = "0x53EC260", Slot = "16")]
	public override object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600273E")]
	[Address(RVA = "0x53EC2B0", Offset = "0x53EB2B0", VA = "0x53EC2B0", Slot = "17")]
	public override object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600273F")]
	[Address(RVA = "0x53EBE20", Offset = "0x53EAE20", VA = "0x53EBE20")]
	internal object GetDefaultValueImpl(ParameterInfo pinfo)
	{
		return null;
	}

	[Token(Token = "0x6002740")]
	[Address(RVA = "0x53EC310", Offset = "0x53EB310", VA = "0x53EC310", Slot = "15")]
	public override bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x6002741")]
	[Address(RVA = "0x53EC370", Offset = "0x53EB370", VA = "0x53EC370")]
	internal object[] GetPseudoCustomAttributes()
	{
		return null;
	}

	[Token(Token = "0x6002742")]
	[Address(RVA = "0x53EC620", Offset = "0x53EB620", VA = "0x53EC620")]
	internal CustomAttributeData[] GetPseudoCustomAttributesData()
	{
		return null;
	}

	[Token(Token = "0x6002744")]
	[Address(RVA = "0x53ECD10", Offset = "0x53EBD10", VA = "0x53ECD10")]
	internal static ParameterInfo New(ParameterInfo pinfo, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6002745")]
	[Address(RVA = "0x53E8810", Offset = "0x53E7810", VA = "0x53E8810")]
	internal static ParameterInfo New(Type type, MemberInfo member, MarshalAsAttribute marshalAs)
	{
		return null;
	}
}
