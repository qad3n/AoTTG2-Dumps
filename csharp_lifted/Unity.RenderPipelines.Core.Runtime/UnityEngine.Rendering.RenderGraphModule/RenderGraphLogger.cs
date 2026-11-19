// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphLogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200025F")]
internal class RenderGraphLogger
{
	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<string, StringBuilder> m_LogMap;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder m_CurrentBuilder;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x20")]
	private int m_CurrentIndentation;

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x6562280", Offset = "0x6561280", VA = "0x6562280")]
	public void Initialize(string logName)
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x6571B50", Offset = "0x6570B50", VA = "0x6571B50")]
	public void IncrementIndentation(int value)
	{
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x6571CC0", Offset = "0x6570CC0", VA = "0x6571CC0")]
	public void DecrementIndentation(int value)
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x65653E0", Offset = "0x65643E0", VA = "0x65653E0")]
	public void LogLine(string format, params object[] args)
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x6560840", Offset = "0x655F840", VA = "0x6560840")]
	public void FlushLogs()
	{
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x655F450", Offset = "0x655E450", VA = "0x655F450")]
	public RenderGraphLogger()
	{
	}
}
