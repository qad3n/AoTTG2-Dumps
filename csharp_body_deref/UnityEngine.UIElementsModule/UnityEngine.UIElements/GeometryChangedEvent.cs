// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GeometryChangedEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001E9")]
[EventCategory(EventCategory.Geometry)]
public class GeometryChangedEvent : EventBase<GeometryChangedEvent>
{
	[Token(Token = "0x17000276")]
	public Rect oldRect
	{
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x6C67FE0", Offset = "0x6C66FE0", VA = "0x6C67FE0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x6C67FF0", Offset = "0x6C66FF0", VA = "0x6C67FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000277")]
	public Rect newRect
	{
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x6C68000", Offset = "0x6C67000", VA = "0x6C68000")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x6C68010", Offset = "0x6C67010", VA = "0x6C68010")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000278")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int layoutPass
	{
		[Token(Token = "0x6000D2A")]
		[Address(RVA = "0x6C68020", Offset = "0x6C67020", VA = "0x6C68020")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0x6C68030", Offset = "0x6C67030", VA = "0x6C68030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x6C67D10", Offset = "0x6C66D10", VA = "0x6C67D10")]
	static GeometryChangedEvent()
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x6C67DE0", Offset = "0x6C66DE0", VA = "0x6C67DE0")]
	public static GeometryChangedEvent GetPooled(Rect oldRect, Rect newRect)
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x6C67E80", Offset = "0x6C66E80", VA = "0x6C67E80", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x6C67EC0", Offset = "0x6C66EC0", VA = "0x6C67EC0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x6C68040", Offset = "0x6C67040", VA = "0x6C68040")]
	public GeometryChangedEvent()
	{
	}
}
