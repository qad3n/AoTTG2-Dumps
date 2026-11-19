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

[Token(Token = "0x20000D9")]
public sealed class ShaderDebugPrintManager
{
	[Token(Token = "0x20000DA")]
	private static class Profiling
	{
		[Token(Token = "0x40002C4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly ProfilingSampler BufferReadComplete;
	}

	[Token(Token = "0x20000DB")]
	private enum DebugValueType
	{
		[Token(Token = "0x40002C6")]
		TypeUint = 1,
		[Token(Token = "0x40002C7")]
		TypeInt,
		[Token(Token = "0x40002C8")]
		TypeFloat,
		[Token(Token = "0x40002C9")]
		TypeUint2,
		[Token(Token = "0x40002CA")]
		TypeInt2,
		[Token(Token = "0x40002CB")]
		TypeFloat2,
		[Token(Token = "0x40002CC")]
		TypeUint3,
		[Token(Token = "0x40002CD")]
		TypeInt3,
		[Token(Token = "0x40002CE")]
		TypeFloat3,
		[Token(Token = "0x40002CF")]
		TypeUint4,
		[Token(Token = "0x40002D0")]
		TypeInt4,
		[Token(Token = "0x40002D1")]
		TypeFloat4,
		[Token(Token = "0x40002D2")]
		TypeBool
	}

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderDebugPrintManager s_Instance;

	[Token(Token = "0x40002B7")]
	private const int k_FramesInFlight = 4;

	[Token(Token = "0x40002B8")]
	private const int k_MaxBufferElements = 16384;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x10")]
	private List<GraphicsBuffer> m_OutputBuffers;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x18")]
	private List<AsyncGPUReadbackRequest> m_ReadbackRequests;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x20")]
	private Action<AsyncGPUReadbackRequest> m_BufferReadCompleteAction;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x28")]
	private int m_FrameCounter;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_FrameCleared;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x30")]
	private string m_OutputLine;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x38")]
	private Action<string> m_OutputAction;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int m_ShaderPropertyIDInputMouse;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int m_ShaderPropertyIDInputFrame;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int m_shaderDebugOutputData;

	[Token(Token = "0x40002C3")]
	private const uint k_TypeHasTag = 128u;

	[Token(Token = "0x170000C7")]
	public static ShaderDebugPrintManager instance
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x64D9420", Offset = "0x64D8420", VA = "0x64D9420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	public string outputLine
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x64DA9B0", Offset = "0x64D99B0", VA = "0x64DA9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public Action<string> outputAction
	{
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x64DA9C0", Offset = "0x64D99C0", VA = "0x64DA9C0")]
		set
		{
		}
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x64D8E60", Offset = "0x64D7E60", VA = "0x64D8E60")]
	private int DebugValueTypeToElemSize(DebugValueType type)
	{
		return default(int);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x64D8E80", Offset = "0x64D7E80", VA = "0x64D8E80")]
	private ShaderDebugPrintManager()
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x64D9490", Offset = "0x64D8490", VA = "0x64D9490")]
	public void SetShaderDebugPrintInputConstants(CommandBuffer cmd, ShaderDebugPrintInput input)
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x64D9580", Offset = "0x64D8580", VA = "0x64D9580")]
	public void SetShaderDebugPrintBindings(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x64D96C0", Offset = "0x64D86C0", VA = "0x64D96C0")]
	private void ClearShaderDebugPrintBuffer()
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x64D97B0", Offset = "0x64D87B0", VA = "0x64D97B0")]
	private void BufferReadComplete(AsyncGPUReadbackRequest request)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x64DA860", Offset = "0x64D9860", VA = "0x64DA860")]
	public void EndFrame()
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x64DA900", Offset = "0x64D9900", VA = "0x64DA900")]
	public void PrintImmediate()
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x64DA9D0", Offset = "0x64D99D0", VA = "0x64DA9D0")]
	public void DefaultOutput(string line)
	{
	}
}
