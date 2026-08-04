// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Painter2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000259")]
public class Painter2D
{
	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x10")]
	private MeshGenerationContext m_Ctx;

	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x18")]
	internal DetachedAllocator m_DetachedAllocator;

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x20")]
	internal SafeHandleAccess m_Handle;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x28")]
	private bool m_Disposed;

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_StrokeMarker;

	[Token(Token = "0x40008BB")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker s_FillMarker;

	[Token(Token = "0x170002FE")]
	internal static bool isPainterActive
	{
		[Token(Token = "0x6000F75")]
		[Address(RVA = "0x5074EA0", Offset = "0x5074EA0", VA = "0x5074EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x5074B10", Offset = "0x5074B10", VA = "0x5074B10")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x5074D30", Offset = "0x5074D30", VA = "0x5074D30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x5074E60", Offset = "0x5074E60", VA = "0x5074E60")]
	private void Dispose(bool disposing)
	{
	}
}
