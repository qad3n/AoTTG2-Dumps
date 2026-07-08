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
		[Address(RVA = "0x4D0AAA0", Offset = "0x4D0AAA0", VA = "0x4D0AAA0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x4D0AAB0", Offset = "0x4D0AAB0", VA = "0x4D0AAB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	public Rect newRect
	{
		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x4D0AAC0", Offset = "0x4D0AAC0", VA = "0x4D0AAC0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x4D0AAD0", Offset = "0x4D0AAD0", VA = "0x4D0AAD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	internal int layoutPass
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x4D0AAE0", Offset = "0x4D0AAE0", VA = "0x4D0AAE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x4D0AAF0", Offset = "0x4D0AAF0", VA = "0x4D0AAF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x4D0A8A0", Offset = "0x4D0A8A0", VA = "0x4D0A8A0")]
	static GeometryChangedEvent()
	{
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x4D0A970", Offset = "0x4D0A970", VA = "0x4D0A970")]
	public static GeometryChangedEvent GetPooled(Rect oldRect, Rect newRect)
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x4D0AA10", Offset = "0x4D0AA10", VA = "0x4D0AA10", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x4D0AA70", Offset = "0x4D0AA70", VA = "0x4D0AA70")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x4D0AB00", Offset = "0x4D0AB00", VA = "0x4D0AB00")]
	public GeometryChangedEvent()
	{
	}
}
