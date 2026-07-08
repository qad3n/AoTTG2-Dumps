using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20005E2")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false)]
[ComVisible(true)]
public sealed class DebuggerBrowsableAttribute : Attribute
{
	[Token(Token = "0x4001A05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebuggerBrowsableState state;

	[Token(Token = "0x6002E5E")]
	[Address(RVA = "0x4F94A60", Offset = "0x4F94A60", VA = "0x4F94A60")]
	public DebuggerBrowsableAttribute(DebuggerBrowsableState state)
	{
	}
}
