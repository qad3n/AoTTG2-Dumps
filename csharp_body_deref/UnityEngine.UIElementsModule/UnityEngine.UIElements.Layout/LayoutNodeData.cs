// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutNodeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000609")]
internal struct LayoutNodeData
{
	[Token(Token = "0x200060A")]
	[Flags]
	internal enum FlexStatus
	{
		[Token(Token = "0x4001684")]
		IsDirty = 1,
		[Token(Token = "0x4001685")]
		HasNewLayout = 4,
		[Token(Token = "0x4001686")]
		DependsOnParentSize = 0x40,
		[Token(Token = "0x4001687")]
		UsesMeasure = 0x80,
		[Token(Token = "0x4001688")]
		UsesBaseline = 0x100,
		[Token(Token = "0x4001689")]
		Fixed = 8,
		[Token(Token = "0x400168A")]
		MinViolation = 0x10,
		[Token(Token = "0x400168B")]
		MaxViolation = 0x20
	}

	[Token(Token = "0x400167A")]
	[FieldOffset(Offset = "0x0")]
	public FixedBuffer2<LayoutValue> ResolvedDimensions;

	[Token(Token = "0x400167B")]
	[FieldOffset(Offset = "0x10")]
	private float TargetSize;

	[Token(Token = "0x400167C")]
	[FieldOffset(Offset = "0x14")]
	public int ManagedOwnerIndex;

	[Token(Token = "0x400167D")]
	[FieldOffset(Offset = "0x18")]
	public int LineIndex;

	[Token(Token = "0x400167E")]
	[FieldOffset(Offset = "0x1C")]
	public LayoutHandle Config;

	[Token(Token = "0x400167F")]
	[FieldOffset(Offset = "0x24")]
	public LayoutHandle Parent;

	[Token(Token = "0x4001680")]
	[FieldOffset(Offset = "0x2C")]
	public LayoutHandle NextChild;

	[Token(Token = "0x4001681")]
	[FieldOffset(Offset = "0x38")]
	public LayoutList<LayoutHandle> Children;

	[Token(Token = "0x4001682")]
	[FieldOffset(Offset = "0x40")]
	private FlexStatus Status;

	[Token(Token = "0x17000B02")]
	public bool HasNewLayout
	{
		[Token(Token = "0x6002C93")]
		[Address(RVA = "0x6BC1C30", Offset = "0x6BC0C30", VA = "0x6BC1C30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002C94")]
		[Address(RVA = "0x6BC1CB0", Offset = "0x6BC0CB0", VA = "0x6BC1CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B03")]
	public bool IsDirty
	{
		[Token(Token = "0x6002C95")]
		[Address(RVA = "0x6BC1B30", Offset = "0x6BC0B30", VA = "0x6BC1B30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002C96")]
		[Address(RVA = "0x6BC1BB0", Offset = "0x6BC0BB0", VA = "0x6BC1BB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B04")]
	public bool UsesMeasure
	{
		[Token(Token = "0x6002C97")]
		[Address(RVA = "0x6BC1D30", Offset = "0x6BC0D30", VA = "0x6BC1D30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002C98")]
		[Address(RVA = "0x6BC1DC0", Offset = "0x6BC0DC0", VA = "0x6BC1DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B05")]
	public bool UsesBaseline
	{
		[Token(Token = "0x6002C99")]
		[Address(RVA = "0x6BC5170", Offset = "0x6BC4170", VA = "0x6BC5170")]
		set
		{
		}
	}
}
