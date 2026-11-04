// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.WaitForChangedResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200027C")]
public struct WaitForChangedResult
{
	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly WaitForChangedResult TimedOutResult;

	[Token(Token = "0x1700039E")]
	public WatcherChangeTypes ChangeType
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700039F")]
	public string Name
	{
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A0")]
	public string OldName
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A1")]
	public bool TimedOut
	{
		[Token(Token = "0x6001198")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x28E9190", Offset = "0x28E7790", VA = "0x1828E9190")]
	internal WaitForChangedResult(WatcherChangeTypes changeType, string name, string oldName, bool timedOut)
	{
	}
}
