// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIPainter2D
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x32B8F30", Offset = "0x32B7530", VA = "0x1832B8F30")]
	public static extern IntPtr Create(bool computeBBox = false);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x32B8F70", Offset = "0x32B7570", VA = "0x1832B8F70")]
	public static extern void Destroy(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x32B9060", Offset = "0x32B7660", VA = "0x1832B9060")]
	public static extern void Reset(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x32B8EF0", Offset = "0x32B74F0", VA = "0x1832B8EF0")]
	public static extern void ClearSnapshots(IntPtr handle);

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x32B9000", Offset = "0x32B7600", VA = "0x1832B9000")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface ExecuteSnapshotFromJob(IntPtr painterHandle, int i)
	{
		return default(MeshWriteDataInterface);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x32B8FB0", Offset = "0x32B75B0", VA = "0x1832B8FB0")]
	private static extern void ExecuteSnapshotFromJob_Injected(IntPtr painterHandle, int i, out MeshWriteDataInterface ret);
}
