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
	[Address(RVA = "0x48667F0", Offset = "0x48667F0", VA = "0x48667F0")]
	public void Initialize(string logName)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4866620", Offset = "0x4866620", VA = "0x4866620")]
	public void IncrementIndentation(int value)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4866790", Offset = "0x4866790", VA = "0x4866790")]
	public void DecrementIndentation(int value)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x48668E0", Offset = "0x48668E0", VA = "0x48668E0")]
	public void LogLine(string format, params object[] args)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4866950", Offset = "0x4866950", VA = "0x4866950")]
	public string GetLog(string logName)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x48669F0", Offset = "0x48669F0", VA = "0x48669F0")]
	public string GetAllLogs()
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4866BE0", Offset = "0x4866BE0", VA = "0x4866BE0")]
	public RenderGraphLogger()
	{
	}
}
