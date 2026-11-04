// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphDebugSession
// Update status: NEW in this game update
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
		[Address(RVA = "0x2B69330", Offset = "0x2B67930", VA = "0x182B69330")]
		public bool AddGraph(string graphName)
		{
			return default(bool);
		}

		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x2B69D60", Offset = "0x2B68360", VA = "0x182B69D60")]
		public bool RemoveGraph(string graphName)
		{
			return default(bool);
		}

		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x2B69160", Offset = "0x2B67760", VA = "0x182B69160")]
		public bool AddExecution(string graphName, EntityId executionId, string executionName)
		{
			return default(bool);
		}

		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x2B699D0", Offset = "0x2B67FD0", VA = "0x182B699D0")]
		public List<string> GetRenderGraphs()
		{
			return null;
		}

		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x2B696D0", Offset = "0x2B67CD0", VA = "0x182B696D0")]
		public List<RenderGraph.DebugExecutionItem> GetExecutions(string graphName)
		{
			return null;
		}

		[Token(Token = "0x60010E8")]
		[Address(RVA = "0x2B695F0", Offset = "0x2B67BF0", VA = "0x182B695F0")]
		public RenderGraph.DebugData GetDebugData(string renderGraph, EntityId executionId)
		{
			return null;
		}

		[Token(Token = "0x60010E9")]
		[Address(RVA = "0x2B69DC0", Offset = "0x2B683C0", VA = "0x182B69DC0")]
		public void SetDebugData(string renderGraph, EntityId executionId, RenderGraph.DebugData data)
		{
		}

		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x2B69460", Offset = "0x2B67A60", VA = "0x182B69460")]
		public void DeleteExecutionIds(string renderGraph, List<EntityId> executionIds)
		{
		}

		[Token(Token = "0x60010EB")]
		[Address(RVA = "0x2B69410", Offset = "0x2B67A10", VA = "0x182B69410")]
		public void Clear()
		{
		}

		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x2B69A60", Offset = "0x2B68060", VA = "0x182B69A60")]
		public void Invalidate()
		{
		}

		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x2B69E60", Offset = "0x2B68460", VA = "0x182B69E60")]
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
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
		[Address(RVA = "0x2B73370", Offset = "0x2B71970", VA = "0x182B73370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000226")]
	public static RenderGraphDebugSession currentDebugSession
	{
		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x2B73320", Offset = "0x2B71920", VA = "0x182B73320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action onRegisteredGraphsChanged
	{
		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x2B73230", Offset = "0x2B71830", VA = "0x182B73230")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x2B734F0", Offset = "0x2B71AF0", VA = "0x182B734F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action<string, EntityId> onDebugDataUpdated
	{
		[Token(Token = "0x60010D6")]
		[Address(RVA = "0x2B73120", Offset = "0x2B71720", VA = "0x182B73120")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x2B733E0", Offset = "0x2B719E0", VA = "0x182B733E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x2B72C20", Offset = "0x2B71220", VA = "0x182B72C20")]
	protected RenderGraphDebugSession()
	{
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x2B72820", Offset = "0x2B70E20", VA = "0x182B72820")]
	protected void RegisterGraph(string graphName)
	{
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x2B72A70", Offset = "0x2B71070", VA = "0x182B72A70")]
	protected void UnregisterGraph(string graphName)
	{
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x2B72600", Offset = "0x2B70C00", VA = "0x182B72600")]
	protected void RegisterExecution(string graphName, EntityId executionId, string executionName)
	{
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x2B71800", Offset = "0x2B6FE00", VA = "0x182B71800", Slot = "6")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x2B72190", Offset = "0x2B70790", VA = "0x182B72190")]
	protected void InvalidateData()
	{
	}

	[Token(Token = "0x60010DA")]
	public static void Create<TSession>() where TSession : RenderGraphDebugSession, new()
	{
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x2B71D30", Offset = "0x2B70330", VA = "0x182B71D30")]
	public static void EndSession()
	{
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x2B72010", Offset = "0x2B70610", VA = "0x182B72010")]
	public static List<string> GetRegisteredGraphs()
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x2B71F20", Offset = "0x2B70520", VA = "0x182B71F20")]
	public static List<RenderGraph.DebugExecutionItem> GetExecutions(string graphName)
	{
		return null;
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x2B71DF0", Offset = "0x2B703F0", VA = "0x182B71DF0")]
	public static RenderGraph.DebugData GetDebugData(string renderGraph, EntityId executionId)
	{
		return null;
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x2B72950", Offset = "0x2B70F50", VA = "0x182B72950")]
	public static void SetDebugData(string renderGraph, EntityId executionId, RenderGraph.DebugData data)
	{
	}

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x2B71750", Offset = "0x2B6FD50", VA = "0x182B71750")]
	public static void DeleteExecutionIds(string renderGraph, List<EntityId> executionIds)
	{
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x2B721B0", Offset = "0x2B707B0", VA = "0x182B721B0")]
	protected void RegisterAllLocallyKnownGraphsAndExecutions()
	{
	}
}
