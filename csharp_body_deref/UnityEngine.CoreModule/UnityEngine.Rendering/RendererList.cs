// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RendererList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000394")]
[MovedFrom("UnityEngine.Rendering.RendererUtils")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/RendererList.h")]
public struct RendererList
{
	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x0")]
	internal UIntPtr context;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x8")]
	internal uint index;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0xC")]
	internal uint frame;

	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x10")]
	internal uint type;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x14")]
	internal uint contextID;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RendererList nullRendererList;

	[Token(Token = "0x17000381")]
	public extern bool isValid
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001662")]
		[Address(RVA = "0x695E690", Offset = "0x695D690", VA = "0x695E690")]
		get;
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x695E6C0", Offset = "0x695D6C0", VA = "0x695E6C0")]
	internal RendererList(UIntPtr ctx, uint indx)
	{
	}
}
