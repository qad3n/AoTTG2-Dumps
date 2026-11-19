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

[Token(Token = "0x200023D")]
public struct WaitForChangedResult
{
	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly WaitForChangedResult TimedOutResult;

	[Token(Token = "0x1700036F")]
	public WatcherChangeTypes ChangeType
	{
		[Token(Token = "0x6000FD5")]
		[Address(RVA = "0x6286460", Offset = "0x6285460", VA = "0x6286460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000370")]
	public string Name
	{
		[Token(Token = "0x6000FD6")]
		[Address(RVA = "0x6286470", Offset = "0x6285470", VA = "0x6286470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000371")]
	public string OldName
	{
		[Token(Token = "0x6000FD7")]
		[Address(RVA = "0x6286480", Offset = "0x6285480", VA = "0x6286480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000372")]
	public bool TimedOut
	{
		[Token(Token = "0x6000FD8")]
		[Address(RVA = "0x6286490", Offset = "0x6285490", VA = "0x6286490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x62863E0", Offset = "0x62853E0", VA = "0x62863E0")]
	internal WaitForChangedResult(WatcherChangeTypes changeType, string name, string oldName, bool timedOut)
	{
	}
}
