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

[Token(Token = "0x20002F7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/RendererList.h")]
[MovedFrom("UnityEngine.Rendering.RendererUtils")]
public struct RendererList
{
	[Token(Token = "0x40008F8")]
	[FieldOffset(Offset = "0x0")]
	internal UIntPtr context;

	[Token(Token = "0x40008F9")]
	[FieldOffset(Offset = "0x8")]
	internal uint index;

	[Token(Token = "0x40008FA")]
	[FieldOffset(Offset = "0xC")]
	internal uint frame;

	[Token(Token = "0x40008FB")]
	[FieldOffset(Offset = "0x10")]
	internal uint type;

	[Token(Token = "0x40008FC")]
	[FieldOffset(Offset = "0x14")]
	internal uint contextID;

	[Token(Token = "0x40008FD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RendererList nullRendererList;

	[Token(Token = "0x1700029C")]
	public extern bool isValid
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x4E30BF0", Offset = "0x4E30BF0", VA = "0x4E30BF0")]
		get;
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x4E30C20", Offset = "0x4E30C20", VA = "0x4E30C20")]
	internal RendererList(UIntPtr ctx, uint indx)
	{
	}
}
