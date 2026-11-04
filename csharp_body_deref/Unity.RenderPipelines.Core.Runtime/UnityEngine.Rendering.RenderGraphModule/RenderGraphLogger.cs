// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphLogger
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B749F0", Offset = "0x2B72FF0", VA = "0x182B749F0")]
	public void Initialize(string logName)
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x2B74980", Offset = "0x2B72F80", VA = "0x182B74980")]
	public void IncrementIndentation(int value)
	{
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x2B74710", Offset = "0x2B72D10", VA = "0x182B74710")]
	public void DecrementIndentation(int value)
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x2B74AE0", Offset = "0x2B730E0", VA = "0x182B74AE0")]
	public void LogLine(string format, params object[] args)
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x2B74780", Offset = "0x2B72D80", VA = "0x182B74780")]
	public void FlushLogs()
	{
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x2B74B60", Offset = "0x2B73160", VA = "0x182B74B60")]
	public RenderGraphLogger()
	{
	}
}
