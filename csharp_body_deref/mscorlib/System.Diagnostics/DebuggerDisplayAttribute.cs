using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20005E4")]
[AttributeUsage(AttributeTargets.Assembly | AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Delegate, AllowMultiple = true)]
[ComVisible(true)]
public sealed class DebuggerDisplayAttribute : Attribute
{
	[Token(Token = "0x4001A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4001A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string value;

	[Token(Token = "0x4001A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string type;

	[Token(Token = "0x1700070F")]
	public string Name
	{
		[Token(Token = "0x6002E61")]
		[Address(RVA = "0x4F94C20", Offset = "0x4F94C20", VA = "0x4F94C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000710")]
	public string Type
	{
		[Token(Token = "0x6002E62")]
		[Address(RVA = "0x4F94C30", Offset = "0x4F94C30", VA = "0x4F94C30")]
		set
		{
		}
	}

	[Token(Token = "0x6002E60")]
	[Address(RVA = "0x4F94B90", Offset = "0x4F94B90", VA = "0x4F94B90")]
	public DebuggerDisplayAttribute(string value)
	{
	}
}
