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
	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x10")]
	[SerializeAs("elements")]
	private List<IGraphElement> _elements;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x3D")]
	private bool prewarmed;

	[Token(Token = "0x1700009E")]
	[DoNotSerialize]
	public MergedGraphElementCollection elements
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x67980A0", Offset = "0x67970A0", VA = "0x67980A0", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	[Serialize]
	public string title
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x67980B0", Offset = "0x67970B0", VA = "0x67980B0", Slot = "9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x67980C0", Offset = "0x67970C0", VA = "0x67980C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	[Serialize]
	[InspectorTextArea(minLines = 1f, maxLines = 10f)]
	public string summary
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x67980D0", Offset = "0x67970D0", VA = "0x67980D0", Slot = "10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x67980E0", Offset = "0x67970E0", VA = "0x67980E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	[Serialize]
	public Vector2 pan
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x67980F0", Offset = "0x67970F0", VA = "0x67980F0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x6798100", Offset = "0x6797100", VA = "0x6798100", Slot = "5")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	[Serialize]
	public float zoom
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x6798110", Offset = "0x6797110", VA = "0x6798110", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x6798120", Offset = "0x6797120", VA = "0x6798120", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	[DoNotSerialize]
	internal bool isAddingElementsPostDeserialization
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x6798130", Offset = "0x6797130", VA = "0x6798130")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x6798140", Offset = "0x6797140", VA = "0x6798140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x6798150", Offset = "0x6797150", VA = "0x6798150", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x6797A40", Offset = "0x6796A40", VA = "0x6797A40")]
	protected Graph()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x6797B60", Offset = "0x6796B60", VA = "0x6797B60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	public abstract IGraphData CreateData();

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x6797BC0", Offset = "0x6796BC0", VA = "0x6797BC0", Slot = "23")]
	public virtual IGraphDebugData CreateDebugData()
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x6797CC0", Offset = "0x6796CC0", VA = "0x6797CC0", Slot = "24")]
	public virtual void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x6797EB0", Offset = "0x6796EB0", VA = "0x6797EB0", Slot = "25")]
	public virtual void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x6798260", Offset = "0x6797260", VA = "0x6798260", Slot = "26")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x67982E0", Offset = "0x67972E0", VA = "0x67982E0", Slot = "21")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x6798350", Offset = "0x6797350", VA = "0x6798350", Slot = "27")]
	public virtual void OnAfterDependenciesDeserialized()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x6798A10", Offset = "0x6797A10", VA = "0x6798A10", Slot = "17")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x6798BD0", Offset = "0x6797BD0", VA = "0x6798BD0", Slot = "16")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x6798DB0", Offset = "0x6797DB0", VA = "0x6798DB0", Slot = "28")]
	public virtual void Dispose()
	{
	}
}
