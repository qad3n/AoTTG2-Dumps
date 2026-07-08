using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200044A")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Method, AllowMultiple = false)]
[ComVisible(false)]
public sealed class DefaultDllImportSearchPathsAttribute : Attribute
{
	[Token(Token = "0x40012B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal DllImportSearchPath _paths;

	[Token(Token = "0x60021D5")]
	[Address(RVA = "0x4ED7A60", Offset = "0x4ED7A60", VA = "0x4ED7A60")]
	public DefaultDllImportSearchPathsAttribute(DllImportSearchPath paths)
	{
	}
}
