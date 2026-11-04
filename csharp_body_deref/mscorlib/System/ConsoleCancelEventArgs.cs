// ==================== AoTTG2 cross-reference ====================
// Type: System.ConsoleCancelEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000161")]
public sealed class ConsoleCancelEventArgs : EventArgs
{
	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x10")]
	private readonly ConsoleSpecialKey _type;

	[Token(Token = "0x17000110")]
	public bool Cancel
	{
		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x1B43680", Offset = "0x1B41C80", VA = "0x181B43680")]
	internal ConsoleCancelEventArgs(ConsoleSpecialKey type)
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x1B436E0", Offset = "0x1B41CE0", VA = "0x181B436E0")]
	internal ConsoleCancelEventArgs()
	{
	}
}
