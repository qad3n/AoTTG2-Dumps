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
		[Address(RVA = "0x45C4D40", Offset = "0x45C4D40", VA = "0x45C4D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004FF")]
	public string Name
	{
		[Token(Token = "0x6001694")]
		[Address(RVA = "0x45C4D50", Offset = "0x45C4D50", VA = "0x45C4D50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000500")]
	public string OldName
	{
		[Token(Token = "0x6001695")]
		[Address(RVA = "0x45C4D60", Offset = "0x45C4D60", VA = "0x45C4D60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000501")]
	public bool TimedOut
	{
		[Token(Token = "0x6001696")]
		[Address(RVA = "0x45C4D70", Offset = "0x45C4D70", VA = "0x45C4D70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x45C4CC0", Offset = "0x45C4CC0", VA = "0x45C4CC0")]
	internal WaitForChangedResult(WatcherChangeTypes changeType, string name, string oldName, bool timedOut)
	{
	}
}
