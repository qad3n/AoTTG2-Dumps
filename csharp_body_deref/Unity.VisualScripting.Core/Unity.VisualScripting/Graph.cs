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
		[Address(RVA = "0x4984340", Offset = "0x4984340", VA = "0x4984340", Slot = "8")]
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
		[Address(RVA = "0x4984350", Offset = "0x4984350", VA = "0x4984350", Slot = "9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4984360", Offset = "0x4984360", VA = "0x4984360")]
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
		[Address(RVA = "0x4984370", Offset = "0x4984370", VA = "0x4984370", Slot = "10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4984380", Offset = "0x4984380", VA = "0x4984380")]
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
		[Address(RVA = "0x4984390", Offset = "0x4984390", VA = "0x4984390", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x49843A0", Offset = "0x49843A0", VA = "0x49843A0", Slot = "5")]
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
		[Address(RVA = "0x49843B0", Offset = "0x49843B0", VA = "0x49843B0", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x49843C0", Offset = "0x49843C0", VA = "0x49843C0", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x49843D0", Offset = "0x49843D0", VA = "0x49843D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4983CC0", Offset = "0x4983CC0", VA = "0x4983CC0")]
	protected Graph()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4983DE0", Offset = "0x4983DE0", VA = "0x4983DE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	public abstract IGraphData CreateData();

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4983E40", Offset = "0x4983E40", VA = "0x4983E40", Slot = "23")]
	public virtual IGraphDebugData CreateDebugData()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4983F40", Offset = "0x4983F40", VA = "0x4983F40", Slot = "24")]
	public virtual void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4984140", Offset = "0x4984140", VA = "0x4984140", Slot = "25")]
	public virtual void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x49844E0", Offset = "0x49844E0", VA = "0x49844E0", Slot = "26")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4984560", Offset = "0x4984560", VA = "0x4984560", Slot = "21")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x49845D0", Offset = "0x49845D0", VA = "0x49845D0", Slot = "27")]
	public virtual void OnAfterDependenciesDeserialized()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4984C60", Offset = "0x4984C60", VA = "0x4984C60", Slot = "17")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4984E20", Offset = "0x4984E20", VA = "0x4984E20", Slot = "16")]
	public void Prewarm()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4985040", Offset = "0x4985040", VA = "0x4985040", Slot = "28")]
	public virtual void Dispose()
	{
	}
}
