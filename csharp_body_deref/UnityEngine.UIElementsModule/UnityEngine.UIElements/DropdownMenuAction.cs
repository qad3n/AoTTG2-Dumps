// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownMenuAction
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
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
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023A")]
	private DropdownMenuEventInfo eventInfo
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023B")]
	private object userData
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x32415B0", Offset = "0x323FBB0", VA = "0x1832415B0")]
	public static Status AlwaysEnabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x32415A0", Offset = "0x323FBA0", VA = "0x1832415A0")]
	public static Status AlwaysDisabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x3241610", Offset = "0x323FC10", VA = "0x183241610")]
	public DropdownMenuAction(string actionName, Action<DropdownMenuAction> actionCallback, Func<DropdownMenuAction, Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x32415C0", Offset = "0x323FBC0", VA = "0x1832415C0")]
	public void UpdateActionStatus(DropdownMenuEventInfo eventInfo)
	{
	}
}
