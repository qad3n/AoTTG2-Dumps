using System.Diagnostics;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F4")]
internal static class CompModSwitches
{
	[Token(Token = "0x4000E40")]
	[FieldOffset(Offset = "0x0")]
	private static BooleanSwitch commonDesignerServices;

	[Token(Token = "0x4000E41")]
	[FieldOffset(Offset = "0x8")]
	private static TraceSwitch eventLog;

	[Token(Token = "0x1700044C")]
	public static BooleanSwitch CommonDesignerServices
	{
		[Token(Token = "0x600130B")]
		[Address(RVA = "0x4589370", Offset = "0x4589370", VA = "0x4589370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044D")]
	public static TraceSwitch EventLog
	{
		[Token(Token = "0x600130C")]
		[Address(RVA = "0x4589450", Offset = "0x4589450", VA = "0x4589450")]
		get
		{
			return null;
		}
	}
}
