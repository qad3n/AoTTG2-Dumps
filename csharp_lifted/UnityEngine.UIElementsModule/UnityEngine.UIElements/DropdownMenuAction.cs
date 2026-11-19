// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownMenuAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A4")]
public class DropdownMenuAction : DropdownMenuItem
{
	[Token(Token = "0x20001A5")]
	[Flags]
	public enum Status
	{
		[Token(Token = "0x4000741")]
		None = 0,
		[Token(Token = "0x4000742")]
		Normal = 1,
		[Token(Token = "0x4000743")]
		Disabled = 2,
		[Token(Token = "0x4000744")]
		Checked = 4,
		[Token(Token = "0x4000745")]
		Hidden = 8
	}

	[Token(Token = "0x400073E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<DropdownMenuAction> actionCallback;

	[Token(Token = "0x400073F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Func<DropdownMenuAction, Status> actionStatusCallback;

	[Token(Token = "0x17000238")]
	public string name
	{
		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x6C5C610", Offset = "0x6C5B610", VA = "0x6C5C610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	private Status status
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x6C5C620", Offset = "0x6C5B620", VA = "0x6C5C620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023A")]
	private DropdownMenuEventInfo eventInfo
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x6C5C630", Offset = "0x6C5B630", VA = "0x6C5C630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023B")]
	private object userData
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x6C5C640", Offset = "0x6C5B640", VA = "0x6C5C640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x6C5C650", Offset = "0x6C5B650", VA = "0x6C5C650")]
	public static Status AlwaysEnabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x6C5C660", Offset = "0x6C5B660", VA = "0x6C5C660")]
	public static Status AlwaysDisabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x6C5C670", Offset = "0x6C5B670", VA = "0x6C5C670")]
	public DropdownMenuAction(string actionName, Action<DropdownMenuAction> actionCallback, Func<DropdownMenuAction, Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x6C5C6E0", Offset = "0x6C5B6E0", VA = "0x6C5C6E0")]
	public void UpdateActionStatus(DropdownMenuEventInfo eventInfo)
	{
	}
}
