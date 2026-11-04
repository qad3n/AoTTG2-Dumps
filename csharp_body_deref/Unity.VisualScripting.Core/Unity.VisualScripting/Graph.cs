// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Graph
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
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
		[Address(RVA = "0x18DAD90", Offset = "0x18D9390", VA = "0x1818DAD90", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x1C61410", Offset = "0x1C5FA10", VA = "0x181C61410", Slot = "5")]
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
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x1ED2F30", Offset = "0x1ED1530", VA = "0x181ED2F30", Slot = "7")]
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
		[Address(RVA = "0xDA7C70", Offset = "0xDA6270", VA = "0x180DA7C70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0xDA7C80", Offset = "0xDA6280", VA = "0x180DA7C80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x2DB0EE0", Offset = "0x2DAF4E0", VA = "0x182DB0EE0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2DB0E00", Offset = "0x2DAF400", VA = "0x182DB0E00")]
	protected Graph()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2DB0BB0", Offset = "0x2DAF1B0", VA = "0x182DB0BB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	public abstract IGraphData CreateData();

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x2DAFE60", Offset = "0x2DAE460", VA = "0x182DAFE60", Slot = "23")]
	public virtual IGraphDebugData CreateDebugData()
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2DB0210", Offset = "0x2DAE810", VA = "0x182DB0210", Slot = "24")]
	public virtual void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x2DB0C20", Offset = "0x2DAF220", VA = "0x182DB0C20", Slot = "25")]
	public virtual void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x2DB0950", Offset = "0x2DAEF50", VA = "0x182DB0950", Slot = "26")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2DB0900", Offset = "0x2DAEF00", VA = "0x182DB0900", Slot = "21")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x2DB03F0", Offset = "0x2DAE9F0", VA = "0x182DB03F0", Slot = "27")]
	public virtual void OnAfterDependenciesDeserialized()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x2DB0080", Offset = "0x2DAE680", VA = "0x182DB0080", Slot = "17")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x2DB09D0", Offset = "0x2DAEFD0", VA = "0x182DB09D0", Slot = "16")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x2DAFEC0", Offset = "0x2DAE4C0", VA = "0x182DAFEC0", Slot = "28")]
	public virtual void Dispose()
	{
	}
}
