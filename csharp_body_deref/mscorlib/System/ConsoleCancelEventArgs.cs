using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000139")]
public sealed class ConsoleCancelEventArgs : EventArgs
{
	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x10")]
	private readonly ConsoleSpecialKey _type;

	[Token(Token = "0x1700010F")]
	public bool Cancel
	{
		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x4FF6520", Offset = "0x4FF6520", VA = "0x4FF6520")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4FF64D0", Offset = "0x4FF64D0", VA = "0x4FF64D0")]
	internal ConsoleCancelEventArgs(ConsoleSpecialKey type)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4FF6530", Offset = "0x4FF6530", VA = "0x4FF6530")]
	internal ConsoleCancelEventArgs()
	{
	}
}
