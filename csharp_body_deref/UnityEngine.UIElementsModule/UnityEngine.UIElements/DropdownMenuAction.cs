// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DropdownMenuAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5027E20", Offset = "0x5027E20", VA = "0x5027E20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	private DropdownMenuEventInfo eventInfo
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x5027E30", Offset = "0x5027E30", VA = "0x5027E30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	private object userData
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x5027E40", Offset = "0x5027E40", VA = "0x5027E40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x5027E50", Offset = "0x5027E50", VA = "0x5027E50")]
	public static Status AlwaysEnabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x5027E60", Offset = "0x5027E60", VA = "0x5027E60")]
	public static Status AlwaysDisabled(DropdownMenuAction a)
	{
		return default(Status);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x5027E70", Offset = "0x5027E70", VA = "0x5027E70")]
	public DropdownMenuAction(string actionName, Action<DropdownMenuAction> actionCallback, Func<DropdownMenuAction, Status> actionStatusCallback, [Optional] object userData)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x5027EE0", Offset = "0x5027EE0", VA = "0x5027EE0")]
	public void UpdateActionStatus(DropdownMenuEventInfo eventInfo)
	{
	}
}
