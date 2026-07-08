using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200015F")]
public class DropdownMenuAction : DropdownMenuItem
{
	[Token(Token = "0x2000160")]
	[Flags]
	public enum Status
	{
		[Token(Token = "0x4000611")]
		None = 0,
		[Token(Token = "0x4000612")]
		Normal = 1,
		[Token(Token = "0x4000613")]
		Disabled = 2,
		[Token(Token = "0x4000614")]
		Checked = 4,
		[Token(Token = "0x4000615")]
		Hidden = 8
	}

	[Token(Token = "0x400060A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly string _003Cname_003Ek__BackingField;

	[Token(Token = "0x400060E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<DropdownMenuAction> actionCallback;

	[Token(Token = "0x400060F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Func<DropdownMenuAction, Status> actionStatusCallback;

	[Token(Token = "0x170001B5")]
	private Status status
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x4D004F0", Offset = "0x4D004F0", VA = "0x4D004F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	private DropdownMenuEventInfo eventInfo
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x4D00500", Offset = "0x4D00500", VA = "0x4D00500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	private object userData
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x4D00510", Offset = "0x4D00510", VA = "0x4D00510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x4D00520", Offset = "0x4D00520", VA = "0x4D00520")]
	public static Status AlwaysEnabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x4D00530", Offset = "0x4D00530", VA = "0x4D00530")]
	public static Status AlwaysDisabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4D00540", Offset = "0x4D00540", VA = "0x4D00540")]
	public DropdownMenuAction(string actionName, Action<DropdownMenuAction> actionCallback, Func<DropdownMenuAction, Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x4D005B0", Offset = "0x4D005B0", VA = "0x4D005B0")]
	public void UpdateActionStatus(DropdownMenuEventInfo eventInfo)
	{
	}
}
