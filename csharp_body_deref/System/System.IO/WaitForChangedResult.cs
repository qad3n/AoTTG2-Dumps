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

[Token(Token = "0x200035B")]
public struct WaitForChangedResult
{
	[Token(Token = "0x4000F4A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly WaitForChangedResult TimedOutResult;

	[Token(Token = "0x170004FE")]
	public WatcherChangeTypes ChangeType
	{
		[Token(Token = "0x6001693")]
		[Address(RVA = "0x48E9E40", Offset = "0x48E9E40", VA = "0x48E9E40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004FF")]
	public string Name
	{
		[Token(Token = "0x6001694")]
		[Address(RVA = "0x48E9E50", Offset = "0x48E9E50", VA = "0x48E9E50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000500")]
	public string OldName
	{
		[Token(Token = "0x6001695")]
		[Address(RVA = "0x48E9E60", Offset = "0x48E9E60", VA = "0x48E9E60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000501")]
	public bool TimedOut
	{
		[Token(Token = "0x6001696")]
		[Address(RVA = "0x48E9E70", Offset = "0x48E9E70", VA = "0x48E9E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x48E9DC0", Offset = "0x48E9DC0", VA = "0x48E9DC0")]
	internal WaitForChangedResult(WatcherChangeTypes changeType, string name, string oldName, bool timedOut)
	{
	}
}
