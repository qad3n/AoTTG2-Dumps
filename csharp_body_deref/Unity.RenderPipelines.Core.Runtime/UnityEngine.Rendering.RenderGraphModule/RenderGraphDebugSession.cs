// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugSession
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200025C")]
internal abstract class RenderGraphDebugSession : IDisposable
{
	[Token(Token = "0x200025D")]
	protected class DebugDataContainer
	{
		[Token(Token = "0x4000ADE")]
		[FieldOffset(Offset = "0x10")]
		private readonly Dictionary<string, Dictionary<EntityId, RenderGraph.DebugData>> m_Container;

		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x656FCA0", Offset = "0x656ECA0", VA = "0x656FCA0")]
		public bool AddGraph(string graphName)
		{
			return default(bool);
		}

		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x656FE40", Offset = "0x656EE40", VA = "0x656FE40")]
		public bool RemoveGraph(string graphName)
		{
			return default(bool);
		}

		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x656FF40", Offset = "0x656EF40", VA = "0x656FF40")]
		public bool AddExecution(string graphName, EntityId executionId, string executionName)
		{
			return default(bool);
		}

		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x6570D30", Offset = "0x656FD30", VA = "0x6570D30")]
		public List<string> GetRenderGraphs()
		{
			return null;
		}

		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x6570EC0", Offset = "0x656FEC0", VA = "0x6570EC0")]
		public List<RenderGraph.DebugExecutionItem> GetExecutions(string graphName)
		{
			return null;
		}

		[Token(Token = "0x60010E8")]
		[Address(RVA = "0x6571280", Offset = "0x6570280", VA = "0x6571280")]
		public RenderGraph.DebugData GetDebugData(string renderGraph, EntityId executionId)
		{
			return null;
		}

		[Token(Token = "0x60010E9")]
		[Address(RVA = "0x6571350", Offset = "0x6570350", VA = "0x6571350")]
		public void SetDebugData(string renderGraph, EntityId executionId, RenderGraph.DebugData data)
		{
		}

		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x65713F0", Offset = "0x65703F0", VA = "0x65713F0")]
		public void DeleteExecutionIds(string renderGraph, List<EntityId> executionIds)
		{
		}

		[Token(Token = "0x60010EB")]
		[Address(RVA = "0x6570300", Offset = "0x656F300", VA = "0x6570300")]
		public void Clear()
		{
		}

		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x6570360", Offset = "0x656F360", VA = "0x6570360")]
		public void Invalidate()
		{
		}

		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x656FB80", Offset = "0x656EB80", VA = "0x656FB80")]
		public DebugDataContainer()
		{
		}
	}

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action m_onRegisteredGraphsChanged;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static Action<string, EntityId> m_onDebugDataUpdated;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x10")]
	private static RenderGraphDebugSession s_CurrentDebugSession;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x18")]
	public static List<string> s_EmptyRegisteredGraphs;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x20")]
	public static List<RenderGraph.DebugExecutionItem> s_EmptyExecutions;

	[Token(Token = "0x17000223")]
	public abstract bool isActive
	{
		[Token(Token = "0x60010CC")]
		get;
	}

	[Token(Token = "0x17000224")]
	private DebugDataContainer debugDataContainer
	{
		[Token(Token = "0x60010CD")]
		[Address(RVA = "0x656F890", Offset = "0x656E890", VA = "0x656F890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	public static bool hasActiveDebugSession
	{
		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x655EA40", Offset = "0x655DA40", VA = "0x655EA40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000226")]
	public static RenderGraphDebugSession currentDebugSession
	{
		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x6570AE0", Offset = "0x656FAE0", VA = "0x6570AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action onRegisteredGraphsChanged
	{
		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x6570740", Offset = "0x656F740", VA = "0x6570740")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x6570820", Offset = "0x656F820", VA = "0x6570820")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action<string, EntityId> onDebugDataUpdated
	{
		[Token(Token = "0x60010D6")]
		[Address(RVA = "0x6570900", Offset = "0x656F900", VA = "0x6570900")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x65709F0", Offset = "0x656F9F0", VA = "0x65709F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x656F8A0", Offset = "0x656E8A0", VA = "0x656F8A0")]
	protected RenderGraphDebugSession()
	{
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x656FC00", Offset = "0x656EC00", VA = "0x656FC00")]
	protected void RegisterGraph(string graphName)
	{
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x656FD70", Offset = "0x656ED70", VA = "0x656FD70")]
	protected void UnregisterGraph(string graphName)
	{
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x656FE90", Offset = "0x656EE90", VA = "0x656FE90")]
	protected void RegisterExecution(string graphName, EntityId executionId, string executionName)
	{
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x6570050", Offset = "0x656F050", VA = "0x6570050", Slot = "6")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x6570340", Offset = "0x656F340", VA = "0x6570340")]
	protected void InvalidateData()
	{
	}

	[Token(Token = "0x60010DA")]
	public static void Create<TSession>() where TSession : RenderGraphDebugSession, new()
	{
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x6570B50", Offset = "0x656FB50", VA = "0x6570B50")]
	public static void EndSession()
	{
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x6570C30", Offset = "0x656FC30", VA = "0x6570C30")]
	public static List<string> GetRegisteredGraphs()
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x6570DC0", Offset = "0x656FDC0", VA = "0x6570DC0")]
	public static List<RenderGraph.DebugExecutionItem> GetExecutions(string graphName)
	{
		return null;
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x656BFF0", Offset = "0x656AFF0", VA = "0x656BFF0")]
	public static RenderGraph.DebugData GetDebugData(string renderGraph, EntityId executionId)
	{
		return null;
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x656D800", Offset = "0x656C800", VA = "0x656D800")]
	public static void SetDebugData(string renderGraph, EntityId executionId, RenderGraph.DebugData data)
	{
	}

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x656BF30", Offset = "0x656AF30", VA = "0x656BF30")]
	public static void DeleteExecutionIds(string renderGraph, List<EntityId> executionIds)
	{
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x6571590", Offset = "0x6570590", VA = "0x6571590")]
	protected void RegisterAllLocallyKnownGraphsAndExecutions()
	{
	}
}
