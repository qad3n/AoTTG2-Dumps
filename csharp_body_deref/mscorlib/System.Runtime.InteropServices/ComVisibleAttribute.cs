using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000440")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
[ComVisible(true)]
public sealed class ComVisibleAttribute : Attribute
{
	[Token(Token = "0x4001259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal bool _val;

	[Token(Token = "0x60021CE")]
	[Address(RVA = "0x4ED79C0", Offset = "0x4ED79C0", VA = "0x4ED79C0")]
	public ComVisibleAttribute(bool visibility)
	{
	}
}
