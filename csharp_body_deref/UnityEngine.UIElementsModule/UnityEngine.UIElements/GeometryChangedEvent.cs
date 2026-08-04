// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GeometryChangedEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A2")]
[EventCategory(EventCategory.Geometry)]
public class GeometryChangedEvent : EventBase<GeometryChangedEvent>
{
	[Token(Token = "0x170001F4")]
	public Rect oldRect
	{
		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x50323D0", Offset = "0x50323D0", VA = "0x50323D0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x50323E0", Offset = "0x50323E0", VA = "0x50323E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	public Rect newRect
	{
		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x50323F0", Offset = "0x50323F0", VA = "0x50323F0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x5032400", Offset = "0x5032400", VA = "0x5032400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	internal int layoutPass
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x5032410", Offset = "0x5032410", VA = "0x5032410")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x5032420", Offset = "0x5032420", VA = "0x5032420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x50321D0", Offset = "0x50321D0", VA = "0x50321D0")]
	static GeometryChangedEvent()
	{
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x50322A0", Offset = "0x50322A0", VA = "0x50322A0")]
	public static GeometryChangedEvent GetPooled(Rect oldRect, Rect newRect)
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x5032340", Offset = "0x5032340", VA = "0x5032340", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x50323A0", Offset = "0x50323A0", VA = "0x50323A0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x5032430", Offset = "0x5032430", VA = "0x5032430")]
	public GeometryChangedEvent()
	{
	}
}
