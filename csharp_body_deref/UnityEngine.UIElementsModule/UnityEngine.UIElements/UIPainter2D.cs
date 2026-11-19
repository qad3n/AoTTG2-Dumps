// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIPainter2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002A3")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Native/Renderer/UIPainter2D.bindings.h")]
internal static class UIPainter2D
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x6CB26C0", Offset = "0x6CB16C0", VA = "0x6CB26C0")]
	public static extern IntPtr Create(bool computeBBox = false);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x6CB26F0", Offset = "0x6CB16F0", VA = "0x6CB26F0")]
	public static extern void Destroy(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x6CB2720", Offset = "0x6CB1720", VA = "0x6CB2720")]
	public static extern void Reset(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x6CB2750", Offset = "0x6CB1750", VA = "0x6CB2750")]
	public static extern void ClearSnapshots(IntPtr handle);

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x6CB2780", Offset = "0x6CB1780", VA = "0x6CB2780")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface ExecuteSnapshotFromJob(IntPtr painterHandle, int i)
	{
		return default(MeshWriteDataInterface);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x6CB27F0", Offset = "0x6CB17F0", VA = "0x6CB27F0")]
	private static extern void ExecuteSnapshotFromJob_Injected(IntPtr painterHandle, int i, out MeshWriteDataInterface ret);
}
