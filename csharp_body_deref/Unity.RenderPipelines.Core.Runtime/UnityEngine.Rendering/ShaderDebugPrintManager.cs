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
		[Address(RVA = "0x48891A0", Offset = "0x48891A0", VA = "0x48891A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public string outputLine
	{
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x488AB50", Offset = "0x488AB50", VA = "0x488AB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public Action<string> outputAction
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x488AB60", Offset = "0x488AB60", VA = "0x488AB60")]
		set
		{
		}
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4888BB0", Offset = "0x4888BB0", VA = "0x4888BB0")]
	private int DebugValueTypeToElemSize(DebugValueType type)
	{
		return default(int);
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4888BD0", Offset = "0x4888BD0", VA = "0x4888BD0")]
	private ShaderDebugPrintManager()
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4889210", Offset = "0x4889210", VA = "0x4889210")]
	public void SetShaderDebugPrintInputConstants(CommandBuffer cmd, ShaderDebugPrintInput input)
	{
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x48892F0", Offset = "0x48892F0", VA = "0x48892F0")]
	public void SetShaderDebugPrintBindings(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x48893F0", Offset = "0x48893F0", VA = "0x48893F0")]
	private void ClearShaderDebugPrintBuffer()
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x48894E0", Offset = "0x48894E0", VA = "0x48894E0")]
	private void BufferReadComplete(AsyncGPUReadbackRequest request)
	{
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x488AAB0", Offset = "0x488AAB0", VA = "0x488AAB0")]
	public void EndFrame()
	{
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x488AB70", Offset = "0x488AB70", VA = "0x488AB70")]
	public void DefaultOutput(string line)
	{
	}
}
