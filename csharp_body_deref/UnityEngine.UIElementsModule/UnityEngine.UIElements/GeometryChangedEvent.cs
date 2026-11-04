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
		[Address(RVA = "0xCDE970", Offset = "0xCDCF70", VA = "0x180CDE970")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x12BF2E0", Offset = "0x12BD8E0", VA = "0x1812BF2E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000277")]
	public Rect newRect
	{
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x12BEF80", Offset = "0x12BD580", VA = "0x1812BEF80")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x12BF1B0", Offset = "0x12BD7B0", VA = "0x1812BF1B0")]
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
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x3265F60", Offset = "0x3264560", VA = "0x183265F60")]
	static GeometryChangedEvent()
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x3265DB0", Offset = "0x32643B0", VA = "0x183265DB0")]
	public static GeometryChangedEvent GetPooled(Rect oldRect, Rect newRect)
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x3265E30", Offset = "0x3264430", VA = "0x183265E30", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x3265E80", Offset = "0x3264480", VA = "0x183265E80")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x3266040", Offset = "0x3264640", VA = "0x183266040")]
	public GeometryChangedEvent()
	{
	}
}
