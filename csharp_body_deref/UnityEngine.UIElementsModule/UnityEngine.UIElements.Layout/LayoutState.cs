// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200052B")]
internal struct LayoutState
{
	[Token(Token = "0x400116B")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr measureFunctionCallback;

	[Token(Token = "0x400116C")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr baselineFunctionCallback;

	[Token(Token = "0x400116D")]
	[FieldOffset(Offset = "0x10")]
	public uint depth;

	[Token(Token = "0x400116E")]
	[FieldOffset(Offset = "0x14")]
	public uint currentGenerationCount;

	[Token(Token = "0x400116F")]
	[FieldOffset(Offset = "0x18")]
	public bool error;

	[Token(Token = "0x170007FB")]
	public static LayoutState Default
	{
		[Token(Token = "0x6001F68")]
		[Address(RVA = "0x4FBC5D0", Offset = "0x4FBC5D0", VA = "0x4FBC5D0")]
		get
		{
			return default(LayoutState);
		}
	}
}
