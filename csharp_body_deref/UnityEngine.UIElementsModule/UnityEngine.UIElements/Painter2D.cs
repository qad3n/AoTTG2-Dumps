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
		[Address(RVA = "0x4D4D570", Offset = "0x4D4D570", VA = "0x4D4D570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x4D4D1E0", Offset = "0x4D4D1E0", VA = "0x4D4D1E0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4D4D400", Offset = "0x4D4D400", VA = "0x4D4D400", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4D4D530", Offset = "0x4D4D530", VA = "0x4D4D530")]
	private void Dispose(bool disposing)
	{
	}
}
