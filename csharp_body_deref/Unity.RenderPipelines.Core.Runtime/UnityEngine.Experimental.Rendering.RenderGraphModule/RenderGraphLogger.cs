// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200003D")]
internal class RenderGraphLogger
{
	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<string, StringBuilder> m_LogMap;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder m_CurrentBuilder;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x20")]
	private int m_CurrentIndentation;

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4B8B8E0", Offset = "0x4B8B8E0", VA = "0x4B8B8E0")]
	public void Initialize(string logName)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4B8B710", Offset = "0x4B8B710", VA = "0x4B8B710")]
	public void IncrementIndentation(int value)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4B8B880", Offset = "0x4B8B880", VA = "0x4B8B880")]
	public void DecrementIndentation(int value)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4B8B9D0", Offset = "0x4B8B9D0", VA = "0x4B8B9D0")]
	public void LogLine(string format, params object[] args)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4B8BA40", Offset = "0x4B8BA40", VA = "0x4B8BA40")]
	public string GetLog(string logName)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4B8BAE0", Offset = "0x4B8BAE0", VA = "0x4B8BAE0")]
	public string GetAllLogs()
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4B8BCD0", Offset = "0x4B8BCD0", VA = "0x4B8BCD0")]
	public RenderGraphLogger()
	{
	}
}
