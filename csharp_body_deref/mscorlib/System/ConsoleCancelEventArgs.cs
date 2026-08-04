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
		[Address(RVA = "0x3CDC040", Offset = "0x3CDC040", VA = "0x3CDC040")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x3CDBFF0", Offset = "0x3CDBFF0", VA = "0x3CDBFF0")]
	internal ConsoleCancelEventArgs(ConsoleSpecialKey type)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x3CDC050", Offset = "0x3CDC050", VA = "0x3CDC050")]
	internal ConsoleCancelEventArgs()
	{
	}
}
