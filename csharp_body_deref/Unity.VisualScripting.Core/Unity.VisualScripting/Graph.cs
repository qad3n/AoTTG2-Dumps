// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Graph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000068")]
public abstract class Graph : IGraph, IDisposable, IPrewarmable, IAotStubbable, ISerializationDepender, ISerializationCallbackReceiver
{
	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x10")]
	[SerializeAs("elements")]
	private List<IGraphElement> _elements;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x3C")]
	private bool prewarmed;

	[Token(Token = "0x1700009C")]
	[DoNotSerialize]
	public MergedGraphElementCollection elements
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4CA8F10", Offset = "0x4CA8F10", VA = "0x4CA8F10", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	[Serialize]
	public string title
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4CA8F20", Offset = "0x4CA8F20", VA = "0x4CA8F20", Slot = "9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4CA8F30", Offset = "0x4CA8F30", VA = "0x4CA8F30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	[Serialize]
	[InspectorTextArea(minLines = 1f, maxLines = 10f)]
	public string summary
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4CA8F40", Offset = "0x4CA8F40", VA = "0x4CA8F40", Slot = "10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4CA8F50", Offset = "0x4CA8F50", VA = "0x4CA8F50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	[Serialize]
	public Vector2 pan
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x4CA8F60", Offset = "0x4CA8F60", VA = "0x4CA8F60", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4CA8F70", Offset = "0x4CA8F70", VA = "0x4CA8F70", Slot = "5")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	[Serialize]
	public float zoom
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4CA8F80", Offset = "0x4CA8F80", VA = "0x4CA8F80", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4CA8F90", Offset = "0x4CA8F90", VA = "0x4CA8F90", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x4CA8FA0", Offset = "0x4CA8FA0", VA = "0x4CA8FA0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4CA8890", Offset = "0x4CA8890", VA = "0x4CA8890")]
	protected Graph()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4CA89B0", Offset = "0x4CA89B0", VA = "0x4CA89B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	public abstract IGraphData CreateData();

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4CA8A10", Offset = "0x4CA8A10", VA = "0x4CA8A10", Slot = "23")]
	public virtual IGraphDebugData CreateDebugData()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4CA8B10", Offset = "0x4CA8B10", VA = "0x4CA8B10", Slot = "24")]
	public virtual void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4CA8D10", Offset = "0x4CA8D10", VA = "0x4CA8D10", Slot = "25")]
	public virtual void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4CA90B0", Offset = "0x4CA90B0", VA = "0x4CA90B0", Slot = "26")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4CA9130", Offset = "0x4CA9130", VA = "0x4CA9130", Slot = "21")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4CA91A0", Offset = "0x4CA91A0", VA = "0x4CA91A0", Slot = "27")]
	public virtual void OnAfterDependenciesDeserialized()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4CA9830", Offset = "0x4CA9830", VA = "0x4CA9830", Slot = "17")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4CA99F0", Offset = "0x4CA99F0", VA = "0x4CA99F0", Slot = "16")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4CA9C10", Offset = "0x4CA9C10", VA = "0x4CA9C10", Slot = "28")]
	public virtual void Dispose()
	{
	}
}
