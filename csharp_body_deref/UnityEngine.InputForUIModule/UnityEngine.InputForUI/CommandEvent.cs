// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.CommandEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct CommandEvent : IEventProperties
{
	[Token(Token = "0x2000003")]
	public enum Type
	{
		[Token(Token = "0x4000008")]
		Validate = 1,
		[Token(Token = "0x4000009")]
		Execute
	}

	[Token(Token = "0x2000004")]
	public enum Command
	{
		[Token(Token = "0x400000B")]
		Invalid,
		[Token(Token = "0x400000C")]
		Cut,
		[Token(Token = "0x400000D")]
		Copy,
		[Token(Token = "0x400000E")]
		Paste,
		[Token(Token = "0x400000F")]
		SelectAll,
		[Token(Token = "0x4000010")]
		DeselectAll,
		[Token(Token = "0x4000011")]
		InvertSelection,
		[Token(Token = "0x4000012")]
		Duplicate,
		[Token(Token = "0x4000013")]
		Rename,
		[Token(Token = "0x4000014")]
		Delete,
		[Token(Token = "0x4000015")]
		SoftDelete,
		[Token(Token = "0x4000016")]
		Find,
		[Token(Token = "0x4000017")]
		SelectChildren,
		[Token(Token = "0x4000018")]
		SelectPrefabRoot,
		[Token(Token = "0x4000019")]
		UndoRedoPerformed,
		[Token(Token = "0x400001A")]
		OnLostFocus,
		[Token(Token = "0x400001B")]
		NewKeyboardFocus,
		[Token(Token = "0x400001C")]
		ModifierKeysChanged,
		[Token(Token = "0x400001D")]
		EyeDropperUpdate,
		[Token(Token = "0x400001E")]
		EyeDropperClicked,
		[Token(Token = "0x400001F")]
		EyeDropperCancelled,
		[Token(Token = "0x4000020")]
		ColorPickerChanged,
		[Token(Token = "0x4000021")]
		FrameSelected,
		[Token(Token = "0x4000022")]
		FrameSelectedWithLock
	}

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x4")]
	public Command command;

	[Token(Token = "0x17000001")]
	public DiscreteTime timestamp
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x69B3720", Offset = "0x69B2720", VA = "0x69B3720")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public EventSource eventSource
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x69B3730", Offset = "0x69B2730", VA = "0x69B3730", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x69B3740", Offset = "0x69B2740", VA = "0x69B3740")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public uint playerId
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x69B3750", Offset = "0x69B2750", VA = "0x69B3750")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x69B3760", Offset = "0x69B2760", VA = "0x69B3760", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x69B3770", Offset = "0x69B2770", VA = "0x69B3770")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x69B3780", Offset = "0x69B2780", VA = "0x69B3780", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
