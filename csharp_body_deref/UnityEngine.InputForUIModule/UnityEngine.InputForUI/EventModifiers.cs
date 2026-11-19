// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.EventModifiers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct EventModifiers
{
	[Token(Token = "0x200000C")]
	[Flags]
	public enum Modifiers : uint
	{
		[Token(Token = "0x4000035")]
		LeftShift = 1u,
		[Token(Token = "0x4000036")]
		RightShift = 2u,
		[Token(Token = "0x4000037")]
		Shift = LeftShift | RightShift,
		[Token(Token = "0x4000038")]
		LeftCtrl = 4u,
		[Token(Token = "0x4000039")]
		RightCtrl = 8u,
		[Token(Token = "0x400003A")]
		Ctrl = LeftCtrl | RightCtrl,
		[Token(Token = "0x400003B")]
		LeftAlt = 0x10u,
		[Token(Token = "0x400003C")]
		RightAlt = 0x20u,
		[Token(Token = "0x400003D")]
		Alt = LeftAlt | RightAlt,
		[Token(Token = "0x400003E")]
		LeftMeta = 0x40u,
		[Token(Token = "0x400003F")]
		RightMeta = 0x80u,
		[Token(Token = "0x4000040")]
		Meta = LeftMeta | RightMeta,
		[Token(Token = "0x4000041")]
		CapsLock = 0x100u,
		[Token(Token = "0x4000042")]
		Numlock = 0x200u,
		[Token(Token = "0x4000043")]
		FunctionKey = 0x400u,
		[Token(Token = "0x4000044")]
		Numeric = 0x800u
	}

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x0")]
	private uint _state;

	[Token(Token = "0x1700000F")]
	public bool isShiftPressed
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x69B4E80", Offset = "0x69B3E80", VA = "0x69B4E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public bool isCtrlPressed
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x69B4E90", Offset = "0x69B3E90", VA = "0x69B4E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public bool isAltPressed
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x69B4EA0", Offset = "0x69B3EA0", VA = "0x69B4EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public bool isMetaPressed
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x69B4EB0", Offset = "0x69B3EB0", VA = "0x69B4EB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public bool isCapsLockEnabled
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x69B4EC0", Offset = "0x69B3EC0", VA = "0x69B4EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public bool isFunctionKeyPressed
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x69B4ED0", Offset = "0x69B3ED0", VA = "0x69B4ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public bool isNumericPressed
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x69B4EE0", Offset = "0x69B3EE0", VA = "0x69B4EE0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69B4E70", Offset = "0x69B3E70", VA = "0x69B4E70")]
	public bool IsPressed(Modifiers mod)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69B4EF0", Offset = "0x69B3EF0", VA = "0x69B4EF0")]
	public void SetPressed(Modifiers modifier, bool pressed)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x69B4F10", Offset = "0x69B3F10", VA = "0x69B4F10")]
	public void Reset()
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x69B4F20", Offset = "0x69B3F20", VA = "0x69B4F20")]
	private static void Append(ref string str, string value)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x69B3C80", Offset = "0x69B2C80", VA = "0x69B3C80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
