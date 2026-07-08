using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000444")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
[ComVisible(true)]
public sealed class GuidAttribute : Attribute
{
	[Token(Token = "0x40012AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string _val;

	[Token(Token = "0x60021D0")]
	[Address(RVA = "0x4ED79F0", Offset = "0x4ED79F0", VA = "0x4ED79F0")]
	public GuidAttribute(string guid)
	{
	}
}
