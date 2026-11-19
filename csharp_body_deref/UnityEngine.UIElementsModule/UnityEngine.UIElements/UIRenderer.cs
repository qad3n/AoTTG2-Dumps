// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002A9")]
[UnityEngine.Bindings.NativeType(Header = "Modules/UIElements/Core/Native/Renderer/UIRenderer.h")]
public sealed class UIRenderer : Renderer
{
	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x18")]
	internal List<CommandList>[] commandLists;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x20")]
	internal bool skipRendering;

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x6CB2ED0", Offset = "0x6CB1ED0", VA = "0x6CB2ED0")]
	internal void AddDrawCallData(int safeFrameIndex, int cmdListIndex, Material mat, uint textureSlotCount, uint forceRenderType)
	{
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x6CB3020", Offset = "0x6CB2020", VA = "0x6CB3020")]
	internal void ResetDrawCallData()
	{
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x6CB30D0", Offset = "0x6CB20D0", VA = "0x6CB30D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnRenderNodeExecute(UIRenderer renderer, int safeFrameIndex, int cmdListIndex)
	{
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x6CB3190", Offset = "0x6CB2190", VA = "0x6CB3190")]
	public UIRenderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x6CB2FC0", Offset = "0x6CB1FC0", VA = "0x6CB2FC0")]
	private static extern void AddDrawCallData_Injected(IntPtr _unity_self, int safeFrameIndex, int cmdListIndex, IntPtr mat, uint textureSlotCount, uint forceRenderType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x6CB30A0", Offset = "0x6CB20A0", VA = "0x6CB30A0")]
	private static extern void ResetDrawCallData_Injected(IntPtr _unity_self);
}
