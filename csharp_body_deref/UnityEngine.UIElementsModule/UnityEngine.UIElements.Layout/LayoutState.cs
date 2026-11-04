// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000622")]
internal struct LayoutState
{
	[Token(Token = "0x4001706")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr measureFunctionCallback;

	[Token(Token = "0x4001707")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr baselineFunctionCallback;

	[Token(Token = "0x4001708")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr unusedExceptionPointer;

	[Token(Token = "0x4001709")]
	[FieldOffset(Offset = "0x18")]
	public uint depth;

	[Token(Token = "0x400170A")]
	[FieldOffset(Offset = "0x1C")]
	public uint currentGenerationCount;

	[Token(Token = "0x400170B")]
	[FieldOffset(Offset = "0x20")]
	public bool error;

	[Token(Token = "0x17000B0E")]
	public static LayoutState Default
	{
		[Token(Token = "0x6002CBA")]
		[Address(RVA = "0x31C2E40", Offset = "0x31C1440", VA = "0x1831C2E40")]
		get
		{
			return default(LayoutState);
		}
	}
}
