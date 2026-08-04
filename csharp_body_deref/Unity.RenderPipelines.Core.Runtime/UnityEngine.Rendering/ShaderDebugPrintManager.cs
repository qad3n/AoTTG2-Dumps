// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderDebugPrintManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000103")]
public sealed class ShaderDebugPrintManager
{
	[Token(Token = "0x2000104")]
	private static class Profiling
	{
		[Token(Token = "0x4000379")]
		[FieldOffset(Offset = "0x0")]
		public static readonly ProfilingSampler BufferReadComplete;
	}

	[Token(Token = "0x2000105")]
	private enum DebugValueType
	{
		[Token(Token = "0x400037B")]
		TypeUint = 1,
		[Token(Token = "0x400037C")]
		TypeInt,
		[Token(Token = "0x400037D")]
		TypeFloat,
		[Token(Token = "0x400037E")]
		TypeUint2,
		[Token(Token = "0x400037F")]
		TypeInt2,
		[Token(Token = "0x4000380")]
		TypeFloat2,
		[Token(Token = "0x4000381")]
		TypeUint3,
		[Token(Token = "0x4000382")]
		TypeInt3,
		[Token(Token = "0x4000383")]
		TypeFloat3,
		[Token(Token = "0x4000384")]
		TypeUint4,
		[Token(Token = "0x4000385")]
		TypeInt4,
		[Token(Token = "0x4000386")]
		TypeFloat4,
		[Token(Token = "0x4000387")]
		TypeBool
	}

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderDebugPrintManager s_Instance;

	[Token(Token = "0x400036C")]
	private const int k_DebugUAVSlot = 7;

	[Token(Token = "0x400036D")]
	private const int k_FramesInFlight = 4;

	[Token(Token = "0x400036E")]
	private const int k_MaxBufferElements = 16384;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x10")]
	private List<GraphicsBuffer> m_OutputBuffers;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x18")]
	private List<AsyncGPUReadbackRequest> m_ReadbackRequests;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x20")]
	private Action<AsyncGPUReadbackRequest> m_BufferReadCompleteAction;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x28")]
	private int m_FrameCounter;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_FrameCleared;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x30")]
	private string m_OutputLine;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x38")]
	private Action<string> m_OutputAction;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int m_ShaderPropertyIDInputMouse;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int m_ShaderPropertyIDInputFrame;

	[Token(Token = "0x4000378")]
	private const uint k_TypeHasTag = 128u;

	[Token(Token = "0x170000DE")]
	public static ShaderDebugPrintManager instance
	{
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x4BAE290", Offset = "0x4BAE290", VA = "0x4BAE290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public string outputLine
	{
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x4BAFC40", Offset = "0x4BAFC40", VA = "0x4BAFC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public Action<string> outputAction
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x4BAFC50", Offset = "0x4BAFC50", VA = "0x4BAFC50")]
		set
		{
		}
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4BADCA0", Offset = "0x4BADCA0", VA = "0x4BADCA0")]
	private int DebugValueTypeToElemSize(DebugValueType type)
	{
		return default(int);
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4BADCC0", Offset = "0x4BADCC0", VA = "0x4BADCC0")]
	private ShaderDebugPrintManager()
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4BAE300", Offset = "0x4BAE300", VA = "0x4BAE300")]
	public void SetShaderDebugPrintInputConstants(CommandBuffer cmd, ShaderDebugPrintInput input)
	{
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x4BAE3E0", Offset = "0x4BAE3E0", VA = "0x4BAE3E0")]
	public void SetShaderDebugPrintBindings(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x4BAE4E0", Offset = "0x4BAE4E0", VA = "0x4BAE4E0")]
	private void ClearShaderDebugPrintBuffer()
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x4BAE5D0", Offset = "0x4BAE5D0", VA = "0x4BAE5D0")]
	private void BufferReadComplete(AsyncGPUReadbackRequest request)
	{
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x4BAFBA0", Offset = "0x4BAFBA0", VA = "0x4BAFBA0")]
	public void EndFrame()
	{
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x4BAFC60", Offset = "0x4BAFC60", VA = "0x4BAFC60")]
	public void DefaultOutput(string line)
	{
	}
}
