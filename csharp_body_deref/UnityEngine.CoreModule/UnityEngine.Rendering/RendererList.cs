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

[Token(Token = "0x20003B6")]
[MovedFrom("UnityEngine.Rendering.RendererUtils")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/RendererList.h")]
public struct RendererList
{
	[Token(Token = "0x4000BCF")]
	[FieldOffset(Offset = "0x0")]
	internal UIntPtr context;

	[Token(Token = "0x4000BD0")]
	[FieldOffset(Offset = "0x8")]
	internal uint index;

	[Token(Token = "0x4000BD1")]
	[FieldOffset(Offset = "0xC")]
	internal uint frame;

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x10")]
	internal uint type;

	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x14")]
	internal uint contextID;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RendererList nullRendererList;

	[Token(Token = "0x17000364")]
	public extern bool isValid
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x2F6D800", Offset = "0x2F6BE00", VA = "0x182F6D800")]
		get;
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x2F6D7E0", Offset = "0x2F6BDE0", VA = "0x182F6D7E0")]
	internal RendererList(UIntPtr ctx, uint indx)
	{
	}
}
