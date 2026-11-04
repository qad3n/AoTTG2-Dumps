// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRenderer
// Update status: NEW in this game update
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

[Token(Token = "0x20002A5")]
[UnityEngine.Bindings.NativeType(Header = "Modules/UIElements/Core/Native/Renderer/UIRenderer.h")]
public sealed class UIRenderer : Renderer
{
	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0x18")]
	internal List<CommandList>[] commandLists;

	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x20")]
	internal bool skipRendering;

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x32BC070", Offset = "0x32BA670", VA = "0x1832BC070")]
	internal void AddDrawCallData(int safeFrameIndex, int cmdListIndex, Material mat, uint textureSlotCount, uint forceRenderType)
	{
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x32BC230", Offset = "0x32BA830", VA = "0x1832BC230")]
	internal void ResetDrawCallData()
	{
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x32BC130", Offset = "0x32BA730", VA = "0x1832BC130")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnRenderNodeExecute(UIRenderer renderer, int safeFrameIndex, int cmdListIndex)
	{
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public UIRenderer()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x32BC020", Offset = "0x32BA620", VA = "0x1832BC020")]
	private static extern void AddDrawCallData_Injected(IntPtr _unity_self, int safeFrameIndex, int cmdListIndex, IntPtr mat, uint textureSlotCount, uint forceRenderType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x32BC1F0", Offset = "0x32BA7F0", VA = "0x1832BC1F0")]
	private static extern void ResetDrawCallData_Injected(IntPtr _unity_self);
}
